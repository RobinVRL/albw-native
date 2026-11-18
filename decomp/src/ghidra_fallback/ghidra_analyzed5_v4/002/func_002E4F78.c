#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002E4DE8(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004F944C(void);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_00521078(int param_1);
extern int func_00663E64(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002e5150;
extern float DAT_002e5154;
extern float DAT_002e5158;
extern float DAT_002e515c;

// USA 002E4F78 <- EU 002E4F54 (Ghidra, non-matching)
// GLOBAL DAT_002e5150 undefined4
// GLOBAL DAT_002e5154 float
// GLOBAL DAT_002e5158 float
// GLOBAL DAT_002e515c float

undefined4 func_002E4F78(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = (short)param_1[0x245] + -1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(short *)(param_1 + 0x245) = (short)iVar3;
  iVar3 = func_004F70A8(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  fVar11 = DAT_002e5154;
  func_004FBA18((int)param_1,3,0xff,-1,0xc,0,(ushort)DAT_002e5150,DAT_002e5158,DAT_002e5154);
  if (*(char *)(param_1[0x231] + 0x44) != '\0') {
    func_0014E2A0((int)param_1,param_1[0x22f],param_1 + 0x246,0x1600,0,0);
    func_0014E2A0((int)param_1,param_1[0x230],param_1 + 0x24a,0x1000,0,0);
  }
  cVar1 = (char)param_1[0x234];
  piVar8 = param_1 + 0x233;
  if (((cVar1 == '\x02' || cVar1 == '\x04') || cVar1 == '\x03') &&
     (iVar3 = func_004F8998(param_1,0,(char *)0x0), iVar3 != 0)) {
    func_00663E64(piVar8,7);
  }
  pfVar7 = (float *)param_1[0x238];
  piVar4 = (int *)(param_1[0x23a] + (char)param_1[0x234] * 8);
  uVar5 = *(uint *)(param_1[0x23a] + (char)param_1[0x234] * 8 + 4);
  piVar6 = (int *)((int)pfVar7 + ((int)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *piVar6);
  }
  (*(code *)*piVar4)(piVar6);
  iVar3 = *piVar8;
  *piVar8 = iVar3 + 1;
  if (param_1[0x237] != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x237],1,fVar9);
  }
  bVar2 = func_00521078((int)param_1);
  fVar9 = DAT_002e515c;
  if (bVar2) {
    fVar9 = func_004F944C();
  }
  param_1[0x243] = (int)ALBW_AS_U32(fVar9);
  fVar10 = ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x241]);
  if (ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x241]) < fVar9) {
    fVar10 = fVar9;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar10);
  if (*(char *)((int)param_1 + 0x916) != '\0') {
    param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
  }
  func_004F48F0((int)param_1);
  func_002E4DE8((int)param_1);
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
}

