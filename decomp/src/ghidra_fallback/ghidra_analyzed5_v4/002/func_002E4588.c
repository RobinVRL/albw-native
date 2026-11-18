#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_00520FC0(void);
extern int func_005487BC(int param_1,float fparam_0);
extern float DAT_002e4790;
extern int DAT_002e4794;
extern float DAT_002e4798;
extern int DAT_002e479c;
extern int DAT_002e47a0;
extern float DAT_002e47a4;
extern undefined4 *DAT_002e47a8;

// USA 002E4588 <- EU 002E4564 (Ghidra, non-matching)
// GLOBAL DAT_002e4790 float
// GLOBAL DAT_002e4794 int
// GLOBAL DAT_002e4798 float
// GLOBAL DAT_002e479c int
// GLOBAL DAT_002e47a0 int
// GLOBAL DAT_002e47a4 float
// GLOBAL DAT_002e47a8 undefined4 *

undefined4 func_002E4588(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  fVar5 = DAT_002e4790;
  iVar2 = func_005487BC((int)param_1,DAT_002e4790);
  if (iVar2 == 0) {
    pfVar3 = (float *)func_00520FC0();
    local_28 = *pfVar3;
    fStack_24 = pfVar3[1];
    local_20 = pfVar3[2];
  }
  else {
    local_28 = ALBW_AS_F32(param_1[2]);
    fStack_24 = ALBW_AS_F32(param_1[3]);
    local_20 = ALBW_AS_F32(param_1[4]);
  }
  fVar1 = DAT_002e4798;
  param_1[0xf8] = DAT_002e4794;
  uVar6 = CONCAT44(SQRT((ALBW_AS_F32(param_1[0xf4]) - local_28) * (ALBW_AS_F32(param_1[0xf4]) - local_28) +
                        (ALBW_AS_F32(param_1[0xf6]) - local_20) * (ALBW_AS_F32(param_1[0xf6]) - local_20)) /
                   fVar1,fVar5);
  func_00115C70(local_1c,&local_28,(float *)(param_1 + 0xf4));
  fVar5 = ALBW_AS_F32(uVar6);
  if (local_14 == fVar5 && local_1c[0] == fVar5) {
    uVar4 = 0;
  }
  else if (local_14 < fVar5) {
    if (local_1c[0] < fVar5) {
      if (local_1c[0] < local_14) {
        iVar2 = func_004905E0(local_14 / local_1c[0]);
        uVar4 = 0xc0000000 - iVar2;
      }
      else {
        iVar2 = func_004905E0(local_1c[0] / local_14);
        uVar4 = iVar2 + 0x80000000;
      }
    }
    else {
      local_14 = -local_14;
      if (local_14 < local_1c[0]) {
        iVar2 = func_004905E0(local_14 / local_1c[0]);
        uVar4 = iVar2 + 0x40000000;
      }
      else {
        iVar2 = func_004905E0(local_1c[0] / local_14);
        uVar4 = 0x80000000 - iVar2;
      }
    }
  }
  else if (local_1c[0] < fVar5) {
    local_1c[0] = -local_1c[0];
    if (local_14 < local_1c[0]) {
      iVar2 = func_004905E0(local_14 / local_1c[0]);
      uVar4 = iVar2 + 0xc0000000;
    }
    else {
      iVar2 = func_004905E0(local_1c[0] / local_14);
      uVar4 = -iVar2;
    }
  }
  else if (local_14 < local_1c[0]) {
    iVar2 = func_004905E0(local_14 / local_1c[0]);
    uVar4 = 0x40000000 - iVar2;
  }
  else {
    uVar4 = func_004905E0(local_1c[0] / local_14);
  }
  func_004D80A4((float *)(param_1 + 0xf7),uVar4,ALBW_AS_F32(((ulonglong)uVar6 >> 0x20)));
  param_1[0x241] = DAT_002e479c;
  param_1[0x242] = param_1[0xf5];
  iVar2 = DAT_002e47a0;
  param_1[0x23f] = 0xf;
  param_1[0x240] = iVar2;
  param_1[0x23e] = 0;
  *(undefined1 *)((int)param_1 + 0x916) = 0;
  fVar5 = DAT_002e47a4;
  func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
  func_004F8864((int)param_1,DAT_002e47a8,0,fVar5);
  return (undefined4)param_1;
}

