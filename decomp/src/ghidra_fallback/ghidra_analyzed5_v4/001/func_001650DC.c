#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int func_00588F08(int param_1);
extern int func_0068C690(float *param_1);
extern int DAT_001651a4;
extern undefined4 *DAT_001651a8;
extern float DAT_001651ac;
extern int *DAT_001651b0;

// USA 001650DC <- EU 001650E0 (Ghidra, non-matching)
// GLOBAL DAT_001651a4 int
// GLOBAL DAT_001651a8 undefined4 *
// GLOBAL DAT_001651ac float
// GLOBAL DAT_001651b0 int *

void func_001650DC(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  func_004FC07C((int)param_1,2,0xffffffff,0);
  func_004FC570(param_1);
  puVar1 = DAT_001651a8;
  iVar6 = DAT_001651a4;
  param_1[0xf8] = DAT_001651a4;
  uVar3 = func_00111A64((uint *)*puVar1);
  iVar4 = (int)((ulonglong)uVar3 * 100 >> 0x20) + 200;
  param_1[0x242] = iVar4;
  if (iVar4 == 0) {
    param_1[0x243] = iVar6;
  }
  else {
    fVar7 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x243] = (int)ALBW_AS_U32((DAT_001651ac / fVar7));
  }
  piVar2 = DAT_001651b0;
  param_1[0x241] = 0;
  pfVar5 = (float *)func_00588F08(*piVar2);
  func_00115C70(afStack_28,(float *)(param_1 + 0xf4),pfVar5);
  iVar6 = func_0068C690(afStack_28);
  param_1[0x23b] = iVar6;
  param_1[0x167] = param_1[0x167] & 0xffffffcf;
  return;
}

