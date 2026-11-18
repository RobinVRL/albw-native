#include "ghidra_types.h"

extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00588268(int param_1);
extern int *DAT_00298e38;
extern int *DAT_00298e3c;

// GLOBAL DAT_00298e38 int *
// GLOBAL DAT_00298e3c int *
// USA 00298D30 <- EU 00298DD4 (Ghidra, function missing from the decomp table)

void func_00298D30(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x34b) != '\0') {
    func_001E8268(*(int *)(*DAT_00298e38 + 0x18),(int *)(param_1 + 0x398),
                  (undefined4 *)(param_1 + 0x360),(undefined4 *)(param_1 + 0x36c));
  }
  iVar1 = *(int *)(param_1 + 0x34c) + -1;
  *(int *)(param_1 + 0x34c) = iVar1;
  if (iVar1 < 1) {
    iVar1 = func_00588268(*DAT_00298e3c);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x34c) = 1;
    }
  }
  return;
}

