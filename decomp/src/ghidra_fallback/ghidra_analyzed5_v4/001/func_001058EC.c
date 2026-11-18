// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern undefined4 DAT_00105920;
extern uint *DAT_00105924;

// USA 001058EC <- EU 001058EC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00105920 undefined4
// GLOBAL DAT_00105924 uint *

uint func_001058EC(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00105920;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  uVar1 = *DAT_00105924;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

