#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004F8DF4(int *param_1,uint param_2);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00521018(int param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);
extern float DAT_00206d04;
extern int *DAT_00206d08;
extern float DAT_00206d0c;
extern float DAT_00206d10;
extern int DAT_00206d14;

// USA 00206A54 <- EU 00206A54 (Ghidra, non-matching)
// GLOBAL DAT_00206d04 float
// GLOBAL DAT_00206d08 int *
// GLOBAL DAT_00206d0c float
// GLOBAL DAT_00206d10 float
// GLOBAL DAT_00206d14 int

undefined4 func_00206A54(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  
  iVar3 = *(short *)((int)param_1 + 0x912) + -1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(short *)((int)param_1 + 0x912) = (short)iVar3;
  iVar3 = func_004F70A8(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  cVar1 = (char)param_1[0x230];
  piVar9 = param_1 + 0x22f;
  if ((cVar1 != '\x04' && cVar1 != '\x05') && cVar1 != '\v') {
    if ((*(int *)param_1[0x10f] == 0) || (param_1[0xe8] != param_1[0x247])) {
      if ((param_1[0xe8] != param_1[0x247]) &&
         (iVar3 = func_004F8998(param_1,0,(char *)0x0), iVar3 != 0)) {
        func_0065D4EC(piVar9,4);
      }
    }
    else {
      cVar1 = *(char *)(param_1[0x10f] + 0x21);
      if (cVar1 == '\b' || cVar1 == '\x0f') {
        func_0065D4EC(piVar9,0xb);
      }
      else if ((*(short *)((int)param_1 + 0x912) < 1) && (cVar1 == '\x05' || cVar1 == '\x0e')) {
        func_004F8DF4(param_1,0xe);
        *(undefined2 *)((int)param_1 + 0x912) = 0x1e;
        if (*(char *)(param_1[0x10f] + 0x21) == '\x05') {
          func_002917A4(*DAT_00206d08,param_1 + 0xf4,0,DAT_00206d04);
        }
        else {
          func_00291FE0(*DAT_00206d08,param_1 + 0xf4,DAT_00206d04);
        }
        func_004FA124(param_1,(int)*(char *)(param_1[0x10f] + 0x21),0);
      }
    }
  }
  pfVar7 = (float *)param_1[0x234];
  piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar5 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar6 = (int *)((int)pfVar7 + ((int)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *piVar6);
  }
  (*(code *)*piVar4)(piVar6);
  iVar3 = *piVar9;
  *piVar9 = iVar3 + 1;
  if (param_1[0x233] != 0) {
    fVar11 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar11);
  }
  fVar11 = ALBW_AS_F32(param_1[0xf8]) - DAT_00206d0c;
  if (ALBW_AS_F32(param_1[0xf8]) - DAT_00206d0c < DAT_00206d10) {
    fVar11 = DAT_00206d10;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
  fVar11 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar11);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  if ((char)param_1[0x264] != '\0') {
    iVar3 = param_1[0x252];
    iVar8 = param_1[0xf4];
    iVar10 = param_1[0xf5];
    *(int *)(iVar3 + 0xc) = param_1[0xf6];
    *(int *)(iVar3 + 4) = iVar8;
    *(int *)(iVar3 + 8) = iVar10;
    pfVar7 = (float *)param_1[0xf4];
    iVar8 = param_1[0xf5];
    iVar3 = param_1[0x252];
    *(int *)(iVar3 + 0x18) = param_1[0xf6];
    *(float **)(iVar3 + 0x10) = pfVar7;
    *(int *)(iVar3 + 0x14) = iVar8;
    func_004356B4((int *)param_1[0x252]);
  }
  iVar3 = DAT_00206d14;
  param_1[0x23c] = DAT_00206d14;
  param_1[0x23d] = iVar3;
  param_1[0x23e] = iVar3;
  func_004F5588((int)param_1);
  bVar2 = func_00521018((int)param_1);
  if (bVar2) {
    func_00115DC8((float *)(param_1 + 0x23c));
  }
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
}

