#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003C9ADC(uint *param_1);
extern int func_00561354(int param_1);
extern int DAT_003c90a0;

// USA 003C9058 <- EU 003C9034 (Ghidra, non-matching)
// GLOBAL DAT_003c90a0 int

undefined4 func_003C9058(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  local_18 = param_4;
  if (param_1[1] != 0) {
    local_18 = func_00561354((int)param_1);
    func_003C9ADC(&local_18);
  }
  (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = DAT_003c90a0;
  piVar2 = (int *)(DAT_003c90a0 + 0x30);
  func_0010C0C0(piVar2);
  *param_1 = *(int *)(iVar1 + 0x24);
  *(int **)(iVar1 + 0x24) = param_1;
  *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
  return func_0010C160(piVar2);
}

