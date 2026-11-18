#include "ghidra_types.h"

extern int func_001E1EDC(int param_1,int *param_2);
extern int func_00490988(int param_1,int param_2,undefined4 param_3);
extern int DAT_004af350;
extern undefined4 DAT_004af354;
extern int *DAT_004af360;
extern int *DAT_004af364;

// USA 004AF2A0 <- EU 004AF278 (Ghidra, non-matching)
// GLOBAL DAT_004af350 int
// GLOBAL DAT_004af354 undefined4
// GLOBAL DAT_004af360 int *
// GLOBAL DAT_004af364 int *

undefined4 func_004AF2A0(int *param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define iStack_24 (*(int *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(undefined1 *)(albw_frame + 0x34))
  #define local_1b (*(undefined1 *)(albw_frame + 0x35))
  #define local_1a (*(undefined1 *)(albw_frame + 0x36))
  #define local_19 (*(undefined1 *)(albw_frame + 0x37))
  #define local_18 (*(undefined1 *)(albw_frame + 0x38))
  local_48 = 0;
  local_50 = DAT_004af350;
  uStack_40 = 0x20;
  local_3c = 0;
  local_38 = 0;
  local_28 = 0;
  iStack_24 = DAT_004af350;
  local_34 = 0;
  local_30 = 0;
  local_1c = 7;
  local_2c = 0;
  local_19 = 0;
  local_18 = 0;
  local_20 = *(undefined4 *)(*DAT_004af360 + 100);
  local_4c = *(undefined4 *)(param_2 + 4);
  local_1a = 0xe;
  local_44 = param_4;
  local_1b = param_3;
  puVar1 = func_001E1EDC(*DAT_004af364,&local_50);
  iVar2 = puVar1[5];
  *param_1 = iVar2;
  func_00490988((int)(param_1 + 1),iVar2,param_4);
  return 1;
}

