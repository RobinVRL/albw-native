#include "ghidra_types.h"

extern int DAT_005ffba8;
extern int DAT_005ffbac;
extern undefined4 *DAT_005ffbb0;

// USA 005FFAF0 <- EU 005FFAC8 (Ghidra, non-matching)
// GLOBAL DAT_005ffba8 int
// GLOBAL DAT_005ffbac int
// GLOBAL DAT_005ffbb0 undefined4 *

void func_005FFAF0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  code *in_r12;
  
  puVar1 = DAT_005ffbb0;
  puVar3 = *(undefined4 **)(DAT_005ffba8 + *(int *)(DAT_005ffba8 + 0x124) * 4 + 0x128);
  if (param_1 != DAT_005ffbac) {
    if (param_1 < DAT_005ffbac) {
      if (param_1 == 0x8051) {
        iVar4 = 3;
        goto LAB_005ffb38;
      }
      if (param_1 != 0x8056) {
        return;
      }
    }
    else {
      if (param_1 - DAT_005ffbac == 1) {
        iVar4 = 4;
        goto LAB_005ffb38;
      }
      if (param_1 - DAT_005ffbac != 0xd0b) {
        return;
      }
    }
  }
  iVar4 = 2;
LAB_005ffb38:
  if ((param_4 == 0x10000 || param_4 == 0x20000) || param_4 == 0x30000) {
    if (puVar3[1] != 0) {
      in_r12 = (code *)DAT_005ffbb0[1];
    }
    if (puVar3[1] != 0 && in_r12 != (code *)0x0) {
      (*in_r12)(puVar3[5],0x104,*puVar3);
    }
    if ((code *)*puVar1 == (code *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)*puVar1)(param_4,0x104,*puVar3,iVar4 * param_2 * param_3);
    }
    puVar3[5] = param_4;
    puVar3[1] = uVar2;
    puVar3[2] = param_1;
    puVar3[3] = param_2;
    puVar3[4] = param_3;
  }
  return;
}

