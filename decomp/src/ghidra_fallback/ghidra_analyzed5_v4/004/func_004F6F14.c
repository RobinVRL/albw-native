#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4);
extern undefined4 DAT_004f7034;
extern int DAT_004f7038;
extern int *DAT_004f703c;
extern undefined4 *DAT_004f7040;
extern undefined4 *DAT_004f7044;
extern undefined4 *DAT_004f7048;
extern float DAT_004f704c;
extern undefined4 DAT_004f7050;

// USA 004F6F14 <- EU 004F6EEC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004f7034 undefined4
// GLOBAL DAT_004f7038 int
// GLOBAL DAT_004f703c int *
// GLOBAL DAT_004f7040 undefined4 *
// GLOBAL DAT_004f7044 undefined4 *
// GLOBAL DAT_004f7048 undefined4 *
// GLOBAL DAT_004f704c float
// GLOBAL DAT_004f7050 undefined4

void func_004F6F14(int param_1,float *param_2,float *param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(float *)(albw_frame + 0x40))
  #define local_2c (*(float *)(albw_frame + 0x44))
  #define local_28 (*(float *)(albw_frame + 0x48))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x50))
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x34);
    *(undefined1 *)(param_1 + 0x4c) = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = DAT_004f7034;
    }
    if (((*(uint *)(DAT_004f7038 + 0x30) & 1) == 0) &&
       (iVar2 = func_00100174(DAT_004f703c), puVar1 = DAT_004f7040, iVar2 != 0)) {
      uVar3 = *DAT_004f7044;
      uVar4 = DAT_004f7044[1];
      DAT_004f7040[2] = DAT_004f7044[2];
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      func_001119F4(puVar1 + 3,DAT_004f7048);
      func_001119F4(puVar1 + 0xf,DAT_004f7048);
    }
    uVar3 = DAT_004f7050;
    fVar5 = *(float *)(param_1 + 0x20) * param_3[1] * DAT_004f704c;
    *(undefined4 *)(param_1 + 0x10) = DAT_004f7050;
    *(float *)(param_1 + 0x14) = fVar5;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    func_00115C54(&local_28,param_2,(float *)(param_1 + 0x10));
    local_40 = local_28;
    uStack_3c = uStack_24;
    uStack_38 = uStack_20;
    local_34 = *(float *)(param_1 + 0x1c) * *param_3;
    local_30 = *(float *)(param_1 + 0x20) * param_3[1];
    local_2c = *(float *)(param_1 + 0x24) * param_3[2];
    func_00491E80(afStack_70,param_4,param_5,0);
    func_006824D4(*(int **)(param_1 + 0x30),&local_34,afStack_70,&local_40);
  }
  return;
}

