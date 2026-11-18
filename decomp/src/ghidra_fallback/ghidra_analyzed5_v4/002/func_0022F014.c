#include "ghidra_types.h"

extern int func_00151150(int param_1,float *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_00521078(int param_1);
extern int func_0065E9FC(undefined4 *param_1,undefined1 param_2);
extern int DAT_0022f148;

// USA 0022F014 <- EU 0022F014 (Ghidra, non-matching)
// GLOBAL DAT_0022f148 int

void func_0022F014(int *param_1)

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
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  iVar2 = func_004F70A8(param_1);
  if (iVar2 != 0) {
    piVar7 = param_1 + 0x29f;
    if (((char)param_1[0x2a0] != '\b' && (char)param_1[0x2a0] != '\t') &&
       (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
      func_0065E9FC(piVar7,8);
    }
    pfVar6 = (float *)param_1[0x2a4];
    piVar3 = (int *)(param_1[0x2a6] + (char)param_1[0x2a0] * 8);
    uVar4 = *(uint *)(param_1[0x2a6] + (char)param_1[0x2a0] * 8 + 4);
    piVar5 = (int *)((int)pfVar6 + ((int)uVar4 >> 1));
    if ((uVar4 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *piVar5);
    }
    (*(code *)*piVar3)(piVar5);
    iVar2 = *piVar7;
    *piVar7 = iVar2 + 1;
    if (param_1[0x2a3] != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[0x2a3],1,fparam_0);
    }
    bVar1 = func_00521078((int)param_1);
    if (bVar1) {
      param_1[0xf8] = DAT_0022f148;
    }
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
    uStack_14 = *(undefined4 *)(param_1[0x107] + 0x14);
    local_18 = ALBW_AS_F32(param_1[0x294]);
    local_10 = local_18;
    func_00151150(param_1[0x107],&local_18);
  }
  return;
}

