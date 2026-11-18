#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0019D01C(int *param_1,int *param_2,int *param_3);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_004B55CC(undefined4 param_1,undefined4 *param_2,int param_3,int param_4);
extern int func_00582DD4(undefined4 param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691D84(int *param_1,int *param_2);
extern undefined4 DAT_004b1e38;
extern undefined4 DAT_004b1e3c;
extern undefined4 DAT_004b1e40;
extern undefined4 DAT_004b1e44;
extern undefined4 *DAT_004b1e48;
extern int DAT_004b1e4c;
extern undefined4 DAT_004b1e50;

// USA 004B1C34 <- EU 004B1C0C (Ghidra, non-matching)
// GLOBAL DAT_004b1e38 undefined4
// GLOBAL DAT_004b1e3c undefined4
// GLOBAL DAT_004b1e40 undefined4
// GLOBAL DAT_004b1e44 undefined4
// GLOBAL DAT_004b1e48 undefined4 *
// GLOBAL DAT_004b1e4c int
// GLOBAL DAT_004b1e50 undefined4

void func_004B1C34(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c (*(int * *)(albw_frame + 0x4))
  #define local_98 (*(uint *)(albw_frame + 0x8))
  #define local_94 (*(int *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(uint *)(albw_frame + 0x18))
  #define local_84 (*(uint *)(albw_frame + 0x1c))
  #define aiStack_80 ((int *)(albw_frame + 0x20))
  #define auStack_74 ((undefined1 *)(albw_frame + 0x2c))
  #define aiStack_54 ((int *)(albw_frame + 0x4c))
  #define auStack_48 ((undefined1 *)(albw_frame + 0x58))
  puVar3 = func_00689A2C(aiStack_54,auStack_48,0x10);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = DAT_004b1e3c;
  func_00688CA0(param_3,aiStack_54);
  uVar4 = func_00691D84(param_2,aiStack_54);
  puVar3 = func_00689A2C(aiStack_80,auStack_74,0x1e);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = DAT_004b1e44;
  func_00688CA0(param_3,aiStack_80);
  if (-1 < (int)uVar4) {
    piVar5 = param_2 + 0xb9;
    bVar2 = func_00582DD4(param_1,aiStack_80);
    uVar9 = (uint)bVar2;
    if (uVar9 == 2) {
      piVar5 = param_2 + 0x16d9;
    }
    else if (uVar9 == 3) {
      piVar5 = param_2 + 0x2cf9;
    }
    if (uVar4 < 0x10) {
      piVar5 = piVar5 + uVar4 * 0x162;
    }
    if (piVar5[0x161] == 0) {
      piVar7 = (int *)(param_1 + 0x1418);
      piVar8 = piVar7;
      if (uVar4 < 0x10) {
        piVar8 = piVar7 + uVar4;
      }
      if (*piVar8 == 0) {
        return;
      }
      if (uVar4 < 0x10) {
        piVar7 = piVar7 + uVar4;
      }
      piVar5[0x161] = *(int *)(*piVar7 + 4);
    }
    local_98 = 0;
    local_88 = 0xffffffff;
    local_84 = 0xffffffff;
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    local_9c = piVar5;
    local_88 = func_0019D01C(piVar5,aiStack_80,(int *)0x0);
    local_98 = uVar9;
    func_004B55CC(param_1,&local_9c,param_3,param_4);
    puVar3 = DAT_004b1e48;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar11 = 1;
    }
    else {
      iVar11 = func_0010983C(*DAT_004b1e48,*(int *)(param_1 + 0x20));
    }
    puVar6 = (undefined4 *)func_0010BAB4(0x20);
    if (puVar6 != (undefined4 *)0x0) {
      uVar9 = *(uint *)(DAT_004b1e4c + local_98 * 4);
      uVar10 = *(uint *)(DAT_004b1e4c + local_94 * 4);
      puVar6[1] = param_2[0x670d];
      puVar6[2] = 8;
      uVar1 = DAT_004b1e50;
      puVar6[4] = local_88 | uVar9;
      *puVar6 = uVar1;
      puVar6[3] = uVar4;
      puVar6[5] = local_90;
      puVar6[6] = local_84 | uVar10;
      puVar6[7] = local_8c;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar6);
    if (iVar11 != 1) {
      func_0010983C(*puVar3,iVar11);
    }
  }
  return;
}

