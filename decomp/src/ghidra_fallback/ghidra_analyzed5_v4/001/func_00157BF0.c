// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F944C(void);
extern int func_00520EE4(int param_1);
extern int func_00521078(int param_1);
extern int func_005568E8(int param_1);
extern int func_00556E64(int param_1);
extern int func_00657FA0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00157df0;
extern float DAT_00157df4;
extern float DAT_00157df8;
extern float DAT_00157dfc;

// USA 00157BF0 <- EU 00157BF4 (Ghidra, non-matching)
// GLOBAL DAT_00157df0 int *
// GLOBAL DAT_00157df4 float
// GLOBAL DAT_00157df8 float
// GLOBAL DAT_00157dfc float

void func_00157BF0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  piVar4 = DAT_00157df0;
  bVar1 = func_00556E64(*DAT_00157df0);
  pfVar5 = (float *)(param_1 + 0x292);
  fVar8 = *pfVar5;
  if (bVar1) {
    fVar8 = fVar8 + -fVar8 * DAT_00157df4;
    *pfVar5 = fVar8;
    param_1[0x15d] = (int)ALBW_AS_U32(fVar8);
  }
  else {
    fVar8 = fVar8 + (DAT_00157df8 - fVar8) * DAT_00157df4;
    *pfVar5 = fVar8;
    param_1[0x15d] = (int)ALBW_AS_U32(fVar8);
  }
  if ((uint)param_1[0x28d] < (uint)param_1[0x28e]) {
    param_1[0x28d] = param_1[0x28d] + 1;
  }
  iVar2 = func_004F70A8(param_1);
  if (iVar2 != 0) {
    piVar6 = param_1 + 0x22f;
    if ((char)param_1[0x230] != '\t' && (char)param_1[0x230] != '\n') {
      piVar7 = (int *)param_1[0x10e];
      if ((*piVar7 != 0) && (iVar2 = func_005568E8(*piVar4), *piVar7 != iVar2)) {
        *(undefined1 *)(param_1 + 0x280) = 1;
      }
      iVar2 = func_004F8998(param_1,0,(char *)0x0);
      if (iVar2 != 0) {
        func_00657FA0(piVar6,9);
      }
    }
    pfVar5 = (float *)param_1[0x234];
    piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    if ((uVar3 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *(int *)((int)pfVar5 + ((int)uVar3 >> 1)));
    }
    (*(code *)*piVar4)();
    iVar2 = *piVar6;
    *piVar6 = iVar2 + 1;
    if (param_1[0x233] != 0) {
      fVar8 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar8);
    }
    iVar2 = func_00520EE4((int)param_1);
    if (iVar2 == 0) {
      bVar1 = func_00521078((int)param_1);
      if (bVar1) {
        fVar8 = func_004F944C();
        param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
      }
      else if ((char)param_1[0x230] != '\t') {
        fVar9 = func_004F898C();
        fVar8 = ALBW_AS_F32(param_1[0xf8]) - fVar9;
        if (ALBW_AS_F32(param_1[0xf8]) - fVar9 < DAT_00157dfc) {
          fVar8 = DAT_00157dfc;
        }
        param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
      }
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
    param_1[0x282] = param_1[0xf4];
    param_1[0x283] = param_1[0xf5];
    param_1[0x284] = param_1[0xf6];
  }
  return;
}

