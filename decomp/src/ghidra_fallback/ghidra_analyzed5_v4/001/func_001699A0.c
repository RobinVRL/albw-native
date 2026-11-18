#include "ghidra_types.h"

extern int func_00567588(int param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5);
extern int func_0069021C(int param_1,int *param_2,int *param_3,int *param_4,float fparam_0,float fparam_1);
extern float DAT_00169a20;
extern float DAT_00169a24;

// USA 001699A0 <- EU 001699A0 (Ghidra, non-matching)
// GLOBAL DAT_00169a20 float
// GLOBAL DAT_00169a24 float

void func_001699A0(int *param_1,int *param_2,undefined4 *param_3,float fparam_0)

{
  int iVar1;
  float fparam_0_00;
  float fVar2;
  
  iVar1 = *param_2;
  fVar2 = *(float *)(iVar1 + 8) - DAT_00169a20;
  fparam_0_00 = DAT_00169a24;
  if ((DAT_00169a24 <= fparam_0) && (fparam_0_00 = fparam_0, fVar2 < fparam_0)) {
    fparam_0_00 = fVar2;
  }
  if (*(char *)(iVar1 + 5) == '\x01') {
    if (param_3 == (undefined4 *)0x0) {
      func_0069021C(iVar1,param_1,param_2 + 2,param_2 + 4,fparam_0_00,DAT_00169a24);
      return;
    }
    func_00567588(iVar1,param_1,param_2 + 2,param_2 + 4,param_3);
  }
  return;
}

