#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8BD8(int *param_1);
extern int func_00408B7C(int param_1);
extern int func_00408BC8(undefined4 *param_1);
extern int func_00413634(int param_1);
extern undefined4 DAT_00410f94;

// USA 00410F1C <- EU 00410EFC (Ghidra, non-matching)
// GLOBAL DAT_00410f94 undefined4

undefined4 * func_00410F1C(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  *param_1 = DAT_00410f94;
  if (*(char *)(param_1 + 100) != '\0') {
    uVar1 = param_1[0x48];
    if ((uVar1 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((uVar1 & 1) != 0) {
        func_0010C1B8(uVar1,uVar1 & 0xfffffffe,param_3);
      }
      func_003C8BD8((int *)(param_1[0x48] & 0xfffffffe));
      param_1[0x48] = 0;
    }
    func_00413634((int)(param_1 + 0x4f));
    *(undefined1 *)(param_1 + 100) = 0;
  }
  func_00408B7C((int)param_1);
  param_1[99] = 0xffffffff;
  uVar1 = param_1[0x48];
  if ((uVar1 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((uVar1 & 1) != 0) {
      func_0010C1B8(uVar1,uVar1 & 0xfffffffe,param_3);
    }
    func_003C8BD8((int *)(param_1[0x48] & 0xfffffffe));
    param_1[0x48] = 0;
  }
  puVar2 = func_00408BC8(param_1);
  return puVar2;
}

