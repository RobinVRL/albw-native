#include "ghidra_types.h"

extern char *DAT_0048a6a0;

// USA 0048A584 <- EU 0048A55C (Ghidra, non-matching)
// GLOBAL DAT_0048a6a0 char *

undefined4 func_0048A584(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  
  piVar5 = *(int **)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 8);
  (**(code **)(*piVar5 + 8))(piVar5);
  pcVar6 = DAT_0048a6a0;
  iVar1 = 0;
  do {
    if (*(char *)(piVar5[1] + iVar1) == '\0') {
      if (iVar1 < 0x40001) goto LAB_0048a5b8;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_0048a5b8:
  pcVar2 = DAT_0048a6a0;
  if (-1 < iVar4 && iVar4 <= iVar1) {
    pcVar2 = (char *)(piVar5[1] + iVar4);
  }
  if (9 < (int)*pcVar2 - 0x30U) {
    return 0;
  }
  if (*pcVar2 == 0x30) {
    iVar4 = *(int *)(param_2 + 8) + 1;
    (**(code **)(*param_3 + 8))(param_3);
    iVar1 = 0;
    do {
      if (*(char *)(param_3[1] + iVar1) == '\0') {
        if (iVar1 < 0x40001) goto LAB_0048a644;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
    iVar1 = 0;
LAB_0048a644:
    if (-1 < iVar4 && iVar4 <= iVar1) {
      pcVar6 = (char *)(param_3[1] + iVar4);
    }
    if (*pcVar6 == 'b') {
      *param_1 = 2;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2;
      return 1;
    }
    if (*pcVar6 == 'x') {
      *param_1 = 0x10;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 2;
      return 1;
    }
    uVar3 = 8;
  }
  else {
    uVar3 = 10;
  }
  *param_1 = uVar3;
  return 1;
}

