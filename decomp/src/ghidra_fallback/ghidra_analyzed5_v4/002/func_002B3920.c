#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0058A880(int param_1);
extern float func_0058AA1C(int param_1);
extern float func_0058AC14(int param_1);
extern int func_00662638(undefined4 *param_1,undefined1 param_2);
extern int DAT_002b39a4;
extern float DAT_002b39a8;
extern undefined4 DAT_002b39ac;

// USA 002B3920 <- EU 002B38FC (Ghidra, non-matching)
// GLOBAL DAT_002b39a4 int
// GLOBAL DAT_002b39a8 float
// GLOBAL DAT_002b39ac undefined4

void func_002B3920(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  bVar2 = func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0x95c),DAT_002b39a4);
  uVar1 = DAT_002b39ac;
  if (bVar2) {
    func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_002b39a8);
  }
  else {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_002b39ac;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  }
  iVar3 = *(int *)(param_1 + 0x958);
  if (iVar3 != 0) {
    fVar4 = func_0058AA1C(param_1);
    fVar5 = func_0058AC14(param_1);
    *(float *)(*(int *)(iVar3 + 0x14) + 0x10) = fVar4 / fVar5;
  }
  iVar3 = func_0058A880(param_1);
  if (iVar3 != 0) {
    func_00662638((undefined4 *)(param_1 + 0x8ec),0);
  }
  return;
}

