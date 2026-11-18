#include "ghidra_types.h"

extern int func_00417E24(void);
extern int func_00417EB8(undefined4 param_1,int param_2);
extern int func_00419924(void);
extern int func_00419A74(undefined4 param_1,int param_2);
extern int DAT_004084d4;

// USA 00408468 <- EU 00408448 (Ghidra, non-matching)
// GLOBAL DAT_004084d4 int

int func_00408468(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x14);
  puVar2 = func_00419924();
  iVar5 = DAT_004084d4;
  iVar3 = func_00419A74(puVar2,*(int *)(DAT_004084d4 + 4));
  puVar4 = func_00417E24();
  iVar5 = func_00417EB8(puVar4,*(int *)(iVar5 + 4));
  iVar5 = iVar5 + iVar3 + iVar1 + iVar6 + iVar7;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    iVar5 = iVar5 + *(int *)(param_1 + 8);
  }
  if ((*(int *)(param_1 + 4) == 1) && (*(char *)(param_1 + 0x1e) != '\0')) {
    iVar5 = iVar5 + *(int *)(param_1 + 8);
  }
  bVar8 = *(char *)(param_1 + 0x1d) != '\0';
  iVar1 = 0;
  if (bVar8) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if (bVar8 && 0 < iVar1) {
    iVar5 = iVar5 + iVar1 * 8;
  }
  return iVar5;
}

