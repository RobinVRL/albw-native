#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern uint *DAT_001bc420;
extern int *DAT_001bc424;
extern uint *DAT_001bc428;
extern undefined4 *DAT_001bc42c;
extern undefined4 DAT_001bc430;

// USA 001BC274 <- EU 001BC274 (Ghidra, non-matching)
// GLOBAL DAT_001bc420 uint *
// GLOBAL DAT_001bc424 int *
// GLOBAL DAT_001bc428 uint *
// GLOBAL DAT_001bc42c undefined4 *
// GLOBAL DAT_001bc430 undefined4

undefined4 func_001BC274(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2aa (*(undefined2 *)(albw_frame + 0x36))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x14);
  }
  if (uVar1 < *(uint *)(param_1 + 0x620)) {
    puVar5 = (undefined1 *)(*(int *)(param_1 + 0x624) + uVar1 * 0xd8);
  }
  else {
    puVar5 = *(undefined1 **)(param_1 + 0x624);
  }
  *puVar5 = 1;
  if (uVar1 < *(uint *)(param_1 + 0x620)) {
    iVar2 = *(int *)(param_1 + 0x624) + uVar1 * 0xd8;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x624);
  }
  iVar2 = *(int *)(iVar2 + 0x20);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(iVar2 + 0xc);
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x61c);
  }
  local_2b8 = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_290 = 0;
  local_28c = 0;
  local_18 = 0;
  func_002DFF7C(&local_2d8);
  local_2d8 = func_0019B04C(*DAT_001bc420);
  local_2c8 = *(undefined4 *)(param_1 + 0x14);
  local_2c4 = *(undefined4 *)(param_1 + 0x18);
  local_2c0 = *(undefined4 *)(param_1 + 0x1c);
  local_2d4 = *(undefined4 *)(param_1 + 0x3d0);
  local_2d0 = *(undefined4 *)(param_1 + 0x3d4);
  local_2cc = *(undefined4 *)(param_1 + 0x3d8);
  local_2aa = 0;
  piVar3 = func_004C4AF4(*DAT_001bc424,&local_2d8,0);
  if (piVar3 != (int *)0x0) {
    if (param_2 != 0) {
      *(int *)(param_2 + 4) = piVar3[0xb3];
    }
    if (((*DAT_001bc428 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001bc428), iVar2 != 0)) {
      *DAT_001bc42c = DAT_001bc430;
    }
    iVar2 = (**(code **)*piVar3)(piVar3,DAT_001bc42c);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,param_2);
      return uVar4;
    }
  }
  return 0;
}

