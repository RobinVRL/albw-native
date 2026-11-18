#include "ghidra_types.h"

extern undefined8 func_00300E4A(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4);
extern int func_00300E70(undefined2 param_1,undefined4 *param_2);
extern int DAT_0010078c;

// GLOBAL DAT_0010078c int
// USA 00100744 <- EU 00100744 (Ghidra, function missing from the decomp table)

uint func_00100744(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define uStack_4 (*(uint *)(albw_frame + 0x2c))
  local_24 = param_1;
  if (param_2 != 0) {
    local_24 = param_2 * 2 + param_1 + -2;
  }
  local_28 = param_1;
  uStack_4 = param_4;
  uVar2 = func_00300E4A(param_3,&local_28,&uStack_4,DAT_0010078c + 0x10075c);
  uVar1 = (uint)uVar2;
  if (param_2 != 0) {
    local_24 = local_24 + 2;
    func_00300E70(0,&local_28);
  }
  if (param_2 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

