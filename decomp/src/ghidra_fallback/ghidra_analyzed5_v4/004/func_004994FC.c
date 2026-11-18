#include "ghidra_types.h"

extern int func_001006FC(int param_1,uint param_2,undefined4 param_3,uint *param_4);

// USA 004994FC <- EU 004994D4 (Ghidra, function missing from the decomp table)

uint func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_8 (*(uint *)(albw_frame + 0x8))
  #define uStack_4 (*(undefined4 *)(albw_frame + 0xc))
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = func_001006FC(iVar3,uVar2,param_2,&uStack_8);
  if (((int)uVar1 < 0) || ((int)uVar2 <= (int)uVar1)) {
    uVar1 = uVar2 - 1;
    *(undefined2 *)(iVar3 + uVar2 * 2 + -2) = 0;
  }
  return uVar1;
}

