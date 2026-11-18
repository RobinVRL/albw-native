#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_002335a8;
extern undefined *DAT_002335ac;
extern undefined *DAT_002335b0;
extern int DAT_002335b4;

// USA 002334E0 <- EU 002334E0 (Ghidra, non-matching)
// GLOBAL DAT_002335a8 undefined *
// GLOBAL DAT_002335ac undefined *
// GLOBAL DAT_002335b0 undefined *
// GLOBAL DAT_002335b4 int

void * func_002334E0(int param_1)

{
  int iVar1;
  
  iVar1 = func_00100118(param_1 + 0x18,DAT_002335a8,0x10,6);
  *(undefined1 *)(iVar1 + 0x60) = 1;
  *(undefined1 *)(iVar1 + 0x61) = 4;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0x30;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  if (iVar1 + 0x74 != 0) {
    *(int *)(iVar1 + 0x70) = iVar1 + 0x74;
  }
  iVar1 = func_00100118(iVar1 + 0x74,DAT_002335ac,0x70,0x30);
  iVar1 = func_00100118(iVar1 + 0x1518,DAT_002335a8,0x10,6);
  *(undefined1 *)(iVar1 + 0x60) = 1;
  *(undefined1 *)(iVar1 + 0x61) = 4;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0x140;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  if (iVar1 + 0x74 != 0) {
    *(int *)(iVar1 + 0x70) = iVar1 + 0x74;
  }
  iVar1 = func_00100118(iVar1 + 0x74,DAT_002335b0,0x38,0x140);
  *(undefined4 *)(DAT_002335b4 + iVar1 + -0x1618) = 0;
  return (void *)(iVar1 + -0x1618);
}

