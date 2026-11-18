#include "ghidra_types.h"

extern int func_002C00A8(int param_1);
extern int func_0046A1D4(int param_1,int param_2);
extern int func_004727B8(int param_1,int param_2);

// USA 0044A108 <- EU 0044A0E0 (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x0044a124) */
/* WARNING: Removing unreachable block (ram,0x0044a134) */

void func_0044A108(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  *(undefined1 *)(param_1 + 0x292) = 1;
  *(undefined1 *)(param_1 + 0x293) = 1;
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') {
    func_004727B8(*(int *)(param_1 + 0x20c),0);
    func_002C00A8(*(int *)(param_1 + 0x14));
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 4) = 0;
    puVar2 = (ushort *)(iVar1 + 0x16);
    *puVar2 = *puVar2 & 0xffbf;
    func_0046A1D4(*(int *)(param_1 + 0x214),0);
    if (*(char *)(param_1 + 0x208) != '\0') {
      puVar2 = (ushort *)(*(int *)(param_1 + 0x230) + 0x16);
      *puVar2 = *puVar2 & 0xffbf;
    }
  }
  *(undefined1 *)(param_1 + 0x284) = 0;
  return;
}

