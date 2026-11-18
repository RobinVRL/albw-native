#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float DAT_00220ad0;
extern float DAT_00220ad4;
extern undefined4 DAT_00220ad8;
extern float DAT_00220adc;

// USA 00220964 <- EU 00220964 (Ghidra, non-matching)
// GLOBAL DAT_00220ad0 float
// GLOBAL DAT_00220ad4 float
// GLOBAL DAT_00220ad8 undefined4
// GLOBAL DAT_00220adc float

void func_00220964(int param_1)

{
  float fparam_0;
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x40))
  #define fStack_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_24 (*(undefined4 *)(albw_frame + 0x6c))
  if (*(char *)(param_1 + 0x8c4) == '\f') {
    func_004D7EB0(&fStack_48,*(uint *)(param_1 + 0xa48),*(uint *)(param_1 + 1000),
                  (float *)(param_1 + 0xa3c));
    fparam_0 = DAT_00220adc;
    uVar4 = DAT_00220ad8;
    local_64 = local_44;
    local_60 = local_34;
    local_5c = local_24;
    iVar1 = *(int *)(param_1 + 0xa84) - *(int *)(param_1 + 0xa80);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar2 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = *(float *)(param_1 + 0xa4c);
    *(float *)(param_1 + 0xa4c) = fVar3 + (DAT_00220ad0 - fVar3) * (DAT_00220ad4 / fVar2);
    local_80 = *(float *)(param_1 + 0xa3c);
    local_7c = *(undefined4 *)(param_1 + 0xa40);
    local_78 = *(undefined4 *)(param_1 + 0xa44);
    func_00115D70(&local_58,&local_64,fparam_0);
    local_90 = local_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    func_00115C54(&local_80,&local_80,&local_90);
    local_70 = *(float *)(param_1 + 0xa3c);
    uStack_6c = *(undefined4 *)(param_1 + 0xa40);
    uStack_68 = *(undefined4 *)(param_1 + 0xa44);
    func_00115D70(&local_58,&local_64,*(float *)(param_1 + 0xa4c));
    local_90 = local_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    func_00115C54(&local_70,&local_70,&local_90);
    iVar1 = *(int *)(param_1 + 0x9f0);
    *(float *)(iVar1 + 0x58) = local_80;
    *(undefined4 *)(iVar1 + 0x5c) = local_7c;
    *(undefined4 *)(iVar1 + 0x60) = local_78;
    *(float *)(iVar1 + 100) = local_70;
    *(undefined4 *)(iVar1 + 0x68) = uStack_6c;
    *(undefined4 *)(iVar1 + 0x6c) = uStack_68;
    *(undefined4 *)(iVar1 + 0x70) = uVar4;
    func_004356B4(*(int **)(param_1 + 0x9f0));
    if (*(uint *)(param_1 + 0xa80) < *(uint *)(param_1 + 0xa84)) {
      *(uint *)(param_1 + 0xa80) = *(uint *)(param_1 + 0xa80) + 1;
    }
  }
  return;
}

