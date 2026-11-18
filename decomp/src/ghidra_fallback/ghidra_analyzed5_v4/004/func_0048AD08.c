#include "ghidra_types.h"

extern int func_00563170(char *param_1,undefined4 *param_2);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern undefined4 *DAT_0048ad68;

// USA 0048AD08 <- EU 0048ACE0 (Ghidra, non-matching)
// GLOBAL DAT_0048ad68 undefined4 *

undefined4 func_0048AD08(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((undefined4 * *)(albw_frame + 0x0))
  func_006003D8(0x208,(int *)local_20);
  uVar1 = *DAT_0048ad68;
  uVar4 = DAT_0048ad68[1];
  *(int *)(param_1 + 0xe8) = (int)fparam_0;
  *(int *)(param_1 + 0xec) = (int)fparam_1;
  *(int *)(param_1 + 0xf0) = (int)fparam_2;
  *(int *)(param_1 + 0xf4) = (int)fparam_3;
  *(undefined4 *)(param_1 + 0xf8) = uVar1;
  *(undefined4 *)(param_1 + 0xfc) = uVar4;
  puVar2 = func_00563170((char *)(param_1 + 0xe4),local_20[0]);
  uVar3 = (int)puVar2 - (int)local_20[0];
  local_20[0] = puVar2;
  return func_00601378(uVar3 & 0xfffffffc);
}

