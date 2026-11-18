#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_002FCAF8(int param_1);
extern int func_00588268(int param_1);
extern int *DAT_00299078;
extern int *DAT_0029907c;

// GLOBAL DAT_00299078 int *
// GLOBAL DAT_0029907c int *
// USA 00298F4C <- EU 00298FF0 (Ghidra, function missing from the decomp table)

undefined4 func_00298F4C(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x34b) != '\0') {
    func_001E8268(*(int *)(*DAT_00299078 + 0x18),(int *)(param_1 + 0x398),
                  (undefined4 *)(param_1 + 0x360),(undefined4 *)(param_1 + 0x36c));
  }
  iVar1 = func_00588268(*DAT_0029907c);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    iVar1 = func_00165E28(*(int *)(param_1 + 0x358),(short)*(undefined4 *)(param_1 + 0x34c));
    if ((iVar1 != 0) && ((*(ushort *)(param_1 + 0x30) & 1) != 0)) {
      return func_002FCAF8(*(int *)(param_1 + 0x358));
    }
  }
  return 0;
}

