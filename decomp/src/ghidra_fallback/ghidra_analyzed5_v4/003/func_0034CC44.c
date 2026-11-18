#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);

// USA 0034CC44 <- EU 0034CC20 (Ghidra, non-matching)

undefined4 func_0034CC44(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_c (*(undefined4 *)(albw_frame + 0x34))
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x4b8);
  if (iVar1 != 0) {
    func_001119F4(auStack_38,
                  (undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + param_3 * 0x30));
    *(undefined4 *)(param_1 + 8) = local_2c;
    *(undefined4 *)(param_1 + 0xc) = local_1c;
    *(undefined4 *)(param_1 + 0x10) = local_c;
  }
  return 0;
}

