#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_0065E110(undefined4 *param_1,undefined1 param_2);
extern float DAT_0021d18c;

// USA 0021D034 <- EU 0021D034 (Ghidra, non-matching)
// GLOBAL DAT_0021d18c float

undefined4 func_0021D034(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define iStack_18 (*(int *)(albw_frame + 0x18))
  #define iStack_14 (*(int *)(albw_frame + 0x1c))
  iVar1 = func_004F70A8(param_1);
  if (iVar1 != 0) {
    piVar6 = param_1 + 0x22f;
    if (((char)param_1[0x230] != '\x03' && (char)param_1[0x230] != '\x04') &&
       (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
      func_0065E110(piVar6,3);
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
    func_0014EB3C((int)param_1);
    local_28 = -ALBW_AS_F32(param_1[0xdd]);
    local_24 = -ALBW_AS_F32(param_1[0xde]);
    local_20 = -ALBW_AS_F32(param_1[0xdf]);
    func_00115D70(&local_1c,&local_28,DAT_0021d18c);
    param_1[0x159] = (int)ALBW_AS_U32(local_1c);
    param_1[0x15a] = iStack_18;
    param_1[0x15b] = iStack_14;
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
  }
  return 0;
}

