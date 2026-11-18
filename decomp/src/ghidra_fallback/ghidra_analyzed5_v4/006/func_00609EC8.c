#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00609ee0;
extern undefined *DAT_00609ee4;

// USA 00609EC8 <- EU 00609EA0 (Ghidra, non-matching)
// GLOBAL DAT_00609ee0 undefined4
// GLOBAL DAT_00609ee4 undefined *

int func_00609EC8(uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x328);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = func_004ED00C(puVar1,param_1);
    *puVar1 = DAT_00609ee0;
    iVar2 = func_00100118((int)(puVar1 + 200),DAT_00609ee4,4,2);
    iVar2 = iVar2 + -800;
  }
  return iVar2;
}

