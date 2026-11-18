#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern undefined DAT_00375298;

// USA 00375288 <- EU 00375264 (Ghidra, non-matching)
// GLOBAL DAT_00375298 undefined

void func_00375288(int param_1,undefined1 param_2,undefined4 param_3)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define aiStack_10 ((int *)(albw_frame + 0x0))
  *(undefined4 *)(param_1 + 0x49c) = param_3;
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x49c);
  *(undefined1 *)(param_1 + 0x4a3) = param_2;
  if (*(int *)(param_1 + 0x344) != 0) {
    func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)&DAT_00375298);
  }
  return;
}

