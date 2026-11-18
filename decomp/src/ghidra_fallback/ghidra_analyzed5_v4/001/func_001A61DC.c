#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0065A6FC(undefined4 *param_1,undefined1 param_2);

// USA 001A61DC <- EU 001A61DC (Ghidra, non-matching)

undefined4 func_001A61DC(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  
  *(undefined1 *)((int)param_1 + 0x94e) = 0;
  if ((short)param_1[0x253] != 0) {
    *(short *)(param_1 + 0x253) = (short)param_1[0x253] + -1;
  }
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  cVar1 = (char)param_1[0x230];
  piVar7 = param_1 + 0x22f;
  if (((cVar1 != '\x04' && cVar1 != '\x05') && cVar1 != '\x03') &&
     (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
    func_0065A6FC(piVar7,4);
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
  fVar8 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar8);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
  *(undefined1 *)((int)param_1 + 0x94f) = 0;
  func_004F9554(param_1[0x10c],0,0,1);
  return func_004F9554(param_1[0x10d],0,0,1);
}

