#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 DAT_001da340;
extern float DAT_001da344;

// USA 001DA26C <- EU 001DA26C (Ghidra, non-matching)
// GLOBAL DAT_001da340 undefined4
// GLOBAL DAT_001da344 float

undefined4 func_001DA26C(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 (*(float *)(albw_frame + 0x8))
  #define local_d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(float *)(albw_frame + 0x30))
  #define local_ac (*(undefined4 *)(albw_frame + 0x34))
  #define local_a8 (*(float *)(albw_frame + 0x38))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(undefined4 *)(albw_frame + 0x44))
  #define local_98 (*(undefined4 *)(albw_frame + 0x48))
  #define local_94 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x50))
  #define local_8c (*(undefined4 *)(albw_frame + 0x54))
  #define local_88 (*(undefined4 *)(albw_frame + 0x58))
  #define local_84 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x60))
  #define local_7c (*(undefined4 *)(albw_frame + 0x64))
  #define afStack_70 ((float *)(albw_frame + 0x70))
  #define afStack_40 ((float *)(albw_frame + 0xa0))
  local_a8 = *(float *)(param_1 + 0x418);
  local_a4 = DAT_001da340;
  local_a0 = DAT_001da340;
  local_98 = DAT_001da340;
  local_94 = *(undefined4 *)(param_1 + 0x41c);
  local_90 = DAT_001da340;
  local_88 = DAT_001da340;
  local_84 = DAT_001da340;
  local_80 = *(undefined4 *)(param_1 + 0x420);
  local_9c = DAT_001da340;
  local_8c = DAT_001da340;
  local_7c = DAT_001da340;
  uVar1 = DAT_001da340;
  func_00491E80(afStack_40,0,*(uint *)(param_1 + 1000),0);
  local_d8 = DAT_001da344;
  local_c4 = DAT_001da344;
  local_b0 = DAT_001da344;
  local_cc = *(undefined4 *)(param_1 + 0x424);
  local_bc = *(undefined4 *)(param_1 + 0x428);
  local_ac = *(undefined4 *)(param_1 + 0x42c);
  local_d4 = uVar1;
  local_d0 = uVar1;
  local_c8 = uVar1;
  local_c0 = uVar1;
  local_b8 = uVar1;
  local_b4 = uVar1;
  func_001157FC(afStack_70,&local_d8,afStack_40);
  return func_001157FC((float *)(param_1 + 0x4a8),afStack_70,&local_a8);
}

