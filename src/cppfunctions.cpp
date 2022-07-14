#include <Rcpp.h>
using namespace Rcpp;

//' Leading NA
//'
//' Returns the TMTI_infinity statistic from pre-sorted,
//' pre-truncated vector of p-values. If no truncation is used, set m_full = m
//'
//' @param pvals A NumericVector containing the truncated sorted p-values. It
//' is important that this vector: 1) contains only the truncated p-values (i.e,
//' those that fall below the truncation point) and 2) is sorted.
//' @param m The total (i.e., non-truncated) number of p-values.
//' @export
// [[Rcpp::export]]
double MakeZ_C(NumericVector pvals, int m) {
  int m_p = pvals.size();
  double currentMin = 1;
  double currentY = 0;
  for(int i = 0; i < m_p; ++i) {
    currentY = R::pbeta(pvals[i], i + 1, m + 1 - (i + 1), true, false);
    if(currentY < currentMin){
      currentMin = currentY;
    }
  }
  return currentMin;
}

//' Leading NA
//'
//' Returns the transformed p-values (Y) from pre-sorted p-values and
//' pre-truncated p-values. If not truncation is used, set m_full = m
//'
//' @param pvals A NumericVector containing the truncated sorted p-values. It
//' is important that this vector: 1) contains only the truncated p-values (i.e,
//' those that fall below the truncation point) and 2) is sorted.
//' @param m The total (i.e., non-truncated) number of p-values.
//' @export
// [[Rcpp::export]]
NumericVector MakeY_C(NumericVector pvals, int m) {
  int m_p = pvals.size();
  NumericVector Y(m_p);
  for(int i = 0; i < m_p; ++i) {
    Y[i] = R::pbeta(pvals[i], i + 1, m + 1 - (i + 1), true, false);
  }
  return Y;
}


//' Leading NA
//'
//' Returns the transformed p-values (Y) from pre-sorted p-values and
//' pre-truncated p-values when n < m - 1
//'
//' @param pvals A NumericVector containing the truncated sorted p-values. It
//' is important that this vector: 1) contains only the truncated p-values (i.e,
//' those that fall below the truncation point) and 2) is sorted.
//' @param n A positive number (or Inf) indicating which type of local minimum
//' to consider. Defaults to Infm, corresponding to the global minimum.
//' @param m The total (i.e., non-truncated) number of p-values.
//' @export
// [[Rcpp::export]]
double MakeZ_C_nsmall(NumericVector pvals, int n, int m) {
  int m_p = pvals.size();
  double PreviousY = 1;
  double Y =  0;
  std::vector<double> LeadingY;
  double LeadingMin;
  double Z = -1;
  for (int i = 1; i <= n; i++) {
    LeadingY.push_back(R::pbeta(pvals[i],
                                i + 1,
                                m - i,
                                true,
                                false));
  }
  for (int i = 0; i < m_p - n; i++) {
    Y = R::pbeta(pvals[i], i + 1, m - i, true, false);
    LeadingMin = *std::min_element(LeadingY.begin(),
                                   LeadingY.end());
    if ((Y < LeadingMin) & (Y < PreviousY)) {
      Z = Y;
      break;
    }
    LeadingY.erase(LeadingY.begin());
    LeadingY.push_back(R::pbeta(pvals[i + 1 + n],
                                (i + 1 + n) + 1,
                                m - (i + 1 + n),
                                true,
                                false));
    PreviousY = Y;
  }
  if (Z == -1) {
    Z = LeadingMin;
  }
  return Z;
}
