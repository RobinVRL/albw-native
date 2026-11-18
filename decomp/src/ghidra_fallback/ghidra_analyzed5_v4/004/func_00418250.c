#include "ghidra_types.h"

extern int func_003DBD8C(int param_1,uint param_2);
extern int func_003DBDE4(int *param_1,uint param_2);
extern int func_003DBF3C(int *param_1,int *param_2);
extern int func_003DE188(int param_1,float fparam_0);
extern void func_00418498(int param_1,int param_2);
extern int func_0067F8D4(float *param_1,float param_2,float fparam_0);
extern float DAT_004182fc;

// USA 00418250 <- EU 00418230 (Ghidra, non-matching)
// GLOBAL DAT_004182fc float

undefined4 func_00418250(int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fparam_0;
  
  iVar5 = param_1 + param_2 * 0x10;
  if (*(char *)(iVar5 + 0x29c) == '\0') {
    if (*(int *)(iVar5 + 0x20) < *(int *)(iVar5 + 0x1c)) {
      func_00418498(param_1,param_2);
    }
    fparam_0 = DAT_004182fc;
    func_0067F8D4((float *)(iVar5 + 0x14),0.0,DAT_004182fc);
    func_003DE188((int)(char)param_2,fparam_0);
    bVar1 = func_003DBD8C((int)param_3,(int)(char)param_2);
    uVar2 = 0;
    if (((bVar1) && (iVar3 = func_003DBF3C(param_3,param_4), uVar2 = 0, iVar3 != 0)) &&
       (uVar4 = func_003DBDE4(param_3,1), uVar2 = 0, uVar4 != 0)) {
      uVar2 = 1;
      *(int **)(iVar5 + 0x298) = param_3;
      *(undefined1 *)(iVar5 + 0x29c) = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

