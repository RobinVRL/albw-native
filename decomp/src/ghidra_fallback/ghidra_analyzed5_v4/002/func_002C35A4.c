#include "ghidra_types.h"

extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0051E740(int param_1,float *param_2);
extern int *DAT_002c3840;
extern float DAT_002c3844;
extern int *DAT_002c3848;

// USA 002C35A4 <- EU 002C3580 (Ghidra, non-matching)
// GLOBAL DAT_002c3840 int *
// GLOBAL DAT_002c3844 float
// GLOBAL DAT_002c3848 int *

int func_002C35A4(int param_1)

{
  int iVar1;
  short sVar2;
  undefined2 extraout_r1;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define afStack_4c ((float *)(albw_frame + 0x14))
  #define afStack_40 ((float *)(albw_frame + 0x20))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  iVar1 = 1;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    *(undefined1 *)(param_1 + 0xa3) = 0;
    *(undefined1 *)(param_1 + 0xa6) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0xa7) == '\0') {
    *(undefined1 *)(param_1 + 0xa3) = 1;
  }
  else {
    if ((*(char *)(param_1 + 0xa3) != '\0') &&
       (sVar2 = *(short *)(param_1 + 0xa4) + -1, *(short *)(param_1 + 0xa4) = sVar2, sVar2 != 0)) {
      return 1;
    }
    if (*(char *)(param_1 + 0xa0) != '\0') {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(undefined1 *)(param_1 + 0xa6) = 1;
      func_001151F8((undefined4 *)(param_1 + 0x34),(undefined4 *)(param_1 + 100),
                    (undefined4 *)(param_1 + 0x88));
      fVar6 = *(float *)(param_1 + 0x94);
      fVar4 = *(float *)(param_1 + 0x98);
      fVar5 = *(float *)(param_1 + 0x9c);
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) * fVar6;
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * fVar6;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * fVar6;
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) * fVar4;
      *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) * fVar4;
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar4;
      *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) * fVar5;
      *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) * fVar5;
      *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar5;
    }
    if ((*(char *)(param_1 + 0xa6) != '\0') && (*(byte *)(param_1 + 0x18) < 5)) {
      local_58 = *(float *)(param_1 + 0x34);
      local_54 = *(float *)(param_1 + 0x44);
      if (local_58 <= DAT_002c3844) {
        local_58 = -local_58;
      }
      iVar1 = *DAT_002c3840 + 0x38 + (uint)*(byte *)(param_1 + 0x18) * 0x1c;
      local_50 = *(float *)(param_1 + 0x54);
      if (local_54 <= DAT_002c3844) {
        local_54 = -local_54;
      }
      if (local_50 <= DAT_002c3844) {
        local_50 = -local_50;
      }
      fVar4 = DAT_002c3844;
      func_00115D70(afStack_4c,&local_58,*(float *)(iVar1 + 0x10));
      local_58 = *(float *)(param_1 + 0x38);
      local_54 = *(float *)(param_1 + 0x48);
      if (local_58 <= fVar4) {
        local_58 = -local_58;
      }
      local_50 = *(float *)(param_1 + 0x58);
      if (local_54 <= fVar4) {
        local_54 = -local_54;
      }
      if (local_50 <= fVar4) {
        local_50 = -local_50;
      }
      func_00115DAC(afStack_4c,&local_58,afStack_4c,*(float *)(iVar1 + 0x14));
      local_58 = *(float *)(param_1 + 0x3c);
      local_54 = *(float *)(param_1 + 0x4c);
      if (local_58 <= fVar4) {
        local_58 = -local_58;
      }
      local_50 = *(float *)(param_1 + 0x5c);
      if (local_54 <= fVar4) {
        local_54 = -local_54;
      }
      if (local_50 <= fVar4) {
        local_50 = -local_50;
      }
      func_00115DAC(afStack_4c,&local_58,afStack_4c,*(float *)(iVar1 + 0x18));
      func_00115CA8(afStack_40,(float *)(param_1 + 0x34),(float *)(iVar1 + 4));
      func_00115C70(&local_34,afStack_40,afStack_4c);
      *(float *)(param_1 + 0x1c) = local_34;
      *(undefined4 *)(param_1 + 0x20) = uStack_30;
      *(undefined4 *)(param_1 + 0x24) = uStack_2c;
      func_00115C54(&local_34,afStack_40,afStack_4c);
      *(float *)(param_1 + 0x28) = local_34;
      *(undefined4 *)(param_1 + 0x2c) = uStack_30;
      *(undefined4 *)(param_1 + 0x30) = uStack_2c;
      *(undefined1 *)(param_1 + 0xa6) = 0;
    }
    iVar1 = func_0051E740(*DAT_002c3848,(float *)(param_1 + 0x1c));
    uVar3 = extraout_r1;
    if (iVar1 != 0) {
      uVar3 = 300;
    }
    *(char *)(param_1 + 0xa3) = (char)iVar1;
    if (iVar1 != 0) {
      *(undefined2 *)(param_1 + 0xa4) = uVar3;
    }
  }
  return iVar1;
}

