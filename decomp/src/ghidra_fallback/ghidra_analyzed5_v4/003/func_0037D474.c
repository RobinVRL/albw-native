#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0037CDA8(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00520ED8(int param_1);
extern float DAT_0037d5fc;
extern float DAT_0037d600;
extern float DAT_0037d604;

// USA 0037D474 <- EU 0037D450 (Ghidra, non-matching)
// GLOBAL DAT_0037d5fc float
// GLOBAL DAT_0037d600 float
// GLOBAL DAT_0037d604 float

void func_0037D474(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  uVar1 = *(uint *)(param_1[0x13e] + (char)param_1[0x138] * 8 + 4);
  pcVar3 = *(code **)(param_1[0x13e] + (char)param_1[0x138] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[0x13c] + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(param_1[0x13c]) + ((int)uVar1 >> 1));
  iVar2 = param_1[0x137] + 1;
  param_1[0x137] = iVar2;
  if (param_1[0x13b] != 0) {
    fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x13b],1,fVar4);
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0x132));
  func_0037CDA8(param_1);
  uVar1 = param_1[0xfa];
  iVar2 = func_00520ED8((int)param_1);
  fVar4 = DAT_0037d5fc;
  if (iVar2 == 0) {
    fVar4 = DAT_0037d600;
  }
  fStack_1c = ALBW_AS_F32(param_1[0x112]);
  fStack_1c = fStack_1c + (fVar4 - fStack_1c) * DAT_0037d604;
  param_1[0x112] = (int)ALBW_AS_U32(fStack_1c);
  fStack_20 = ALBW_AS_F32(param_1[0xf4]);
  fStack_1c = ALBW_AS_F32(param_1[0xf5]) + fStack_1c;
  iStack_18 = param_1[0xf6];
  iVar2 = param_1[0x103];
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_00491E80((float *)(iVar2 + 0x80),0,uVar1,0);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(float *)(iVar2 + 0x8c) = fStack_20;
    *(float *)(iVar2 + 0x9c) = fStack_1c;
    *(int *)(iVar2 + 0xac) = iStack_18;
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(int *)(iVar2 + 0x74) = param_1[0x118];
    *(int *)(iVar2 + 0x78) = param_1[0x119];
    *(int *)(iVar2 + 0x7c) = param_1[0x11a];
    func_004CEAF0(iVar2);
  }
  if (param_1[0x104] != 0) {
    func_001512B4(param_1[0x104],&fStack_20);
  }
  return;
}

