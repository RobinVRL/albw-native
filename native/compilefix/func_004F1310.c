/* compilefix: USA 004F1310 (EU 004F12E8), the converted stage-2 text with its inlined atan2Idx
 * (8 garbled branches dividing the wrong way: t = -inf at the Sanctuary cutscene, BOOT_LOG 160n)
 * replaced by albw_atan2_inline (ARM-verified, native/gameplay/func_004905E0.c). */
#include "ghidra_types.h"
int albw_atan2_inline(float a, float b);

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_001FF08C(int param_1,undefined4 param_2,int param_3,int *param_4);
extern int func_001FF174(int *param_1,undefined4 param_2,int param_3,undefined *param_4);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_004905E0(float fparam_0);
extern int func_00491404(float *param_1,float *param_2);
extern int func_004918CC(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00492078(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F076C(int param_1);
extern int func_0052781C(int param_1);
extern int func_0058E2B8(int *param_1);
extern float DAT_004f172c;
extern int *DAT_004f1730;
extern float DAT_004f1734;
extern float DAT_004f1738;
extern float DAT_004f173c;
extern float DAT_004f1740;
extern float DAT_004f1744;
extern float DAT_004f1748;
extern float DAT_004f174c;
extern int DAT_004f1750;
extern float DAT_004f1754;
extern float DAT_004f1758;
extern float *DAT_004f175c;

// USA 004F1310 <- EU 004F12E8 (Ghidra, non-matching)
// GLOBAL DAT_004f172c float
// GLOBAL DAT_004f1730 int *
// GLOBAL DAT_004f1734 float
// GLOBAL DAT_004f1738 float
// GLOBAL DAT_004f173c float
// GLOBAL DAT_004f1740 float
// GLOBAL DAT_004f1744 float
// GLOBAL DAT_004f1748 float
// GLOBAL DAT_004f174c float
// GLOBAL DAT_004f1750 int
// GLOBAL DAT_004f1754 float
// GLOBAL DAT_004f1758 float
// GLOBAL DAT_004f175c float *

void func_004F1310(int *param_1,undefined4 param_2,float *param_3,int *param_4)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  undefined4 *puVar7;
  uint extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(float *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(float *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define local_68 (*(float *)(albw_frame + 0x48))
  #define local_64 (*(float *)(albw_frame + 0x4c))
  #define local_60 (*(int *)(albw_frame + 0x50))
  #define afStack_5c ((float *)(albw_frame + 0x54))
  #define afStack_38 ((float *)(albw_frame + 0x78))
  float fVar16;
  
  if (param_1[2] != 0) {
    func_004F076C((int)param_1);
    bVar10 = (char)param_1[0x47] != '\0';
    piVar2 = (int *)0x0;
    if (bVar10) {
      piVar2 = (int *)param_1[0x10];
    }
    bVar11 = piVar2 != (int *)0x0;
    if (bVar10 && bVar11) {
      piVar2 = (int *)param_1[0x11];
    }
    iVar6 = extraout_r1;
    if ((bVar10 && bVar11) && piVar2 != (int *)0x0) {
      func_00169A80(piVar2,extraout_r1,param_3,param_4);
      param_3 = (float *)0x0;
      func_00168E9C((int *)param_1[0x11],param_1[0x10],(int *)0x0);
      func_004CEAF0(param_1[0x10]);
      iVar6 = extraout_r1_00;
    }
    piVar2 = DAT_004f1730;
    bVar10 = (char)param_1[0x47] != '\0';
    if (bVar10) {
      iVar6 = param_1[0x10];
    }
    if (bVar10 && iVar6 != 0) {
      puVar7 = (undefined4 *)(*(int *)(*(int *)(iVar6 + 0x24) + 0x14) + param_1[0x45] * 0x30);
    }
    else {
      puVar7 = (undefined4 *)0x0;
    }
    local_a8 = ALBW_AS_F32(param_1[0x46]);
    local_a4 = DAT_004f172c;
    local_a0 = DAT_004f172c;
    local_98 = DAT_004f172c;
    local_90 = DAT_004f172c;
    local_88 = DAT_004f172c;
    local_84 = DAT_004f172c;
    local_9c = DAT_004f172c;
    local_8c = DAT_004f172c;
    local_7c = DAT_004f172c;
    fVar3 = local_a8;
    if (puVar7 != (undefined4 *)0x0) {
      fVar3 = ALBW_AS_F32((uint)*(byte *)((int)param_1 + 0x11d));
    }
    local_94 = local_a8;
    local_80 = local_a8;
    if (puVar7 != (undefined4 *)0x0 && fVar3 != 0.0) {
      fVar3 = DAT_004f172c;
      func_001151EC(&local_a8,puVar7);
      fVar16 = *(float *)(*piVar2 + 0x21f4);
      uVar15 = CONCAT44(fVar16,fVar3);
      uVar13 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar3) << 0x1f |
               (uint)(fVar16 == fVar3) << 0x1e;
      uVar12 = uVar13 | (uint)(NAN(fVar16) || NAN(fVar3)) << 0x1c;
      bVar1 = (byte)(uVar13 >> 0x18);
      if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)) {
        local_64 = DAT_004f1734;
        fVar16 = DAT_004f1734;
        local_6c = fVar3;
        local_68 = fVar3;
        func_00115D18(&local_6c,&local_a8,&local_6c);
        fVar3 = ALBW_AS_F32(uVar15);
        uVar13 = uVar12 & 0xfffffff | (uint)(local_64 == fVar3) << 0x1e;
        bVar10 = false;
        if (SUB41(uVar13 >> 0x1e,0)) {
          uVar13 = uVar12 & 0xfffffff | (uint)(local_6c == fVar3) << 0x1e;
          bVar10 = SUB41(uVar13 >> 0x1e,0);
        }
        local_60 = albw_atan2_inline(local_64,local_6c);   /* inlined atan2Idx (Ghidra-garbled compares, BOOT_LOG 160n) */
        iVar6 = func_0058E2B8(&local_60);
        fVar3 = (float)VectorUnsignedToFloat(iVar6,(byte)(uVar13 >> 0x15) & 3);
        uVar17 = func_00114608((uint)ALBW_AS_U32(((DAT_004f1744 +
                                      DAT_004f1740 *
                                      (fVar16 - fVar3 * DAT_004f1738 * DAT_004f173c) *
                                      ALBW_AS_F32(((ulonglong)uVar15 >> 0x20))) * DAT_004f1748)),
                               extraout_r1_01);
        pfVar4 = (float *)(DAT_004f1750 + ((uint)uVar17 >> 0x18) * 0x10);
        fVar3 = (float)VectorUnsignedToFloat((uint)uVar17 & 0xffffff,(byte)(uVar13 >> 0x15) & 3);
        fVar14 = (float)VectorSignedToFloat(param_1[10],(byte)(uVar13 >> 0x15) & 3);
        fVar16 = (*pfVar4 + pfVar4[1] * fVar3 * DAT_004f174c + fVar16) * DAT_004f1754;
        fVar3 = (float)VectorSignedToFloat(param_1[0xb],(byte)(uVar13 >> 0x15) & 3);
        local_78 = DAT_004f1758;
        local_74 = (undefined4)uVar15;
        local_70 = local_74;
        func_004D7F70(&local_78,-local_60);
        func_0048B5D4(afStack_38,&local_78,(int)(fVar3 + (fVar14 - fVar3) * fVar16));
        func_00491404(afStack_5c,afStack_38);
        param_3 = afStack_5c;
        func_00492078(&local_a8,&local_a8,param_3);
        fVar3 = ALBW_AS_F32(param_1[0x46]);
        func_004918CC(&local_a8,fVar3,fVar3,fVar3);
      }
    }
    iVar6 = *piVar2;
    pfVar4 = DAT_004f175c;
    if (iVar6 != 0) {
      pfVar4 = (float *)(iVar6 + 0x23c8);
    }
    local_9c = local_9c + ALBW_AS_F32(param_1[0x12]) + *pfVar4;
    local_8c = local_8c + ALBW_AS_F32(param_1[0x13]) + pfVar4[1];
    local_7c = local_7c + ALBW_AS_F32(param_1[0x14]) + pfVar4[2];
    iVar6 = param_1[2];
    *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar6 + 0x80),&local_a8);
    func_001FF174(param_1,extraout_r1_02,(int)param_3,(undefined *)param_4);
    bVar10 = *(char *)((int)param_1 + 0x31) != '\0';
    piVar2 = (int *)0x0;
    if (bVar10) {
      piVar2 = (int *)param_1[4];
    }
    uVar8 = extraout_r1_03;
    if (bVar10 && piVar2 != (int *)0x0) {
      func_00169A80(piVar2,extraout_r1_03,param_3,param_4);
      param_3 = (float *)0x0;
      func_00168E9C((int *)param_1[4],param_1[2],(int *)0x0);
      uVar8 = extraout_r1_04;
    }
    func_001FF08C((int)param_1,uVar8,(int)param_3,param_4);
    func_004CEAF0(param_1[2]);
    iVar6 = param_1[0xe];
    if (iVar6 != 0) {
      iVar5 = *(int *)(*(int *)(param_1[2] + 0x24) + 0x14) + param_1[9] * 0x30;
      uVar8 = *(undefined4 *)(iVar5 + 0x1c);
      uVar9 = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar6 + 0x88) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar6 + 0x8c) = uVar8;
      *(undefined4 *)(iVar6 + 0x90) = uVar9;
      *(undefined1 *)(iVar6 + 0xa0) = 1;
      *(undefined1 *)(param_1[0xe] + 0xa0) = 1;
    }
  }
  if (param_1[0xf] != 0) {
    bVar10 = func_0052781C(param_1[0xf]);
    if (bVar10) {
      iVar6 = *(int *)(*(int *)(param_1[2] + 0x24) + 0x14) + param_1[9] * 0x30;
      local_a8 = *(float *)(iVar6 + 0xc);
      local_a4 = *(float *)(iVar6 + 0x1c);
      local_a0 = *(float *)(iVar6 + 0x2c);
      func_0019A4C4(param_1[0xf],&local_a8);
    }
    else {
      param_1[0xf] = 0;
    }
  }
  return;
}

