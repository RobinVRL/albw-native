#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003C9BA0(uint *param_1);
extern int DAT_003c9378;

// USA 003C9338 <- EU 003C9314 (Ghidra, non-matching)
// GLOBAL DAT_003c9378 int

undefined4 func_003C9338(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  local_18 = param_1[1];
  uVar2 = param_4;
  if (local_18 != 0) {
    func_003C9BA0(&local_18);
    uVar2 = local_18;
  }
  local_18 = uVar2;
  (**(code **)(*param_1 + 0x10))(param_1);
  iVar1 = DAT_003c9378;
  piVar3 = (int *)(DAT_003c9378 + 0x30);
  func_0010C0C0(piVar3);
  *param_1 = *(int *)(iVar1 + 0x24);
  *(int **)(iVar1 + 0x24) = param_1;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  return func_0010C160(piVar3);
}

