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
extern int func_0066034C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00262214;
extern float DAT_00262218;
extern float DAT_0026221c;
extern float DAT_00262220;

// USA 00262004 <- EU 0026202C (Ghidra, non-matching)
// GLOBAL DAT_00262214 int *
// GLOBAL DAT_00262218 float
// GLOBAL DAT_0026221c float
// GLOBAL DAT_00262220 float

undefined4 func_00262004(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  piVar3 = DAT_00262214;
  bVar1 = func_00556E64(*DAT_00262214);
  pfVar5 = (float *)(param_1 + 0x282);
  fVar8 = *pfVar5;
  if (bVar1) {
    fVar8 = fVar8 + -fVar8 * DAT_00262218;
    *pfVar5 = fVar8;
    param_1[0x15d] = (int)ALBW_AS_U32(fVar8);
  }
  else {
    fVar8 = fVar8 + (DAT_0026221c - fVar8) * DAT_00262218;
    *pfVar5 = fVar8;
    param_1[0x15d] = (int)ALBW_AS_U32(fVar8);
  }
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar6 = param_1 + 0x22f;
  if ((char)param_1[0x230] != '\x02') {
    piVar7 = (int *)param_1[0x10e];
    if ((*piVar7 != 0) && (iVar2 = func_005568E8(*piVar3), *piVar7 != iVar2)) {
      *(undefined1 *)(param_1 + 0x280) = 1;
    }
    iVar2 = func_004F8998(param_1,0,(char *)0x0);
    if (iVar2 != 0) {
      func_0066034C(piVar6,2);
    }
  }
  pfVar5 = (float *)param_1[0x234];
  piVar3 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar7 = (int *)((int)pfVar5 + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *piVar7);
  }
  (*(code *)*piVar3)(piVar7);
  iVar2 = *piVar6;
  *piVar6 = iVar2 + 1;
  if (param_1[0x233] != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar8);
  }
  if ((uint)param_1[0x239] < (uint)param_1[0x23a]) {
    param_1[0x239] = param_1[0x239] + 1;
  }
  iVar2 = func_00520EE4((int)param_1);
  if (iVar2 == 0) {
    bVar1 = func_00521078((int)param_1);
    if (bVar1) {
      fVar8 = func_004F944C();
      param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
    }
    else if ((char)param_1[0x230] != '\x02') {
      fVar9 = func_004F898C();
      fVar8 = ALBW_AS_F32(param_1[0xf8]) - fVar9;
      if (ALBW_AS_F32(param_1[0xf8]) - fVar9 < DAT_00262220) {
        fVar8 = DAT_00262220;
      }
      param_1[0xf8] = (int)ALBW_AS_U32(fVar8);
    }
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
}

