#include "ghidra_types.h"

extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_003d24fc;
extern undefined4 DAT_003d2500;
extern undefined4 DAT_003d2504;

// USA 003D2490 <- EU 003D246C (Ghidra, non-matching)
// GLOBAL DAT_003d24fc undefined4
// GLOBAL DAT_003d2500 undefined4
// GLOBAL DAT_003d2504 undefined4

void func_003D2490(int param_1)

{
  uint uVar1;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  local_10 = in_r3;
  uVar1 = func_00108630(param_1,4,0xb0000);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d2488);
  }
  uVar1 = func_00108630(param_1 + 4,0x800,DAT_003d24fc);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d24a4);
  }
  uVar1 = func_00108630(param_1 + 0x804,0x800,DAT_003d2500);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d24c4);
  }
  uVar1 = func_00108630(&local_10,4,DAT_003d2504);
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x3d24e0);
  }
  *(undefined2 *)(param_1 + 0x1004) = (undefined2)local_10;
  *(undefined2 *)(param_1 + 0x1006) = (*(undefined2 *)((char *)&local_10 + 2));
  return;
}

