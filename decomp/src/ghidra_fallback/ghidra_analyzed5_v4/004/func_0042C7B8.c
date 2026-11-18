#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0042D8F4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5);
extern float func_0042DA98(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6);
extern float DAT_0042cbb8;
extern float DAT_0042cbbc;
extern undefined4 *DAT_0042cbc0;

// USA 0042C7B8 <- EU 0042C798 (Ghidra, non-matching)
// GLOBAL DAT_0042cbb8 float
// GLOBAL DAT_0042cbbc float
// GLOBAL DAT_0042cbc0 undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_c8 */

undefined4 func_0042C7B8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_c8 ((uint *)(albw_frame + 0x8))
  #define local_c0 (*(float *)(albw_frame + 0x10))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(float *)(albw_frame + 0x18))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define uStack_a8 (*(uint *)(albw_frame + 0x28))
  #define fStack_a4 (*(float *)(albw_frame + 0x2c))
  #define local_98 (*(float *)(albw_frame + 0x38))
  #define local_94 (*(float *)(albw_frame + 0x3c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x40))
  #define local_88 (*(float *)(albw_frame + 0x48))
  #define local_84 (*(float *)(albw_frame + 0x4c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c ((float *)(albw_frame + 0x54))
  #define local_74 (*(float *)(albw_frame + 0x5c))
  #define uStack_70 (*(uint *)(albw_frame + 0x60))
  #define fStack_6c (*(float *)(albw_frame + 0x64))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define fStack_64 (*(float *)(albw_frame + 0x6c))
  #define fStack_60 (*(float *)(albw_frame + 0x70))
  #define afStack_5c ((float *)(albw_frame + 0x74))
  #define afStack_50 ((float *)(albw_frame + 0x80))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define uStack_40 (*(uint *)(albw_frame + 0x90))
  #define fStack_3c (*(float *)(albw_frame + 0x94))
  local_98 = *(float *)(param_2 + 4);
  uStack_90 = *(undefined4 *)(param_2 + 0xc);
  local_94 = *(float *)(param_2 + 8) - *(float *)(param_2 + 0x68);
  local_88 = *(float *)(param_2 + 4);
  uStack_80 = *(undefined4 *)(param_2 + 0xc);
  objStack_c8[0] = (uint)&local_68;
  objStack_c8[1] = (uint)local_7c;
  pfVar2 = (float *)(param_1 + 100);
  local_84 = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x68);
  fVar4 = func_0042DA98((float *)(param_1 + 0x58),pfVar2,&local_98,&local_88,(float *)objStack_c8[0]
                        ,(float *)objStack_c8[1]);
  fVar8 = *(float *)(param_1 + 0x70) + *(float *)(param_2 + 100);
  fVar7 = fVar8 * fVar8;
  if (fVar4 < fVar7) {
    local_94 = local_94 + *(float *)(param_2 + 100);
    local_84 = local_84 - *(float *)(param_2 + 100);
    if (local_94 == local_84) {
      objStack_c8[0] = 0;
      fVar5 = func_0042D8F4(&local_98,(float *)(param_1 + 0x58),pfVar2,(float *)0x0,(float *)0x0);
    }
    else {
      objStack_c8[1] = (uint)&fStack_60;
      objStack_c8[0] = (uint)&fStack_64;
      fVar5 = func_0042DA98((float *)(param_1 + 0x58),pfVar2,&local_98,&local_88,
                            (float *)objStack_c8[0],(float *)objStack_c8[1]);
    }
    fVar10 = DAT_0042cbb8;
    if (fVar5 < fVar7) {
LAB_0042ca08:
      if (param_3 != 0) {
        local_94 = local_94 - *(float *)(param_2 + 100);
        local_84 = local_84 + *(float *)(param_2 + 100);
        func_00115C70(afStack_5c,pfVar2,(float *)(param_1 + 0x58));
        func_00115C70(afStack_50,&local_88,&local_98);
        *(float *)(param_3 + 0x1c) = fVar8 - SQRT(fVar4);
        func_00115D70(&local_44,afStack_5c,local_68);
        local_bc = local_44;
        local_b8 = ALBW_AS_F32(uStack_40);
        local_b4 = fStack_3c;
        func_00115C54(&local_44,(float *)(param_1 + 0x58),&local_bc);
        objStack_c8[0] = (uint)ALBW_AS_U32(local_44);
        objStack_c8[1] = uStack_40;
        local_c0 = fStack_3c;
        local_ac = local_44;
        uStack_a8 = uStack_40;
        fStack_a4 = fStack_3c;
        func_00115D70(&local_44,afStack_50,local_7c[0]);
        objStack_c8[0] = (uint)ALBW_AS_U32(local_44);
        objStack_c8[1] = uStack_40;
        local_c0 = fStack_3c;
        func_00115C54(&local_44,&local_98,(float *)objStack_c8);
        local_bc = local_44;
        local_b8 = ALBW_AS_F32(uStack_40);
        local_b4 = fStack_3c;
        local_74 = local_44;
        uStack_70 = uStack_40;
        fStack_6c = fStack_3c;
        func_00115C70(&local_44,&local_ac,&local_74);
        local_bc = local_44;
        local_b8 = ALBW_AS_F32(uStack_40);
        local_b4 = fStack_3c;
        *(float *)(param_3 + 4) = local_44;
        *(uint *)(param_3 + 8) = uStack_40;
        *(float *)(param_3 + 0xc) = fStack_3c;
        fVar4 = func_00115DC8((float *)(param_3 + 4));
        puVar1 = DAT_0042cbc0;
        if (fVar4 <= fVar10) {
          *(undefined4 *)(param_3 + 4) = *DAT_0042cbc0;
          *(undefined4 *)(param_3 + 8) = puVar1[1];
          *(undefined4 *)(param_3 + 0xc) = puVar1[2];
        }
        func_00115D70(&local_44,(float *)(param_3 + 4),*(float *)(param_1 + 0x70));
        objStack_c8[0] = (uint)ALBW_AS_U32(local_44);
        objStack_c8[1] = uStack_40;
        local_c0 = fStack_3c;
        func_00115C70(&local_44,&local_ac,(float *)objStack_c8);
        *(float *)(param_3 + 0x10) = local_44;
        *(uint *)(param_3 + 0x14) = uStack_40;
        *(float *)(param_3 + 0x18) = fStack_3c;
      }
      return 1;
    }
    fVar7 = *(float *)(param_2 + 4);
    if ((int)ALBW_AS_U32(local_7c[0]) < 0x3f000000) {
      fVar5 = *(float *)(param_2 + 8) - *(float *)(param_2 + 0x68);
    }
    else {
      fVar5 = *(float *)(param_2 + 8) + *(float *)(param_2 + 0x68);
    }
    fVar11 = *(float *)(param_2 + 0xc);
    func_00115C70(&local_c0,(float *)(param_1 + 0x58),pfVar2);
    fVar6 = SQRT(local_c0 * local_c0 + local_b8 * local_b8);
    if (fVar6 == fVar10) {
      fVar7 = *(float *)(param_1 + 0x5c);
      bVar3 = NAN(fVar7) || NAN(fVar5);
      if (fVar7 <= fVar5) {
        fVar7 = *(float *)(param_1 + 0x68);
        bVar3 = NAN(fVar7) || NAN(fVar5);
      }
      if (fVar7 != fVar5 && fVar7 < fVar5 == bVar3) goto LAB_0042ca08;
    }
    else {
      fVar6 = DAT_0042cbbc / fVar6;
      local_c0 = local_c0 * fVar6;
      local_b8 = local_b8 * fVar6;
      local_b4 = fVar7 + local_c0 * *(float *)(param_2 + 100);
      local_ac = fVar11 + local_b8 * *(float *)(param_2 + 100);
      objStack_c8[0] = 0;
      fVar9 = *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70);
      local_b0 = fVar5;
      fVar6 = func_0042D8F4(&local_b4,(float *)(param_1 + 0x58),pfVar2,(float *)0x0,(float *)0x0);
      if (fVar6 < fVar9) {
        local_c0 = -local_c0;
        local_bc = -local_bc;
        local_b8 = -local_b8;
        local_b4 = fVar7 + local_c0 * *(float *)(param_2 + 100);
        local_ac = fVar11 + local_b8 * *(float *)(param_2 + 100);
        objStack_c8[0] = 0;
        local_b0 = fVar5;
        fVar7 = func_0042D8F4(&local_b4,(float *)(param_1 + 0x58),pfVar2,(float *)0x0,(float *)0x0);
        if (fVar7 < fVar9) goto LAB_0042ca08;
      }
    }
  }
  return 0;
}

