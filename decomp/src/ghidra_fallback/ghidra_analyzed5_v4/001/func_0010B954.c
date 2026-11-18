#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010CBE8(int param_1);
extern int func_0010CD0C(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_0010DB90(void);
extern int func_0010EEE0(int param_1);
extern int DAT_0010ba58;
extern undefined4 DAT_0010ba5c;

// USA 0010B954 <- EU 0010B954 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0010ba58 int
// GLOBAL DAT_0010ba5c undefined4

int * func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = DAT_0010ba58;
  func_0010C0B8(DAT_0010ba58);
  if ((param_3 != (int *)0x0) || (param_3 = (int *)func_0010DB90(), param_3 != (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = (**(code **)(*param_3 + 0x3c))(param_3,4);
    }
    uVar4 = param_1 + 3U & 0xfffffffc;
    if ((0xa8 < uVar4) &&
       (puVar2 = (undefined4 *)(**(code **)(*param_3 + 0x18))(param_3,uVar4,param_4 << 2),
       puVar2 != (undefined4 *)0x0)) {
      puVar3 = puVar2;
      if ((param_4 == 1) ||
         (puVar3 = (undefined4 *)((uVar4 - 0x98) + (int)puVar2), puVar3 != (undefined4 *)0x0)) {
        piVar5 = func_0010CD0C(puVar3,param_2,(int)param_3,(int)puVar2,uVar4,(char)param_4,param_5);
      }
      else {
        piVar5 = (int *)0x0;
      }
      func_0010CBE8((int)piVar5);
      func_0010EEE0(iVar1);
      return piVar5;
    }
  }
  func_0010EEE0(iVar1);
  return (int *)0x0;
}

