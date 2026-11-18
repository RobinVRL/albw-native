#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00204ea4;
extern float DAT_00204ea8;
extern float DAT_00204ec0;
extern float DAT_00204ec4;
extern undefined4 DAT_00204ec8;
extern float DAT_00204ecc;
extern float DAT_00204ed0;
extern float DAT_00204ed4;
extern float DAT_00204ed8;
extern float DAT_00204edc;
extern float DAT_00204ee0;
extern float *DAT_00204ee4;
extern float *DAT_00204ee8;
extern float DAT_00204eec;
extern char s_SE_BuzzBlob_ELEC_00204eac[];

// USA 00204AC0 <- EU 00204AC0 (Ghidra, non-matching)
// GLOBAL DAT_00204ea4 float
// GLOBAL DAT_00204ea8 float
// GLOBAL DAT_00204ec0 float
// GLOBAL DAT_00204ec4 float
// GLOBAL DAT_00204ec8 undefined4
// GLOBAL DAT_00204ecc float
// GLOBAL DAT_00204ed0 float
// GLOBAL DAT_00204ed4 float
// GLOBAL DAT_00204ed8 float
// GLOBAL DAT_00204edc float
// GLOBAL DAT_00204ee0 float
// GLOBAL DAT_00204ee4 float *
// GLOBAL DAT_00204ee8 float *
// GLOBAL DAT_00204eec float
// GLOBAL s_SE_BuzzBlob_ELEC_00204eac string

/* WARNING: Removing unreachable block (ram,0x00204ce0) */
/* WARNING: Removing unreachable block (ram,0x00204ce4) */
/* WARNING: Removing unreachable block (ram,0x00204cf4) */
/* WARNING: Removing unreachable block (ram,0x00204d00) */
/* WARNING: Removing unreachable block (ram,0x00204d74) */
/* WARNING: Removing unreachable block (ram,0x00204d78) */
/* WARNING: Removing unreachable block (ram,0x00204d88) */
/* WARNING: Removing unreachable block (ram,0x00204d94) */

void func_00204AC0(int *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  ushort *puVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(char * *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  #define local_18 (*(undefined1 *)(albw_frame + 0x38))
  #define local_17 (*(undefined1 *)(albw_frame + 0x39))
  #define local_16 (*(undefined1 *)(albw_frame + 0x3a))
  #define local_15 (*(undefined1 *)(albw_frame + 0x3b))
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return;
  }
  if (((char)param_1[0x23d] != '\x02' && (char)param_1[0x23d] != '\b') &&
     (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
    func_0065D3A8(param_1 + 0x23c,2);
  }
  *(undefined1 *)(param_1 + 0x232) = 0;
  pfVar5 = (float *)param_1[0x243];
  pfVar3 = pfVar5 + (char)param_1[0x23d] * 2;
  piVar4 = (int *)(param_1[0x241] + ((int)pfVar5[(char)param_1[0x23d] * 2 + 1] >> 1));
  if (((uint)pfVar5[(char)param_1[0x23d] * 2 + 1] & 1) != 0) {
    pfVar3 = (float *)((int)ALBW_AS_U32(*pfVar3) + *piVar4);
  }
  (*(code *)ALBW_PTR_BITS(*pfVar3))(piVar4);
  iVar2 = param_1[0x23c] + 1;
  param_1[0x23c] = iVar2;
  if (param_1[0x240] != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x240],1,fVar8);
  }
  fVar8 = ALBW_AS_F32(param_1[0xf8]) - DAT_00204ea4;
  if (ALBW_AS_F32(param_1[0xf8]) - DAT_00204ea4 < DAT_00204ea8) {
    fVar8 = DAT_00204ea8;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  if ((((short)param_1[0xc] == 1) && (cVar1 = (char)param_1[0x23d], cVar1 != '\0')) &&
     (cVar1 != '\x02' && cVar1 != '\b')) {
    local_44 = s_SE_BuzzBlob_ELEC_00204eac;
    local_48 = DAT_00204ec0;
    func_001507D8((int)param_1,(int *)&local_48,0);
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
  if ((short)param_1[0xc] != 1) {
    return;
  }
  local_38 = DAT_00204ed0;
  local_2c = DAT_00204ecc;
  local_28 = DAT_00204ed8;
  local_34 = DAT_00204ec8;
  fStack_30 = DAT_00204ec4;
  local_1c = DAT_00204ed4;
  local_24 = DAT_00204ec8;
  fStack_20 = DAT_00204ec4;
  pfVar3 = (float *)(param_1 + 0x231);
  if ((char)param_1[0x232] == '\0') {
    fVar10 = *pfVar3;
    fVar8 = -fVar10 * DAT_00204ecc;
    if (fVar8 <= DAT_00204ec4) {
      fVar8 = -fVar8;
    }
    fVar9 = DAT_00204edc;
    if ((DAT_00204edc <= fVar8) && (fVar9 = fVar8, DAT_00204ee0 < fVar8)) {
      fVar9 = DAT_00204ee0;
    }
    fVar9 = fVar10 + fVar9;
    if ((DAT_00204ec4 <= fVar9) || (fVar9 < fVar10)) {
      *pfVar3 = DAT_00204ec4;
      goto LAB_00204d98;
    }
  }
  else {
    fVar10 = *pfVar3;
    fVar8 = (DAT_00204ed4 - fVar10) * DAT_00204ecc;
    if (fVar8 <= DAT_00204ec4) {
      fVar8 = -fVar8;
    }
    fVar9 = DAT_00204edc;
    if ((DAT_00204edc <= fVar8) && (fVar9 = fVar8, DAT_00204ee0 < fVar8)) {
      fVar9 = DAT_00204ee0;
    }
    fVar9 = fVar10 + fVar9;
    if ((DAT_00204ed4 <= fVar9) || (fVar9 < fVar10)) {
      *pfVar3 = DAT_00204ed4;
      goto LAB_00204d98;
    }
  }
  *pfVar3 = fVar9;
LAB_00204d98:
  local_48 = *DAT_00204ee4;
  local_44 = (char *)ALBW_PTR_BITS(*DAT_00204ee4);
  local_40 = *DAT_00204ee4;
  local_3c = *DAT_00204ee8;
  func_0049C154(&local_48,&local_28,&local_38,ALBW_AS_F32(param_1[0x231]));
  local_18 = (undefined1)(int)(local_48 * DAT_00204eec);
  local_17 = (undefined1)(int)(ALBW_AS_F32(local_44) * DAT_00204eec);
  local_16 = (undefined1)(int)(local_40 * DAT_00204eec);
  local_15 = (undefined1)(int)(local_3c * DAT_00204eec);
  if ((char)param_1[0x194] == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0x16a];
  }
  iVar6 = 0;
  if (0 < *(int *)(*(int *)(iVar2 + 0x20) + 4)) {
    do {
      puVar7 = (ushort *)(**(int **)(iVar2 + 0x20) + iVar6 * 0x154);
      if (puVar7 != (ushort *)0x0) {
        func_004CF5DC(iVar2,iVar6,3,(undefined4 *)&local_18);
        *puVar7 = *puVar7 | 0x400;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(*(int *)(iVar2 + 0x20) + 4));
  }
  return;
}

