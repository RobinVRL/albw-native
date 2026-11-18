#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00172228(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int *DAT_003a0330;
extern undefined4 DAT_003a0334;

// USA 003A028C <- EU 003A0268 (Ghidra, non-matching)
// GLOBAL DAT_003a0330 int *
// GLOBAL DAT_003a0334 undefined4

undefined4 func_003A028C(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *DAT_003a0330;
  if (*(char *)(param_1 + 800) == '\0') {
    if (*(char *)(param_1 + 0x34d) != '\x01') goto LAB_003a0320;
    *(undefined4 *)(param_1 + 0x324) = 0;
    *(undefined1 *)(param_1 + 800) = 1;
    sVar1 = *(short *)(param_1 + 0x2c);
    if (sVar1 == 0) {
      return func_00172228(iVar2,6,DAT_003a0334,0);
    }
    if (sVar1 == 1) {
      return func_00172228(iVar2,7,DAT_003a0334,0);
    }
    if (sVar1 == 2) {
      return func_00172228(iVar2,8,DAT_003a0334,0);
    }
  }
  else {
    if ((*(char *)(param_1 + 800) != '\x01') || ((*(uint *)(iVar2 + 0x2b4) & 4) == 0)) {
LAB_003a0320:
      *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
      return 0;
    }
    func_00165E28(*(int *)(param_1 + 0x328),0);
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}

