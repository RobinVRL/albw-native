#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_00520FD4(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0066B43C(undefined4 *param_1,undefined1 param_2);
extern float DAT_005093a0;
extern float DAT_005093a4;
extern int *DAT_005093a8;
extern uint DAT_005093ac;
extern int *DAT_005093b0;

// USA 0050929C <- EU 00509274 (Ghidra, non-matching)
// GLOBAL DAT_005093a0 float
// GLOBAL DAT_005093a4 float
// GLOBAL DAT_005093a8 int *
// GLOBAL DAT_005093ac uint
// GLOBAL DAT_005093b0 int *

void func_0050929C(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint in_r3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((int *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 * *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(undefined1 *)(albw_frame + 0x28))
  #define local_37 (*(undefined1 *)(albw_frame + 0x29))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  if (*(short *)(param_1 + 0x2c) == 1) {
    if (*(int *)(param_1 + 0x510) < 0x168) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x510) < 0x3c) {
    return;
  }
  fVar4 = DAT_005093a0;
  iVar2 = func_005211F4(param_1,DAT_005093a4,DAT_005093a0);
  if ((iVar2 != 0) && (bVar1 = func_00520FD4(), !bVar1)) {
    local_30 = *(undefined4 *)(param_1 + 0x444);
    uStack_2c = *(undefined4 *)(param_1 + 0x448);
    uStack_28 = *(undefined4 *)(param_1 + 0x44c);
    puVar3 = *(undefined4 **)(*DAT_005093a8 + 0x1c);
    local_24 = *puVar3;
    uStack_20 = puVar3[1];
    local_1c = puVar3[2];
    local_60[0] = 0;
    local_60[4] = DAT_005093ac | in_r3 & 0xffff0000;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_48 = 0;
    local_38 = 0;
    local_40 = &local_30;
    local_44 = &local_24;
    local_37 = 1;
    local_4c = 0x78;
    local_3c = fVar4;
    iVar2 = func_004A8030(*DAT_005093b0,local_60,0xf);
    if (iVar2 == 0) {
      func_0066B43C((undefined4 *)(param_1 + 0x510),1);
    }
  }
  return;
}

