#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int DAT_00415e90;

// USA 00415C34 <- EU 00415C14 (Ghidra, non-matching)
// GLOBAL DAT_00415e90 int

undefined4 func_00415C34(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 ((undefined4 *)(albw_frame + 0x0))
  #define local_34 (*(uint *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  piVar1 = *(int **)(DAT_00415e90 + 4);
  uVar6 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,*(undefined4 *)(param_1 + 0x14),&local_34);
    uVar6 = 0;
    if (iVar2 != 0) {
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined2 *)(param_2 + 0x38) = *(undefined2 *)(param_1 + 0x38);
      *(uint *)(*(int *)(param_1 + 0x18) + 0x2c) = local_34;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x30) = 1;
      **(undefined1 **)(param_1 + 0x18) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = local_30;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 8) = *(undefined1 *)(param_1 + 0x24);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = local_2c;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20) = 0x800;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x24) = 0x800;
      *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x10) = *(undefined4 *)(param_1 + 0x30);
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x14) = *(undefined1 *)(param_1 + 0x34);
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x15) = *(undefined1 *)(param_1 + 0x35);
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x16) = *(undefined1 *)(param_1 + 0x36);
      if (local_34 != 0) {
        uVar3 = local_34 & 1;
        uVar7 = (uint)(uVar3 == 1);
        if (uVar3 == 1) {
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        for (; uVar3 < local_34; uVar3 = uVar3 + 2) {
          iVar2 = uVar7 + 1;
          *(undefined4 *)(param_2 + uVar7 * 4 + 0x18) = 0;
          uVar7 = uVar7 + 2;
          *(undefined4 *)(param_2 + iVar2 * 4 + 0x18) = 0;
        }
      }
      iVar8 = *(int *)(param_1 + 0x18);
      uVar3 = *(uint *)(iVar8 + 0x1c);
      uVar7 = *(uint *)(iVar8 + 0xc);
      uVar9 = func_00110710(uVar7,uVar3);
      iVar2 = *(int *)(iVar8 + 0x18);
      uVar10 = func_00110710(iVar2 - 1,uVar3);
      if (*(char *)(iVar8 + 8) == '\0') {
        iVar2 = 0x400;
      }
      else {
        iVar2 = iVar2 - uVar3 * (int)uVar10;
      }
      *(int *)(iVar8 + 0x28) = iVar2;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x34) = 0x7f;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x35) = 0x40;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x36) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x37) = 3;
      *(char *)(*(int *)(param_1 + 0x18) + 0x3e) = (char)local_34;
      uVar4 = 0;
      if (local_34 != 0) {
        do {
          uVar5 = uVar4 + 1;
          *(char *)(*(int *)(param_1 + 0x18) + uVar4 + 0x3f) = (char)uVar4;
          uVar4 = uVar5;
        } while (uVar5 < local_34);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x38) = 0x7f;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x39) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x3a) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x3b) = 0x40;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x3c) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x3d) = 0;
      *(uint *)(param_1 + 0x50) = uVar7 - uVar3 * (int)uVar9;
      *(int *)(param_1 + 0x40) = (int)uVar10;
      *(int *)(param_1 + 0x44) = (int)uVar9;
      if (*(code **)(param_1 + 0xc2c) == (code *)0x0) {
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      else {
        local_50[0] = 0;
        iVar2 = (**(code **)(param_1 + 0xc2c))(local_50,*(undefined4 *)(param_1 + 0xc30));
        if (iVar2 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x58) = local_50[0];
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
        *(undefined4 *)(param_1 + 0x60) = 0;
      }
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return uVar6;
}

