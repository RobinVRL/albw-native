#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_00521018(int param_1);
extern int func_00521098(undefined4 param_1,int *param_2);
extern int func_00664374(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002fb2dc;
extern float DAT_002fb2e0;
extern undefined4 DAT_002fb2e4;
extern float DAT_002fb2e8;

// USA 002FB140 <- EU 002FB11C (Ghidra, non-matching)
// GLOBAL DAT_002fb2dc int *
// GLOBAL DAT_002fb2e0 float
// GLOBAL DAT_002fb2e4 undefined4
// GLOBAL DAT_002fb2e8 float

undefined4 func_002FB140(int *param_1)

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
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define fStack_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define iStack_1c (*(int *)(albw_frame + 0x24))
  #define iStack_18 (*(int *)(albw_frame + 0x28))
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = param_1[0x109];
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) & 0xfffffff7;
  }
  piVar7 = param_1 + 0x22f;
  if ((char)param_1[0x230] == '\0') {
    if ((char)param_1[0x244] == '\0') {
      bVar1 = func_00521018((int)param_1);
      if (!bVar1) {
        if ((*(int *)param_1[0x10e] != 0) &&
           (bVar1 = func_00521098(param_1,(int *)param_1[0x10e]), bVar1)) {
          func_00664374(piVar7,2);
        }
        goto LAB_002fb200;
      }
    }
    else {
      func_004D80A4(&fStack_2c,**(uint **)(*DAT_002fb2dc + 0x24),DAT_002fb2e0);
      local_28 = DAT_002fb2e4;
      func_00115D70(&local_20,(float *)(param_1 + 0xdd),DAT_002fb2e8);
      local_38 = local_20;
      iStack_34 = iStack_1c;
      iStack_30 = iStack_18;
      func_00115C54(&local_20,&local_38,&fStack_2c);
      param_1[0x240] = (int)ALBW_AS_U32(local_20);
      param_1[0x241] = iStack_1c;
      param_1[0x242] = iStack_18;
      func_00115DC8((float *)(param_1 + 0x240));
    }
    func_00664374(piVar7,1);
  }
LAB_002fb200:
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
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
}

