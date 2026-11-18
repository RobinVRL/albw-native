#include "ghidra_types.h"

extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003FD6D8(undefined4 param_1,undefined4 param_2);
extern int func_003FDFF4(int *param_1,int param_2,undefined4 param_3);
extern int func_0048B8B8(int param_1,int param_2,int *param_3);
extern int func_00503CA4(int param_1,uint param_2,int param_3);
extern undefined DAT_00503b74;
extern int DAT_00503b78;
extern int *DAT_00503b7c;
extern undefined4 DAT_00503b80;
extern undefined4 DAT_00503b84;
extern int *DAT_00503bb0;
extern char s_Shader_nwfont2_RectDrawerShader__00503b88[];
extern char s_cf_00503b88[];

// USA 00503A8C <- EU 00503A64 (Ghidra, non-matching)
// GLOBAL DAT_00503b74 undefined
// GLOBAL DAT_00503b78 int
// GLOBAL DAT_00503b7c int *
// GLOBAL DAT_00503b80 undefined4
// GLOBAL DAT_00503b84 undefined4
// GLOBAL DAT_00503bb0 int *
// GLOBAL s_cf_00503b88 string

undefined4 func_00503A8C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(int *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_23 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_22 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_21 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_20 (*(undefined1 *)(albw_frame + 0x40))
  #define local_18 (*(int *)(albw_frame + 0x48))
  #define local_14 (*(undefined * *)(albw_frame + 0x4c))
  iVar2 = DAT_00503b78;
  local_14 = &DAT_00503b74;
  local_18 = DAT_00503b78;
  func_0048B8B8(*DAT_00503b7c,param_1 + 0x120,&local_18);
  func_003FD6D8(param_1 + 0x16c,param_1 + 0x16c);
  local_58 = iVar2;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0x20;
  uStack_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_28 = DAT_00503b84;
  local_24 = 7;
  local_34 = 0;
  local_21 = 1;
  local_40 = 0;
  local_20 = 1;
  local_2c = iVar2;
  local_54 = s_Shader_nwfont2_RectDrawerShader__00503b88;
  local_23 = 0;
  local_22 = 0xc;
  local_30 = 0;
  puVar1 = func_001E1EDC(*DAT_00503bb0,&local_58);
  func_003FDFF4((int *)(param_1 + 0xf0),puVar1[5],puVar1[6]);
  iVar3 = 1;
  iVar2 = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  do {
    *(undefined4 *)(param_1 + 0x10 + iVar3 * 4) = 0;
    iVar2 = iVar2 + 2;
    *(undefined4 *)(param_1 + 0x10 + (iVar3 + 1) * 4) = 0;
    iVar3 = iVar3 + 2;
  } while (iVar2 < 0x11);
  return func_00503CA4(param_1,2,0);
}

