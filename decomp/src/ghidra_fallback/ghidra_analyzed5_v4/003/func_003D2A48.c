#include "ghidra_types.h"

extern int func_0010AAAC(int *param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5, undefined1 *param_6);
extern undefined4 DAT_003d2a88;
extern int DAT_003d2a8c;
extern int DAT_003d2a90;
extern int DAT_003d2a94;
extern undefined1 *DAT_003d2a98;

// USA 003D2A48 <- EU 003D2A24 (Ghidra, non-matching)
// GLOBAL DAT_003d2a88 undefined4
// GLOBAL DAT_003d2a8c int
// GLOBAL DAT_003d2a90 int
// GLOBAL DAT_003d2a94 int
// GLOBAL DAT_003d2a98 undefined1 *

int func_003D2A48(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_003d2a90;
  iVar3 = DAT_003d2a8c;
  uVar1 = DAT_003d2a88;
  *(undefined4 *)(DAT_003d2a90 + 0x18) = DAT_003d2a88;
  *(int *)(iVar2 + 0x1c) = iVar3;
  *(undefined2 *)(iVar2 + 4) = 0xff;
  *(undefined2 *)(iVar2 + 6) = 0xff;
  if ((*(int **)(iVar2 + 8) != (int *)0x0) && (*(char *)(iVar2 + 1) == '\0')) {
    iVar3 = func_0010AAAC(*(int **)(iVar2 + 8),uVar1,iVar3,0xff,0xff,DAT_003d2a98);
    return iVar3;
  }
  return DAT_003d2a94;
}

