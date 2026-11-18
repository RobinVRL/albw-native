#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0058A468(int param_1);
extern int func_0065D264(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00203270;

// USA 00203138 <- EU 00203138 (Ghidra, non-matching)
// GLOBAL DAT_00203270 undefined4

undefined4 func_00203138(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  
  func_004FC218((int)param_1,'\x01',0,(ushort)DAT_00203270);
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0058A468((int)param_1);
    func_004FC78C((int)param_1,(short)iVar1);
    piVar6 = param_1 + 0x22f;
    if (((char)param_1[0x230] != '\x03' && (char)param_1[0x230] != '\x04') &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_0065D264(piVar6,3);
    }
    pfVar5 = (float *)param_1[0x234];
    piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
    uVar3 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
    piVar4 = (int *)((int)pfVar5 + ((int)uVar3 >> 1));
    if ((uVar3 & 1) != 0) {
      piVar2 = (int *)(*piVar2 + *piVar4);
    }
    (*(code *)*piVar2)(piVar4);
    iVar1 = *piVar6;
    *piVar6 = iVar1 + 1;
    if (param_1[0x233] != 0) {
      fVar7 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fVar7);
    }
    fVar7 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar7);
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
  }
  return 0;
}

