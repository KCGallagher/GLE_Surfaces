#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_urand_Upu32_Yd_f_pw_snf.h"
#include "rt_nrand_Upu32_Yd_f_pw_snf.h"

real_T rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T y;
  real_T sr;
  real_T si;
  do {
    sr = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = 2.0 * rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    si = sr * sr + si * si;
  } while (si > 1.0);

  y = muDoubleScalarSqrt(-2.0 * muDoubleScalarLog(si) / si) * sr;
  return y;
}
