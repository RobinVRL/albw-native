#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E1EDC(int param_1,int *param_2);
extern int DAT_004a8e74;
extern int DAT_004a8e78;
extern int *DAT_004a8e7c;
extern uint *DAT_004a8e80;
extern undefined4 *DAT_004a8e84;
extern undefined4 DAT_004a8e88;

// USA 004A8D80 <- EU 004A8D58 (Ghidra, non-matching)
// GLOBAL DAT_004a8e74 int
// GLOBAL DAT_004a8e78 int
// GLOBAL DAT_004a8e7c int *
// GLOBAL DAT_004a8e80 uint *
// GLOBAL DAT_004a8e84 undefined4 *
// GLOBAL DAT_004a8e88 undefined4

undefined4 * func_004A8D80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(int *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_13 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_12 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_11 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_10 (*(undefined1 *)(albw_frame + 0x40))
  local_48 = DAT_004a8e74;
  local_44 = *(undefined4 *)(param_1 + 4);
  local_40 = *(undefined4 *)(param_1 + 8);
  local_3c = *(undefined4 *)(param_1 + 0xc);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_30 = *(undefined4 *)(param_1 + 0x18);
  local_2c = *(undefined4 *)(param_1 + 0x1c);
  local_24 = *(undefined4 *)(param_1 + 0x24);
  local_20 = *(undefined4 *)(param_1 + 0x28);
  local_1c = DAT_004a8e74;
  local_18 = *(undefined4 *)(param_1 + 0x30);
  local_14 = *(undefined1 *)(param_1 + 0x34);
  local_13 = *(undefined1 *)(param_1 + 0x35);
  local_12 = *(undefined1 *)(param_1 + 0x36);
  local_11 = *(undefined1 *)(param_1 + 0x37);
  local_10 = *(undefined1 *)(param_1 + 0x38);
  local_28 = *(undefined4 *)(DAT_004a8e78 + 0xc);
  puVar1 = func_001E1EDC(*DAT_004a8e7c,&local_48);
  if (((*DAT_004a8e80 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004a8e80), iVar2 != 0)) {
    *DAT_004a8e84 = DAT_004a8e88;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_004a8e84), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

