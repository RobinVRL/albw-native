#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0019D01C(int *param_1,int *param_2,int *param_3);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_004B55CC(undefined4 param_1,undefined4 *param_2,int param_3,int param_4);
extern int func_00688CA0(int param_1,int *param_2);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691E50(int *param_1,int *param_2);
extern undefined4 DAT_004b41c4;
extern undefined4 DAT_004b41c8;
extern undefined4 DAT_004b41cc;
extern undefined4 DAT_004b41d0;
extern undefined1 DAT_004b41d4;
extern int DAT_004b41d8;
extern undefined4 *DAT_004b41dc;
extern int DAT_004b41e0;
extern undefined4 DAT_004b41e4;

// USA 004B3EF8 <- EU 004B3ED0 (Ghidra, non-matching)
// GLOBAL DAT_004b41c4 undefined4
// GLOBAL DAT_004b41c8 undefined4
// GLOBAL DAT_004b41cc undefined4
// GLOBAL DAT_004b41d0 undefined4
// GLOBAL DAT_004b41d4 undefined1
// GLOBAL DAT_004b41d8 int
// GLOBAL DAT_004b41dc undefined4 *
// GLOBAL DAT_004b41e0 int
// GLOBAL DAT_004b41e4 undefined4

void func_004B3EF8(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_cc (*(int * *)(albw_frame + 0x4))
  #define local_c8 (*(int *)(albw_frame + 0x8))
  #define local_c4 (*(int *)(albw_frame + 0xc))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_bc (*(undefined4 *)(albw_frame + 0x14))
  #define local_b8 (*(uint *)(albw_frame + 0x18))
  #define local_b4 (*(uint *)(albw_frame + 0x1c))
  #define local_b0 (*(int *)(albw_frame + 0x20))
  #define local_ac (*(int *)(albw_frame + 0x24))
  #define auStack_a4 ((undefined1 *)(albw_frame + 0x2c))
  #define aiStack_84 ((int *)(albw_frame + 0x4c))
  #define auStack_78 ((undefined1 *)(albw_frame + 0x58))
  #define local_58 (*(int *)(albw_frame + 0x78))
  #define local_54 (*(undefined1 * *)(albw_frame + 0x7c))
  #define local_4c (*(int *)(albw_frame + 0x84))
  #define local_48 (*(int * *)(albw_frame + 0x88))
  #define iStack_34 (*(int *)(albw_frame + 0x9c))
  #define iStack_30 (*(int *)(albw_frame + 0xa0))
  #define local_2c (*(int *)(albw_frame + 0xa4))
  #define iStack_28 (*(int *)(albw_frame + 0xa8))
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  puVar3 = func_00689A2C(aiStack_84,auStack_78,0x10);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = DAT_004b41c8;
  func_00688CA0(local_2c,aiStack_84);
  uVar4 = func_00691E50((int *)(param_2 + 0x270),aiStack_84);
  puVar3 = func_00689A2C(&local_b0,auStack_a4,0x1e);
  *(undefined1 *)puVar3[1] = 0;
  *puVar3 = DAT_004b41d0;
  func_00688CA0(local_2c,&local_b0);
  if ((int)uVar4 < 0) {
    return;
  }
  local_4c = 0;
  local_54 = &DAT_004b41d4;
  local_48 = (int *)(param_2 + 0x16ff4);
  local_58 = DAT_004b41d8;
  (**(code **)(local_b0 + 8))(&local_b0);
  iVar5 = 0;
  do {
    if (*(char *)(local_ac + iVar5) == '\0') {
      if ((iVar5 < 0x40001) && (iVar5 != 0)) {
        iVar5 = iVar5 + -1;
        iVar12 = 0;
        if (-1 < iVar5) goto LAB_004b3fd8;
      }
      break;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x40001);
LAB_004b403c:
  bVar1 = false;
LAB_004b4040:
  if (bVar1) {
    local_4c = 3;
    local_48 = (int *)(param_2 + 0x18614);
  }
  local_cc = local_48;
  if (uVar4 < 4) {
    local_cc = local_48 + uVar4 * 0x162;
  }
  if (local_cc[0x161] == 0) {
    piVar8 = (int *)(param_1 + 0x18a4);
    piVar9 = piVar8;
    if (uVar4 < 4) {
      piVar9 = piVar8 + uVar4;
    }
    if (*piVar9 == 0) {
      return;
    }
    if (uVar4 < 4) {
      piVar8 = piVar8 + uVar4;
    }
    local_cc[0x161] = *(int *)(*piVar8 + 4);
  }
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_bc = 0;
  local_b4 = 0xffffffff;
  local_b8 = func_0019D01C(local_cc,&local_b0,(int *)0x0);
  local_c8 = local_4c;
  func_004B55CC(param_1,&local_cc,local_2c,iStack_28);
  puVar3 = DAT_004b41dc;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_004b41dc,*(int *)(param_1 + 0x20));
  }
  puVar7 = (undefined4 *)func_0010BAB4(0x20);
  if (puVar7 != (undefined4 *)0x0) {
    uVar10 = *(uint *)(DAT_004b41e0 + local_c8 * 4);
    uVar11 = *(uint *)(DAT_004b41e0 + local_c4 * 4);
    puVar7[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar7[2] = 10;
    uVar2 = DAT_004b41e4;
    puVar7[4] = local_b8 | uVar10;
    *puVar7 = uVar2;
    puVar7[3] = uVar4;
    puVar7[5] = local_c0;
    puVar7[6] = local_b4 | uVar11;
    puVar7[7] = local_bc;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar7);
  if (iVar5 != 1) {
    func_0010983C(*puVar3,iVar5);
  }
  return;
LAB_004b3fd8:
  do {
    (**(code **)(local_58 + 8))(&local_58);
    iVar6 = 0;
    while( true ) {
      if (local_54[iVar6] == '\0') goto LAB_004b4030;
      if (local_54[iVar6] == *(char *)(local_ac + iVar5)) break;
      iVar6 = iVar6 + 1;
      if (0x40000 < iVar6) goto LAB_004b4030;
    }
    *(undefined1 *)(local_ac + iVar5) = 0;
    iVar5 = iVar5 + -1;
    iVar12 = iVar12 + 1;
  } while (-1 < iVar5);
LAB_004b4030:
  if (0 < iVar12) {
    bVar1 = true;
    goto LAB_004b4040;
  }
  goto LAB_004b403c;
}

