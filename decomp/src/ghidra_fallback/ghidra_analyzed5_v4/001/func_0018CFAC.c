// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_001512E8(int *param_1);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_0018D524(int param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00492078(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005569A4();
extern undefined4 DAT_0018d2e0;
extern float DAT_0018d2e4;
extern float DAT_0018d2e8;
extern uint DAT_0018d2ec;
extern int *DAT_0018d2f0;
extern uint *DAT_0018d2f4;
extern int *DAT_0018d2f8;
extern undefined4 *DAT_0018d2fc;

// USA 0018CFAC <- EU 0018CFAC (Ghidra, non-matching)
// GLOBAL DAT_0018d2e0 undefined4
// GLOBAL DAT_0018d2e4 float
// GLOBAL DAT_0018d2e8 float
// GLOBAL DAT_0018d2ec uint
// GLOBAL DAT_0018d2f0 int *
// GLOBAL DAT_0018d2f4 uint *
// GLOBAL DAT_0018d2f8 int *
// GLOBAL DAT_0018d2fc undefined4 *

void func_0018CFAC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_108 (*(float *)(albw_frame + 0x8))
  #define local_104 (*(float *)(albw_frame + 0xc))
  #define local_100 (*(float *)(albw_frame + 0x10))
  #define local_fc (*(float *)(albw_frame + 0x14))
  #define local_f8 (*(float *)(albw_frame + 0x18))
  #define fStack_f4 (*(float *)(albw_frame + 0x1c))
  #define local_f0 (*(float *)(albw_frame + 0x20))
  #define local_ec (*(float *)(albw_frame + 0x24))
  #define local_e8 (*(float *)(albw_frame + 0x28))
  #define local_e4 (*(float *)(albw_frame + 0x2c))
  #define fStack_e0 (*(float *)(albw_frame + 0x30))
  #define local_dc (*(float *)(albw_frame + 0x34))
  #define afStack_d8 ((float *)(albw_frame + 0x38))
  #define local_90 (*(float *)(albw_frame + 0x80))
  #define local_8c (*(float *)(albw_frame + 0x84))
  #define local_88 (*(float *)(albw_frame + 0x88))
  #define afStack_80 ((float *)(albw_frame + 0x90))
  #define local_5c (*(int *)(albw_frame + 0xb4))
  #define local_4c (*(float *)(albw_frame + 0xc4))
  #define local_48 (*(float *)(albw_frame + 0xc8))
  #define local_44 (*(float *)(albw_frame + 0xcc))
  #define local_40 (*(float *)(albw_frame + 0xd0))
  #define fStack_3c (*(float *)(albw_frame + 0xd4))
  #define fStack_38 (*(float *)(albw_frame + 0xd8))
  uVar2 = DAT_0018d2e0;
  local_5c = param_1 + 0x400;
  cVar1 = *(char *)(param_1 + 0x4a0);
  if ((cVar1 != '\x02' && cVar1 != '\x04') && cVar1 != '\x05') {
    func_00491624(afStack_80,0,*(uint *)(param_1 + 1000),0);
    if (*(char *)(param_1 + 0x55e) == '\0') {
      iVar8 = 9;
    }
    else {
      iVar8 = 0xc;
    }
    iVar6 = 1;
    fVar11 = DAT_0018d2e8;
    fVar12 = DAT_0018d2e4;
    if (1 < iVar8 + 1U) {
      uVar13 = (ulonglong)DAT_0018d2ec;
      do {
        if (*(uint *)(param_1 + 0x57c) == 0) {
          pfVar4 = *(float **)(*DAT_0018d2f8 + 0x1c);
          local_4c = *pfVar4;
          local_48 = pfVar4[1];
          local_44 = pfVar4[2];
        }
        else {
          puVar3 = (undefined4 *)func_0052FBA0(*DAT_0018d2f0 + 0x3dbbc,*(uint *)(param_1 + 0x57c));
          if (((*DAT_0018d2f4 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0018d2f4), iVar5 != 0)
             ) {
            *DAT_0018d2fc = uVar2;
          }
          if ((puVar3 == (undefined4 *)0x0) ||
             (iVar5 = (**(code **)*puVar3)(puVar3,DAT_0018d2fc), iVar5 == 0)) {
            puVar3 = (undefined4 *)0x0;
          }
          if (puVar3 == (undefined4 *)0x0) goto LAB_0018d3d0;
          local_4c = ALBW_AS_F32(puVar3[0xf4]);
          local_48 = ALBW_AS_F32(puVar3[0xf5]);
          local_44 = ALBW_AS_F32(puVar3[0xf6]);
        }
        func_00115C54(&local_40,&local_4c,(float *)(param_1 + 0x4ec));
        fVar9 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorSignedToFloat(iVar6 + -1,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = (fVar10 + ALBW_AS_F32(uVar13)) / (fVar9 + ALBW_AS_F32(uVar13));
        local_fc = local_40 + (*(float *)(param_1 + 0x3d0) - local_40) * fVar9;
        local_ec = fStack_3c + (*(float *)(param_1 + 0x3d4) - fStack_3c) * fVar9;
        local_dc = fStack_38 + (*(float *)(param_1 + 0x3d8) - fStack_38) * fVar9;
        local_108 = fVar12;
        local_104 = fVar11;
        local_100 = fVar11;
        local_f8 = fVar11;
        fStack_f4 = fVar12;
        local_f0 = fVar11;
        local_e8 = fVar11;
        local_e4 = fVar11;
        fStack_e0 = fVar12;
        local_90 = local_fc;
        local_8c = local_ec;
        local_88 = local_dc;
        func_00492078(afStack_d8,&local_108,afStack_80);
        iVar7 = iVar6 * 4 + -4;
        iVar5 = *(int *)(*(int *)(param_1 + 0x52c) + iVar7);
        *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
        func_001151EC((undefined4 *)(iVar5 + 0x80),afStack_d8);
        func_004CEAF0(*(int *)(*(int *)(param_1 + 0x52c) + iVar7));
        if (*(int *)(param_1 + 0x534) != 0) {
          func_001512B4(*(int *)(*(int *)(param_1 + 0x534) + iVar7),&local_90);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(iVar8 + 1U));
    }
    local_fc = *(float *)(param_1 + 0x3d0);
    local_ec = *(float *)(param_1 + 0x3d4);
    local_dc = *(float *)(param_1 + 0x3d8);
    local_108 = fVar12;
    local_104 = fVar11;
    local_100 = fVar11;
    local_f8 = fVar11;
    fStack_f4 = fVar12;
    local_f0 = fVar11;
    local_e8 = fVar11;
    local_e4 = fVar11;
    fStack_e0 = fVar12;
    func_00492078(afStack_d8,&local_108,afStack_80);
    iVar8 = *(int *)(param_1 + 0x528);
    *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar8 + 0x80),afStack_d8);
    func_004CEAF0(*(int *)(param_1 + 0x528));
    func_0015133C(*(int *)(param_1 + 0x530),afStack_80);
    func_001512E8(*(int **)(param_1 + 0x530));
  }
  if (*(byte *)(local_5c + 0xa0) < 2) {
    if (*(uint *)(param_1 + 0x57c) == 0) {
      func_005569A4(*DAT_0018d2f8,&local_104);
    }
    else {
      puVar3 = (undefined4 *)func_0052FBA0(*DAT_0018d2f0 + 0x3dbbc,*(uint *)(param_1 + 0x57c));
      if (((*DAT_0018d2f4 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0018d2f4), iVar8 != 0)) {
        *DAT_0018d2fc = uVar2;
      }
      if ((puVar3 == (undefined4 *)0x0) ||
         (iVar8 = (**(code **)*puVar3)(puVar3,DAT_0018d2fc), iVar8 == 0)) {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3 == (undefined4 *)0x0) {
LAB_0018d3d0:
        *(undefined1 *)(param_1 + 0x2d7) = 1;
        return;
      }
      func_00115C70(&local_104,(float *)(puVar3 + 0xf4),(float *)(puVar3 + 0xda));
    }
    func_00115C54((float *)(param_1 + 0x4c0),(float *)(param_1 + 0x4c0),&local_104);
    func_00115C54((float *)(param_1 + 0x4cc),(float *)(param_1 + 0x4cc),&local_104);
    func_00115C54((float *)(param_1 + 0x4d8),(float *)(param_1 + 0x4d8),&local_104);
    func_0018D524(param_1);
  }
  return;
}

