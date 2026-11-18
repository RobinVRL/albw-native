#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_002BED00(int param_1);

// USA 004675E0 <- EU 004675B8 (Ghidra, non-matching)

undefined4 func_004675E0(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  bool bVar6;
  
  if (4 < *(byte *)(param_1 + 0x128)) {
    *(uint *)(*(int *)(param_1 + 0x114) + 0x18) = *(uint *)(*(int *)(param_1 + 0x114) + 0x18) | 4;
  }
  uVar2 = 0;
  do {
    piVar3 = (int *)(param_1 + 0x108);
    if (uVar2 < 4) {
      piVar3 = piVar3 + uVar2;
    }
    if ((*(uint *)(*piVar3 + 0x18) & 4) == 0) {
      piVar3 = (int *)(param_1 + 0x108);
      if (uVar2 < 4) {
        piVar3 = piVar3 + uVar2;
      }
      iVar4 = *piVar3;
      cVar1 = *(char *)(iVar4 + 0x84);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(iVar4 + 0xb5);
      }
      if (bVar6 && cVar1 == '\0') {
        puVar5 = (ushort *)(*(int *)(iVar4 + 0x14) + 0x16);
        *puVar5 = *puVar5 | 0x40;
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  if (*(char *)(param_1 + 0x44c) == '\0') {
    func_002BED00(*(int *)(param_1 + 0x11c));
    func_002BED00(*(int *)(param_1 + 0x120));
  }
  return func_002313DC(param_1 + 200);
}

