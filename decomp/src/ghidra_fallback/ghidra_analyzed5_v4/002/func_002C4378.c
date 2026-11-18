#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);

// USA 002C4378 <- EU 002C4354 (Ghidra, non-matching)

undefined4 func_002C4378(int param_1)

{
  uint *puVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  puVar1 = (uint *)func_00584CA8(*(int *)(param_1 + 0x530),*(int *)(param_1 + 0x58c),0);
  local_10 = *puVar1 & 0xffffff;
  return func_004CF5DC(*(int *)(param_1 + 0x530),*(int *)(param_1 + 0x58c),0,&local_10);
}

