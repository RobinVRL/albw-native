#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);

// USA 0051D588 <- EU 0051D560 (Ghidra, non-matching)

float func_0051D588(int param_1,float *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(float *)(albw_frame + 0x4))
  func_00115CA8(&local_10,(float *)(param_1 + 0x118),param_2);
  return local_10 * local_10 + local_c * local_c;
}

