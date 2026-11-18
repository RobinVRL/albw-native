#include "ghidra_types.h"

extern char *DAT_0048a558;

// USA 0048A4E4 <- EU 0048A4BC (Ghidra, non-matching)
// GLOBAL DAT_0048a558 char *

void func_0048A4E4(undefined4 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = 1;
  piVar4 = *(int **)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 8);
  (**(code **)(*piVar4 + 8))(piVar4);
  iVar1 = 0;
  do {
    if (*(char *)(piVar4[1] + iVar1) == '\0') {
      if (iVar1 < 0x40001) goto LAB_0048a518;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_0048a518:
  pcVar2 = DAT_0048a558;
  if (-1 < iVar3 && iVar3 <= iVar1) {
    pcVar2 = (char *)(piVar4[1] + iVar3);
  }
  if (*pcVar2 != '+') {
    if (*pcVar2 != '-') {
      return;
    }
    *param_1 = 0xffffffff;
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  return;
}

