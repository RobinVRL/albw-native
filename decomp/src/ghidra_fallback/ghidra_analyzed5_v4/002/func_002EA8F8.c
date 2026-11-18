// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00260C78(float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002F3468(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0052FD14(int param_1,undefined4 *param_2);
extern int func_00556E64(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002eac98;
extern float DAT_002eac9c;
extern int *DAT_002eaca0;
extern float DAT_002eaca4;
extern float DAT_002eaca8;
extern float DAT_002eacac;
extern float DAT_002eacb0;
extern float DAT_002eacb4;
extern int *DAT_002eacb8;
extern float DAT_002eacbc;
extern int DAT_002eacc0;
extern float DAT_002eacc4;
extern int DAT_002eacc8;
extern int *DAT_002eaccc;
extern int *DAT_002eacd0;
extern float DAT_002eacd4;
extern float DAT_002eacd8;
extern float DAT_002eacdc;
extern int DAT_002eae60;
extern int *DAT_002eae64;

// USA 002EA8F8 <- EU 002EA8D4 (Ghidra, non-matching)
// GLOBAL DAT_002eac98 int *
// GLOBAL DAT_002eac9c float
// GLOBAL DAT_002eaca0 int *
// GLOBAL DAT_002eaca4 float
// GLOBAL DAT_002eaca8 float
// GLOBAL DAT_002eacac float
// GLOBAL DAT_002eacb0 float
// GLOBAL DAT_002eacb4 float
// GLOBAL DAT_002eacb8 int *
// GLOBAL DAT_002eacbc float
// GLOBAL DAT_002eacc0 int
// GLOBAL DAT_002eacc4 float
// GLOBAL DAT_002eacc8 int
// GLOBAL DAT_002eaccc int *
// GLOBAL DAT_002eacd0 int *
// GLOBAL DAT_002eacd4 float
// GLOBAL DAT_002eacd8 float
// GLOBAL DAT_002eacdc float
// GLOBAL DAT_002eae60 int
// GLOBAL DAT_002eae64 int *

undefined4 func_002EA8F8(int param_1)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  float *pfVar12;
  int iVar13;
  uint in_fpscr;
  float in_s0;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define iStack_108 (*(int *)(albw_frame + 0x8))
  #define local_104 (*(float *)(albw_frame + 0xc))
  #define fStack_100 (*(float *)(albw_frame + 0x10))
  #define local_fc (*(int *)(albw_frame + 0x14))
  #define local_f8 (*(int *)(albw_frame + 0x18))
  #define local_f4 (*(int *)(albw_frame + 0x1c))
  #define local_e8 (*(int *)(albw_frame + 0x28))
  #define local_a4 (*(float * *)(albw_frame + 0x6c))
  #define aiStack_98 ((int *)(albw_frame + 0x78))
  iVar13 = *DAT_002eac98;
  if ((iVar13 == 0) || (bVar3 = func_00556E64(iVar13), !bVar3)) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  local_104 = DAT_002eac9c;
  iVar5 = func_0052FD14(*DAT_002eaca0 + 0x3dbbc,&local_104);
  bVar3 = (bool)(bVar2 & ~(iVar5 != 0));
  iVar6 = func_002F3468(param_1,0);
  local_a4 = (float *)(param_1 + 0xddc);
  func_00115C70(&fStack_100,local_a4,(float *)(param_1 + 0xe30));
  local_f8 = func_0068C690(&fStack_100);
  iVar5 = DAT_002eacc0;
  fVar15 = DAT_002eacbc;
  fVar17 = DAT_002eacb4;
  fVar18 = DAT_002eacb0;
  fVar19 = DAT_002eacac;
  fVar20 = DAT_002eaca8;
  fVar16 = DAT_002eaca4;
  local_e8 = iVar6 - local_f8;
  local_f4 = *(int *)(param_1 + 0xe28) + -0x80000000;
  uVar11 = local_f4 - local_f8;
  local_fc = (uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f);
  iVar6 = **(int **)(*(int *)(param_1 + 0xdb4) + 0x14);
  pfVar12 = (float *)(param_1 + 0xe1c);
  if (iVar6 == 0) goto LAB_002eabe0;
  if (iVar6 == 1) {
    uVar8 = *DAT_002eacb8 + *(int *)(param_1 + 0xe20);
    *(uint *)(param_1 + 0xe20) = uVar8;
    iVar5 = iVar5 + (uVar8 >> 0x18) * 0x10;
    fVar14 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = *(int *)(*(int *)(param_1 + 0xdb4) + 0x14);
    fVar16 = (DAT_002eacc4 *
             ((*(float *)(iVar5 + 8) + *(float *)(iVar5 + 0xc) * fVar14 * fVar20) - fVar16)) /
             fVar19 + fVar18;
    iVar5 = func_00260C78(fVar18,*(float *)(iVar6 + 8),*(float *)(iVar6 + 0xc),
                          *(float *)(iVar6 + 0x14));
    if ((iVar5 != 0) &&
       ((*(undefined4 *)(param_1 + 0xe20) = 0, iVar13 == 0 ||
        (bVar4 = func_00556EAC(iVar13,0x6a), !bVar4)))) {
      if (bVar3) {
        if ((int)uVar11 < 0) {
LAB_002eaab4:
          *(undefined1 *)(param_1 + 0xe2c) = 0;
          goto LAB_002eaac4;
        }
      }
      else if (0 < local_e8) goto LAB_002eaab4;
      *(undefined1 *)(param_1 + 0xe2c) = 1;
    }
LAB_002eaac4:
    iVar13 = DAT_002eacc8;
    if (*(char *)(param_1 + 0xe2c) == '\0') {
      fVar16 = -fVar16;
    }
    in_s0 = *pfVar12 + (fVar16 - *pfVar12) * fVar15;
    *pfVar12 = in_s0;
    uVar11 = local_f8 - local_f4 >> 0x1f;
    if (((int)((local_f8 - local_f4 ^ uVar11) - uVar11) < *DAT_002eaccc + iVar13) && (!bVar3)) {
      puVar7 = (uint *)func_002C11E8(&iStack_108,0,0,0);
      func_0016898C(*(int *)(param_1 + 0xdb4),puVar7);
      uVar11 = func_00111A64((uint *)(*DAT_002eacd0 + 0x660));
      iVar13 = (int)((ulonglong)uVar11 * 0x78 >> 0x20) + 0x3c;
      *(int *)(param_1 + 0xb10) = iVar13;
      if (iVar13 == 0) {
        *(float *)(param_1 + 0xb14) = fVar17;
      }
      else {
        in_s0 = (float)VectorUnsignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0xb14) = fVar18 / in_s0;
      }
      *(undefined4 *)(param_1 + 0xb0c) = 0;
    }
  }
  else if (iVar6 == 3) {
    iVar13 = *(int *)(*(int *)(param_1 + 0xdb4) + 0x14);
    if (*(char *)(iVar13 + 0x1c) == '\0') {
      fVar15 = *(float *)(iVar13 + 8);
      if (NAN(*(float *)(iVar13 + 0x10)) || NAN(DAT_002eacb4)) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == DAT_002eacb4) << 0x1e |
                   (uint)(DAT_002eacb4 <= fVar15) << 0x1d;
        bVar2 = (byte)(in_fpscr >> 0x18);
        if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) goto LAB_002eabbc;
      }
      else {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar15 == *(float *)(iVar13 + 0x14)) << 0x1e;
        if (SUB41(in_fpscr >> 0x1e,0)) {
LAB_002eabbc:
          puVar7 = (uint *)func_002C11E8(aiStack_98,0,0,0);
          func_0016898C(*(int *)(param_1 + 0xdb4),puVar7);
        }
      }
    }
LAB_002eabe0:
    in_s0 = DAT_002eacd4;
    iVar13 = DAT_002eacc0;
    uVar8 = *DAT_002eacb8 + *(int *)(param_1 + 0xe20);
    *(uint *)(param_1 + 0xe20) = uVar8;
    iVar13 = iVar13 + (uVar8 >> 0x18) * 0x10;
    fVar15 = (float)VectorUnsignedToFloat(uVar8 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    in_s0 = (DAT_002eacd8 *
            ((*(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc) * fVar15 * fVar20) - fVar16)) /
            fVar19 + in_s0;
    if (*(char *)(param_1 + 0xe2c) == '\0') {
      in_s0 = -in_s0;
    }
    in_s0 = in_s0 - *pfVar12;
    *pfVar12 = *pfVar12 + in_s0 * DAT_002eacdc;
    if (bVar3) {
      if ((int)uVar11 < 0) {
LAB_002ead0c:
        *(undefined1 *)(param_1 + 0xe2c) = 0;
      }
      else {
LAB_002ead04:
        *(undefined1 *)(param_1 + 0xe2c) = 1;
      }
      puVar7 = (uint *)func_002C11E8((int *)&fStack_100,1,0,0);
      func_0016898C(*(int *)(param_1 + 0xdb4),puVar7);
    }
    else {
      if (*DAT_002eaccc + DAT_002eae60 < local_fc) {
        if (-1 < (int)uVar11) goto LAB_002ead0c;
        goto LAB_002ead04;
      }
      if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
        *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
        *(float *)(param_1 + 0x3e0) = fVar17;
        return 0;
      }
      uVar11 = func_00111A64((uint *)(*DAT_002eacd0 + 0x660));
      iVar13 = (int)((ulonglong)uVar11 * 0x78 >> 0x20) + 0x3c;
      *(int *)(param_1 + 0xb10) = iVar13;
      if (iVar13 == 0) {
        *(float *)(param_1 + 0xb14) = fVar17;
      }
      else {
        in_s0 = (float)VectorUnsignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0xb14) = fVar18 / in_s0;
      }
      *(undefined4 *)(param_1 + 0xb0c) = 0;
      *(bool *)(param_1 + 0xe2c) = *(char *)(param_1 + 0xe2c) == '\0';
    }
  }
  *(float *)(param_1 + 0x3e0) = fVar17;
  if ((bVar3) && (**(int **)(*(int *)(param_1 + 0xdb4) + 0x14) == 1)) {
    pfVar12 = (float *)func_00520FC0();
    func_00115C70(&local_104,pfVar12,(float *)(param_1 + 0xe30));
    iVar13 = func_0068C690(&local_104);
    func_00115C70(&local_104,local_a4,(float *)(param_1 + 0xe30));
    iVar5 = func_0068C690(&local_104);
    piVar9 = (int *)(iVar13 - iVar5);
    if (*(char *)(param_1 + 0xe2c) == '\0') {
      bVar3 = piVar9 == (int *)0x0;
      piVar1 = piVar9;
      piVar10 = DAT_002eae64;
      if (0 < (int)piVar9) {
        piVar10 = (int *)*DAT_002eae64;
        piVar1 = (int *)((int)piVar10 - (int)piVar9);
        bVar3 = piVar10 == piVar9;
      }
      if (!bVar3 && (int)piVar1 < 0 == (0 < (int)piVar9 && SBORROW4((int)piVar10,(int)piVar9)))
      goto LAB_002eae38;
    }
    else if (((int)piVar9 < 0) && (-*DAT_002eae64 < (int)piVar9)) {
LAB_002eae38:
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),0x19,in_s0);
    }
  }
  return 0;
}

