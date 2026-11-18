#include "ghidra_types.h"

extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_00547454(int param_1);
extern int *DAT_00459254;

// USA 0045918C <- EU 00459164 (Ghidra, non-matching)
// GLOBAL DAT_00459254 int *

void func_0045918C(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_r3;
  bool bVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1dc);
  bVar4 = *(char *)(uVar1 + 0x6c) == '\0';
  if (bVar4) {
    uVar1 = (uint)*(byte *)(uVar1 + 0xa8);
  }
  if (bVar4 && uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 0x1e0);
    bVar4 = *(char *)(uVar1 + 0x6c) == '\0';
    if (bVar4) {
      uVar1 = (uint)*(byte *)(uVar1 + 0xa8);
    }
    if (!bVar4 || uVar1 != 0) {
      func_004576CC(param_1,7,0,in_r3);
      *(undefined1 *)(param_1 + 0x224) = 0;
      return;
    }
    uVar1 = 0;
    do {
      piVar2 = (int *)(param_1 + 0x1c4);
      if (uVar1 < 6) {
        piVar2 = piVar2 + uVar1;
      }
      if (*(char *)(*piVar2 + 0x6c) != '\0') {
LAB_0045920c:
        func_004576CC(param_1,uVar1,0,in_r3);
        *(undefined1 *)(param_1 + 0x224) = 0;
        return;
      }
      piVar2 = (int *)(param_1 + 0x1c4);
      if (uVar1 < 6) {
        piVar2 = piVar2 + uVar1;
      }
      if (*(char *)(*piVar2 + 0xa8) != '\0') goto LAB_0045920c;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 6);
    if (*(char *)(param_1 + 0x218) == '\0') {
      iVar3 = func_00547454(*DAT_00459254);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x224) = 1;
      }
      return;
    }
  }
  else {
    func_004576CC(param_1,6,0,in_r3);
    *(undefined1 *)(param_1 + 0x224) = 0;
  }
  return;
}

