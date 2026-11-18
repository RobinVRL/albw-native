#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_003930f8;
extern float DAT_003930fc;
extern undefined4 DAT_00393100;
extern undefined4 *DAT_00393104;
extern undefined4 DAT_00393108;
extern int *DAT_0039310c;
extern uint DAT_00393110;
extern float DAT_00393114;
extern float DAT_00393118;
extern uint DAT_0039311c;

// USA 00392E48 <- EU 00392E24 (Ghidra, non-matching)
// GLOBAL DAT_003930f8 float
// GLOBAL DAT_003930fc float
// GLOBAL DAT_00393100 undefined4
// GLOBAL DAT_00393104 undefined4 *
// GLOBAL DAT_00393108 undefined4
// GLOBAL DAT_0039310c int *
// GLOBAL DAT_00393110 uint
// GLOBAL DAT_00393114 float
// GLOBAL DAT_00393118 float
// GLOBAL DAT_0039311c uint

int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(undefined4 *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(int *)(albw_frame + 0x20))
  #define local_8c (*(int * *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_80 (*(uint *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(undefined4 *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 * *)(albw_frame + 0x3c))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x40))
  #define local_6c (*(undefined4 *)(albw_frame + 0x44))
  #define local_68 (*(undefined1 *)(albw_frame + 0x48))
  #define local_67 (*(undefined1 *)(albw_frame + 0x49))
  #define local_60 (*(int *)(albw_frame + 0x50))
  #define local_5c (*(int * *)(albw_frame + 0x54))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define local_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define local_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_48 (*(ushort *)(albw_frame + 0x68))
  #define local_46 (*(char *)(albw_frame + 0x6a))
  #define local_45 (*(undefined1 *)(albw_frame + 0x6b))
  #define local_44 (*(undefined1 *)(albw_frame + 0x6c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x70))
  piVar1 = DAT_0039310c;
  local_70 = &local_9c;
  local_74 = &local_a8;
  local_9c = *param_1;
  uStack_94 = param_1[2];
  local_a8 = *param_1;
  uStack_a0 = param_1[2];
  iVar7 = 5;
  iVar8 = DAT_00393110 + 8;
  if (param_2 == 0) {
    local_a4 = ALBW_AS_F32(param_1[1]) - DAT_003930f8;
    local_98 = ALBW_AS_F32(param_1[1]) + DAT_003930fc;
    local_80 = DAT_00393110 & 0xffff0000 | 0xffff;
    local_90 = 0;
    local_88 = 0;
    local_84 = 0;
    local_78 = 0;
    local_6c = DAT_00393100;
    local_68 = 0;
    local_67 = 1;
    local_7c = 0xddf;
    local_58 = *DAT_00393104;
    local_54 = DAT_00393104[1];
    local_5c = &local_60;
    local_50 = DAT_00393108;
    local_4c = DAT_00393108;
    uVar6 = 0xf;
    local_48 = 0x1f;
    local_8c = &local_60;
    local_46 = '\0';
    local_45 = 0;
    local_60 = iVar8;
    local_44 = param_4;
    iVar8 = func_004A8030(*DAT_0039310c,&local_90,0xf);
    if (iVar8 != 0) {
      if (local_46 == '\x01') {
        iVar7 = 0;
      }
      else {
        uVar4 = (uint)local_48;
        uVar5 = uVar4 & 0x7e0;
        if (uVar5 == 0x180) {
          uVar6 = uVar4 & 0x1f;
        }
        if (uVar5 == 0x180 && uVar6 == 7) {
          iVar7 = 1;
        }
        else if (uVar5 == 0x160) {
          iVar7 = 2;
        }
        else {
          if (uVar5 == 0xc0) {
            uVar4 = uVar4 & 0x1f;
          }
          if (uVar5 == 0xc0 && uVar4 == 7) {
            iVar7 = 3;
          }
          else {
            iVar7 = 4;
          }
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
joined_r0x003930b0:
      if (iVar7 == 0) {
        local_4c = local_50;
      }
      *param_3 = local_4c;
    }
  }
  else {
    uVar14 = (ulonglong)(uint)ALBW_AS_U32(DAT_00393114);
    local_98 = ALBW_AS_F32(param_1[1]) + DAT_003930fc;
    local_a4 = local_98 - DAT_00393114;
    uVar6 = DAT_00393110;
    uVar11 = DAT_00393108;
    uVar12 = DAT_00393100;
    fVar9 = DAT_003930fc;
    fVar10 = DAT_00393118;
    do {
      local_90 = 0;
      local_80 = DAT_0039311c | uVar6 & 0xffff0000;
      local_88 = 0;
      local_84 = 0;
      local_78 = 0;
      local_68 = 0;
      local_70 = &local_9c;
      local_67 = 1;
      local_74 = &local_a8;
      local_7c = 0xddf;
      local_5c = &local_60;
      local_58 = *DAT_00393104;
      local_54 = DAT_00393104[1];
      local_40 = 0x1f;
      local_48 = 0x1f;
      local_8c = &local_60;
      local_46 = '\0';
      local_45 = 0;
      local_6c = uVar12;
      local_60 = iVar8;
      local_50 = uVar11;
      local_4c = uVar11;
      local_44 = param_4;
      iVar3 = func_004A8030(*piVar1,&local_90,0xf);
      if (iVar3 != 0) {
        if (local_46 == '\x01') {
          iVar7 = 0;
        }
        else {
          uVar2 = local_48 & 0x7e0;
          if (uVar2 == 0x180) {
            local_48 = local_48 & 0x1f;
          }
          if (uVar2 == 0x180 && local_48 == 7) {
            iVar7 = 1;
          }
          else if (uVar2 == 0x160) {
            iVar7 = 2;
          }
          else {
            iVar7 = 4;
          }
        }
        if (param_3 == (undefined4 *)0x0) {
          return iVar7;
        }
        goto joined_r0x003930b0;
      }
      fVar13 = ALBW_AS_F32(uVar14);
      fVar9 = fVar9 - fVar13;
      local_98 = local_98 - fVar13;
      local_a4 = local_a4 - fVar13;
      uVar6 = extraout_r1;
    } while (fVar10 <= fVar9);
  }
  return iVar7;
}

