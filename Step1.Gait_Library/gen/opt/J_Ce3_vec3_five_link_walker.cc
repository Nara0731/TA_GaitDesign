/*
 * Automatically Generated from Mathematica.
 * Tue 17 Sep 2019 23:17:25 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t121;
  double t996;
  double t1030;
  double t1020;
  double t1074;
  double t1076;
  double t1087;
  double t1097;
  double t1098;
  double t1122;
  double t1123;
  double t1126;
  double t1130;
  double t1131;
  double t1327;
  double t1328;
  double t1336;
  double t1156;
  double t1304;
  double t1316;
  double t1075;
  double t1077;
  double t1082;
  double t1337;
  double t1342;
  double t1343;
  double t2316;
  double t3171;
  double t5610;
  double t5625;
  double t5866;
  double t5946;
  double t5947;
  double t5971;
  double t5972;
  double t5973;
  double t5977;
  double t5996;
  double t6001;
  double t6002;
  double t6008;
  double t5997;
  double t5998;
  double t5999;
  double t5616;
  double t5681;
  double t5836;
  double t6009;
  double t6010;
  double t6011;
  double t1052;
  double t1053;
  double t1055;
  double t1058;
  double t1065;
  double t1794;
  double t1317;
  double t1355;
  double t1357;
  double t2068;
  double t2197;
  double t2219;
  double t5356;
  double t5585;
  double t5598;
  double t5603;
  double t5608;
  double t6021;
  double t6000;
  double t6012;
  double t6013;
  double t6023;
  double t6030;
  double t6049;
  double t1019;
  double t1048;
  double t1049;
  double t1071;
  double t1111;
  double t6112;
  double t6113;
  double t1790;
  double t6115;
  double t6119;
  double t6126;
  double t6133;
  double t6134;
  double t6135;
  double t6064;
  double t6065;
  double t6067;
  double t6070;
  double t1938;
  double t6127;
  double t6128;
  double t6129;
  double t6130;
  double t6131;
  double t6075;
  double t1086;
  double t1112;
  double t6142;
  double t6145;
  double t6146;
  double t6147;
  double t6148;
  double t6114;
  double t6136;
  double t6137;
  double t6138;
  double t6139;
  double t6140;
  double t6141;
  double t6167;
  double t6168;
  double t6174;
  double t6175;
  double t6153;
  double t6171;
  double t6176;
  double t6177;
  double t6158;
  double t6159;
  double t6160;
  double t6179;
  double t6180;
  double t6181;
  double t3008;
  double t5250;
  double t5337;
  double t5609;
  double t5948;
  double t6191;
  double t6192;
  double t6015;
  double t6194;
  double t6195;
  double t6196;
  double t6206;
  double t6207;
  double t6208;
  double t6090;
  double t6091;
  double t6092;
  double t6093;
  double t6022;
  double t6197;
  double t6201;
  double t6202;
  double t6203;
  double t6204;
  double t6104;
  double t5837;
  double t5957;
  double t6219;
  double t6220;
  double t6221;
  double t6222;
  double t6223;
  double t6193;
  double t6209;
  double t6211;
  double t6215;
  double t6216;
  double t6217;
  double t6218;
  double t6237;
  double t6238;
  double t6240;
  double t6241;
  double t6227;
  double t6239;
  double t6242;
  double t6243;
  double t6229;
  double t6230;
  double t6231;
  double t6245;
  double t6249;
  double t6250;
  double t972;
  double t1373;
  double t2300;
  double t6014;
  double t6050;
  double t6051;
  double t6261;
  double t6262;
  double t6263;
  double t6264;
  double t6265;
  double t6266;
  double t6267;
  double t6268;
  double t6269;
  double t6270;
  double t6271;
  double t6273;
  double t6274;
  double t6275;
  double t6132;
  double t6149;
  double t6150;
  double t6152;
  double t6154;
  double t6161;
  double t6162;
  double t6164;
  double t6165;
  double t6166;
  double t6299;
  double t6300;
  double t6301;
  double t6287;
  double t6289;
  double t6290;
  double t6298;
  double t6302;
  double t6303;
  double t6307;
  double t6071;
  double t6340;
  double t6341;
  double t6076;
  double t6313;
  double t6314;
  double t6315;
  double t6316;
  double t6317;
  double t6321;
  double t6322;
  double t6351;
  double t6356;
  double t6344;
  double t6309;
  double t6310;
  double t6312;
  double t8251;
  double t8280;
  double t6324;
  double t6325;
  double t6326;
  double t6327;
  double t6894;
  double t7052;
  double t7065;
  double t7200;
  double t8286;
  double t8300;
  double t6338;
  double t6339;
  double t6342;
  double t6348;
  double t8514;
  double t8549;
  double t8590;
  double t8852;
  double t8903;
  double t9159;
  double t6380;
  double t6382;
  double t6383;
  double t11408;
  double t11422;
  double t11483;
  double t11484;
  double t11560;
  double t14285;
  double t14287;
  double t14513;
  double t6178;
  double t6182;
  double t6183;
  double t6184;
  double t6185;
  double t6186;
  double t6187;
  double t6188;
  double t6189;
  double t6190;
  double t8303;
  double t8307;
  double t8329;
  double t8332;
  double t8437;
  double t9197;
  double t9680;
  double t9914;
  double t9930;
  double t10056;
  double t10100;
  double t10114;
  double t10121;
  double t10152;
  double t10155;
  double t10159;
  double t10224;
  double t10256;
  double t10267;
  double t10271;
  double t10299;
  double t10300;
  double t10306;
  double t10328;
  double t10335;
  double t10671;
  double t10815;
  double t10816;
  double t10829;
  double t10831;
  double t10840;
  double t10874;
  double t10981;
  double t11136;
  double t11240;
  double t11295;
  double t11296;
  double t14655;
  double t14657;
  double t14658;
  double t14685;
  double t14687;
  double t14691;
  double t15037;
  double t15042;
  double t15043;
  double t15059;
  double t15061;
  double t15063;
  double t15064;
  double t15069;
  double t6205;
  double t6224;
  double t6225;
  double t6226;
  double t6228;
  double t6232;
  double t6233;
  double t6234;
  double t6235;
  double t6236;
  double t15124;
  double t15129;
  double t15130;
  double t15083;
  double t15084;
  double t15085;
  double t15086;
  double t15131;
  double t15132;
  double t15138;
  double t6094;
  double t15161;
  double t15162;
  double t6105;
  double t15144;
  double t15145;
  double t15146;
  double t15147;
  double t15148;
  double t15149;
  double t15150;
  double t15172;
  double t15173;
  double t15165;
  double t15140;
  double t15141;
  double t15143;
  double t15229;
  double t15230;
  double t15152;
  double t15153;
  double t15154;
  double t15155;
  double t15225;
  double t15226;
  double t15227;
  double t15228;
  double t15268;
  double t15273;
  double t15159;
  double t15160;
  double t15163;
  double t15167;
  double t15284;
  double t15285;
  double t15287;
  double t15288;
  double t15289;
  double t15290;
  double t15181;
  double t15187;
  double t15193;
  double t15330;
  double t15331;
  double t15332;
  double t15333;
  double t15334;
  double t15338;
  double t15339;
  double t15340;
  double t6244;
  double t6251;
  double t6252;
  double t6253;
  double t6255;
  double t6256;
  double t6257;
  double t6258;
  double t6259;
  double t6260;
  double t15274;
  double t15275;
  double t15276;
  double t15282;
  double t15283;
  double t15291;
  double t15292;
  double t15293;
  double t15294;
  double t15295;
  double t15296;
  double t15297;
  double t15298;
  double t15299;
  double t15300;
  double t15301;
  double t15302;
  double t15303;
  double t15304;
  double t15305;
  double t15306;
  double t15307;
  double t15308;
  double t15309;
  double t15311;
  double t15315;
  double t15316;
  double t15317;
  double t15318;
  double t15322;
  double t15323;
  double t15324;
  double t15325;
  double t15326;
  double t15327;
  double t15328;
  double t15329;
  double t15351;
  double t15352;
  double t15353;
  double t15361;
  double t15362;
  double t15363;
  double t15391;
  double t15392;
  double t15393;
  double t15397;
  double t15398;
  double t15399;
  double t15400;
  double t15401;
  t121 = Cos(var1[2]);
  t996 = Cos(var1[3]);
  t1030 = Sin(var1[3]);
  t1020 = Sin(var1[2]);
  t1074 = Cos(var1[4]);
  t1076 = Sin(var1[4]);
  t1087 = t996*t1074;
  t1097 = -1.*t1030*t1076;
  t1098 = t1087 + t1097;
  t1122 = -1.*t1074;
  t1123 = 1. + t1122;
  t1126 = 0.4*t1123;
  t1130 = 0.64*t1074;
  t1131 = t1126 + t1130;
  t1327 = -1.*t1074*t1030;
  t1328 = -1.*t996*t1076;
  t1336 = t1327 + t1328;
  t1156 = t1131*t1030;
  t1304 = 0.24*t996*t1076;
  t1316 = t1156 + t1304;
  t1075 = t1074*t1030;
  t1077 = t996*t1076;
  t1082 = t1075 + t1077;
  t1337 = t996*t1131;
  t1342 = -0.24*t1030*t1076;
  t1343 = t1337 + t1342;
  t2316 = Cos(var1[5]);
  t3171 = Sin(var1[5]);
  t5610 = Cos(var1[6]);
  t5625 = Sin(var1[6]);
  t5866 = t2316*t5610;
  t5946 = -1.*t3171*t5625;
  t5947 = t5866 + t5946;
  t5971 = -1.*t5610;
  t5972 = 1. + t5971;
  t5973 = 0.4*t5972;
  t5977 = 0.64*t5610;
  t5996 = t5973 + t5977;
  t6001 = -1.*t5610*t3171;
  t6002 = -1.*t2316*t5625;
  t6008 = t6001 + t6002;
  t5997 = t5996*t3171;
  t5998 = 0.24*t2316*t5625;
  t5999 = t5997 + t5998;
  t5616 = t5610*t3171;
  t5681 = t2316*t5625;
  t5836 = t5616 + t5681;
  t6009 = t2316*t5996;
  t6010 = -0.24*t3171*t5625;
  t6011 = t6009 + t6010;
  t1052 = Power(t996,2);
  t1053 = 0.11*t1052;
  t1055 = Power(t1030,2);
  t1058 = 0.11*t1055;
  t1065 = t1053 + t1058;
  t1794 = -1.*t121*t1098;
  t1317 = -1.*t1316*t1098;
  t1355 = -1.*t1336*t1343;
  t1357 = t1317 + t1355;
  t2068 = t1316*t1082;
  t2197 = t1098*t1343;
  t2219 = t2068 + t2197;
  t5356 = Power(t2316,2);
  t5585 = 0.11*t5356;
  t5598 = Power(t3171,2);
  t5603 = 0.11*t5598;
  t5608 = t5585 + t5603;
  t6021 = -1.*t121*t5947;
  t6000 = -1.*t5999*t5947;
  t6012 = -1.*t6008*t6011;
  t6013 = t6000 + t6012;
  t6023 = t5999*t5836;
  t6030 = t5947*t6011;
  t6049 = t6023 + t6030;
  t1019 = -1.*t121*t996;
  t1048 = t1020*t1030;
  t1049 = t1019 + t1048;
  t1071 = -6.8*t1049*t1065;
  t1111 = -1.*t1020*t1098;
  t6112 = t121*t1336;
  t6113 = t6112 + t1111;
  t1790 = -1.*t1020*t1336;
  t6115 = -1.*t1131*t1030;
  t6119 = -0.24*t996*t1076;
  t6126 = t6115 + t6119;
  t6133 = -1.*t996*t1074;
  t6134 = t1030*t1076;
  t6135 = t6133 + t6134;
  t6064 = t996*t1020;
  t6065 = t121*t1030;
  t6067 = t6064 + t6065;
  t6070 = -6.8*t6067*t1065;
  t1938 = t1790 + t1794;
  t6127 = t6126*t1098;
  t6128 = t1316*t1098;
  t6129 = t1336*t1343;
  t6130 = t1082*t1343;
  t6131 = t6127 + t6128 + t6129 + t6130;
  t6075 = -1.*t121*t1336;
  t1086 = -1.*t121*t1082;
  t1112 = t1086 + t1111;
  t6142 = -1.*t1336*t6126;
  t6145 = -1.*t1336*t1316;
  t6146 = -1.*t1098*t1343;
  t6147 = -1.*t1343*t6135;
  t6148 = t6142 + t6145 + t6146 + t6147;
  t6114 = -3.2*t6113*t1357;
  t6136 = t121*t6135;
  t6137 = t1790 + t6136;
  t6138 = -3.2*t2219*t6137;
  t6139 = -1.*t1020*t1082;
  t6140 = t121*t1098;
  t6141 = t6139 + t6140;
  t6167 = -0.24*t1074*t1030;
  t6168 = t6167 + t6119;
  t6174 = 0.24*t996*t1074;
  t6175 = t6174 + t1342;
  t6153 = -3.2*t1938*t1357;
  t6171 = t6168*t1098;
  t6176 = t1082*t6175;
  t6177 = t6171 + t6128 + t6129 + t6176;
  t6158 = -1.*t1020*t6135;
  t6159 = t6075 + t6158;
  t6160 = -3.2*t2219*t6159;
  t6179 = -1.*t1336*t6168;
  t6180 = -1.*t1098*t6175;
  t6181 = t6179 + t6145 + t6180 + t6147;
  t3008 = -1.*t121*t2316;
  t5250 = t1020*t3171;
  t5337 = t3008 + t5250;
  t5609 = -6.8*t5337*t5608;
  t5948 = -1.*t1020*t5947;
  t6191 = t121*t6008;
  t6192 = t6191 + t5948;
  t6015 = -1.*t1020*t6008;
  t6194 = -1.*t5996*t3171;
  t6195 = -0.24*t2316*t5625;
  t6196 = t6194 + t6195;
  t6206 = -1.*t2316*t5610;
  t6207 = t3171*t5625;
  t6208 = t6206 + t6207;
  t6090 = t2316*t1020;
  t6091 = t121*t3171;
  t6092 = t6090 + t6091;
  t6093 = -6.8*t6092*t5608;
  t6022 = t6015 + t6021;
  t6197 = t6196*t5947;
  t6201 = t5999*t5947;
  t6202 = t6008*t6011;
  t6203 = t5836*t6011;
  t6204 = t6197 + t6201 + t6202 + t6203;
  t6104 = -1.*t121*t6008;
  t5837 = -1.*t121*t5836;
  t5957 = t5837 + t5948;
  t6219 = -1.*t6008*t6196;
  t6220 = -1.*t6008*t5999;
  t6221 = -1.*t5947*t6011;
  t6222 = -1.*t6011*t6208;
  t6223 = t6219 + t6220 + t6221 + t6222;
  t6193 = -3.2*t6192*t6013;
  t6209 = t121*t6208;
  t6211 = t6015 + t6209;
  t6215 = -3.2*t6049*t6211;
  t6216 = -1.*t1020*t5836;
  t6217 = t121*t5947;
  t6218 = t6216 + t6217;
  t6237 = -0.24*t5610*t3171;
  t6238 = t6237 + t6195;
  t6240 = 0.24*t2316*t5610;
  t6241 = t6240 + t6010;
  t6227 = -3.2*t6022*t6013;
  t6239 = t6238*t5947;
  t6242 = t5836*t6241;
  t6243 = t6239 + t6201 + t6202 + t6242;
  t6229 = -1.*t1020*t6208;
  t6230 = t6104 + t6229;
  t6231 = -3.2*t6049*t6230;
  t6245 = -1.*t6008*t6238;
  t6249 = -1.*t5947*t6241;
  t6250 = t6245 + t6220 + t6249 + t6222;
  t972 = 2.88*t121;
  t1373 = -3.2*t1112*t1357;
  t2300 = -3.2*t1938*t2219;
  t6014 = -3.2*t5957*t6013;
  t6050 = -3.2*t6022*t6049;
  t6051 = t972 + t1071 + t1373 + t2300 + t5609 + t6014 + t6050;
  t6261 = 2.88*t1020;
  t6262 = -1.*t996*t1020;
  t6263 = -1.*t121*t1030;
  t6264 = t6262 + t6263;
  t6265 = -6.8*t6264*t1065;
  t6266 = -3.2*t6141*t1357;
  t6267 = -3.2*t6113*t2219;
  t6268 = -1.*t2316*t1020;
  t6269 = -1.*t121*t3171;
  t6270 = t6268 + t6269;
  t6271 = -6.8*t6270*t5608;
  t6273 = -3.2*t6218*t6013;
  t6274 = -3.2*t6192*t6049;
  t6275 = t6261 + t6265 + t6266 + t6267 + t6271 + t6273 + t6274;
  t6132 = -3.2*t6113*t6131;
  t6149 = -3.2*t6141*t6148;
  t6150 = t1071 + t6114 + t6132 + t6138 + t6149;
  t6152 = -0.5*var2[0]*t6150;
  t6154 = -3.2*t1938*t6131;
  t6161 = -3.2*t1112*t6148;
  t6162 = t6070 + t6153 + t6154 + t6160 + t6161;
  t6164 = -0.5*var2[1]*t6162;
  t6165 = t6152 + t6164;
  t6166 = var2[2]*t6165;
  t6299 = -1.*t996*t1131;
  t6300 = 0.24*t1030*t1076;
  t6301 = t6299 + t6300;
  t6287 = 2.*t1336*t6126;
  t6289 = t1336*t1316;
  t6290 = t6126*t1082;
  t6298 = 2.*t1098*t1343;
  t6302 = t1098*t6301;
  t6303 = t1343*t6135;
  t6307 = t6287 + t6289 + t6290 + t6298 + t6302 + t6303;
  t6071 = t1020*t1082;
  t6340 = t1020*t6135;
  t6341 = t6112 + t6340;
  t6076 = t1020*t1098;
  t6313 = -1.*t6126*t1098;
  t6314 = -2.*t1336*t1343;
  t6315 = -1.*t1082*t1343;
  t6316 = -1.*t1336*t6301;
  t6317 = -2.*t6126*t6135;
  t6321 = -1.*t1316*t6135;
  t6322 = t6313 + t6314 + t6315 + t6316 + t6317 + t6321;
  t6351 = t1020*t1336;
  t6356 = t6351 + t6140;
  t6344 = t121*t1082;
  t6309 = t1131*t1076;
  t6310 = -0.24*t1074*t1076;
  t6312 = t6309 + t6310;
  t8251 = -0.24*t996*t1074;
  t8280 = t8251 + t6300;
  t6324 = t1131*t1074;
  t6325 = Power(t1076,2);
  t6326 = 0.24*t6325;
  t6327 = t6324 + t6326;
  t6894 = t1336*t6126;
  t7052 = t1336*t6168;
  t7065 = t6168*t1082;
  t7200 = t1098*t6175;
  t8286 = t1098*t8280;
  t8300 = t6894 + t7052 + t6289 + t7065 + t2197 + t7200 + t8286 + t6303;
  t6338 = t6071 + t6136;
  t6339 = -3.2*t2219*t6338;
  t6342 = -3.2*t1357*t6341;
  t6348 = t6344 + t6076;
  t8514 = -1.*t6168*t1098;
  t8549 = -1.*t1336*t6175;
  t8590 = -1.*t1336*t8280;
  t8852 = -1.*t6126*t6135;
  t8903 = -1.*t6168*t6135;
  t9159 = t8514 + t1355 + t6315 + t8549 + t8590 + t8852 + t8903 + t6321;
  t6380 = -3.2*t1357*t6137;
  t6382 = t6344 + t6158;
  t6383 = -3.2*t2219*t6382;
  t11408 = -3.2*t6356*t1357;
  t11422 = -3.2*t6356*t6131;
  t11483 = -3.2*t2219*t6341;
  t11484 = -3.2*t6348*t6148;
  t11560 = t6265 + t11408 + t11422 + t11483 + t11484;
  t14285 = -3.2*t6327*t6131;
  t14287 = -3.2*t6312*t6148;
  t14513 = t14285 + t14287;
  t6178 = -3.2*t6113*t6177;
  t6182 = -3.2*t6141*t6181;
  t6183 = t6114 + t6178 + t6138 + t6182;
  t6184 = -0.5*var2[0]*t6183;
  t6185 = -3.2*t1938*t6177;
  t6186 = -3.2*t1112*t6181;
  t6187 = t6153 + t6185 + t6160 + t6186;
  t6188 = -0.5*var2[1]*t6187;
  t6189 = t6184 + t6188;
  t6190 = var2[2]*t6189;
  t8303 = 0.384*var2[4]*t8300;
  t8307 = -1.*t1131*t1076;
  t8329 = 0.24*t1074*t1076;
  t8332 = t8307 + t8329;
  t8437 = -3.2*t8332*t6131;
  t9197 = -3.2*t6312*t9159;
  t9680 = Power(t1074,2);
  t9914 = -0.24*t9680;
  t9930 = t6324 + t9914;
  t10056 = -3.2*t9930*t6148;
  t10100 = -3.2*t6327*t8300;
  t10114 = t8437 + t9197 + t10056 + t10100;
  t10121 = -0.5*var2[3]*t10114;
  t10152 = -3.2*t6131*t6341;
  t10155 = -3.2*t6177*t6341;
  t10159 = -3.2*t6348*t9159;
  t10224 = -3.2*t6356*t6148;
  t10256 = -3.2*t6356*t6181;
  t10267 = -3.2*t6356*t8300;
  t10271 = t6339 + t6342 + t10152 + t10155 + t10159 + t10224 + t10256 + t10267;
  t10299 = -0.5*var2[0]*t10271;
  t10300 = -3.2*t6131*t6137;
  t10306 = -3.2*t6177*t6137;
  t10328 = -3.2*t6141*t9159;
  t10335 = -3.2*t6113*t6148;
  t10671 = -3.2*t6113*t6181;
  t10815 = -3.2*t6113*t8300;
  t10816 = t6380 + t10300 + t10306 + t6383 + t10328 + t10335 + t10671 + t10815;
  t10829 = -0.5*var2[1]*t10816;
  t10831 = -6.4*t6131*t6177;
  t10840 = -6.4*t1357*t9159;
  t10874 = -6.4*t6148*t6181;
  t10981 = -6.4*t2219*t8300;
  t11136 = t10831 + t10840 + t10874 + t10981;
  t11240 = -0.5*var2[2]*t11136;
  t11295 = t8303 + t10121 + t10299 + t10829 + t11240;
  t11296 = var2[2]*t11295;
  t14655 = 2.*t1336*t6168;
  t14657 = 2.*t1098*t6175;
  t14658 = t14655 + t6289 + t7065 + t14657 + t8286 + t6303;
  t14685 = -2.*t1336*t6175;
  t14687 = -2.*t6168*t6135;
  t14691 = t8514 + t6315 + t14685 + t8590 + t14687 + t6321;
  t15037 = -3.2*t6356*t6177;
  t15042 = -3.2*t6348*t6181;
  t15043 = t11408 + t15037 + t11483 + t15042;
  t15059 = -3.2*t9930*t1357;
  t15061 = -3.2*t8332*t2219;
  t15063 = -3.2*t6327*t6177;
  t15064 = -3.2*t6312*t6181;
  t15069 = t15059 + t15061 + t15063 + t15064;
  t6205 = -3.2*t6192*t6204;
  t6224 = -3.2*t6218*t6223;
  t6225 = t5609 + t6193 + t6205 + t6215 + t6224;
  t6226 = -0.5*var2[0]*t6225;
  t6228 = -3.2*t6022*t6204;
  t6232 = -3.2*t5957*t6223;
  t6233 = t6093 + t6227 + t6228 + t6231 + t6232;
  t6234 = -0.5*var2[1]*t6233;
  t6235 = t6226 + t6234;
  t6236 = var2[2]*t6235;
  t15124 = -1.*t2316*t5996;
  t15129 = 0.24*t3171*t5625;
  t15130 = t15124 + t15129;
  t15083 = 2.*t6008*t6196;
  t15084 = t6008*t5999;
  t15085 = t6196*t5836;
  t15086 = 2.*t5947*t6011;
  t15131 = t5947*t15130;
  t15132 = t6011*t6208;
  t15138 = t15083 + t15084 + t15085 + t15086 + t15131 + t15132;
  t6094 = t1020*t5836;
  t15161 = t1020*t6208;
  t15162 = t6191 + t15161;
  t6105 = t1020*t5947;
  t15144 = -1.*t6196*t5947;
  t15145 = -2.*t6008*t6011;
  t15146 = -1.*t5836*t6011;
  t15147 = -1.*t6008*t15130;
  t15148 = -2.*t6196*t6208;
  t15149 = -1.*t5999*t6208;
  t15150 = t15144 + t15145 + t15146 + t15147 + t15148 + t15149;
  t15172 = t1020*t6008;
  t15173 = t15172 + t6217;
  t15165 = t121*t5836;
  t15140 = t5996*t5625;
  t15141 = -0.24*t5610*t5625;
  t15143 = t15140 + t15141;
  t15229 = -0.24*t2316*t5610;
  t15230 = t15229 + t15129;
  t15152 = t5996*t5610;
  t15153 = Power(t5625,2);
  t15154 = 0.24*t15153;
  t15155 = t15152 + t15154;
  t15225 = t6008*t6196;
  t15226 = t6008*t6238;
  t15227 = t6238*t5836;
  t15228 = t5947*t6241;
  t15268 = t5947*t15230;
  t15273 = t15225 + t15226 + t15084 + t15227 + t6030 + t15228 + t15268 + t15132;
  t15159 = t6094 + t6209;
  t15160 = -3.2*t6049*t15159;
  t15163 = -3.2*t6013*t15162;
  t15167 = t15165 + t6105;
  t15284 = -1.*t6238*t5947;
  t15285 = -1.*t6008*t6241;
  t15287 = -1.*t6008*t15230;
  t15288 = -1.*t6196*t6208;
  t15289 = -1.*t6238*t6208;
  t15290 = t15284 + t6012 + t15146 + t15285 + t15287 + t15288 + t15289 + t15149;
  t15181 = -3.2*t6013*t6211;
  t15187 = t15165 + t6229;
  t15193 = -3.2*t6049*t15187;
  t15330 = -3.2*t15173*t6013;
  t15331 = -3.2*t15173*t6204;
  t15332 = -3.2*t6049*t15162;
  t15333 = -3.2*t15167*t6223;
  t15334 = t6271 + t15330 + t15331 + t15332 + t15333;
  t15338 = -3.2*t15155*t6204;
  t15339 = -3.2*t15143*t6223;
  t15340 = t15338 + t15339;
  t6244 = -3.2*t6192*t6243;
  t6251 = -3.2*t6218*t6250;
  t6252 = t6193 + t6244 + t6215 + t6251;
  t6253 = -0.5*var2[0]*t6252;
  t6255 = -3.2*t6022*t6243;
  t6256 = -3.2*t5957*t6250;
  t6257 = t6227 + t6255 + t6231 + t6256;
  t6258 = -0.5*var2[1]*t6257;
  t6259 = t6253 + t6258;
  t6260 = var2[2]*t6259;
  t15274 = 0.384*var2[6]*t15273;
  t15275 = -1.*t5996*t5625;
  t15276 = 0.24*t5610*t5625;
  t15282 = t15275 + t15276;
  t15283 = -3.2*t15282*t6204;
  t15291 = -3.2*t15143*t15290;
  t15292 = Power(t5610,2);
  t15293 = -0.24*t15292;
  t15294 = t15152 + t15293;
  t15295 = -3.2*t15294*t6223;
  t15296 = -3.2*t15155*t15273;
  t15297 = t15283 + t15291 + t15295 + t15296;
  t15298 = -0.5*var2[5]*t15297;
  t15299 = -3.2*t6204*t15162;
  t15300 = -3.2*t6243*t15162;
  t15301 = -3.2*t15167*t15290;
  t15302 = -3.2*t15173*t6223;
  t15303 = -3.2*t15173*t6250;
  t15304 = -3.2*t15173*t15273;
  t15305 = t15160 + t15163 + t15299 + t15300 + t15301 + t15302 + t15303 + t15304;
  t15306 = -0.5*var2[0]*t15305;
  t15307 = -3.2*t6204*t6211;
  t15308 = -3.2*t6243*t6211;
  t15309 = -3.2*t6218*t15290;
  t15311 = -3.2*t6192*t6223;
  t15315 = -3.2*t6192*t6250;
  t15316 = -3.2*t6192*t15273;
  t15317 = t15181 + t15307 + t15308 + t15193 + t15309 + t15311 + t15315 + t15316;
  t15318 = -0.5*var2[1]*t15317;
  t15322 = -6.4*t6204*t6243;
  t15323 = -6.4*t6013*t15290;
  t15324 = -6.4*t6223*t6250;
  t15325 = -6.4*t6049*t15273;
  t15326 = t15322 + t15323 + t15324 + t15325;
  t15327 = -0.5*var2[2]*t15326;
  t15328 = t15274 + t15298 + t15306 + t15318 + t15327;
  t15329 = var2[2]*t15328;
  t15351 = 2.*t6008*t6238;
  t15352 = 2.*t5947*t6241;
  t15353 = t15351 + t15084 + t15227 + t15352 + t15268 + t15132;
  t15361 = -2.*t6008*t6241;
  t15362 = -2.*t6238*t6208;
  t15363 = t15284 + t15146 + t15361 + t15287 + t15362 + t15149;
  t15391 = -3.2*t15173*t6243;
  t15392 = -3.2*t15167*t6250;
  t15393 = t15330 + t15391 + t15332 + t15392;
  t15397 = -3.2*t15294*t6013;
  t15398 = -3.2*t15282*t6049;
  t15399 = -3.2*t15155*t6243;
  t15400 = -3.2*t15143*t6250;
  t15401 = t15397 + t15398 + t15399 + t15400;
  p_output1[0]=(-0.5*t6051*var2[0] - 0.5*(-2.88*t1020 + t6070 - 3.2*t1357*(t1794 + t6071) - 3.2*t2219*(t6075 + t6076) + t6093 - 3.2*t6013*(t6021 + t6094) - 3.2*t6049*(t6104 + t6105))*var2[1])*var2[2];
  p_output1[1]=t6166;
  p_output1[2]=t6190;
  p_output1[3]=t6236;
  p_output1[4]=t6260;
  p_output1[5]=-0.5*t6275*var2[2];
  p_output1[6]=-0.5*t6051*var2[2];
  p_output1[7]=-0.5*t6275*var2[0] - 0.5*t6051*var2[1];
  p_output1[8]=t6166;
  p_output1[9]=var2[2]*(-0.5*(t1071 + t6339 - 6.4*t6131*t6341 + t6342 - 3.2*t6322*t6348 - 6.4*t6148*t6356 - 3.2*t6307*t6356)*var2[0] - 0.5*(t6070 - 6.4*t6131*t6137 - 6.4*t6113*t6148 - 3.2*t6113*t6307 - 3.2*t6141*t6322 + t6380 + t6383)*var2[1] - 0.5*(-6.4*Power(t6131,2) - 6.4*Power(t6148,2) - 6.4*t2219*t6307 - 6.4*t1357*t6322)*var2[2] - 0.5*(-3.2*t6312*t6322 - 3.2*t6307*t6327)*var2[3] + 0.384*t6307*var2[4]);
  p_output1[10]=t11296;
  p_output1[11]=-0.5*t11560*var2[2];
  p_output1[12]=-0.5*t6150*var2[2];
  p_output1[13]=-0.5*t11560*var2[0] - 0.5*t6150*var2[1] - 1.*(-6.4*t2219*t6131 - 6.4*t1357*t6148)*var2[2] - 0.5*t14513*var2[3] + 0.384*t6131*var2[4];
  p_output1[14]=-0.5*t14513*var2[2];
  p_output1[15]=0.384*t6131*var2[2];
  p_output1[16]=t6190;
  p_output1[17]=t11296;
  p_output1[18]=var2[2]*(-0.5*(t6339 - 6.4*t6177*t6341 + t6342 - 3.2*t14691*t6348 - 3.2*t14658*t6356 - 6.4*t6181*t6356)*var2[0] - 0.5*(-3.2*t14658*t6113 - 3.2*t14691*t6141 - 6.4*t6137*t6177 - 6.4*t6113*t6181 + t6380 + t6383)*var2[1] - 0.5*(-6.4*t1357*t14691 - 6.4*t14658*t2219 - 6.4*Power(t6177,2) - 6.4*Power(t6181,2))*var2[2] - 0.5*(-3.2*t14691*t6312 - 3.2*t14658*t6327 - 3.2*t1357*t8332 - 6.4*t6177*t8332 - 3.2*t2219*(-1.*t1074*t1131 + 0.24*t9680) - 6.4*t6181*t9930)*var2[3] + 0.384*t14658*var2[4]);
  p_output1[19]=-0.5*t15043*var2[2];
  p_output1[20]=-0.5*t6183*var2[2];
  p_output1[21]=-0.5*t15043*var2[0] - 0.5*t6183*var2[1] - 1.*(-6.4*t2219*t6177 - 6.4*t1357*t6181)*var2[2] - 0.5*t15069*var2[3] + 0.384*t6177*var2[4];
  p_output1[22]=-0.5*t15069*var2[2];
  p_output1[23]=0.384*t6177*var2[2];
  p_output1[24]=t6236;
  p_output1[25]=var2[2]*(-0.5*(t15160 + t15163 - 3.2*t15150*t15167 - 3.2*t15138*t15173 + t5609 - 6.4*t15162*t6204 - 6.4*t15173*t6223)*var2[0] - 0.5*(t15181 + t15193 + t6093 - 3.2*t15138*t6192 - 6.4*t6204*t6211 - 3.2*t15150*t6218 - 6.4*t6192*t6223)*var2[1] - 0.5*(-6.4*t15150*t6013 - 6.4*t15138*t6049 - 6.4*Power(t6204,2) - 6.4*Power(t6223,2))*var2[2] - 0.5*(-3.2*t15143*t15150 - 3.2*t15138*t15155)*var2[5] + 0.384*t15138*var2[6]);
  p_output1[26]=t15329;
  p_output1[27]=-0.5*t15334*var2[2];
  p_output1[28]=-0.5*t6225*var2[2];
  p_output1[29]=-0.5*t15334*var2[0] - 0.5*t6225*var2[1] - 1.*(-6.4*t6049*t6204 - 6.4*t6013*t6223)*var2[2] - 0.5*t15340*var2[5] + 0.384*t6204*var2[6];
  p_output1[30]=-0.5*t15340*var2[2];
  p_output1[31]=0.384*t6204*var2[2];
  p_output1[32]=t6260;
  p_output1[33]=t15329;
  p_output1[34]=var2[2]*(-0.5*(t15160 + t15163 - 3.2*t15173*t15353 - 3.2*t15167*t15363 - 6.4*t15162*t6243 - 6.4*t15173*t6250)*var2[0] - 0.5*(t15181 + t15193 - 3.2*t15353*t6192 - 3.2*t15363*t6218 - 6.4*t6211*t6243 - 6.4*t6192*t6250)*var2[1] - 0.5*(-6.4*t15363*t6013 - 6.4*t15353*t6049 - 6.4*Power(t6243,2) - 6.4*Power(t6250,2))*var2[2] - 0.5*(-3.2*t15155*t15353 - 3.2*t15143*t15363 - 3.2*t15282*t6013 - 3.2*(0.24*t15292 - 1.*t5610*t5996)*t6049 - 6.4*t15282*t6243 - 6.4*t15294*t6250)*var2[5] + 0.384*t15353*var2[6]);
  p_output1[35]=-0.5*t15393*var2[2];
  p_output1[36]=-0.5*t6252*var2[2];
  p_output1[37]=-0.5*t15393*var2[0] - 0.5*t6252*var2[1] - 1.*(-6.4*t6049*t6243 - 6.4*t6013*t6250)*var2[2] - 0.5*t15401*var2[5] + 0.384*t6243*var2[6];
  p_output1[38]=-0.5*t15401*var2[2];
  p_output1[39]=0.384*t6243*var2[2];
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 40, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec3_five_link_walker.hh"

namespace Times[step, Pattern[Rabbit, Blank[]]]
{

void J_Ce3_vec3_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
