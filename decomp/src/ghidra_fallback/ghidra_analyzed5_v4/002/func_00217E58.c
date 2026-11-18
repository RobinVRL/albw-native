#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern int func_004F5174(int param_1,int param_2);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F9FC4(int param_1,int param_2);
extern int func_004FA124(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int DAT_0021806c;
extern float DAT_00218070;
extern int *DAT_00218074;

// USA 00217E58 <- EU 00217E58 (Ghidra, non-matching)
// GLOBAL DAT_0021806c int
// GLOBAL DAT_00218070 float
// GLOBAL DAT_00218074 int *

undefined4 func_00217E58(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  uint in_fpscr;
  float fparam_0;
  
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1[0x23d] == 0) {
    piVar5 = param_1 + 0x10f;
    if (*(int *)param_1[0x10f] != 0) {
      cVar1 = *(char *)(param_1[0x10f] + 0x21);
      if (cVar1 == '\x05') {
        func_002917A4(*DAT_00218074,param_1 + 0xf4,0,DAT_00218070);
        param_1[0x23d] = 0x16;
        func_004FA124(param_1,(int)*(char *)(param_1[0x10f] + 0x21),0);
        func_004F9FC4((int)param_1,*piVar5);
      }
      else if (cVar1 == '\b') {
        func_00291A38(*DAT_00218074,param_1 + 0xf4,DAT_00218070);
        param_1[0x23d] = 0x32;
        func_004FA124(param_1,(int)*(char *)(param_1[0x10f] + 0x21),0);
        func_004F9FC4((int)param_1,*piVar5);
      }
      else if (cVar1 == '\x0e') {
        func_00291FE0(*DAT_00218074,param_1 + 0xf4,DAT_00218070);
        param_1[0x23d] = 0x32;
        func_004FA124(param_1,(int)*(char *)(param_1[0x10f] + 0x21),0);
        func_004F9FC4((int)param_1,*piVar5);
      }
    }
  }
  else {
    param_1[0x23d] = param_1[0x23d] + -1;
  }
  pfVar6 = (float *)param_1[0x235];
  piVar5 = (int *)(param_1[0x237] + (char)param_1[0x231] * 8);
  uVar3 = *(uint *)(param_1[0x237] + (char)param_1[0x231] * 8 + 4);
  if ((uVar3 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)((int)pfVar6 + ((int)uVar3 >> 1)));
  }
  (*(code *)*piVar5)();
  iVar2 = param_1[0x230] + 1;
  param_1[0x230] = iVar2;
  if (param_1[0x234] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x234],1,fparam_0);
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  pfVar4 = (float *)func_00520FC0();
  func_004F5174((int)param_1,
                (uint)((int)ALBW_AS_U32(((*pfVar4 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar4 - ALBW_AS_F32(param_1[0xf4])) +
                            (pfVar4[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar4[2] - ALBW_AS_F32(param_1[0xf6]))))
                      < DAT_0021806c));
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
}

