#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004D5810(uint param_1,int param_2,int param_3);
extern int func_00513148(int param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_004d4a5c;
extern uint *DAT_004d4a60;
extern int *DAT_004d4a64;
extern uint *DAT_004d4a68;
extern int *DAT_004d4a6c;
extern uint *DAT_004d4a70;
extern int *DAT_004d4a74;
extern uint *DAT_004d4a78;
extern int *DAT_004d4a7c;
extern uint *DAT_004d4a80;
extern undefined4 *DAT_004d4a84;
extern undefined4 DAT_004d4a88;
extern undefined4 *DAT_004d4a8c;
extern undefined4 DAT_004d4a90;
extern undefined4 DAT_004d4a94;

// USA 004D4764 <- EU 004D473C (Ghidra, non-matching)
// GLOBAL DAT_004d4a5c int *
// GLOBAL DAT_004d4a60 uint *
// GLOBAL DAT_004d4a64 int *
// GLOBAL DAT_004d4a68 uint *
// GLOBAL DAT_004d4a6c int *
// GLOBAL DAT_004d4a70 uint *
// GLOBAL DAT_004d4a74 int *
// GLOBAL DAT_004d4a78 uint *
// GLOBAL DAT_004d4a7c int *
// GLOBAL DAT_004d4a80 uint *
// GLOBAL DAT_004d4a84 undefined4 *
// GLOBAL DAT_004d4a88 undefined4
// GLOBAL DAT_004d4a8c undefined4 *
// GLOBAL DAT_004d4a90 undefined4
// GLOBAL DAT_004d4a94 undefined4

undefined4 func_004D4764(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define local_2f8 (*(int *)(albw_frame + 0x8))
  #define local_2f4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2f0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x14))
  #define local_2e8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_2e4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2d8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2b0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2ac (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_30 (*(undefined4 *)(albw_frame + 0x2d0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x2d4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2d8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2dc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x2e0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x2e4))
  uVar8 = 0;
  if (param_2 != 0) {
    uVar8 = *(uint *)(param_2 + 0x14);
  }
  if (uVar8 < *(uint *)(param_1 + 0x620)) {
    puVar1 = (undefined1 *)(*(int *)(param_1 + 0x624) + uVar8 * 0x118);
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 0x624);
  }
  iVar6 = 3;
  *puVar1 = 3;
  if (uVar8 < *(uint *)(param_1 + 0x478)) {
    iVar6 = *(int *)(param_1 + 0x480);
  }
  if (uVar8 < *(uint *)(param_1 + 0x478)) {
    iVar6 = *(int *)(iVar6 + uVar8 * 4);
  }
  else {
    iVar6 = 0;
  }
  if (uVar8 < *(uint *)(param_1 + 0x620)) {
    uVar2 = *(int *)(param_1 + 0x624) + uVar8 * 0x118;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x624);
  }
  func_004D5810(uVar2,param_1,iVar6);
  if (uVar8 < *(uint *)(param_1 + 0x620)) {
    iVar6 = *(int *)(param_1 + 0x624) + uVar8 * 0x118;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x624);
  }
  iVar6 = *(int *)(iVar6 + 0x28);
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(iVar6 + 8);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar6 + 0xc);
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x61c);
  }
  local_2d8 = 0;
  local_2d4 = 0;
  local_2dc = 0;
  local_2b0 = 0;
  local_2ac = 0;
  local_38 = 0;
  func_002DFF7C(&local_2f8);
  iVar6 = func_00588BE4(param_1);
  if (iVar6 == *DAT_004d4a5c) {
    local_2f8 = func_0019B04C(*DAT_004d4a60);
  }
  else {
    iVar6 = func_00588BE4(param_1);
    if (iVar6 == *DAT_004d4a64) {
      local_2f8 = func_0019B04C(*DAT_004d4a68);
    }
    else {
      iVar6 = func_00588BE4(param_1);
      if (iVar6 == *DAT_004d4a6c) {
        local_2f8 = func_0019B04C(*DAT_004d4a70);
      }
      else {
        iVar6 = func_00588BE4(param_1);
        if (iVar6 == *DAT_004d4a74) {
          local_2f8 = func_0019B04C(*DAT_004d4a78);
        }
      }
    }
  }
  piVar4 = DAT_004d4a7c;
  local_2e8 = *(undefined4 *)(param_1 + 0x14);
  local_2e4 = *(undefined4 *)(param_1 + 0x18);
  local_2e0 = *(undefined4 *)(param_1 + 0x1c);
  local_2f4 = *(undefined4 *)(param_1 + 0x3d0);
  local_2f0 = *(undefined4 *)(param_1 + 0x3d4);
  local_2ec = *(undefined4 *)(param_1 + 0x3d8);
  piVar3 = func_004C4AF4(*DAT_004d4a7c,&local_2f8,0);
  if (piVar3 != (int *)0x0 && param_2 != 0) {
    *(int *)(param_2 + 4) = piVar3[0xb3];
    if (((*DAT_004d4a80 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_004d4a80), iVar6 != 0)) {
      *DAT_004d4a84 = DAT_004d4a88;
    }
    iVar6 = (**(code **)*piVar3)(piVar3,DAT_004d4a84);
    if (iVar6 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      if (((uVar8 < *(uint *)(param_1 + 0x478)) &&
          (iVar6 = *(int *)(*(int *)(param_1 + 0x480) + uVar8 * 4), iVar6 != 0)) &&
         (*(short *)(iVar6 + 0x2e) == 1)) {
        local_2c = *DAT_004d4a8c;
        local_30 = DAT_004d4a90;
        local_20 = *(undefined4 *)(iVar6 + 0xc);
        local_28 = *(undefined4 *)(iVar6 + 4);
        uStack_24 = *(undefined4 *)(iVar6 + 8);
        local_1c = DAT_004d4a94;
        iVar6 = *piVar4;
        piVar7 = *(int **)(iVar6 + 0x3dbc8);
        piVar4 = func_0052FCA4(iVar6 + 0x3dbbc,&local_30,*(int **)(iVar6 + 0x3dbc0));
        bVar9 = piVar4 != piVar7;
        if (bVar9) {
          piVar4 = (int *)*piVar4;
        }
        if (bVar9 && piVar4 != (int *)0x0) {
          func_00513148((int)piVar4);
        }
      }
      uVar5 = (**(code **)(*piVar3 + 0x50))(piVar3,param_2);
      return uVar5;
    }
  }
  return 0;
}

