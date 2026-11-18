// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern undefined4 DAT_00105958;
extern uint *DAT_0010595c;

// USA 00105928 <- EU 00105928 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00105958 undefined4
// GLOBAL DAT_0010595c uint *

uint func_00105928(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = DAT_00105958;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  uVar1 = *DAT_0010595c;
  software_interrupt(0x32);
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = *(uint *)(iVar2 + 0x84);
  }
  return uVar1;
}

