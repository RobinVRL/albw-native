#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);

// USA 00352128 <- EU 00352104 (Ghidra, non-matching)

void func_00352128(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *param_2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_2[1])) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(param_1 + 0x20),param_3);
    *param_2 = local_18;
    param_2[1] = iStack_14;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

