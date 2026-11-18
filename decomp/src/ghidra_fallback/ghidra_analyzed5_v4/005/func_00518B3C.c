#include "ghidra_types.h"

extern int func_0014A354(int param_1,int param_2);
extern int func_0049F7B8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_0049F8F0(int param_1,byte *param_2);
extern int DAT_00518b88;
extern int *DAT_00518b8c;
extern undefined4 DAT_00518b90;

// USA 00518B3C <- EU 00518B14 (Ghidra, non-matching)
// GLOBAL DAT_00518b88 int
// GLOBAL DAT_00518b8c int *
// GLOBAL DAT_00518b90 undefined4

undefined4 func_00518B3C(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define abStack_98 ((byte *)(albw_frame + 0x8))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_2c (*(undefined4 *)(albw_frame + 0x74))
  #define local_18 ((undefined1 *)(albw_frame + 0x88))
  #define local_14 (*(undefined4 *)(albw_frame + 0x8c))
  uVar1 = func_0014A354(*DAT_00518b8c,(uint)*(byte *)(DAT_00518b88 + param_3));
  local_18[0] = 2;
  local_14 = DAT_00518b90;
  func_0049F7B8((undefined4 *)abStack_98,(undefined4 *)local_18,0);
  local_3c = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_3c = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  }
  local_34 = uVar1;
  local_2c = param_2;
  return func_0049F8F0(param_1,abStack_98);
}

