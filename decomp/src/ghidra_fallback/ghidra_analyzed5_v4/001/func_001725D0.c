#include "ghidra_types.h"

extern int func_00172018(int param_1,undefined4 param_2);
extern int func_0058DCB8(int param_1);
extern int *DAT_001726dc;

// USA 001725D0 <- EU 001725D0 (Ghidra, non-matching)
// GLOBAL DAT_001726dc int *

undefined4 func_001725D0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if ((*(char *)(param_1 + 0x70) != '\t') && ((*(uint *)(param_1 + 0x2b4) & 2) == 0)) {
    if ((*(uint *)(param_1 + 0x2b4) & 4) == 0) {
      iVar1 = func_0058DCB8(*DAT_001726dc);
      if (iVar1 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) | 4;
    }
    puVar2 = (undefined4 *)(param_1 + 0x104);
    if (*(byte *)(param_1 + 0x70) < 9) {
      puVar2 = puVar2 + (uint)*(byte *)(param_1 + 0x70) * 4;
    }
    iVar1 = (**(code **)*puVar2)(puVar2);
    if (iVar1 != 0) {
      uVar3 = *(uint *)(param_1 + 0x2c8);
      uVar4 = uVar3 + 1;
      if (uVar3 < uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)(param_1 + 0x2c8) = uVar4;
      *(uint *)(param_1 + 0x2c8) = uVar3;
    }
    puVar2 = (undefined4 *)(param_1 + 0x194);
    if (*(byte *)(param_1 + 0x70) < 9) {
      puVar2 = puVar2 + (uint)*(byte *)(param_1 + 0x70) * 4;
    }
    uVar6 = (**(code **)*puVar2)(puVar2);
    uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
    bVar5 = (int)uVar6 != 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(param_1 + 0x70);
    }
    if (bVar5 && uVar3 != 9) {
      uVar4 = *(uint *)(param_1 + 0x2c0);
      iVar1 = *(int *)(param_1 + 0x2c4);
      if ((uVar4 != 0xffffffff || iVar1 != -1) &&
         (bVar5 = *(uint *)(param_1 + 0x2c8) < uVar4,
         (int)-(iVar1 + (uint)bVar5) < 0 == (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5)))) {
        if ((uVar3 == 6 || uVar3 == 7) || uVar3 == 8) {
          *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x2c0);
        }
        if ((uVar3 != 6 && uVar3 != 7) && uVar3 != 8) {
          return func_00172018(param_1,1);
        }
      }
    }
  }
  return 0;
}

