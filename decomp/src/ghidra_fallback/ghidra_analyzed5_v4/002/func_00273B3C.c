#include "ghidra_types.h"

extern int func_00581C5C(int param_1);
extern undefined4 DAT_00273cd4;
extern int *DAT_00273cd8;
extern undefined4 DAT_00273cdc;
extern undefined4 DAT_00273ce0;
extern undefined4 DAT_00273ce4;
extern undefined4 DAT_00273ce8;
extern undefined4 DAT_00273cec;

// USA 00273B3C <- EU 00273B64 (Ghidra, non-matching)
// GLOBAL DAT_00273cd4 undefined4
// GLOBAL DAT_00273cd8 int *
// GLOBAL DAT_00273cdc undefined4
// GLOBAL DAT_00273ce0 undefined4
// GLOBAL DAT_00273ce4 undefined4
// GLOBAL DAT_00273ce8 undefined4
// GLOBAL DAT_00273cec undefined4

undefined4 func_00273B3C(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x476) != '\0') {
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = DAT_00273cd4;
  iVar1 = *(int *)(param_1 + 0x414);
  if (iVar1 != 0) {
    param_2 = (int)*(char *)(iVar1 + 0x68);
  }
  if (((((((iVar1 != 0 && param_2 != 1) && param_2 != 2) && (*(char *)(iVar1 + 0x39) == '\0')) &&
        (iVar1 = func_00581C5C(*DAT_00273cd8), iVar1 != 0)) &&
       ((*(float *)(iVar1 + 4) <= *(float *)(param_1 + 0x3d0) &&
        (*(float *)(param_1 + 0x3d0) <= *(float *)(iVar1 + 0x10))))) &&
      ((*(float *)(iVar1 + 8) <= *(float *)(param_1 + 0x3d4) &&
       ((*(float *)(param_1 + 0x3d4) <= *(float *)(iVar1 + 0x14) &&
        (*(float *)(iVar1 + 0xc) <= *(float *)(param_1 + 0x3d8))))))) &&
     (*(float *)(param_1 + 0x3d8) <= *(float *)(iVar1 + 0x18))) {
                    /* WARNING: Could not recover jumptable at 0x00273c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(**(int **)(param_1 + 0x40c) + 0x18))(*(int **)(param_1 + 0x40c),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00273cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(param_1 + 0x40c) + 0x18))(*(int **)(param_1 + 0x40c),0);
}

