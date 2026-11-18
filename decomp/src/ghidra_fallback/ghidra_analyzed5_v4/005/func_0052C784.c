#include "ghidra_types.h"

extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00583B90(int param_1,undefined4 *param_2);
extern int *DAT_0052c804;
extern int DAT_0052c808;
extern float DAT_0052c80c;

// USA 0052C784 <- EU 0052C75C (Ghidra, non-matching)
// GLOBAL DAT_0052c804 int *
// GLOBAL DAT_0052c808 int
// GLOBAL DAT_0052c80c float

undefined4 func_0052C784(int param_1,float *param_2)

{
  float fparam_0;
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_2 != (float *)0x0) && (iVar2 = *DAT_0052c804, iVar2 != 0)) {
    pfVar1 = (float *)func_00520FC0();
    fparam_0 = DAT_0052c80c;
    fVar5 = *pfVar1;
    fVar3 = *(float *)(param_1 + 0x3d0) - fVar5;
    fVar4 = *(float *)(param_1 + 0x3d8) - pfVar1[2];
    if ((int)ALBW_AS_U32((fVar3 * fVar3 + fVar4 * fVar4)) < DAT_0052c808) {
      fVar3 = pfVar1[1];
      param_2[2] = pfVar1[2];
      *param_2 = fVar5;
      param_2[1] = fVar3;
      func_004D8054(param_2,**(uint **)(iVar2 + 0x24),fparam_0);
      param_2[1] = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x838);
      return 0;
    }
  }
  return func_00583B90(param_1,param_2);
}

