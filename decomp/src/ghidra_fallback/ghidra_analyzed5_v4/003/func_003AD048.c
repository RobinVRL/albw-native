#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern char s_Break_003ad0b8[];

// USA 003AD048 <- EU 003AD024 (Ghidra, non-matching)
// GLOBAL s_Break_003ad0b8 string

void func_003AD048(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  if (*(int *)(param_1 + 0x344) == 0) {
    local_18 = 0;
    iStack_14 = 0;
  }
  else {
    func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)s_Break_003ad0b8);
  }
  if ((local_18 != 0) && (*(int *)(local_18 + 0x1c) == iStack_14)) {
    func_004A2F38(local_18,(undefined4 *)(param_1 + 0x3d0));
  }
  if ((local_18 != 0) && (*(int *)(local_18 + 0x1c) == iStack_14)) {
    *(undefined4 *)(local_18 + 0x28) = *(undefined4 *)(param_1 + 0x49c);
    *(undefined4 *)(local_18 + 0x2c) = *(undefined4 *)(param_1 + 0x4a0);
    *(undefined4 *)(local_18 + 0x30) = *(undefined4 *)(param_1 + 0x4a4);
    *(uint *)(local_18 + 0x3c) = *(uint *)(local_18 + 0x3c) | 0x10;
  }
  return;
}

