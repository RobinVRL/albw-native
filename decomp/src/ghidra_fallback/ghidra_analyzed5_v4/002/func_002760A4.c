#include "ghidra_types.h"

extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern float DAT_002761b0;
extern float DAT_002761b4;
extern uint DAT_002761b8;
extern undefined4 DAT_002761bc;
extern float DAT_002761c0;
extern int *DAT_002761c4;

// USA 002760A4 <- EU 002760CC (Ghidra, non-matching)
// GLOBAL DAT_002761b0 float
// GLOBAL DAT_002761b4 float
// GLOBAL DAT_002761b8 uint
// GLOBAL DAT_002761bc undefined4
// GLOBAL DAT_002761c0 float
// GLOBAL DAT_002761c4 int *

float func_002760A4(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint in_r2;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define iStack_78 (*(int *)(albw_frame + 0x8))
  #define iStack_74 (*(int *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(uint *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x20))
  #define puStack_5c (*(undefined4 * *)(albw_frame + 0x24))
  #define puStack_58 (*(undefined4 * *)(albw_frame + 0x28))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_50 (*(undefined1 *)(albw_frame + 0x30))
  #define uStack_4f (*(undefined1 *)(albw_frame + 0x31))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x48))
  #define fStack_34 (*(float *)(albw_frame + 0x4c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x54))
  #define fStack_28 (*(float *)(albw_frame + 0x58))
  #define uStack_24 (*(uint *)(albw_frame + 0x5c))
  piVar1 = DAT_002761c4;
  fVar4 = DAT_002761c0;
  iVar2 = *(int *)(param_1 + 0x38);
  uStack_38 = *param_2;
  uStack_30 = param_2[2];
  uStack_2c = *param_2;
  uStack_24 = param_2[2];
  fStack_34 = ALBW_AS_F32(param_2[1]) + DAT_002761b0;
  uStack_68 = DAT_002761b8 | uStack_24 & 0xffff0000;
  puStack_58 = &uStack_38;
  puStack_5c = &uStack_2c;
  fStack_28 = ALBW_AS_F32(param_2[1]) - DAT_002761b4;
  iStack_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_64 = 0xff;
  uStack_60 = 0;
  uStack_54 = DAT_002761bc;
  uStack_50 = 0;
  iStack_74 = iVar2 + 0x15b58;
  uStack_4f = 1;
  *(float *)(iVar2 + 0x15b6c) = DAT_002761c0;
  iVar3 = func_004A8030(*piVar1,&iStack_78,in_r2);
  if (iVar3 != 0) {
    fVar4 = *(float *)(iVar2 + 0x15b6c);
  }
  return fVar4;
}

