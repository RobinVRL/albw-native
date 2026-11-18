#include "ghidra_types.h"

extern int func_00232468(int param_1);
extern int func_00465A80(int param_1);
extern int func_00466B38(int param_1);
extern int func_00467900(int param_1);
extern int func_00467DC4(int param_1);

// USA 004650B4 <- EU 0046508C (Ghidra, non-matching)

void func_004650B4(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  func_00232468(param_1);
  func_00465A80(param_1);
  func_00467DC4(param_1);
  func_00466B38(param_1);
  if (4 < *(byte *)(param_1 + 0x128)) {
    iVar2 = *(int *)(param_1 + 0x11c);
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar7 && cVar1 == '\0') {
      *(undefined1 *)(iVar2 + 0xe) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x120);
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)(iVar2 + 0xe);
    }
    if (bVar7 && cVar1 == '\0') {
      *(undefined1 *)(iVar2 + 0xe) = 1;
    }
    func_00467900(param_1);
  }
  uVar3 = 0;
  do {
    puVar4 = (uint *)(param_1 + 0x108);
    if (uVar3 < 4) {
      puVar4 = puVar4 + uVar3;
    }
    uVar5 = *puVar4;
    bVar7 = *(char *)(uVar5 + 0xd) == '\0';
    if (bVar7) {
      uVar5 = (uint)*(byte *)(uVar5 + 0xe);
    }
    if (bVar7 && uVar5 == 0) {
      piVar6 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar6 = piVar6 + uVar3;
      }
      *(undefined1 *)(*piVar6 + 0xe) = 1;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  iVar2 = *(int *)(param_1 + 0x118);
  cVar1 = *(char *)(iVar2 + 0xd);
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = *(char *)(iVar2 + 0xe);
  }
  if (bVar7 && cVar1 == '\0') {
    *(undefined1 *)(iVar2 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0x44c) = 0;
  return;
}

