#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0036BE78();
extern void func_0065E398();
extern int *DAT_00220544;
extern float DAT_00220548;
extern int DAT_0022054c;

// USA 002204B8 <- EU 002204B8 (Ghidra, non-matching)
// GLOBAL DAT_00220544 int *
// GLOBAL DAT_00220548 float
// GLOBAL DAT_0022054c int

void func_002204B8(int param_1)

{
  float fVar1;
  float fVar2;
  
  func_0036BE78(param_1 + 0x8e8);
  if ((*(int *)(*DAT_00220544 + 0x18) == 0) ||
     (*(int *)(*(int *)(*DAT_00220544 + 0x18) + 0x10c) < 0)) {
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0xa20),DAT_00220548);
    fVar1 = *(float *)(param_1 + 0xa14) - *(float *)(param_1 + 0x3d0);
    fVar2 = *(float *)(param_1 + 0xa1c) - *(float *)(param_1 + 0x3d8);
    fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
    if ((int)ALBW_AS_U32(fVar1) < DAT_0022054c) {
      func_0065E398((undefined4 *)(param_1 + 0x8c0),2,fVar1);
    }
  }
  return;
}

