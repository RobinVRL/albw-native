#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00548CB4(int param_1);
extern int func_00548E40(int param_1,float *param_2);
extern int *DAT_0035f300;
extern float DAT_0035f304;
extern float DAT_0035f308;

// USA 0035F25C <- EU 0035F238 (Ghidra, non-matching)
// GLOBAL DAT_0035f300 int *
// GLOBAL DAT_0035f304 float
// GLOBAL DAT_0035f308 float

void func_0035F25C(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = func_0052FBA0(*DAT_0035f300 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  fVar3 = DAT_0035f304;
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0x2e) == 0) {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(iVar1 + 0xb80) * 0x30;
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(iVar2 + 0xc);
      fVar4 = *(float *)(iVar2 + 0x1c);
      *(float *)(param_1 + 0x3d4) = fVar4;
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar2 + 0x2c);
      *(float *)(param_1 + 0x3d4) = fVar4 + fVar3;
    }
    else {
      func_00548E40(iVar1,(float *)(param_1 + 0x3d0));
      *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + fVar3;
    }
    *(float *)(param_1 + 0x51c) = *(float *)(iVar1 + 0xc) + fVar3;
    fVar3 = func_00548CB4(iVar1);
    *(float *)(param_1 + 0x518) = fVar3 + DAT_0035f308;
    *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x3d4);
  }
  return;
}

