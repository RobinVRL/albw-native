#include "ghidra_types.h"

extern int func_0048C258(int *param_1,undefined *param_2);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern uint DAT_00361ad4;
extern int *DAT_00361ad8;
extern undefined *DAT_00361adc;

// USA 00361A20 <- EU 003619FC (Ghidra, non-matching)
// GLOBAL DAT_00361ad4 uint
// GLOBAL DAT_00361ad8 int *
// GLOBAL DAT_00361adc undefined *

bool func_00361A20(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(int *)(albw_frame + 0x1c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x20))
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x394)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x39c) + iVar1 * 4);
      iVar1 = iVar1 + 1;
      *puVar2 = *(undefined4 *)(param_1 + 0x3a0);
      *(undefined4 **)(param_1 + 0x3a0) = puVar2;
    } while (iVar1 < *(int *)(param_1 + 0x394));
  }
  uStack_20 = DAT_00361ad4;
  *(undefined4 *)(param_1 + 0x394) = 0;
  uStack_20 = param_3 & 0xffff0000 | uStack_20;
  local_30 = 0;
  local_1c = 0xff;
  local_28 = 0;
  local_2c = param_1 + 0x374;
  local_18 = 0;
  local_10 = 0;
  local_24 = *(undefined4 *)(param_1 + 0x278);
  local_14 = param_1 + 0xd4;
  func_004A8F40(*DAT_00361ad8,&local_30,0x2000);
  iVar1 = *(int *)(param_1 + 0x394);
  if (1 < iVar1) {
    func_0048C258((int *)(param_1 + 0x394),DAT_00361adc);
  }
  return 0 < iVar1;
}

