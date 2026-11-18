#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0019D01C(int *param_1,int *param_2,int *param_3);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_004B55CC(undefined4 param_1,undefined4 *param_2,int param_3,int param_4);
extern int func_00582DD4(undefined4 param_1,int *param_2);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_004b4458;
extern undefined4 DAT_004b445c;
extern undefined4 DAT_004b4460;
extern undefined4 DAT_004b4464;
extern undefined4 *DAT_004b4468;
extern int DAT_004b446c;
extern undefined4 DAT_004b4470;

// USA 004B4210 <- EU 004B41E8 (Ghidra, non-matching)
// GLOBAL DAT_004b4458 undefined4
// GLOBAL DAT_004b445c undefined4
// GLOBAL DAT_004b4460 undefined4
// GLOBAL DAT_004b4464 undefined4
// GLOBAL DAT_004b4468 undefined4 *
// GLOBAL DAT_004b446c int
// GLOBAL DAT_004b4470 undefined4

void func_004B4210(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_ac (*(int * *)(albw_frame + 0x4))
  #define local_a8 (*(uint *)(albw_frame + 0x8))
  #define local_a4 (*(int *)(albw_frame + 0xc))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(uint *)(albw_frame + 0x18))
  #define local_94 (*(uint *)(albw_frame + 0x1c))
  #define aiStack_90 ((int *)(albw_frame + 0x20))
  #define auStack_84 ((undefined1 *)(albw_frame + 0x2c))
  #define aiStack_64 ((int *)(albw_frame + 0x4c))
  #define auStack_58 ((undefined1 *)(albw_frame + 0x58))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  #define iStack_30 (*(int *)(albw_frame + 0x80))
  #define iStack_2c (*(int *)(albw_frame + 0x84))
  #define local_28 (*(int *)(albw_frame + 0x88))
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  puVar3 = func_00689A2C(aiStack_64,auStack_58,0x10);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = DAT_004b445c;
  func_00688CA0(param_3,aiStack_64);
  uVar7 = 0;
  if (0 < *(int *)(param_2 + 0x26c)) {
    do {
      piVar8 = (int *)(param_2 + 0x1c4) + uVar7 * 7;
      do {
        iVar4 = func_00691884(aiStack_64,piVar8);
        if (iVar4 != 0) goto LAB_004b4294;
        uVar7 = uVar7 + 1;
        if (*(int *)(param_2 + 0x26c) <= (int)uVar7) goto LAB_004b4290;
        piVar8 = (int *)(param_2 + 0x1c4);
      } while (5 < uVar7);
    } while( true );
  }
LAB_004b4290:
  uVar7 = 0xffffffff;
LAB_004b4294:
  puVar3 = func_00689A2C(aiStack_90,auStack_84,0x1e);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = DAT_004b4464;
  func_00688CA0(param_3,aiStack_90);
  if (-1 < (int)uVar7) {
    piVar8 = (int *)(param_2 + 0x10c64);
    bVar2 = func_00582DD4(param_1,aiStack_90);
    uVar6 = (uint)bVar2;
    if (uVar6 == 2) {
      piVar8 = (int *)(param_2 + 0x12d94);
    }
    else if (uVar6 == 3) {
      piVar8 = (int *)(param_2 + 0x14ec4);
    }
    if (uVar7 < 6) {
      piVar8 = piVar8 + uVar7 * 0x162;
    }
    if (piVar8[0x161] == 0) {
      iVar4 = param_1 + 0x1458;
      if (uVar7 < 6) {
        iVar4 = iVar4 + uVar7 * 0x4c;
      }
      piVar8[0x161] = *(int *)(iVar4 + 4);
    }
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_9c = 0;
    local_94 = 0xffffffff;
    local_ac = piVar8;
    local_98 = func_0019D01C(piVar8,aiStack_90,(int *)0x0);
    local_a8 = uVar6;
    func_004B55CC(param_1,&local_ac,param_3,local_28);
    puVar3 = DAT_004b4468;
    if (*(int *)(param_1 + 0x20) == 0) {
      iVar4 = 1;
    }
    else {
      iVar4 = func_0010983C(*DAT_004b4468,*(int *)(param_1 + 0x20));
    }
    puVar5 = (undefined4 *)func_0010BAB4(0x20);
    if (puVar5 != (undefined4 *)0x0) {
      uVar6 = *(uint *)(DAT_004b446c + local_a8 * 4);
      uVar9 = *(uint *)(DAT_004b446c + local_a4 * 4);
      puVar5[1] = *(undefined4 *)(param_2 + 0x19c34);
      puVar5[2] = 9;
      uVar1 = DAT_004b4470;
      puVar5[4] = local_98 | uVar6;
      *puVar5 = uVar1;
      puVar5[3] = uVar7;
      puVar5[5] = local_a0;
      puVar5[6] = local_94 | uVar9;
      puVar5[7] = local_9c;
    }
    func_0048C378((int *)(param_1 + 0x18b4),0,puVar5);
    if (iVar4 != 1) {
      func_0010983C(*puVar3,iVar4);
    }
  }
  return;
}

