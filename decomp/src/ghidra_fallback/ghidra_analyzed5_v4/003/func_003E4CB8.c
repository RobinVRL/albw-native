#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_003E597C(undefined1 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5);

// USA 003E4CB8 <- EU 003E4C98 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *

void func_003E4CB8(undefined1 param_1,undefined1 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((undefined1 *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 ((undefined4 *)(albw_frame + 0x10))
  func_00108DF8();
  uVar1 = func_003E597C(param_1,local_2c,&local_28,&local_24,local_20);
  if ((int)uVar1 < 0) {
    func_0010873C(uVar1,0x3e4cdc);
  }
  func_00108F4C();
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = local_2c[0];
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_28;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_24;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_20[0];
  }
  return;
}

