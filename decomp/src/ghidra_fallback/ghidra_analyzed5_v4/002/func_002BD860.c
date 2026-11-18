#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F944C(void);
extern int func_00520ED8(int param_1);
extern int func_00521078(int param_1);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);
extern float DAT_002bdd30;
extern float DAT_002bdd34;
extern float DAT_002bdd38;
extern int DAT_002bdd3c;
extern float DAT_002bdd40;
extern float DAT_002bdd44;
extern char s_PopAttack_002bdd24[];
extern char s_PopReady_002bdd18[];
extern char s_Popcorn_002bdd10[];

// USA 002BD860 <- EU 002BD83C (Ghidra, non-matching)
// GLOBAL DAT_002bdd30 float
// GLOBAL DAT_002bdd34 float
// GLOBAL DAT_002bdd38 float
// GLOBAL DAT_002bdd3c int
// GLOBAL DAT_002bdd40 float
// GLOBAL DAT_002bdd44 float
// GLOBAL s_PopAttack_002bdd24 string
// GLOBAL s_PopReady_002bdd18 string
// GLOBAL s_Popcorn_002bdd10 string

void func_002BD860(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  char *pcVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(int *)(albw_frame + 0x2c))
  iVar3 = func_004F70A8(param_1);
  if (iVar3 == 0) {
    return;
  }
  piVar9 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\n' && (char)param_1[0x230] != '\v') &&
     (iVar3 = func_004F8998(param_1,0,(char *)0x0), iVar3 != 0)) {
    func_00662A14(piVar9,10);
  }
  pfVar8 = (float *)param_1[0x234];
  piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar6 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar7 = (int *)((int)pfVar8 + ((int)uVar6 >> 1));
  if ((uVar6 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *piVar7);
  }
  (*(code *)*piVar4)(piVar7);
  iVar3 = *piVar9;
  *piVar9 = iVar3 + 1;
  if (param_1[0x233] != 0) {
    fVar12 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar12);
  }
  iVar3 = param_1[0x256];
  pfVar10 = (float *)(param_1 + 0x253);
  if ((char)param_1[0x230] == iVar3) goto LAB_002bdb6c;
  pfVar8 = (float *)0x1;
  switch((int)(char)param_1[0x230]) {
  default:
    iVar3 = param_1[0x253];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x254])) {
      iVar5 = *(int *)(iVar3 + 0x20);
      if ((iVar5 != 0) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(iVar5 + 0xc) && (0 < *(int *)(iVar5 + 4))))) {
        *(undefined1 *)(iVar5 + 0x280) = 1;
      }
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
    }
    goto LAB_002bdb6c;
  case 1:
  case 2:
  case 5:
    if ((iVar3 == 1 || iVar3 == 2) || iVar3 == 5) goto LAB_002bdb6c;
    iVar3 = param_1[0x253];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x254])) {
      iVar5 = *(int *)(iVar3 + 0x20);
      if ((iVar5 != 0) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(iVar5 + 0xc) && (0 < *(int *)(iVar5 + 4))))) {
        *(undefined1 *)(iVar5 + 0x280) = 1;
      }
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
    }
    pcVar11 = s_Popcorn_002bdd10;
    if (param_1[0xd1] == 0) goto LAB_002bdb0c;
    fVar12 = *pfVar10;
    if ((fVar12 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar12) + 0x1c) == param_1[0x254])) goto LAB_002bd9d8;
    break;
  case 3:
    iVar3 = param_1[0x253];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x254])) {
      iVar5 = *(int *)(iVar3 + 0x20);
      if (((iVar5 != 0) && (*(int *)(iVar3 + 0x24) == *(int *)(iVar5 + 0xc))) &&
         (0 < *(int *)(iVar5 + 4))) {
        *(undefined1 *)(iVar5 + 0x280) = 1;
      }
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
    }
    pcVar11 = s_PopReady_002bdd18;
    if (param_1[0xd1] == 0) {
LAB_002bdb0c:
      *pfVar10 = 0.0;
      param_1[0x254] = 0;
      goto LAB_002bdb6c;
    }
    fVar12 = *pfVar10;
    if ((fVar12 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar12) + 0x1c) == param_1[0x254])) {
LAB_002bd9d8:
      func_00110848((int)ALBW_AS_U32(fVar12));
    }
    break;
  case 4:
    iVar3 = param_1[0x253];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x254])) {
      iVar5 = *(int *)(iVar3 + 0x20);
      if ((iVar5 != 0) &&
         ((*(int *)(iVar3 + 0x24) == *(int *)(iVar5 + 0xc) && (0 < *(int *)(iVar5 + 4))))) {
        *(undefined1 *)(iVar5 + 0x280) = 1;
      }
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
    }
    pcVar11 = s_PopAttack_002bdd24;
    if (param_1[0xd1] == 0) goto LAB_002bdb0c;
    fVar12 = *pfVar10;
    if ((fVar12 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar12) + 0x1c) == param_1[0x254])) goto LAB_002bd9d8;
  }
  func_004A1B9C((int *)&local_50,param_1[0xd1],(uint *)pcVar11);
  *pfVar10 = local_50;
  param_1[0x254] = (int)ALBW_AS_U32(local_4c);
LAB_002bdb6c:
  fVar12 = DAT_002bdd30;
  iVar3 = (int)(char)param_1[0x230];
  param_1[0x256] = iVar3;
  if (iVar3 == 7 || iVar3 == 8) {
    fVar13 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar13);
    iVar3 = func_00520ED8((int)param_1);
    if (((iVar3 != 0) || (bVar2 = func_00521078((int)param_1), bVar2)) &&
       (in_fpscr = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_1[0xf8]) == fVar12) << 0x1e |
                   (uint)(fVar12 <= ALBW_AS_F32(param_1[0xf8])) << 0x1d, bVar1 = (byte)(in_fpscr >> 0x18),
       !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
      fVar13 = func_004F944C();
      param_1[0xf8] = (int)ALBW_AS_U32(fVar13);
    }
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar8);
  local_3c = DAT_002bdd34;
  if (0 < param_1[0x252]) {
    iVar3 = param_1[0x252] + -1;
    param_1[0x252] = iVar3;
    fVar13 = local_3c;
    if ((iVar3 < 0x20) && (0 < iVar3)) {
      uVar6 = (iVar3 % 8) * 0x1fffffe0;
      pfVar8 = (float *)(DAT_002bdd3c + (uVar6 >> 0x18) * 0x10);
      fVar13 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = local_3c +
               (*pfVar8 + pfVar8[1] * fVar13 * DAT_002bdd38) * DAT_002bdd40 * fVar14 * DAT_002bdd44;
    }
    param_1[0x255] = (int)ALBW_AS_U32(fVar13);
  }
  if (param_1[0x253] != 0) {
    local_44 = param_1[0x23e];
    local_50 = ALBW_AS_F32(param_1[0x255]);
    local_34 = param_1[0x242];
    local_24 = param_1[0x246];
    local_28 = local_3c / local_50;
    fVar13 = *pfVar10;
    if ((fVar13 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar13) + 0x1c) == param_1[0x254])) {
      local_4c = fVar12;
      local_48 = fVar12;
      local_40 = fVar12;
      local_38 = fVar12;
      local_30 = fVar12;
      local_2c = fVar12;
      func_004A2D1C((int)ALBW_AS_U32(fVar13),&local_50);
    }
  }
  return;
}

