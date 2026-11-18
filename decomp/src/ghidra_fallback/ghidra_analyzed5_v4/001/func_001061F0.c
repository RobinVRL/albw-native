#include "ghidra_types.h"

extern int DAT_001062d4;
extern int *DAT_001062d8;
extern undefined4 DAT_001062dc;

// USA 001061F0 <- EU 001061F0 (Ghidra, non-matching)
// GLOBAL DAT_001062d4 int
// GLOBAL DAT_001062d8 int *
// GLOBAL DAT_001062dc undefined4

void func_001061F0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  
  uVar2 = DAT_001062dc;
  piVar1 = DAT_001062d8;
  piVar5 = (int *)param_1[2];
  iVar3 = piVar5[6];
  pcVar6 = (code *)*DAT_001062d8;
  if (iVar3 == DAT_001062d4) goto LAB_0010628c;
  if (iVar3 < DAT_001062d4) {
    if (iVar3 == 0x1010000) {
      if ((piVar5[1] == 0) || (pcVar6 == (code *)0x0)) goto LAB_0010628c;
    }
    else {
      if (iVar3 != 0x1020000 && iVar3 != 0x1030000) goto LAB_0010628c;
      if (*piVar5 != 0 && pcVar6 != (code *)0x0) {
        (*pcVar6)(piVar5[5],DAT_001062dc,*param_1);
      }
      if (piVar5[1] != 0) {
        pcVar6 = (code *)*piVar1;
      }
      if (piVar5[1] == 0 || pcVar6 == (code *)0x0) goto LAB_0010628c;
    }
    uVar4 = *param_1;
    iVar3 = 0x10000;
  }
  else {
    if ((iVar3 - DAT_001062d4 != 0x10000 && iVar3 - DAT_001062d4 != 0x20000) ||
       (*piVar5 == 0 || pcVar6 == (code *)0x0)) goto LAB_0010628c;
    uVar4 = *param_1;
    iVar3 = piVar5[5];
  }
  (*pcVar6)(iVar3,uVar2,uVar4);
LAB_0010628c:
  *piVar5 = 0;
  piVar5[1] = 0;
  return;
}

