#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int *DAT_00225cfc;
extern int DAT_00225d00;
extern float DAT_00225d04;
extern float DAT_00225d08;
extern undefined4 DAT_00225d0c;
extern float *DAT_00225d10;
extern float *DAT_00225d14;

// USA 00225BAC <- EU 00225BAC (Ghidra, non-matching)
// GLOBAL DAT_00225cfc int *
// GLOBAL DAT_00225d00 int
// GLOBAL DAT_00225d04 float
// GLOBAL DAT_00225d08 float
// GLOBAL DAT_00225d0c undefined4
// GLOBAL DAT_00225d10 float *
// GLOBAL DAT_00225d14 float *

void func_00225BAC(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x14))
  #define aiStack_78 ((int *)(albw_frame + 0x18))
  #define local_1c (*(float *)(albw_frame + 0x74))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x78))
  #define local_14 (*(undefined4 *)(albw_frame + 0x7c))
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x714) = *(undefined4 *)(param_1 + 0xc);
  *(float *)(param_1 + 0x718) = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x710);
  fVar5 = **(float **)(*DAT_00225cfc + 0x1c);
  fVar6 = fVar5 - fVar3;
  fVar4 = (*(float **)(*DAT_00225cfc + 0x1c))[2] - *(float *)(param_1 + 0x10);
  if ((int)ALBW_AS_U32((fVar6 * fVar6 + fVar4 * fVar4)) < DAT_00225d00) {
    if (fVar3 < fVar5) {
      fVar3 = fVar3 - DAT_00225d04;
    }
    else {
      fVar3 = fVar3 + DAT_00225d04;
    }
    *(float *)(param_1 + 0x710) = fVar3;
  }
  *(undefined1 *)(param_1 + 0x685) = 1;
  puVar2 = (uint *)func_002C11E8(aiStack_78,0x12,10,0);
  func_0016898C(*(int *)(param_1 + 0x68c),puVar2);
  func_00115C70(&local_1c,(float *)(param_1 + 0x710),(float *)(param_1 + 0x3d0));
  local_84 = local_1c;
  uStack_80 = uStack_18;
  uStack_7c = local_14;
  func_00115D70(&local_1c,&local_84,DAT_00225d08);
  uVar1 = DAT_00225d0c;
  *(undefined4 *)(param_1 + 0x3e4) = local_14;
  *(float *)(param_1 + 0x3dc) = local_1c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  if (*(char *)(param_1 + 0x73d) == '\0') {
    func_00115C54(&local_1c,(float *)(param_1 + 0x710),DAT_00225d14);
    *(float *)(param_1 + 0x704) = local_1c;
    *(undefined4 *)(param_1 + 0x708) = uStack_18;
    *(undefined4 *)(param_1 + 0x70c) = local_14;
  }
  else {
    func_00115C54(&local_1c,(float *)(param_1 + 0x710),DAT_00225d10);
    *(float *)(param_1 + 0x704) = local_1c;
    *(undefined4 *)(param_1 + 0x708) = uStack_18;
    *(undefined4 *)(param_1 + 0x70c) = local_14;
  }
  *(undefined1 *)(param_1 + 0x5fd) = 0;
  return;
}

