#include "ghidra_types.h"

extern int func_002C00A8(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_0047e930;
extern int *DAT_0047e934;

// USA 0047E8C4 <- EU 0047E89C (Ghidra, non-matching)
// GLOBAL DAT_0047e930 int
// GLOBAL DAT_0047e934 int *

/* WARNING: Removing unreachable block (ram,0x0047e91c) */
/* WARNING: Removing unreachable block (ram,0x0047e92c) */

void func_0047E8C4(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  
  if (param_2 == 0 && param_3 == 0) {
    func_002C00A8(*(int *)(param_1 + 0x14));
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  else {
    bVar1 = func_00584B94(*DAT_0047e934,DAT_0047e930);
    if (!bVar1 && param_3 == 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0x84);
    *(int *)(iVar2 + 4) = iVar5;
    puVar3 = (ushort *)(iVar2 + 0x16);
    if (iVar5 != 0) {
      uVar4 = *puVar3 | 0x40;
      goto LAB_0047e8fc;
    }
  }
  puVar3 = (ushort *)(iVar2 + 0x16);
  uVar4 = *puVar3 & 0xffbf;
LAB_0047e8fc:
  *puVar3 = uVar4;
  return;
}

