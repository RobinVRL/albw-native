#include "ghidra_types.h"

extern int func_003FD738(undefined4 *param_1,int param_2,int param_3);
extern undefined4 DAT_003fe0e4;

// USA 003FE0B8 <- EU 003FE098 (Ghidra, non-matching)
// GLOBAL DAT_003fe0e4 undefined4

undefined4 func_003FE0B8(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  local_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,DAT_003fe0e4,param_3,&local_10);
  if (iVar1 != 0) {
    param_3 = local_10;
  }
  if (iVar1 != 0 && param_3 != 0) {
    iVar1 = func_003FD738(param_2,iVar1,param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

