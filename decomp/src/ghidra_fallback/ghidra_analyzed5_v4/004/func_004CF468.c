#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int *DAT_004cf4e8;

// USA 004CF468 <- EU 004CF440 (Ghidra, non-matching)
// GLOBAL DAT_004cf4e8 int *

/* WARNING: Removing unreachable block (ram,0x004cf48c) */
/* WARNING: Removing unreachable block (ram,0x004cf490) */
/* WARNING: Removing unreachable block (ram,0x004cf494) */
/* WARNING: Removing unreachable block (ram,0x004cf4ac) */

undefined4 func_004CF468(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x410);
  if (*(char *)(iVar1 + 0x30) == '\0') {
    return 0;
  }
  iVar2 = *DAT_004cf4e8;
  func_0010C0B8(iVar2 + 0x2bc8);
  if ((*(int *)(iVar1 + 0x4c) != 0) && ((~*(uint *)(iVar1 + 0x164) & 0x3e) == 0)) {
    *(undefined1 *)(*(int *)(iVar1 + 0x4c) + 4) = 1;
  }
  *(undefined1 *)(iVar1 + 0x30) = 0;
  return func_0010EEE0(iVar2 + 0x2bc8);
}

