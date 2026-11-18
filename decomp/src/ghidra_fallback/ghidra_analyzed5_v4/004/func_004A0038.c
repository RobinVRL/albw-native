#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010DB90(void);
extern int func_0010DF58(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6 ,int param_7);
extern int func_0010EEE0(int param_1);
extern int func_004A034C(int param_1,int param_2,int param_3);
extern int DAT_004a0154;
extern undefined4 DAT_004a0158;
extern int DAT_004a015c;

// USA 004A0038 <- EU 004A0010 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_004a0154 int
// GLOBAL DAT_004a0158 undefined4
// GLOBAL DAT_004a015c int

int * func_004A0038(int param_1,int param_2,int param_3,uint param_4,int *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = DAT_004a0154;
  func_0010C0B8(DAT_004a0154);
  if ((int)param_4 < 0) {
    param_4 = -param_4;
  }
  if (param_2 != 0 && param_1 != 0) {
    if ((int)param_4 < 4) {
      param_4 = 4;
    }
    uVar2 = (param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f);
    if (((uVar2 & uVar2 - 1) == 0) &&
       ((param_5 != (int *)0x0 || (param_5 = (int *)func_0010DB90(), param_5 != (int *)0x0)))) {
      iVar5 = ((param_1 + param_4) - 1 & ~(param_4 - 1)) * param_2 + param_4 + 0x8c;
      puVar3 = (undefined4 *)(**(code **)(*param_5 + 0x18))(param_5,iVar5,4);
      if (puVar3 != (undefined4 *)0x0) {
        piVar4 = func_0010DF58(puVar3,param_3,(int)param_5,(int)puVar3,iVar5,1,param_6);
        iVar5 = DAT_004a015c;
        piVar4[0x1e] = 0;
        *piVar4 = iVar5;
        piVar4[6] = iVar5 + 100;
        piVar4[0x1d] = param_1;
        piVar4[0x1f] = 0;
        piVar4[0x20] = 0;
        piVar4[0x21] = 0;
        piVar4[0x22] = 0;
        func_004A034C((int)piVar4,param_4,1);
        func_0010EEE0(iVar1);
        return piVar4;
      }
    }
  }
  func_0010EEE0(iVar1);
  return (int *)0x0;
}

