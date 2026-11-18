#include "ghidra_types.h"

extern int func_001E1EDC(int param_1,int *param_2);
extern int func_002715F8(int param_1,uint param_2,int *param_3);
extern int func_00271968(int param_1,int param_2,int *param_3);
extern int DAT_0027149c;
extern undefined4 DAT_002714a0;
extern undefined4 DAT_002714a4;
extern undefined4 DAT_002714a8;
extern int *DAT_002714ac;
extern int DAT_002714b0;
extern undefined4 DAT_002714b4;
extern undefined4 DAT_002714b8;

// USA 0027139C <- EU 002713C4 (Ghidra, non-matching)
// GLOBAL DAT_0027149c int
// GLOBAL DAT_002714a0 undefined4
// GLOBAL DAT_002714a4 undefined4
// GLOBAL DAT_002714a8 undefined4
// GLOBAL DAT_002714ac int *
// GLOBAL DAT_002714b0 int
// GLOBAL DAT_002714b4 undefined4
// GLOBAL DAT_002714b8 undefined4

undefined4 func_0027139C(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define iStack_2c (*(int *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_23 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_22 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_21 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_20 (*(undefined1 *)(albw_frame + 0x40))
  #define local_18 (*(int *)(albw_frame + 0x48))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  iVar1 = DAT_0027149c;
  local_50 = 0;
  local_58 = DAT_0027149c;
  local_4c = 0;
  uStack_48 = 0x20;
  local_3c = 0;
  local_28 = DAT_002714a4;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  uStack_30 = 0;
  iStack_2c = DAT_0027149c;
  local_24 = 7;
  local_22 = 0;
  local_21 = 0;
  local_23 = 0xff;
  local_54 = DAT_002714a8;
  local_20 = 1;
  puVar2 = func_001E1EDC(*DAT_002714ac,&local_58);
  *(undefined4 **)(DAT_002714b0 + param_1) = puVar2;
  local_18 = iVar1;
  local_14 = DAT_002714b4;
  func_002715F8(param_1,0,&local_18);
  local_14 = DAT_002714b8;
  local_18 = iVar1;
  return func_00271968(param_1,0,&local_18);
}

