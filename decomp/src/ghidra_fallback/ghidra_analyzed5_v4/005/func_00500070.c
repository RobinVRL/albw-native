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
extern int func_0051D1C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1,float fparam_2);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0066B070(undefined4 *param_1,undefined1 param_2);
extern float DAT_005001fc;
extern float DAT_00500200;

// USA 00500070 <- EU 00500048 (Ghidra, non-matching)
// GLOBAL DAT_005001fc float
// GLOBAL DAT_00500200 float

undefined4 func_00500070(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  
  iVar1 = func_004F70A8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar8 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\x02' && (char)param_1[0x230] != '\x03') &&
     (iVar1 = func_004F8998(param_1,0,(char *)0x0), iVar1 != 0)) {
    func_0066B070(piVar8,2);
  }
  pfVar7 = (float *)param_1[0x234];
  piVar2 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar5 = (int *)((int)pfVar7 + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *piVar5);
  }
  (*(code *)*piVar2)(piVar5);
  iVar1 = *piVar8;
  *piVar8 = iVar1 + 1;
  if (param_1[0x233] != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar9);
  }
  iVar1 = param_1[0x23b];
  iVar3 = param_1[0xfa];
  uVar4 = param_1[0x242];
  uVar6 = param_1[0x243];
  if (uVar4 < uVar6) {
    if (param_1[0x246] == 0) {
      func_0051D39C(param_1 + 0x23f,param_1[0x241],uVar6 - uVar4);
    }
    else if (param_1[0x246] == 1) {
      fVar9 = DAT_005001fc;
      if ((uVar6 != 0) && (uVar4 != 0)) {
        fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar9 * ALBW_AS_F32(param_1[0x244]);
      }
      func_0051D1C0(param_1 + 0x23f,param_1[0x240],param_1[0x241],DAT_00500200,DAT_005001fc,fVar9);
    }
  }
  if ((uint)param_1[0x242] < (uint)param_1[0x243]) {
    param_1[0x242] = param_1[0x242] + 1;
  }
  param_1[0x245] = iVar1 - iVar3;
  fVar9 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar9);
  func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  return func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar7);
}

