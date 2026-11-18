#include "ghidra_types.h"

extern int func_0010BB14(int param_1);
extern int func_003F6F80(int param_1,int *param_2);
extern int func_003F9A00(uint param_1,undefined4 param_2);
extern int func_00600660(int param_1);
extern undefined4 DAT_003f9990;
extern undefined4 DAT_003f9994;

// USA 003F9538 <- EU 003F9518 (Ghidra, non-matching)
// GLOBAL DAT_003f9990 undefined4
// GLOBAL DAT_003f9994 undefined4

void func_003F9538(int param_1,int *param_2,undefined *param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int *piVar9;
  int *unaff_r7;
  int iVar10;
  
  if (param_2 != (int *)0x0) {
    unaff_r7 = param_2;
  }
  iVar10 = 0;
  if (param_2 == (int *)0x0) {
    unaff_r7 = *(int **)(param_1 + 0x1c);
  }
  if (0 < *(int *)(*(int *)(param_1 + 0xc) + 8)) {
    do {
      iVar6 = 0;
      piVar9 = (int *)(*(int *)(param_1 + 0x18) + iVar10 * 0x3c);
      if (0 < *(int *)(*piVar9 + 0x10)) {
        do {
          iVar8 = piVar9[1] + iVar6 * 8;
          iVar5 = *(int *)(iVar8 + 4);
          uVar4 = *(uint *)(iVar5 + 0xb8);
          if (uVar4 != 0) {
            if (*(int *)(iVar5 + 0xb0) == 0) {
              (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
            }
            else {
              uVar3 = func_00600660(0x20000);
              if (((uVar3 <= uVar4) && (uVar3 = func_0010BB14(0x20000), uVar4 < uVar3)) ||
                 ((uVar3 = func_00600660(0x30000), uVar3 <= uVar4 &&
                  (uVar3 = func_0010BB14(0x30000), uVar4 < uVar3)))) {
                func_003F9A00(*(uint *)(iVar5 + 0xb8),DAT_003f9990);
              }
            }
            *(undefined4 *)(iVar5 + 0xb8) = 0;
          }
          iVar5 = *(int *)(iVar8 + 4);
          uVar4 = *(uint *)(iVar5 + 0x134);
          if (uVar4 != 0) {
            if (*(int *)(iVar5 + 300) == 0) {
              (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
            }
            else {
              uVar3 = func_00600660(0x20000);
              if (((uVar3 <= uVar4) && (uVar3 = func_0010BB14(0x20000), uVar4 < uVar3)) ||
                 ((uVar3 = func_00600660(0x30000), uVar3 <= uVar4 &&
                  (uVar3 = func_0010BB14(0x30000), uVar4 < uVar3)))) {
                func_003F9A00(*(uint *)(iVar5 + 0x134),DAT_003f9990);
              }
            }
            *(undefined4 *)(iVar5 + 0x134) = 0;
          }
          piVar2 = *(int **)(iVar8 + 4);
          if (((*piVar2 == 1) && ((piVar2[0x152] & 1U) != 0)) && (uVar4 = piVar2[0x18a], uVar4 != 0)
             ) {
            if (piVar2[0x188] == 0) {
              (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
            }
            else {
              uVar3 = func_00600660(0x20000);
              if (((uVar3 <= uVar4) && (uVar3 = func_0010BB14(0x20000), uVar4 < uVar3)) ||
                 ((uVar3 = func_00600660(0x30000), uVar3 <= uVar4 &&
                  (uVar3 = func_0010BB14(0x30000), uVar4 < uVar3)))) {
                func_003F9A00(piVar2[0x18a],DAT_003f9990);
              }
            }
            piVar2[0x18a] = 0;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(*piVar9 + 0x10));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(*(int *)(param_1 + 0xc) + 8));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      func_003F6F80(*(int *)(*(int *)(param_1 + 0x20) + uVar4 * 4),unaff_r7);
      (**(code **)(*unaff_r7 + 0xc))(unaff_r7,*(undefined4 *)(*(int *)(param_1 + 0x20) + uVar4 * 4))
      ;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x24));
  }
  (**(code **)(*unaff_r7 + 0xc))(unaff_r7,*(undefined4 *)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar1 = DAT_003f9994;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      do {
        puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x28) + uVar4 * 4);
        if (*(int *)(puVar7 + 0x14) != 0) {
          (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
          *(undefined4 *)(puVar7 + 0x14) = 0;
        }
        if (*(uint *)(puVar7 + 0x18) != 0) {
          func_003F9A00(*(uint *)(puVar7 + 0x18),uVar1);
          *(undefined4 *)(puVar7 + 0x18) = 0;
        }
        if (*(int *)(puVar7 + 0x28) != 0) {
          (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
          *(undefined4 *)(puVar7 + 0x28) = 0;
        }
        if (*(uint *)(puVar7 + 0x2c) != 0) {
          func_003F9A00(*(uint *)(puVar7 + 0x2c),uVar1);
          *(undefined4 *)(puVar7 + 0x2c) = 0;
        }
        if (*(int *)(puVar7 + 0x3c) != 0) {
          (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
          *(undefined4 *)(puVar7 + 0x3c) = 0;
        }
        if (*(uint *)(puVar7 + 0x40) != 0) {
          func_003F9A00(*(uint *)(puVar7 + 0x40),uVar1);
          *(undefined4 *)(puVar7 + 0x40) = 0;
        }
        if (*(int *)(puVar7 + 0x50) != 0) {
          (**(code **)(*unaff_r7 + 0xc))(unaff_r7);
          *(undefined4 *)(puVar7 + 0x50) = 0;
        }
        if (*(uint *)(puVar7 + 0x54) != 0) {
          func_003F9A00(*(uint *)(puVar7 + 0x54),uVar1);
          *(undefined4 *)(puVar7 + 0x54) = 0;
        }
        *(undefined4 *)(puVar7 + 4) = 0;
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 0x58) = 0;
        *(undefined4 *)(puVar7 + 0x5c) = 0;
        *(undefined4 *)(puVar7 + 0x60) = 0;
        *(undefined4 *)(puVar7 + 100) = 0;
        *(undefined4 *)(puVar7 + 0x804) = 0;
        (**(code **)(*unaff_r7 + 0xc))
                  (unaff_r7,*(undefined4 *)(*(int *)(param_1 + 0x28) + uVar4 * 4));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x2c));
    }
    (**(code **)(*unaff_r7 + 0xc))(unaff_r7,*(undefined4 *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

