#include "ghidra_types.h"

extern float func_00115DC8(float *param_1);
extern undefined4 DAT_004f94cc;

// USA 004F9458 <- EU 004F9430 (Ghidra, non-matching)
// GLOBAL DAT_004f94cc undefined4

void func_004F9458(int param_1,float *param_2)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  uVar2 = DAT_004f94cc;
  if (*(int *)(param_1 + 0x420) != 0) {
    local_20 = *param_2;
    local_18 = param_2[2];
    local_1c = DAT_004f94cc;
    func_00115DC8(&local_20);
    iVar1 = *(int *)(param_1 + 0x420);
    *(float *)(iVar1 + 0x24) = local_20;
    *(undefined4 *)(iVar1 + 0x28) = local_1c;
    *(float *)(iVar1 + 0x2c) = local_18;
  }
  if (*(int *)(param_1 + 0x428) != 0) {
    local_20 = *param_2;
    local_18 = param_2[2];
    local_1c = uVar2;
    func_00115DC8(&local_20);
    iVar1 = *(int *)(param_1 + 0x428);
    *(float *)(iVar1 + 0x24) = local_20;
    *(undefined4 *)(iVar1 + 0x28) = local_1c;
    *(float *)(iVar1 + 0x2c) = local_18;
  }
  return;
}

