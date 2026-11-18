#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_0014F84C(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern float DAT_00187d90;
extern float DAT_00187d94;
extern float DAT_00187d98;
extern float DAT_00187d9c;
extern undefined4 DAT_00187da0;

// USA 00187C38 <- EU 00187C38 (Ghidra, non-matching)
// GLOBAL DAT_00187d90 float
// GLOBAL DAT_00187d94 float
// GLOBAL DAT_00187d98 float
// GLOBAL DAT_00187d9c float
// GLOBAL DAT_00187da0 undefined4

undefined4 func_00187C38(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  float fparam_0;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  fVar4 = DAT_00187d90;
  fparam_0 = *(float *)(*(int *)(param_1 + 0x56c) + 0x58);
  fVar5 = *(float *)(param_1 + 0x3d4);
  if (*(char *)(param_1 + 0x500) == '\x02') {
    fVar5 = DAT_00187d90;
    if ((*(int *)(param_1 + 0x4fc) < 0xf) && (*(char *)(param_1 + 0x700) == '\0')) {
      fVar5 = DAT_00187d94;
    }
    fVar5 = *(float *)(param_1 + 0x3d4) + fVar5;
    fVar6 = *(float *)(param_1 + 0x6ac) + DAT_00187d98;
    if (fVar6 < fVar5) {
      fVar5 = fVar6;
    }
  }
  local_28 = DAT_00187d90;
  local_24 = fparam_0 - (*(float *)(param_1 + 0x3d4) - fVar5);
  local_20 = DAT_00187d90;
  if ((*(char *)(param_1 + 0x500) == '\x02') && (*(int *)(param_1 + 0x4fc) < 2)) {
    local_20 = DAT_00187d9c;
  }
  *(float *)(param_1 + 0x54c) = DAT_00187d90;
  *(float *)(param_1 + 0x550) = fVar4;
  *(float *)(param_1 + 0x554) = fVar4;
  *(float *)(param_1 + 0x558) = fVar4;
  *(float *)(param_1 + 0x55c) = fVar4;
  *(float *)(param_1 + 0x560) = fVar4;
  uVar7 = CONCAT44(*(undefined4 *)(param_1 + 0x3d4),fVar4);
  *(undefined1 *)(param_1 + 0x701) = 0;
  bVar3 = *(char *)(param_1 + 0x6b4) == '\0';
  cVar1 = '\0';
  if (!bVar3) {
    cVar1 = *(char *)(param_1 + 0x6b5);
  }
  if (bVar3 || cVar1 == '\0') {
    uVar2 = func_0014F84C(param_1,&local_28,DAT_00187da0,fparam_0);
  }
  else {
    uVar2 = func_0014EEB8(param_1,&local_28,DAT_00187da0,fparam_0);
  }
  fVar4 = *(float *)(param_1 + 0x3d4) - ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
  if (fVar4 < ALBW_AS_F32(uVar7)) {
    fVar4 = ALBW_AS_F32(uVar7);
  }
  *(float *)(param_1 + 0x6ac) = fVar4 + *(float *)(param_1 + 0x6ac);
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x558));
  return uVar2;
}

