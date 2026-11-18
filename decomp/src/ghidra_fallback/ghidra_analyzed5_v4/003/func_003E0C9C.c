#include "ghidra_types.h"

extern int func_003DE900(int param_1,int param_2,int param_3);
extern int DAT_003e0d60;

// USA 003E0C9C <- EU 003E0C7C (Ghidra, non-matching)
// GLOBAL DAT_003e0d60 int

undefined4 func_003E0C9C(uint *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define local_1c (*(float *)(albw_frame + 0x34))
  local_1c = ALBW_AS_F32(param_1[0x1a]);
  local_38 = ALBW_AS_F32(param_1[0x12]) * local_1c;
  local_48 = ALBW_AS_F32(param_1[0xe]) * local_1c;
  local_28 = ALBW_AS_F32(param_1[0x16]) * local_1c;
  local_44 = ALBW_AS_F32(param_1[0xf]) * local_1c;
  local_34 = ALBW_AS_F32(param_1[0x13]) * local_1c;
  local_24 = ALBW_AS_F32(param_1[0x17]) * local_1c;
  local_40 = ALBW_AS_F32(param_1[0x10]) * local_1c;
  local_30 = ALBW_AS_F32(param_1[0x14]) * local_1c;
  local_20 = ALBW_AS_F32(param_1[0x18]) * local_1c;
  local_3c = ALBW_AS_F32(param_1[0x11]) * local_1c;
  local_2c = ALBW_AS_F32(param_1[0x15]) * local_1c;
  local_1c = ALBW_AS_F32(param_1[0x19]) * local_1c;
  return func_003DE900(DAT_003e0d60,*param_1 & 0xff,(int)&local_48);
}

