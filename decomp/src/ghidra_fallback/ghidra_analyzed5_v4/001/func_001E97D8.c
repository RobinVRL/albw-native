#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_002C1658(int param_1);
extern int func_00432E58(uint *param_1,float *param_2);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern float DAT_001e98d0;
extern undefined4 DAT_001e98d4;
extern undefined4 *DAT_001e98d8;

// USA 001E97D8 <- EU 001E97D8 (Ghidra, non-matching)
// GLOBAL DAT_001e98d0 float
// GLOBAL DAT_001e98d4 undefined4
// GLOBAL DAT_001e98d8 undefined4 *

void func_001E97D8(int param_1,int param_2)

{
  uint *puVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define local_7c (*(undefined4 *)(albw_frame + 0x4))
  #define local_78 (*(undefined4 *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define afStack_50 ((float *)(albw_frame + 0x30))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define afStack_20 ((float *)(albw_frame + 0x60))
  local_74 = -*(float *)(param_1 + 0x30);
  local_64 = -*(float *)(param_1 + 0x34);
  local_54 = -*(float *)(param_1 + 0x38);
  local_80 = DAT_001e98d0;
  local_7c = DAT_001e98d4;
  local_78 = DAT_001e98d4;
  local_70 = DAT_001e98d4;
  fStack_6c = DAT_001e98d0;
  local_68 = DAT_001e98d4;
  local_60 = DAT_001e98d4;
  local_5c = DAT_001e98d4;
  fStack_58 = DAT_001e98d0;
  local_44 = *DAT_001e98d8;
  local_34 = DAT_001e98d8[1];
  local_24 = DAT_001e98d8[2];
  func_0048B5D4(afStack_20,(float *)(param_1 + 0x54),0x80000000);
  func_00491B3C(afStack_50,afStack_20);
  func_001157FC(&local_80,afStack_50,&local_80);
  local_74 = local_74 + *(float *)(param_1 + 0x30);
  local_64 = local_64 + *(float *)(param_1 + 0x34);
  fVar2 = local_54 + *(float *)(param_1 + 0x38);
  local_54 = fVar2;
  puVar1 = (uint *)func_002C1658(param_2);
  if (*puVar1 != 0) {
    func_00432E58(puVar1,&local_80);
  }
  return;
}

