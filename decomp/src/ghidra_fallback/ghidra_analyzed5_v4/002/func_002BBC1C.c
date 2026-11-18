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
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0058A468(int param_1);
extern int func_006628D0(undefined4 *param_1,undefined1 param_2);

// USA 002BBC1C <- EU 002BBBF8 (Ghidra, non-matching)

undefined4 func_002BBC1C(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x230);
  piVar7 = param_1 + 0x22f;
  if (((1 < bVar1) && (bVar1 != 3 && bVar1 != 4)) &&
     (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
    func_006628D0(piVar7,3);
  }
  pfVar6 = (float *)param_1[0x234];
  piVar3 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar5 = (int *)((int)pfVar6 + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *piVar5);
  }
  (*(code *)*piVar3)(piVar5);
  iVar2 = *piVar7;
  *piVar7 = iVar2 + 1;
  if (param_1[0x233] != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar8);
  }
  if ((char)param_1[0x230] == '\x02') {
    fVar8 = func_004F898C();
    func_004F8964((float *)(param_1 + 0xf8),1,fVar8);
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  }
  if (*(byte *)(param_1 + 0x230) < 2) {
    iVar2 = func_0058A468((int)param_1);
    func_004FC78C((int)param_1,(short)iVar2);
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  if ((short)param_1[0x244] != 0) {
    *(short *)(param_1 + 0x244) = (short)param_1[0x244] + -1;
  }
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
}

