#include "ghidra_types.h"

extern int func_00562488(char *param_1,uint *param_2,int param_3);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);

// USA 0048AF10 <- EU 0048AEE8 (Ghidra, non-matching)

undefined4 func_0048AF10(int param_1,undefined1 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint * *)(albw_frame + 0x8))
  local_18 = in_r3;
  func_006003D8(0x208,(int *)&local_18);
  *(undefined1 *)(param_1 + 0xa8) = param_2;
  puVar1 = (uint *)func_00562488((char *)(param_1 + 0xa8),local_18,1);
  uVar2 = (int)puVar1 - (int)local_18;
  local_18 = puVar1;
  return func_00601378(uVar2 & 0xfffffffc);
}

