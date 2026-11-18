#include "ghidra_types.h"

extern int func_005FF6E4(int param_1);
extern int DAT_00322914;
extern undefined4 *DAT_00322918;

// USA 00322880 <- EU 0032285C (Ghidra, non-matching)
// GLOBAL DAT_00322914 int
// GLOBAL DAT_00322918 undefined4 *

void func_00322880(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = DAT_00322914;
  *(undefined1 *)(param_1 + 0x18a) = *(undefined1 *)(param_1 + 0x189);
  *(undefined1 *)(param_1 + 0x188) = 1;
  iVar4 = func_005FF6E4(iVar2);
  puVar3 = DAT_00322918;
  iVar5 = *(int *)(param_1 + 0xa0);
  if (iVar4 < iVar5) {
    iVar5 = 0x7ffffffe - iVar5;
  }
  else {
    iVar5 = -iVar5;
  }
  uVar6 = iVar4 + iVar5;
  if (uVar6 < *(uint *)(param_1 + 0x70)) {
    do {
      (**(code **)(*(int *)*puVar3 + 0x4c))((int *)*puVar3);
      *(undefined1 *)(param_1 + 0x188) = 0;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x70));
  }
  bVar7 = *(char *)(param_1 + 0x188) != '\0';
  cVar1 = '\0';
  if (bVar7) {
    cVar1 = *(char *)(param_1 + 0x18b);
  }
  if (bVar7 && cVar1 != '\0') {
    *(bool *)(param_1 + 0x189) = *(char *)(param_1 + 0x189) == '\0';
  }
  else {
    *(undefined1 *)(param_1 + 0x189) = 0;
  }
  iVar5 = func_005FF6E4(iVar2);
  *(int *)(param_1 + 0xa0) = iVar5;
  return;
}

