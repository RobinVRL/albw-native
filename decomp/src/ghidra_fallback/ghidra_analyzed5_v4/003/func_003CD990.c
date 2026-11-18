#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_00115EDC(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern uint DAT_003cd9f4;
extern uint DAT_003cd9f8;
extern uint DAT_003cd9fc;

// USA 003CD990 <- EU 003CD96C (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 undefined4
// GLOBAL DAT_003cd9f4 uint
// GLOBAL DAT_003cd9f8 uint
// GLOBAL DAT_003cd9fc uint

undefined4 func_003CD990(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  uVar1 = DAT_003cd9f4;
  if (((*(int *)(param_1 + 8) == 0) && (uVar1 = DAT_003cd9f8, (param_2 & 0xfff) == 0)) &&
     (uVar1 = DAT_003cd9fc, (param_3 & 0xfff) == 0)) {
    local_14 = 0;
    uVar1 = func_00115EDC(&local_14,param_2,param_4);
    if (-1 < (int)uVar1) {
      *(undefined4 *)(param_1 + 0x14) = local_14;
      *(uint *)(param_1 + 8) = param_2;
      *(uint *)(param_1 + 0xc) = param_3;
    }
  }
  if ((int)uVar1 < 0) {
    return func_0010A98C(uVar1);
  }
  return 0;
}

