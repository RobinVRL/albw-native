#include "ghidra_types.h"

extern int func_00399D48(int param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern uint DAT_00399d14;
extern uint DAT_00399d18;
extern int *DAT_00399d1c;

// USA 00399C44 <- EU 00399C20 (Ghidra, non-matching)
// GLOBAL DAT_00399d14 uint
// GLOBAL DAT_00399d18 uint
// GLOBAL DAT_00399d1c int *

void func_00399C44(uint param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(int *)(albw_frame + 0x1c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x20))
  uStack_20 = DAT_00399d14 | param_1 & 0xffff0000;
  local_30 = 0;
  local_1c = 0xff;
  local_14 = param_1 + 0x50;
  local_10 = 0;
  local_2c = param_1 + 0xbc;
  iStack_28 = param_1 + 0xcc;
  local_24 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2cc);
  local_18 = *(undefined4 *)(param_1 + 0x44);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x93c) + 4);
  iVar2 = (**(code **)(*piVar1 + 0x104))(piVar1,3);
  if (((iVar2 == 0) &&
      (piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x93c) + 4),
      iVar2 = (**(code **)(*piVar1 + 0x104))(piVar1,4), iVar2 == 0)) &&
     (uVar3 = func_004A8F40(*DAT_00399d1c,&local_30,DAT_00399d18), uVar3 != 0)) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      *(undefined1 *)(param_1 + 0x49) = 1;
      func_00399D48(param_1);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0xf;
  }
  return;
}

