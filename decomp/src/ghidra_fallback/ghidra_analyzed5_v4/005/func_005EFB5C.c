#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_006806F0(undefined4 *param_1);
extern int func_00680960(undefined4 *param_1);
extern uint *DAT_005efbbc;
extern undefined4 *DAT_005efbc0;
extern undefined4 DAT_005efbc4;
extern undefined4 DAT_005efbc8;
extern uint *DAT_005efbcc;
extern undefined4 *DAT_005efbd0;
extern undefined4 DAT_005efbd4;

// USA 005EFB5C <- EU 005EFB34 (Ghidra, non-matching)
// GLOBAL DAT_005efbbc uint *
// GLOBAL DAT_005efbc0 undefined4 *
// GLOBAL DAT_005efbc4 undefined4
// GLOBAL DAT_005efbc8 undefined4
// GLOBAL DAT_005efbcc uint *
// GLOBAL DAT_005efbd0 undefined4 *
// GLOBAL DAT_005efbd4 undefined4

uint * func_005EFB5C(void)

{
  int iVar1;
  uint *puVar2;
  
  if (((*DAT_005efbbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005efbbc), iVar1 != 0)) {
    func_006806F0(DAT_005efbc0);
  }
  puVar2 = (uint *)*DAT_005efbcc;
  if (((uint)puVar2 & 1) == 0) {
    iVar1 = func_00100174((int *)DAT_005efbcc);
    puVar2 = (uint *)0x0;
    if (iVar1 != 0) {
      func_00680960(DAT_005efbd0);
      return DAT_005efbcc;
    }
  }
  return puVar2;
}

