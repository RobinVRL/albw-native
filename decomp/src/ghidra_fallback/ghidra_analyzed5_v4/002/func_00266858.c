#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00110848(int param_1);
extern int func_00267250(int param_1,undefined4 *param_2,uint param_3,uint param_4);
extern int func_00269288(int param_1,uint param_2,int param_3,int param_4,uint param_5);
extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0053A4CC(int param_1,float *param_2,uint param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern float fRam00266c6c;
extern int iRam00266c78;
extern float *pfRam00266c74;
extern undefined4 *puRam00266c70;
extern float DAT_00266c68;
extern undefined4 *DAT_00266c8c;
extern char s_MaskPartsBreak_00266c7c[];

// USA 00266858 <- EU 00266880 (Ghidra, non-matching)
// GLOBAL DAT_00266c68 float
// GLOBAL DAT_00266c8c undefined4 *
// GLOBAL UNK_00266c6c float
// GLOBAL UNK_00266c70 undefined *
// GLOBAL UNK_00266c74 float *
// GLOBAL UNK_00266c78 int
// GLOBAL s_MaskPartsBreak_00266c7c string

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

void func_00266858(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint extraout_r1;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define aiStack_98 ((int *)(albw_frame + 0x8))
  #define iStack_88 (*(int *)(albw_frame + 0x18))
  #define iStack_84 (*(int *)(albw_frame + 0x1c))
  #define afStack_80 ((float *)(albw_frame + 0x20))
  #define fStack_50 (*(float *)(albw_frame + 0x50))
  #define fStack_4c (*(float *)(albw_frame + 0x54))
  #define fStack_48 (*(float *)(albw_frame + 0x58))
  #define iStack_44 (*(int *)(albw_frame + 0x5c))
  #define uStack_3c (*(uint *)(albw_frame + 0x64))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  fVar9 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar9);
  uVar6 = 0;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x8f0) + 0x20) + 0x14);
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    return;
  }
  uVar12 = (ulonglong)(uint)ALBW_AS_U32(DAT_00266c68);
  fVar9 = *(float *)(iVar2 + 8);
  if (NAN(*(float *)(iVar2 + 0x10)) || NAN(DAT_00266c68)) {
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar9 == DAT_00266c68) << 0x1e |
            (uint)(DAT_00266c68 <= fVar9) << 0x1d;
    bVar1 = (byte)(uVar3 >> 0x18);
    if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
      return;
    }
  }
  else {
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar9 == *(float *)(iVar2 + 0x14)) << 0x1e;
    if (!SUB41(uVar3 >> 0x1e,0)) {
      return;
    }
  }
  if (*(uint *)(param_1 + 0xad4) < *(uint *)(param_1 + 0xad8)) {
    *(uint *)(param_1 + 0xad4) = *(uint *)(param_1 + 0xad4) + 1;
    return;
  }
  uVar7 = 0;
  do {
    piVar4 = (int *)(param_1 + 0x8ec);
    if (uVar7 < 2) {
      piVar4 = (int *)(param_1 + 0x8ec) + uVar7;
    }
    func_004CF478(*(int *)(*piVar4 + 0x18),(uint)(uVar7 == 2));
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  iVar5 = *(int *)(param_1 + 0x8f4);
  fVar9 = ALBW_AS_F32(uVar12);
  iVar2 = *(int *)(*(int *)(iVar5 + 0x1c) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    fVar10 = *(float *)(iVar2 + 8);
    if (NAN(*(float *)(iVar2 + 0x10)) || NAN(fVar9)) {
      uVar3 = uVar3 & 0xfffffff | (uint)(fVar10 == fVar9) << 0x1e | (uint)(fVar9 <= fVar10) << 0x1d;
      bVar1 = (byte)(uVar3 >> 0x18);
      if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) goto LAB_002669e4;
    }
    else {
      uVar3 = uVar3 & 0xfffffff | (uint)(fVar10 == *(float *)(iVar2 + 0x14)) << 0x1e;
      if (SUB41(uVar3 >> 0x1e,0)) {
LAB_002669e4:
        iStack_44 = 1;
        fVar10 = fRam00266c6c;
        func_004CF478(*(int *)(iVar5 + 0x18),0);
        bVar8 = *(uint *)(param_1 + 0xae4) != 0;
        uVar7 = extraout_r1;
        if (bVar8) {
          uVar7 = *(uint *)(param_1 + 0xae0);
        }
        fVar11 = fVar9;
        if (bVar8 && uVar7 != 0) {
          fVar11 = fVar10;
        }
        if ((bVar8 && uVar7 != 0) && uVar7 < *(uint *)(param_1 + 0xae4)) {
          fVar11 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar3 >> 0x15) & 3);
          fVar11 = fVar11 * *(float *)(param_1 + 0xae8);
        }
        if (fVar11 == fVar9) {
          func_00100118((int)aiStack_98,puRam00266c70,8,2);
          iVar2 = iRam00266c78;
          fStack_50 = *pfRam00266c74;
          fStack_4c = pfRam00266c74[1];
          fStack_48 = pfRam00266c74[2];
          do {
            piVar4 = aiStack_98 + uVar6 * 2;
            while( true ) {
              if (*(int *)(param_1 + 0x344) == 0) {
                *piVar4 = 0;
                piVar4[1] = 0;
              }
              else {
                iVar5 = *piVar4;
                if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == piVar4[1])) {
                  func_00110848(iVar5);
                }
                func_004A1B9C(&iStack_88,*(int *)(param_1 + 0x344),(uint *)s_MaskPartsBreak_00266c7c
                             );
                *piVar4 = iStack_88;
                piVar4[1] = iStack_84;
              }
              iVar5 = *(int *)(*(int *)(param_1 + 0x8f4) + 0x18);
              uVar3 = func_00564A78(iVar5,(int *)(iVar2 + uVar6 * 8));
              iVar5 = *(int *)(*(int *)(iVar5 + 0x24) + 0x14) + uVar3 * 0x30;
              fStack_50 = *(float *)(iVar5 + 0xc);
              fStack_4c = *(float *)(iVar5 + 0x1c);
              fStack_48 = *(float *)(iVar5 + 0x2c);
              uStack_38 = *(undefined4 *)(param_1 + 1000);
              uStack_3c = 0;
              uStack_34 = 0;
              func_0049216C(afStack_80,&uStack_3c,&fStack_50);
              if (uVar6 < 2) {
                piVar4 = aiStack_98 + uVar6 * 2;
              }
              else {
                piVar4 = aiStack_98;
              }
              iVar5 = *piVar4;
              if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == piVar4[1])) {
                func_004A2D1C(iVar5,afStack_80);
              }
              uVar6 = uVar6 + 1;
              if (1 < (int)uVar6) goto LAB_00266b68;
              if (uVar6 < 2) break;
              piVar4 = aiStack_98;
            }
          } while( true );
        }
        goto LAB_00266b68;
      }
    }
  }
  iStack_44 = 0;
  fVar9 = fRam00266c6c;
  func_004CF478(*(int *)(iVar5 + 0x18),1);
  *(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x8f4) + 0x1c) + 0x14) + 0x10) = fVar9;
LAB_00266b68:
  if (*(char *)(param_1 + 0xaed) == '\0') {
    *(undefined1 *)(param_1 + 0xaed) = 1;
    func_0053A4CC(param_1,(float *)objStack_a0,0);
    func_00267250(param_1,objStack_a0,0,0);
  }
  iVar2 = 0;
  do {
    iVar5 = param_1 + 0xb18;
    if (iVar2 + 1U < 5) {
      iVar5 = param_1 + 0xb18 + (iVar2 + 1U) * 0x14;
    }
    if (0 < *(int *)(iVar5 + 0x10)) {
      objStack_a0[0] = 1;
      func_00269288(param_1,iVar2 + 1,0x18,0xf,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = param_1 + 0x9ac;
  func_0036C2B8(iVar2,*DAT_00266c8c);
  if (iStack_44 != 0) {
    if (*(uint *)(param_1 + 0xae0) < *(uint *)(param_1 + 0xae4)) {
      *(uint *)(param_1 + 0xae0) = *(uint *)(param_1 + 0xae0) + 1;
    }
    else {
      func_0036B758(iVar2);
      iVar2 = func_0036BE78(iVar2);
      if (iVar2 != 0) {
        func_00660718((undefined4 *)(param_1 + 0x8c8),0);
      }
    }
  }
  return;
}

