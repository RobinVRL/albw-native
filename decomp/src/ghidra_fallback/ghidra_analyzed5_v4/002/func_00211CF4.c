#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00211328(int param_1);
extern int func_00211574(int param_1);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003C29D8(int *param_1);
extern int func_003C2D00(int param_1,float *param_2,undefined4 **param_3);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern float DAT_00211ef8;
extern float DAT_00211efc;
extern float DAT_00211f00;
extern float DAT_00211f04;
extern int *DAT_00211f08;

// USA 00211CF4 <- EU 00211CF4 (Ghidra, non-matching)
// GLOBAL DAT_00211ef8 float
// GLOBAL DAT_00211efc float
// GLOBAL DAT_00211f00 float
// GLOBAL DAT_00211f04 float
// GLOBAL DAT_00211f08 int *

undefined4 func_00211CF4(int *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 **ppuVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((int *)(albw_frame + 0x4))
  #define afStack_20 ((float *)(albw_frame + 0x10))
  func_00211574((int)param_1);
  fVar9 = DAT_00211efc;
  if ((short)param_1[0xc] != 0) {
    fVar9 = DAT_00211f00;
  }
  iVar2 = func_005211F4((int)param_1,fVar9,DAT_00211ef8);
  if ((iVar2 != 0) &&
     ((cVar1 = (char)param_1[0x230], cVar1 == '\x01' || cVar1 == '\x02' ||
      (cVar1 == '\x05' || cVar1 == '\x06')))) {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(afStack_20,(float *)(param_1 + 0xf4),pfVar3);
    func_00115DC8(afStack_20);
    func_00115D70(afStack_20,afStack_20,DAT_00211f04);
    local_2c[0] = 0;
    func_003413DC(*DAT_00211f08,afStack_20,local_2c);
  }
  func_00211328((int)param_1);
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar8 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\f' && (char)param_1[0x230] != '\r') &&
     (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
    func_0065D774(piVar8,0xc);
  }
  pfVar3 = (float *)param_1[0x234];
  piVar4 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar5 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar6 = (int *)((int)pfVar3 + ((int)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *piVar6);
  }
  (*(code *)*piVar4)(piVar6);
  iVar2 = *piVar8;
  ppuVar7 = (undefined4 **)param_1[0x233];
  *piVar8 = iVar2 + 1;
  if (ppuVar7 != (undefined4 **)0x0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210((int)ppuVar7,1,fVar9);
  }
  func_003C29D8(param_1 + 0x238);
  if (param_1[0x244] < 3) {
    uVar5 = param_1[0x167] & 0xffffffef;
  }
  else {
    uVar5 = param_1[0x167] | 0x10;
  }
  param_1[0x167] = uVar5;
  fVar9 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar9);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_003C2D00((int)(param_1 + 0x238),(float *)(param_1 + 0xf7),ppuVar7);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar3);
}

