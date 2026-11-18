#include "ghidra_types.h"

extern int *DAT_00582c64;

// USA 00582A60 <- EU 00582A38 (Ghidra, non-matching)
// GLOBAL DAT_00582c64 int *

void func_00582A60(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar1 = DAT_00582c64;
  iVar2 = *DAT_00582c64;
  if (iVar2 != 0) {
    if (param_3 == 1) {
      iVar5 = *(int *)(*(int *)(iVar2 + 0xf74) + 0x20);
      if (iVar5 != 0) {
        puVar3 = (ushort *)(iVar5 + 0xa0);
        *puVar3 = *puVar3 | 0x10;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0xf74) + 0x24);
      if (iVar2 != 0) {
        puVar3 = (ushort *)(iVar2 + 0xa0);
        *puVar3 = *puVar3 | 0x10;
      }
      iVar5 = *piVar1;
      iVar2 = *(int *)(*(int *)(iVar5 + 0xf74) + 0x20);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 100) = *param_2;
        *(undefined4 *)(iVar2 + 0x68) = param_2[1];
        *(undefined4 *)(iVar2 + 0x6c) = param_2[2];
      }
      iVar2 = *(int *)(*(int *)(iVar5 + 0xf74) + 0x24);
      if (iVar2 != 0) {
        puVar4 = (undefined4 *)(iVar2 + 100);
        goto LAB_00582bd4;
      }
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar2 + 0xf74) + 0x20);
      if (param_3 == 2) {
        if (iVar5 != 0) {
          *(ushort *)(iVar5 + 0xa0) = *(ushort *)(iVar5 + 0xa0) | 0x20;
        }
        iVar2 = *(int *)(*(int *)(iVar2 + 0xf74) + 0x24);
        if (iVar2 != 0) {
          puVar3 = (ushort *)(iVar2 + 0xa0);
          *puVar3 = *puVar3 | 0x20;
        }
        iVar5 = *piVar1;
        iVar2 = *(int *)(*(int *)(iVar5 + 0xf74) + 0x20);
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x70) = *param_2;
          *(undefined4 *)(iVar2 + 0x74) = param_2[1];
          *(undefined4 *)(iVar2 + 0x78) = param_2[2];
        }
        iVar2 = *(int *)(*(int *)(iVar5 + 0xf74) + 0x24);
        if (iVar2 == 0) {
          return;
        }
        puVar4 = (undefined4 *)(iVar2 + 0x70);
LAB_00582bd4:
        *puVar4 = *param_2;
        puVar4[1] = param_2[1];
        puVar4[2] = param_2[2];
        return;
      }
      if (iVar5 != 0) {
        *(ushort *)(iVar5 + 0xa0) = *(ushort *)(iVar5 + 0xa0) | 0x30;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0xf74) + 0x24);
      if (iVar2 != 0) {
        puVar3 = (ushort *)(iVar2 + 0xa0);
        *puVar3 = *puVar3 | 0x30;
      }
      iVar5 = *piVar1;
      iVar2 = *(int *)(*(int *)(iVar5 + 0xf74) + 0x20);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x70) = *param_2;
        *(undefined4 *)(iVar2 + 0x74) = param_2[1];
        *(undefined4 *)(iVar2 + 0x78) = param_2[2];
        *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar2 + 0x70);
        *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0x74);
        *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(iVar2 + 0x78);
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 100);
        *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x68);
        *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar2 + 0x6c);
      }
      iVar2 = *(int *)(*(int *)(iVar5 + 0xf74) + 0x24);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x70) = *param_2;
        *(undefined4 *)(iVar2 + 0x74) = param_2[1];
        *(undefined4 *)(iVar2 + 0x78) = param_2[2];
        *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar2 + 0x70);
        *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar2 + 0x74);
        *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(iVar2 + 0x78);
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 100);
        *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x68);
        *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar2 + 0x6c);
      }
    }
  }
  return;
}

