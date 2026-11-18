#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00325150(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0052107C(int param_1);
extern uint DAT_0035cf24;
extern int DAT_0035cf28;
extern float DAT_0035cf2c;
extern float DAT_0035cf30;
extern uint *DAT_0035cf34;
extern undefined4 DAT_0035cf38;
extern float DAT_0035cf3c;

// USA 0035CD60 <- EU 0035CD3C (Ghidra, non-matching)
// GLOBAL DAT_0035cf24 uint
// GLOBAL DAT_0035cf28 int
// GLOBAL DAT_0035cf2c float
// GLOBAL DAT_0035cf30 float
// GLOBAL DAT_0035cf34 uint *
// GLOBAL DAT_0035cf38 undefined4
// GLOBAL DAT_0035cf3c float

/* WARNING: Variable defined which should be unmapped: objStack_18 */

undefined4 func_0035CD60(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  *(undefined1 *)(param_1 + 0x133) = 0;
  iVar3 = (short)param_1[0x147] + -1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(short *)(param_1 + 0x147) = (short)iVar3;
  objStack_18[0] = 0;
  objStack_18[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x126],param_1 + 0x14e,DAT_0035cf24,0,0);
  piVar5 = (int *)(param_1[0x145] + (char)param_1[0x13f] * 8);
  uVar4 = *(uint *)(param_1[0x145] + (char)param_1[0x13f] * 8 + 4);
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(*piVar5 + *(int *)(param_1[0x143] + ((int)uVar4 >> 1)));
  }
  (*(code *)*piVar5)();
  iVar3 = param_1[0x13e] + 1;
  param_1[0x13e] = iVar3;
  if (param_1[0x142] != 0) {
    fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x142],1,fVar6);
  }
  bVar2 = func_0052107C((int)param_1);
  cVar1 = '\0';
  if (bVar2) {
    cVar1 = (char)param_1[0x13f];
  }
  if ((!bVar2 || cVar1 == '\x03') || cVar1 == '\x04') {
    fVar6 = ALBW_AS_F32(param_1[0xf8]) - DAT_0035cf2c;
    if (ALBW_AS_F32(param_1[0xf8]) - DAT_0035cf2c < DAT_0035cf30) {
      fVar6 = DAT_0035cf30;
    }
    param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
  }
  else {
    param_1[0xf8] = DAT_0035cf28;
  }
  func_00325150(param_1);
  objStack_18[0] = *DAT_0035cf34;
  objStack_18[1] = DAT_0035cf34[1];
  objStack_18[2] = DAT_0035cf34[2];
  iVar3 = func_0014EEC8((int)param_1,(uint)objStack_18,param_1 + 0x127,DAT_0035cf38,
                        ALBW_AS_F32(param_1[299]));
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = (char)param_1[0x13f];
  }
  if (((iVar3 != 0 && cVar1 != '\x03') && cVar1 != '\x04') && (DAT_0035cf3c < ALBW_AS_F32(objStack_18[1]))
     ) {
    param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + ALBW_AS_F32(objStack_18[1])));
  }
  iVar3 = param_1[0x13c];
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar3 + 0x80),0,param_1[0xfa],0);
  iVar3 = param_1[0x13c];
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(int *)(iVar3 + 0x8c) = param_1[0xf4];
  *(int *)(iVar3 + 0x9c) = param_1[0xf5];
  *(int *)(iVar3 + 0xac) = param_1[0xf6];
  func_004CEAF0(param_1[0x13c]);
  return func_001512B4(param_1[0x13d],(float *)(param_1 + 0xf4));
}

