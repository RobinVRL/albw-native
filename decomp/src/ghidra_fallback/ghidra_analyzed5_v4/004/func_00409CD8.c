#include "ghidra_types.h"

extern undefined4 DAT_00409d0c;

// USA 00409CD8 <- EU 00409CB8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_00409d0c undefined4

undefined4 *
func_00409CD8(int param_1,undefined4 *param_2,uint param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x11c);
  if (((iVar2 != 0) && (0x1f < param_3)) && (param_2 != (undefined4 *)0x0)) {
    *(undefined1 *)(param_2 + 1) = 0;
    uVar1 = DAT_00409d0c;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = iVar2 + param_4;
    *param_2 = uVar1;
    param_2[6] = param_5;
    param_2[7] = 0;
    return param_2;
  }
  return (undefined4 *)0x0;
}

