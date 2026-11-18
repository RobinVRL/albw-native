#include "ghidra_types.h"

extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0058A8F0(int param_1);
extern int func_0065E9FC(undefined4 *param_1,undefined1 param_2);
extern float DAT_0022e21c;

// USA 0022E14C <- EU 0022E14C (Ghidra, non-matching)
// GLOBAL DAT_0022e21c float

void func_0022E14C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  pfVar3 = *(float **)(param_1 + 0xa68);
  fVar4 = func_0051CF68(pfVar3 + 3,*pfVar3,pfVar3[1],pfVar3[2]);
  pfVar3[4] = fVar4;
  fVar4 = DAT_0022e21c;
  *(undefined4 *)(param_1 + 0xa50) = *(undefined4 *)(*(int *)(param_1 + 0xa68) + 0x10);
  puVar1 = (undefined4 *)(param_1 + 0x8c8);
  if (*(uint *)(param_1 + 0x8c0) < 0x20) {
    puVar1 = puVar1 + *(uint *)(param_1 + 0x8c0) * 3;
  }
  *(undefined4 *)(param_1 + 0x3d0) = *puVar1;
  *(undefined4 *)(param_1 + 0x3d4) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3d8) = puVar1[2];
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + fVar4;
  if (*(int *)(param_1 + 0xa7c) == 0x14) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x84;
  }
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x84;
    func_0065E9FC((undefined4 *)(param_1 + 0xa7c),3);
  }
  return;
}

