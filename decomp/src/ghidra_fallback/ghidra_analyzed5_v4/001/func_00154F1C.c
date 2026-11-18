#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_00657D18(undefined4 *param_1,undefined1 param_2);
extern float DAT_001550a0;
extern float DAT_001550a4;
extern float DAT_001550a8;
extern float DAT_001550ac;
extern float DAT_001550b0;
extern int DAT_001550b4;
extern undefined4 *DAT_001550b8;
extern float DAT_001550bc;

// USA 00154F1C <- EU 00154F20 (Ghidra, non-matching)
// GLOBAL DAT_001550a0 float
// GLOBAL DAT_001550a4 float
// GLOBAL DAT_001550a8 float
// GLOBAL DAT_001550ac float
// GLOBAL DAT_001550b0 float
// GLOBAL DAT_001550b4 int
// GLOBAL DAT_001550b8 undefined4 *
// GLOBAL DAT_001550bc float

undefined4 func_00154F1C(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = DAT_001550b4;
  fVar9 = (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x243])) * DAT_001550a0;
  fVar10 = DAT_001550a4;
  if ((DAT_001550a4 <= fVar9) && (fVar10 = fVar9, 0x3f800000 < (int)ALBW_AS_U32(fVar9))) {
    fVar10 = DAT_001550a8;
  }
  uVar8 = in_fpscr & 0xfffffff | (uint)(fVar10 == DAT_001550a4) << 0x1e |
          (uint)(DAT_001550a4 <= fVar10) << 0x1d;
  bVar1 = (byte)(uVar8 >> 0x18);
  fVar9 = DAT_001550a8;
  if (((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) &&
     (fVar9 = DAT_001550ac, (int)ALBW_AS_U32(fVar10) < 0x3f800000)) {
    fVar9 = DAT_001550a8 + DAT_001550b0 * fVar10;
  }
  param_1[0x13c] = (int)ALBW_AS_U32(fVar9);
  param_1[0x23f] = iVar2 + param_1[0x23f];
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar7 = param_1 + 0x22f;
  if (((char)param_1[0x230] != '\a' && (char)param_1[0x230] != '\b') &&
     (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
    func_00657D18(piVar7,7);
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
    fVar10 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(uVar8 >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fVar10);
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
  return func_004F8864((int)param_1,DAT_001550b8,0,DAT_001550bc);
}

