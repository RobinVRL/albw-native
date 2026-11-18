#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0028765C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004356B4(int *param_1);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004ED9C8(int param_1);
extern float func_00590EC8(float fparam_0,float fparam_1);
extern float DAT_002879dc;
extern float DAT_002879e0;
extern float DAT_002879e4;
extern undefined4 *DAT_002879e8;
extern float DAT_002879ec;

// USA 0028787C <- EU 002878A4 (Ghidra, non-matching)
// GLOBAL DAT_002879dc float
// GLOBAL DAT_002879e0 float
// GLOBAL DAT_002879e4 float
// GLOBAL DAT_002879e8 undefined4 *
// GLOBAL DAT_002879ec float

void func_0028787C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  func_0028765C(param_1,param_2,param_3,param_4);
  puVar2 = DAT_002879e8;
  fVar6 = DAT_002879e4;
  fVar5 = DAT_002879dc;
  if (*(char *)(param_1 + 0x415) == '\0') {
    fVar5 = DAT_002879e0;
  }
  fVar5 = *(float *)(param_1 + 0x41c) - fVar5;
  *(float *)(param_1 + 0x41c) = fVar5;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == fVar6) << 0x1e | (uint)(fVar6 <= fVar5) << 0x1d;
  bVar1 = (byte)(uVar4 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    *(float *)(param_1 + 0x41c) = fVar6;
    if (*(char *)(param_1 + 0x424) != '\0') {
      func_004A8304(*puVar2,*(int *)(param_1 + 0x428));
      *(undefined1 *)(param_1 + 0x424) = 0;
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x420),(byte)(uVar4 >> 0x15) & 3);
  fVar5 = *(float *)(param_1 + 0x41c) / fVar5;
  if ((int)ALBW_AS_U32(fVar5) < 0x3f800000) {
    if (fVar6 < fVar5) {
      func_00590EC8(fVar5,DAT_002879ec);
      fVar6 = *(float *)(param_1 + 0x418) * fVar5;
    }
  }
  else {
    fVar6 = *(float *)(param_1 + 0x418);
  }
  *(float *)(*(int *)(param_1 + 0x42c) + 0x58) = fVar6;
  iVar3 = *(int *)(param_1 + 0x42c);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  func_004356B4(*(int **)(param_1 + 0x42c));
  if (*(char *)(param_1 + 0x424) != '\0') {
    func_004ED9C8(*(int *)(param_1 + 0x428));
  }
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x42c),param_1 + 0x430,0x1100,0,0);
  if (*(char *)(param_1 + 0x425) != '\0') {
    func_004A8304(*puVar2,*(int *)(param_1 + 0x428));
    *(undefined1 *)(param_1 + 0x424) = 0;
    *(undefined1 *)(param_1 + 0x425) = 0;
  }
  return;
}

