#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0065A840(undefined4 *param_1,undefined1 param_2);

// USA 001A7DF4 <- EU 001A7DF4 (Ghidra, non-matching)

undefined4 func_001A7DF4(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  iVar1 = func_004F70A8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar6 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\a' && (char)param_1[0x230] != '\b') &&
     (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
    func_0065A840(piVar6,7);
  }
  if ((uint)param_1[0x243] < (uint)param_1[0x244]) {
    param_1[0x243] = param_1[0x243] + 1;
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
    fparam_0 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fparam_0);
  }
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  *(char *)((int)param_1 + 0x935) = (char)param_1[0x24d];
  *(undefined1 *)(param_1 + 0x24d) = 0;
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
}

