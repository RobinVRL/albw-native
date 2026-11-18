#include "ghidra_types.h"

extern int func_0040001C(undefined4 *param_1,int param_2);

// USA 0040430C <- EU 004042EC (Ghidra, non-matching)

void func_0040430C(int param_1,int param_2,undefined4 param_3)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_28 ((undefined4 *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0040001C(auStack_28,param_2);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x40))(*(int **)(param_1 + 0x10),auStack_28,param_3);
  }
  return;
}

