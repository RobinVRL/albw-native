#include "ghidra_types.h"

extern int func_0010467C(undefined4 *param_1,int param_2,int param_3,uint param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// USA 00102588 <- EU 00102588 (Ghidra, non-matching)

void func_00102588(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  
  puVar1 = func_0010467C((undefined4 *)(param_1 + 0x18),param_2,param_3,param_4 & 0xffff);
                    /* WARNING: Subroutine does not return */
  if (puVar1 == (undefined4 *)0x0) {
    func_0010C1B8(0,extraout_r1,param_3);
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

