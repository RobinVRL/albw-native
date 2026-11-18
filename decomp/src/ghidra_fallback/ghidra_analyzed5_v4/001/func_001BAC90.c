#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined *DAT_001bacf4;

// USA 001BAC90 <- EU 001BAC90 (Ghidra, non-matching)
// GLOBAL DAT_001bacf4 undefined *

void func_001BAC90(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)func_0010CEE0(param_2 * 0x20 + 8,(int *)0x0,4);
    iVar2 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x20;
      puVar1[1] = param_2;
      iVar2 = func_00100118((int)(puVar1 + 2),DAT_001bacf4,0x20,param_2);
    }
    if (iVar2 != 0) {
      param_1[0x3b] = iVar2;
      param_1[0x3a] = param_2;
    }
  }
  *param_1 = param_2;
  return;
}

