// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"


// USA 002558DC <- EU 00255904 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

int func_002558DC(int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined4 *)(param_1 + 0x70) = 2;
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else if (*(int *)(param_1 + 0x74) == 0) {
    *(undefined4 *)(param_1 + 0x74) = 2;
    iVar1 = 1;
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    *(undefined4 *)(param_1 + 0x78) = 2;
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  else if (*(int *)(param_1 + 0x7c) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 2;
    iVar1 = 3;
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  else if (*(int *)(param_1 + 0x80) == 0) {
    *(undefined4 *)(param_1 + 0x80) = 2;
    iVar1 = 4;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  else {
    iVar1 = -1;
  }
  *(undefined4 *)(param_1 + iVar1 * 4 + 0xdc) = 0xb;
  return iVar1;
}

