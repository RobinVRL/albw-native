#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int *DAT_0010d788;

// USA 0010D638 <- EU 0010D638 (Ghidra, non-matching)
// GLOBAL DAT_0010d788 int *

void func_0010D638(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  float in_s0;
  
  piVar2 = DAT_0010d788;
  (**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_3 + 8))(param_3);
  iVar3 = param_3[1];
  (**(code **)(*piVar2 + 8))(piVar2);
  if (iVar3 != piVar2[1]) {
    iVar3 = 0;
    do {
      if (*(char *)(param_3[1] + iVar3) != *(char *)(piVar2[1] + iVar3)) break;
      if (*(char *)(param_3[1] + iVar3) == '\0') goto LAB_0010d734;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    puVar4 = *(uint **)(param_2 + 0x24);
    (**(code **)(*param_3 + 8))(param_3);
    uVar1 = 0;
    do {
      if (*(char *)(param_3[1] + uVar1) == '\0') {
        if ((int)uVar1 < 0x40001) goto LAB_0010d704;
        break;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x40001);
    uVar1 = 0;
LAB_0010d704:
    if (*(int *)(param_2 + 0x28) <= (int)uVar1) {
      uVar1 = *(int *)(param_2 + 0x28) - 1;
    }
    (**(code **)(*param_3 + 8))(param_3);
    func_0010E3C4(puVar4,(uint *)param_3[1],uVar1);
    *(undefined1 *)((int)puVar4 + uVar1) = 0;
  }
LAB_0010d734:
  if (param_2 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_2 + 0x10);
  }
  iVar3 = piVar2[3];
  if (iVar3 != 0) {
    piVar2[3] = 0;
    func_0010F1F8(piVar2,in_s0);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
  }
  piVar2[3] = param_1 + 0x10;
  func_0010F1DC((int *)(param_1 + 0x10),piVar2);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

