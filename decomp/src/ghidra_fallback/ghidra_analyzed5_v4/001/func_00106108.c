#include "ghidra_types.h"

extern int DAT_001061e4;
extern int *DAT_001061e8;
extern int DAT_001061ec;

// USA 00106108 <- EU 00106108 (Ghidra, non-matching)
// GLOBAL DAT_001061e4 int
// GLOBAL DAT_001061e8 int *
// GLOBAL DAT_001061ec int

void func_00106108(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  
  iVar2 = DAT_001061ec;
  piVar1 = DAT_001061e8;
  pcVar5 = (code *)*DAT_001061e8;
  if (param_1 == DAT_001061e4) goto LAB_00106198;
  if (param_1 < DAT_001061e4) {
    iVar3 = param_1 + DAT_001061ec * -0x10000;
    if (iVar3 == 0) {
      if ((param_2[1] == 0) || (pcVar5 == (code *)0x0)) goto LAB_00106198;
    }
    else {
      if (iVar3 != 0x10000 && iVar3 != 0x20000) goto LAB_00106198;
      if (*param_2 != 0 && pcVar5 != (code *)0x0) {
        (*pcVar5)(param_2[0xf],DAT_001061ec,param_2[0x10]);
      }
      if (param_2[1] != 0) {
        pcVar5 = (code *)*piVar1;
      }
      if (param_2[1] == 0 || pcVar5 == (code *)0x0) goto LAB_00106198;
    }
    iVar4 = param_2[0x10];
    iVar3 = 0x10000;
  }
  else {
    if ((param_1 - DAT_001061e4 != 0x10000 && param_1 - DAT_001061e4 != 0x20000) ||
       (*param_2 == 0 || pcVar5 == (code *)0x0)) goto LAB_00106198;
    iVar3 = param_2[0xf];
    iVar4 = param_2[0x10];
  }
  (*pcVar5)(iVar3,iVar2,iVar4);
LAB_00106198:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

