/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:16:47 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t6609;
  double t6540;
  double t6582;
  double t6622;
  double t2124;
  double t6608;
  double t6635;
  double t6640;
  double t6644;
  double t6647;
  double t6651;
  double t6669;
  double t2130;
  double t2214;
  double t2257;
  double t3038;
  double t6681;
  double t6691;
  double t6782;
  double t6794;
  double t6796;
  t6609 = Cos(var1[2]);
  t6540 = Cos(var1[5]);
  t6582 = Sin(var1[2]);
  t6622 = Sin(var1[5]);
  t2124 = Cos(var1[6]);
  t6608 = t6540*t6582;
  t6635 = t6609*t6622;
  t6640 = t6608 + t6635;
  t6644 = t6609*t6540;
  t6647 = -1.*t6582*t6622;
  t6651 = t6644 + t6647;
  t6669 = Sin(var1[6]);
  t2130 = -1.*t2124;
  t2214 = 1. + t2130;
  t2257 = 0.4*t2214;
  t3038 = 0. + t2257;
  t6681 = -0.4*t6669;
  t6691 = 0. + t6681;
  t6782 = -1.*t6540*t6582;
  t6794 = -1.*t6609*t6622;
  t6796 = t6782 + t6794;
  p_output1[0]=0. + t3038*t6640 + 0.4*(t2124*t6640 + t6651*t6669) + t6651*t6691 + var1[0];
  p_output1[1]=0.;
  p_output1[2]=0. + t3038*t6651 + t6691*t6796 + 0.4*(t2124*t6651 + t6669*t6796) + var1[1];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_q2_left.hh"

namespace SymExpression
{

void p_q2_left_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
