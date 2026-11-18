#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003C9C94(uint *param_1,int *param_2,int param_3,uint param_4);

// USA 003C7CFC <- EU 003C7CD8 (Ghidra, non-matching)

int func_003C7CFC(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 ((int *)(albw_frame + 0x8))
  local_8[0] = in_r3;
  iVar1 = func_003C9C94((uint *)(param_1 + 4),local_8,param_2,param_3);
  if (iVar1 < 0) {
    func_0010AC24(iVar1,0x3c7cf8);
  }
  return local_8[0];
}

