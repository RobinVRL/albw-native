#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E1EDC(int param_1,int *param_2);
extern undefined1 *DAT_00504e88;
extern int DAT_00504e8c;
extern int DAT_00504e90;
extern int *DAT_00504e94;
extern undefined DAT_00504e98;
extern uint *DAT_00504e9c;
extern undefined4 *DAT_00504ea0;
extern undefined4 DAT_00504ea4;

// USA 00504D48 <- EU 00504D20 (Ghidra, non-matching)
// GLOBAL DAT_00504e88 undefined1 *
// GLOBAL DAT_00504e8c int
// GLOBAL DAT_00504e90 int
// GLOBAL DAT_00504e94 int *
// GLOBAL DAT_00504e98 undefined
// GLOBAL DAT_00504e9c uint *
// GLOBAL DAT_00504ea0 undefined4 *
// GLOBAL DAT_00504ea4 undefined4

undefined4 * func_00504D48(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define local_1c (*(int *)(albw_frame + 0x34))
  #define local_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_13 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_12 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_11 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_10 (*(undefined1 *)(albw_frame + 0x40))
  iVar3 = DAT_00504e90;
  puVar1 = DAT_00504e88;
  local_28 = param_1 + 0x18;
  *DAT_00504e88 = *(undefined1 *)(param_2 + 0x4c);
  puVar1[1] = *(undefined1 *)(param_2 + 0x37);
  local_48 = DAT_00504e8c;
  local_38 = *(undefined4 *)(param_2 + 0x10);
  local_30 = *(undefined4 *)(param_2 + 0x18);
  local_2c = *(undefined4 *)(param_2 + 0x1c);
  local_20 = *(undefined4 *)(param_2 + 0x28);
  local_1c = DAT_00504e8c;
  local_18 = *(undefined4 *)(param_2 + 0x30);
  local_14 = *(undefined1 *)(param_2 + 0x34);
  local_13 = *(undefined1 *)(param_2 + 0x35);
  local_12 = *(undefined1 *)(param_2 + 0x36);
  local_11 = *(undefined1 *)(param_2 + 0x37);
  local_10 = *(undefined1 *)(param_2 + 0x38);
  local_44 = *(undefined4 *)(param_2 + 0x40);
  local_3c = *(undefined4 *)(param_2 + 0x44);
  local_40 = *(undefined4 *)(param_2 + 0x44);
  local_34 = 0x80;
  local_24 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_2 + 0x40);
  puVar2 = func_001E1EDC(*DAT_00504e94,&local_48);
  *(undefined **)(iVar3 + 4) = &DAT_00504e98;
  if (((*DAT_00504e9c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00504e9c), iVar3 != 0)) {
    *DAT_00504ea0 = DAT_00504ea4;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_00504ea0), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  return puVar2;
}

