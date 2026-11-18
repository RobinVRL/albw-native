#include "ghidra_types.h"

extern int func_0010013C(int param_1,int param_2,undefined4 param_3,uint *param_4);

// USA 004994B0 <- EU 00499488 (Ghidra, function missing from the decomp table)

int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_8 (*(uint *)(albw_frame + 0x8))
  #define uStack_4 (*(undefined4 *)(albw_frame + 0xc))
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = func_0010013C(iVar3,iVar2,param_2,&uStack_8);
  if ((iVar1 < 0) || (iVar2 <= iVar1)) {
    iVar1 = iVar2 + -1;
    *(undefined1 *)(iVar3 + iVar2 + -1) = 0;
  }
  return iVar1;
}

