#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern undefined4 DAT_001a1354;
extern float DAT_001a1358;
extern undefined4 DAT_001a135c;
extern float DAT_001a1360;

// USA 001A1040 <- EU 001A1040 (Ghidra, non-matching)
// GLOBAL DAT_001a1354 undefined4
// GLOBAL DAT_001a1358 float
// GLOBAL DAT_001a135c undefined4
// GLOBAL DAT_001a1360 float

void func_001A1040(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r8;
  uint in_fpscr;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined8 uVar10;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define local_150 ((uint *)(albw_frame + 0x0))
  #define local_148 (*(uint * *)(albw_frame + 0x8))
  #define local_144 (*(uint *)(albw_frame + 0xc))
  #define local_140 (*(float *)(albw_frame + 0x10))
  #define uStack_13c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_138 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_134 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_130 (*(uint *)(albw_frame + 0x20))
  #define local_fc (*(undefined4 *)(albw_frame + 0x54))
  #define local_f8 (*(undefined1 *)(albw_frame + 0x58))
  #define local_f4 ((uint *)(albw_frame + 0x5c))
  #define local_ec (*(undefined4 * *)(albw_frame + 0x64))
  #define local_e8 (*(undefined4 *)(albw_frame + 0x68))
  #define local_e4 (*(float *)(albw_frame + 0x6c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x70))
  #define local_dc (*(undefined4 *)(albw_frame + 0x74))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_d4 (*(uint *)(albw_frame + 0x7c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_9c (*(undefined1 *)(albw_frame + 0xb4))
  #define local_98 ((uint *)(albw_frame + 0xb8))
  #define local_90 (*(uint * *)(albw_frame + 0xc0))
  #define local_8c (*(uint *)(albw_frame + 0xc4))
  #define local_88 (*(float *)(albw_frame + 0xc8))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0xcc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0xd0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0xd4))
  #define local_78 (*(uint *)(albw_frame + 0xd8))
  #define local_44 (*(undefined4 *)(albw_frame + 0x10c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x110))
  #define local_3c (*(int *)(albw_frame + 0x114))
  #define local_38 (*(int *)(albw_frame + 0x118))
  if (param_2 < 7) {
    *(char *)(param_1 + 0x121e) = (char)param_2;
    local_98[1] = 3;
    local_90 = &local_8c;
    uVar10 = CONCAT44(DAT_001a135c,DAT_001a1354);
    local_44 = 10;
    pfVar5 = &local_88;
    local_40 = 0;
    local_98[0] = 1;
    local_78 = unaff_r5 | 0xff;
    local_88 = DAT_001a1358;
    uStack_84 = DAT_001a1354;
    uStack_80 = DAT_001a135c;
    uStack_7c = DAT_001a1354;
    fparam_0 = DAT_001a1358;
    local_8c = param_2;
    func_0016898C(*(int *)(param_1 + 0x410),local_98);
    iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
    uVar7 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar1 + 8) == fparam_0) << 0x1e;
    if (!SUB41(uVar7 >> 0x1e,0)) {
      *(float *)(iVar1 + 8) = fparam_0;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    *(int *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) = (int)uVar10;
    if (*(char *)(param_1 + 0x121e) == '\x06') {
      uVar4 = 0;
      func_004FAB60(param_1,1,0);
      func_004FB4C4(param_1,ALBW_AS_F32(uVar10));
      func_004FB070(param_1,fparam_0);
      *(undefined4 *)(param_1 + 0x11c8) = 2;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x418) + 0xc);
      iVar1 = *(int *)(*(int *)(param_1 + 0x418) + 0x14);
      uVar7 = uVar7 & 0xfffffff | (uint)(*(float *)(iVar1 + 8) == DAT_001a1360) << 0x1e;
      if (!SUB41(uVar7 >> 0x1e,0)) {
        *(float *)(iVar1 + 8) = DAT_001a1360;
        *(undefined1 *)(iVar1 + 0x26) = 1;
      }
      func_00169A80(*(int **)(param_1 + 0x418),uVar3,uVar4,(int *)pfVar5);
      func_00168E9C(*(int **)(param_1 + 0x418),*(int *)(param_1 + 0x40c),(int *)0x0);
    }
    else {
      fVar9 = (float)VectorUnsignedToFloat
                               (*(undefined4 *)(param_1 + 0x11c8),(byte)(uVar7 >> 0x15) & 3);
      iVar1 = *(int *)(*(int *)(param_1 + 0x418) + 0x14);
      uVar7 = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar1 + 8) == fVar9) << 0x1e;
      if (!SUB41(uVar7 >> 0x1e,0)) {
        *(float *)(iVar1 + 8) = fVar9;
        *(undefined1 *)(iVar1 + 0x26) = 1;
      }
    }
    local_38 = param_1 + 0xa10;
    iVar1 = 0;
    local_3c = 4;
    do {
      local_150[1] = 3;
      iVar6 = local_38 + iVar1 * 0x48;
      uStack_13c = (undefined4)uVar10;
      local_148 = &local_144;
      uStack_138 = (undefined4)((ulonglong)uVar10 >> 0x20);
      local_fc = 10;
      local_f8 = 0;
      local_150[0] = 1;
      unaff_r6 = unaff_r6 | 0xff;
      local_144 = param_2;
      local_140 = fparam_0;
      uStack_134 = uStack_13c;
      local_130 = unaff_r6;
      func_0016898C(*(int *)(iVar6 + 0x10),local_150);
      iVar2 = *(int *)(*(int *)(iVar6 + 0x10) + 0x14);
      uVar8 = uVar7 & 0xfffffff | (uint)(*(float *)(iVar2 + 8) == fparam_0) << 0x1e;
      if (!SUB41(uVar8 >> 0x1e,0)) {
        *(float *)(iVar2 + 8) = fparam_0;
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
      uVar3 = (undefined4)uVar10;
      *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x14) + 0x10) = uVar3;
      if (*(char *)(param_1 + 0x121e) == '\x06') {
        local_ec = &local_e8;
        local_dc = (undefined4)((ulonglong)uVar10 >> 0x20);
        local_f4[1] = 3;
        local_a0 = 10;
        local_9c = 0;
        local_f4[0] = 1;
        local_e8 = 1;
        unaff_r8 = unaff_r8 | 0xff;
        local_e4 = fparam_0;
        local_e0 = uVar3;
        local_d8 = uVar3;
        local_d4 = unaff_r8;
        func_0016898C(*(int *)(iVar6 + 0x14),local_f4);
        fVar9 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(param_1 + 0x11c8),(byte)(uVar8 >> 0x15) & 3);
        iVar2 = *(int *)(*(int *)(iVar6 + 0x14) + 0x14);
        uVar7 = uVar8 & 0xfffffff | (uint)(*(float *)(iVar2 + 8) == fVar9) << 0x1e;
        if (!SUB41(uVar7 >> 0x1e,0)) {
          *(float *)(iVar2 + 8) = fVar9;
          *(undefined1 *)(iVar2 + 0x26) = 1;
        }
        *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x14) + 0x14) + 0x10) = uVar3;
      }
      else {
        fVar9 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(param_1 + 0x11c8),(byte)(uVar8 >> 0x15) & 3);
        iVar2 = *(int *)(*(int *)(iVar6 + 0x14) + 0x14);
        uVar7 = uVar7 & 0xfffffff | (uint)(*(float *)(iVar2 + 8) == fVar9) << 0x1e;
        if (!SUB41(uVar7 >> 0x1e,0)) {
          *(float *)(iVar2 + 8) = fVar9;
          *(undefined1 *)(iVar2 + 0x26) = 1;
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != local_3c);
    return;
  }
  return;
}

