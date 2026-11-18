#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_001300D4(int param_1,undefined4 param_2);
extern int *DAT_004d00b8;

// USA 004CFFA4 <- EU 004CFF7C (Ghidra, non-matching)
// GLOBAL DAT_004d00b8 int *

undefined4 func_004CFFA4(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  piVar2 = DAT_004d00b8;
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != '\x01') {
    iVar3 = *DAT_004d00b8;
    func_0010C0B8(iVar3 + 0x2bc8);
    if (*(int *)(param_1 + 0x4c) == 0) {
      puVar6 = func_001300D4(*piVar2,param_1);
      *(undefined4 **)(param_1 + 0x4c) = puVar6;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 4) = 0;
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
    func_0010EEE0(iVar3 + 0x2bc8);
  }
  uVar7 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    do {
      if (uVar7 < *(uint *)(param_1 + 0x5c)) {
        piVar4 = *(int **)(*(int *)(param_1 + 100) + uVar7 * 4);
      }
      else {
        piVar4 = (int *)0x0;
      }
      (**(code **)(*piVar4 + 8))(piVar4,7,param_2);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < *(int *)(param_1 + 0x5c));
  }
  if (*(char *)(param_1 + 0x30) == cVar1) {
    return 0;
  }
  iVar3 = *piVar2;
  func_0010C0B8(iVar3 + 0x2bc8);
  iVar5 = *(int *)(param_1 + 0x4c);
  if (cVar1 == '\0') {
    if ((iVar5 != 0) && ((~*(uint *)(param_1 + 0x164) & 0x3e) == 0)) {
      *(undefined1 *)(iVar5 + 4) = 1;
    }
  }
  else if (iVar5 == 0) {
    puVar6 = func_001300D4(*piVar2,param_1);
    *(undefined4 **)(param_1 + 0x4c) = puVar6;
  }
  else {
    *(undefined1 *)(iVar5 + 4) = 0;
  }
  *(char *)(param_1 + 0x30) = cVar1;
  return func_0010EEE0(iVar3 + 0x2bc8);
}

