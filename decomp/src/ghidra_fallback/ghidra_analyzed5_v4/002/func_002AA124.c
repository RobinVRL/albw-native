#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_005427C4(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_006623B0(undefined4 *param_1,undefined1 param_2);

// USA 002AA124 <- EU 002AA100 (Ghidra, non-matching)

undefined4 func_002AA124(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  uint in_fpscr;
  float fparam_0;
  undefined8 uVar8;
  
  iVar2 = func_004F70A8(param_1);
  if (iVar2 != 0) {
    piVar7 = param_1 + 0x22f;
    if (((char)param_1[0x230] != '\x02' && (char)param_1[0x230] != '\x03') &&
       (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
      func_006623B0(piVar7,2);
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
      fparam_0 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x233],1,fparam_0);
    }
    if (*(char *)((int)param_1 + 0x8fd) == '\0') {
      bVar1 = func_005427C4((int)param_1,0);
      if ((bVar1) && (*(char *)((int)param_1 + 0x8fe) == '\0')) {
        *(undefined1 *)((int)param_1 + 0x8fd) = 1;
        pfVar6 = (float *)0x0;
        func_004FABDC((int)param_1,2,0xffffffff,0);
      }
    }
    else if (((char)param_1[0x230] == '\x01') && (*(char *)((int)param_1 + 0x8fe) != '\0')) {
      pfVar6 = (float *)0x0;
      *(undefined1 *)((int)param_1 + 0x8fd) = 0;
      func_004FABDC((int)param_1,1,0xffffffff,0);
    }
    iVar2 = func_0058A8F0((int)param_1);
    if ((iVar2 != 0) && (uVar8 = func_0058AB74((int)param_1), (int)uVar8 == 1 || (int)uVar8 == 2)) {
      pfVar6 = (float *)0x0;
      func_004FC07C((int)param_1,0,0xffffffff,0);
    }
    bVar1 = func_005427C4((int)param_1,0);
    *(bool *)((int)param_1 + 0x8fe) = bVar1;
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
  }
  return 0;
}

