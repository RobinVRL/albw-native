#include "ghidra_types.h"

extern int func_00351FC0(undefined4 param_1,int *param_2);
extern int *DAT_0020036c;

// USA 0020029C <- EU 0020029C (Ghidra, non-matching)
// GLOBAL DAT_0020036c int *

void func_0020029C(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  piVar4 = (int *)**(undefined4 **)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x30);
  uVar6 = *(undefined8 *)(piVar4 + 0x8b);
  uVar7 = *(undefined8 *)(piVar4 + 0x8d);
  func_00351FC0(uVar5,piVar4);
  if (((0 < piVar4[1]) && ((piVar4[0x66] & 0xffU) < 2 || (piVar4[0x66] & 0xffU) == 9)) &&
     ((*(uint *)(*(int *)(*(int *)(*(int *)(*piVar4 + 0xc) + piVar4[100] * 4) + 0x18) +
                piVar4[0x65] * 0x3c + 0xc) >> 0x10 & 2) != 0)) {
    iVar1 = *DAT_0020036c;
    iVar3 = *(int *)(iVar1 + 0x54);
    if (iVar3 < *(int *)(iVar1 + 0x4c)) {
      *(int *)(iVar1 + 0x54) = iVar3 + 1;
      iVar3 = iVar3 + *(int *)(iVar1 + 0x50);
      if (*(int *)(iVar1 + 0x4c) <= iVar3) {
        iVar3 = iVar3 - *(int *)(iVar1 + 0x4c);
      }
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x48) + iVar3 * 0x18);
      *puVar2 = uVar5;
      puVar2[1] = piVar4;
      puVar2[2] = (int)uVar6;
      puVar2[3] = (int)((ulonglong)uVar6 >> 0x20);
      puVar2[4] = (int)uVar7;
      puVar2[5] = (int)((ulonglong)uVar7 >> 0x20);
    }
  }
  return;
}

