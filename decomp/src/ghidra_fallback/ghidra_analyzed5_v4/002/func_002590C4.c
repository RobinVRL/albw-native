#include "ghidra_types.h"

extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern float DAT_0025913c;

// USA 002590C4 <- EU 002590EC (Ghidra, non-matching)
// GLOBAL DAT_0025913c float

void func_002590C4(int param_1,float fparam_0)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((int *)(albw_frame + 0x0))
  if (DAT_0025913c < fparam_0) {
    func_00409BC8(local_10,(int *)(param_1 + 0xc),DAT_0025913c);
    if (local_10[0] != 0) {
      *(float *)(local_10[0] + 0xcc) = fparam_0;
    }
    func_00409B8C(local_10);
  }
  return;
}

