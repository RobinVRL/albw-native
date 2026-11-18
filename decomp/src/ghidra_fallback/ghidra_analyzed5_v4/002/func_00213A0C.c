#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003C29D8(int *param_1);
extern int func_003C2D00(int param_1,float *param_2,undefined4 **param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F9594(void);
extern int func_004FAFDC(int param_1,float fparam_0);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00213cd0;
extern undefined DAT_00213cd4;
extern char s_cf_00213cd8[];
extern undefined4 _DAT_00213cd4;

// USA 00213A0C <- EU 00213A0C (Ghidra, non-matching)
// GLOBAL DAT_00213cd0 float
// GLOBAL DAT_00213cd4 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00213A0C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 **ppuVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  iVar1 = func_004F70A8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar8 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\b' && (char)param_1[0x230] != '\t') &&
     (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
    func_0065D8B8(piVar8,8);
  }
  piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar5 = (int *)(param_1[0x234] + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *piVar5);
  }
  (*(code *)*piVar2)(piVar5);
  iVar1 = *piVar8;
  *piVar8 = iVar1 + 1;
  if (param_1[0x233] != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar9);
  }
  func_003C29D8(param_1 + 0x238);
  pfVar7 = (float *)0x0;
  if (param_1[0x244] < 3) {
    uVar4 = param_1[0x167] & 0xffffffef;
  }
  else {
    uVar4 = param_1[0x167] | 0x10;
  }
  param_1[0x167] = uVar4;
  iVar1 = param_1[0x268];
  if ((char)param_1[0x230] != '\x02' && (char)param_1[0x230] != '\x03') {
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x1c) == param_1[0x269]) {
        iVar3 = *(int *)(iVar1 + 0x20);
        if (((iVar3 != 0) && (*(int *)(iVar1 + 0x24) == *(int *)(iVar3 + 0xc))) &&
           (0 < *(int *)(iVar3 + 4))) {
          *(undefined1 *)(iVar3 + 0x280) = 1;
        }
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
      }
      param_1[0x268] = 0;
      param_1[0x269] = 0;
    }
    goto LAB_00213b74;
  }
  if (iVar1 == 0) {
    if (param_1[0xd1] == 0) {
      param_1[0x269] = 0;
      goto LAB_00213b74;
    }
    func_004A1B9C(&local_28,param_1[0xd1],(uint *)(s_cf_00213cd8));
    param_1[0x268] = local_28;
    param_1[0x269] = (int)ALBW_AS_U32(local_24);
    if (param_1[0x268] == 0) goto LAB_00213b74;
  }
  local_28 = param_1[0xf4];
  iStack_20 = param_1[0xf6];
  local_24 = ALBW_AS_F32(param_1[0xf5]) + ALBW_AS_F32(param_1[0x24e]);
  iVar1 = param_1[0x268];
  if ((iVar1 != 0) && (pfVar7 = *(float **)(iVar1 + 0x1c), pfVar7 == (float *)param_1[0x269])) {
    func_004A2F38(iVar1,&local_28);
  }
  func_004FAFDC((int)param_1,ALBW_AS_F32(param_1[0x24e]));
LAB_00213b74:
  fVar9 = ALBW_AS_F32(_DAT_00213cd4);
  fVar10 = ALBW_AS_F32(param_1[0x24e]) * DAT_00213cd0;
  iVar1 = param_1[0x119];
  ppuVar6 = (undefined4 **)param_1[0x11a];
  param_1[0x119] = iVar1;
  param_1[0x11a] = (int)ppuVar6;
  fVar9 = ALBW_AS_F32(param_1[0x11b]) + (fVar10 - ALBW_AS_F32(param_1[0x11b])) * fVar9;
  param_1[0x11b] = (int)ALBW_AS_U32(fVar9);
  param_1[0x113] = iVar1;
  param_1[0x114] = (int)ppuVar6;
  param_1[0x115] = (int)ALBW_AS_U32(fVar9);
  fVar9 = func_004F898C();
  fVar9 = ALBW_AS_F32(param_1[0xf8]) - fVar9;
  fVar10 = func_004F9594();
  if (fVar9 < -fVar10) {
    fVar9 = -fVar10;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_003C2D00((int)(param_1 + 0x238),(float *)(param_1 + 0xf7),ppuVar6);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
}

