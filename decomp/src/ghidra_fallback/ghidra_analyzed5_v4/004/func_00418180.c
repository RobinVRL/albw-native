#include "ghidra_types.h"

extern int func_003DB804(int param_1,uint param_2);
extern int func_003DB894(int *param_1,uint param_2);
extern int func_003DB9EC(int *param_1,int *param_2,undefined4 param_3,uint param_4);
extern int func_003DE188(int param_1,float fparam_0);
extern void func_00418498(int param_1,int param_2);
extern int func_0067F8D4(float *param_1,float param_2,float fparam_0);
extern float DAT_0041822c;

// USA 00418180 <- EU 00418160 (Ghidra, non-matching)
// GLOBAL DAT_0041822c float

undefined4 func_00418180(int param_1,int param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  float fparam_0;
  
  iVar6 = param_1 + param_2 * 0x10;
  if (*(char *)(iVar6 + 0x294) == '\0') {
    piVar4 = param_3;
    piVar5 = param_4;
    if (*(int *)(iVar6 + 0x20) < *(int *)(iVar6 + 0x1c)) {
      func_00418498(param_1,param_2);
    }
    fparam_0 = DAT_0041822c;
    func_0067F8D4((float *)(iVar6 + 0x14),0.0,DAT_0041822c);
    func_003DE188((int)(char)param_2,fparam_0);
    iVar2 = func_003DB804((int)param_3,(int)(char)param_2);
    uVar1 = 0;
    if (((iVar2 != 0) &&
        (iVar2 = func_003DB9EC(param_3,param_4,piVar4,(uint)piVar5), uVar1 = 0, iVar2 != 0)) &&
       (uVar3 = func_003DB894(param_3,1), uVar1 = 0, uVar3 != 0)) {
      uVar1 = 1;
      *(int **)(iVar6 + 0x290) = param_3;
      *(undefined1 *)(iVar6 + 0x294) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

