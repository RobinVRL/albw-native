#include "ghidra_types.h"

extern int func_00561E28(char *param_1,uint *param_2,int param_3);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);

// USA 0048AF54 <- EU 0048AF2C (Ghidra, non-matching)

undefined4 func_0048AF54(int param_1,undefined1 param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint * *)(albw_frame + 0x0))
  local_20 = param_4;
  func_006003D8(0x208,(int *)&local_20);
  puVar1 = local_20;
  *(undefined4 *)(param_1 + 0x94) = param_3;
  *(uint **)(param_1 + 0x98) = param_4;
  *(undefined1 *)(param_1 + 0x90) = param_2;
  local_20 = (uint *)func_00561E28((char *)(param_1 + 0x8c),local_20,1);
  return func_00601378((int)local_20 - (int)puVar1 & 0xfffffffc);
}

