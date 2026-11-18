#include "ghidra_types.h"

extern int func_0041497C(int param_1);
extern int func_004149E4(int param_1);
extern int func_00414A40(int *param_1,int param_2,undefined4 param_3,int param_4,uint param_5);
extern int func_0041998C(int param_1,int param_2);

// USA 004197B8 <- EU 00419798 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint

int * func_004197B8(int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x20)) {
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      iVar3 = iVar1 + -0x58;
      if (*(int *)(iVar1 + -0x18) <= (int)param_3) {
        iVar6 = *(int *)(iVar1 + -0x50);
        pcVar5 = *(code **)(iVar1 + -0x4c);
        uVar7 = *(undefined4 *)(iVar1 + -0x48);
        func_004149E4(iVar3);
        func_0041497C(iVar3);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(iVar3,2,uVar7);
        }
        if (iVar6 != 0) goto LAB_0041982c;
      }
    }
    return (int *)0x0;
  }
LAB_0041982c:
  iVar1 = *(int *)(param_1 + 0x14);
  piVar4 = (int *)(iVar1 + -0x58);
  iVar3 = func_00414A40(piVar4,param_2,param_3,param_4,param_5);
  piVar2 = (int *)0x0;
  if (iVar3 != 0) {
    *(uint *)(iVar1 + -0x18) = param_3 & 0xff;
    func_0041998C(param_1,(int)piVar4);
    piVar2 = piVar4;
  }
  return piVar2;
}

