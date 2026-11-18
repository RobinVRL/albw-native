#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0019B04C(uint param_1);
extern int func_00237288(int *param_1,uint param_2,int param_3);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_00506020;
extern uint *DAT_00506024;
extern int *DAT_00506028;
extern uint *DAT_0050602c;
extern int *DAT_00506030;
extern uint *DAT_00506034;
extern undefined4 *DAT_00506038;
extern undefined4 DAT_0050603c;

// USA 00505E00 <- EU 00505DD8 (Ghidra, non-matching)
// GLOBAL DAT_00506020 int *
// GLOBAL DAT_00506024 uint *
// GLOBAL DAT_00506028 int *
// GLOBAL DAT_0050602c uint *
// GLOBAL DAT_00506030 int *
// GLOBAL DAT_00506034 uint *
// GLOBAL DAT_00506038 undefined4 *
// GLOBAL DAT_0050603c undefined4

undefined4 func_00505E00(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(int *)(albw_frame + 0xc))
  #define local_2d0 (*(int *)(albw_frame + 0x10))
  #define local_2cc (*(int *)(albw_frame + 0x14))
  #define local_2c8 (*(int *)(albw_frame + 0x18))
  #define local_2c4 (*(int *)(albw_frame + 0x1c))
  #define local_2c0 (*(int *)(albw_frame + 0x20))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2ae (*(ushort *)(albw_frame + 0x32))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = *(uint *)(param_2 + 0x14);
  }
  if (uVar6 < (uint)param_1[0x18c]) {
    pcVar5 = (char *)(param_1[0x18d] + uVar6 * 0x104);
  }
  else {
    pcVar5 = (char *)param_1[0x18d];
  }
  if (*pcVar5 == '\x03') {
    func_00237288(param_1,uVar6,3);
    return 0;
  }
  if (uVar6 < (uint)param_1[0x18c]) {
    puVar1 = (undefined1 *)(param_1[0x18d] + uVar6 * 0x104);
  }
  else {
    puVar1 = (undefined1 *)param_1[0x18d];
  }
  *puVar1 = 4;
  func_00237288(param_1,uVar6,4);
  if (uVar6 < (uint)param_1[0x18c]) {
    iVar2 = param_1[0x18d] + uVar6 * 0x104;
  }
  else {
    iVar2 = param_1[0x18d];
  }
  iVar2 = *(int *)(iVar2 + 0x30);
  if (iVar2 != 0) {
    param_1[0xf4] = *(int *)(iVar2 + 4);
    param_1[0xf5] = *(int *)(iVar2 + 8);
    param_1[0xf6] = *(int *)(iVar2 + 0xc);
    param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x188])));
  }
  local_2b8 = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_290 = 0;
  local_28c = 0;
  local_18 = 0;
  func_002DFF7C(&local_2d8);
  iVar2 = func_00588BE4((int)param_1);
  if (iVar2 == *DAT_00506020) {
    local_2d8 = func_0019B04C(*DAT_00506024);
  }
  else {
    iVar2 = func_00588BE4((int)param_1);
    if (iVar2 == *DAT_00506028) {
      local_2d8 = func_0019B04C(*DAT_0050602c);
    }
  }
  local_2c8 = param_1[5];
  local_2c4 = param_1[6];
  local_2c0 = param_1[7];
  local_2d4 = param_1[0xf4];
  local_2d0 = param_1[0xf5];
  local_2cc = param_1[0xf6];
  iVar2 = param_1[0x18d];
  if (uVar6 < (uint)param_1[0x18c]) {
    iVar2 = iVar2 + uVar6 * 0x104;
  }
  local_2ae = (ushort)*(byte *)(iVar2 + 0xea);
  piVar3 = func_004C4AF4(*DAT_00506030,&local_2d8,0);
  if (piVar3 != (int *)0x0 && param_2 != 0) {
    *(int *)(param_2 + 4) = piVar3[0xb3];
    if (((*DAT_00506034 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00506034), iVar2 != 0)) {
      *DAT_00506038 = DAT_0050603c;
    }
    iVar2 = (**(code **)*piVar3)(piVar3,DAT_00506038);
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

