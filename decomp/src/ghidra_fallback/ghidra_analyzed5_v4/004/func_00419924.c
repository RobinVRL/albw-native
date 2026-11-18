#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00419964;
extern undefined1 *DAT_00419968;

// USA 00419924 <- EU 00419904 (Ghidra, non-matching)
// GLOBAL DAT_00419964 uint *
// GLOBAL DAT_00419968 undefined1 *

undefined1 * func_00419924(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if (((*DAT_00419964 & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_00419964), puVar1 = DAT_00419968, iVar2 != 0)) {
    puVar3 = (undefined4 *)(DAT_00419968 + 4);
    puVar4 = DAT_00419968 + 8;
    *DAT_00419968 = 0;
    *puVar3 = 0;
    *(undefined1 **)(puVar1 + 8) = puVar4;
    *(undefined1 **)(puVar1 + 0xc) = puVar4;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined1 **)(puVar1 + 0x14) = puVar1 + 0x14;
    *(undefined1 **)(puVar1 + 0x18) = puVar1 + 0x14;
  }
  return DAT_00419968;
}

