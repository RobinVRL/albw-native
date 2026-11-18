#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0037FC58(int param_1);
extern int func_004A3700(int param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004FAD90(int param_1);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_005811E8(int *param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);

// USA 003819D4 <- EU 003819B0 (Ghidra, non-matching)

undefined4 func_003819D4(int *param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  uint in_fpscr;
  float fVar10;
  
  sVar1 = *(short *)((int)param_1 + 0xb26);
  if ((sVar1 != 0) && (*(short *)((int)param_1 + 0xb26) = sVar1 + -1, sVar1 == 2)) {
    iVar3 = func_005811E8(param_1 + 0x2d1);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = param_1[0x2d1];
    }
    if ((iVar3 != 0 && iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x2d2])) {
      *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar4);
    }
  }
  sVar1 = (short)param_1[0x2ca];
  if ((sVar1 != 0) && (*(short *)(param_1 + 0x2ca) = sVar1 + -1, sVar1 == 2)) {
    iVar3 = func_005811E8(param_1 + 0x2d5);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = param_1[0x2d5];
    }
    if ((iVar3 != 0 && iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x2d6])) {
      *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar4);
    }
  }
  if (*(char *)((int)param_1 + 0xb33) != '\0') {
    *(undefined1 *)((int)param_1 + 0x829) = 1;
  }
  iVar4 = func_004F70A8(param_1);
  if (iVar4 == 0) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x293);
  piVar9 = param_1 + 0x292;
  if ((((1 < bVar2) && ((bVar2 != 9 && bVar2 != 10) && bVar2 != 8)) &&
      ((uint)param_1[0x2bd] < (uint)param_1[0x2be])) &&
     (iVar4 = func_004F8998(param_1,0,(char *)0x0), iVar4 != 0)) {
    func_006678C0(piVar9,9);
  }
  pfVar8 = (float *)param_1[0x297];
  piVar5 = (int *)(param_1[0x299] + (char)param_1[0x293] * 8);
  uVar6 = *(uint *)(param_1[0x299] + (char)param_1[0x293] * 8 + 4);
  piVar7 = (int *)((int)pfVar8 + ((int)uVar6 >> 1));
  if ((uVar6 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *piVar7);
  }
  (*(code *)*piVar5)(piVar7);
  iVar4 = *piVar9;
  *piVar9 = iVar4 + 1;
  if (param_1[0x296] != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar4 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x296],1,fVar10);
  }
  fVar10 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar10);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  if ((char)param_1[0x293] == '\t' || (char)param_1[0x293] == '\n') {
    param_1[0x167] = param_1[0x167] & 0xfffffff7;
    func_004FAD90((int)param_1);
  }
  fVar10 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar10);
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar8);
  return func_0037FC58((int)param_1);
}

