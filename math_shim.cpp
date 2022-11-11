#include <math.h>

#ifdef MATH_LIB_FIX
extern "C" {
	double __exp_finite(double x) { return exp(x); }
	double __log_finite(double x) { return log(x); }
	double __pow_finite(double x, double y) { return pow(x, y); }
	double __atan2_finite(double y, double x) { return atan2(y, x); }
	double __asin_finite(double x) { return asin(x); }
	double __acos_finite(double x) { return acos(x); }

	float __expf_finite(float x) { return expf(x); }
	float __logf_finite(float x) { return logf(x); }
	float __powf_finite(float x, float y) { return powf(x, y); }
	float __atan2f_finite(float y, float x) { return atan2f(y, x); }
	float __acosf_finite(float x) { return acosf(x); }
}
#endif
