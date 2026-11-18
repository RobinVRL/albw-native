#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_002761b0;
extern float DAT_002761b4;
extern uint DAT_002761b8;
extern undefined4 DAT_002761bc;
extern float DAT_002761c0;
extern int *DAT_002761c4;

// USA 002760AC <- EU 002760D4 (Ghidra, non-matching)
// GLOBAL DAT_002761b0 float
// GLOBAL DAT_002761b4 float
// GLOBAL DAT_002761b8 uint
// GLOBAL DAT_002761bc undefined4
// GLOBAL DAT_002761c0 float
// GLOBAL DAT_002761c4 int *

void func_002760AC(int param_1,undefined4 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(uint *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 * *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 * *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined1 *)(albw_frame + 0x30))
  #define local_4f (*(undefined1 *)(albw_frame + 0x31))
  #define local_38 (*(undefined4 *)(albw_frame + 0x48))
  #define local_34 (*(float *)(albw_frame + 0x4c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(float *)(albw_frame + 0x58))
  #define local_24 (*(uint *)(albw_frame + 0x5c))
  piVar1 = DAT_002761c4;
  fVar3 = DAT_002761c0;
  local_38 = *param_2;
  uStack_30 = param_2[2];
  local_2c = *param_2;
  local_24 = param_2[2];
  local_34 = ALBW_AS_F32(param_2[1]) + DAT_002761b0;
  uStack_68 = DAT_002761b8 | local_24 & 0xffff0000;
  local_58 = &local_38;
  local_5c = &local_2c;
  local_28 = ALBW_AS_F32(param_2[1]) - DAT_002761b4;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xff;
  uStack_60 = 0;
  local_54 = DAT_002761bc;
  local_50 = 0;
  local_74 = param_1 + 0x15b58;
  local_4f = 1;
  *(float *)(param_1 + 0x15b6c) = DAT_002761c0;
  iVar2 = func_004A8030(*piVar1,&local_78,param_3);
  if (iVar2 != 0) {
    fVar3 = *(float *)(param_1 + 0x15b6c);
  }
  return;
}

