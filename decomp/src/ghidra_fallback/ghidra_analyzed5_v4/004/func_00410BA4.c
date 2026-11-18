#include "ghidra_types.h"

extern int func_0040F8D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4, undefined4 param_5,undefined4 param_6);
extern undefined4 DAT_00410be8;

// USA 00410BA4 <- EU 00410B84 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00410be8 undefined4

undefined4 *
func_00410BA4(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  
  if ((*(char *)(param_1 + 400) != '\0') && (0x53 < param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = func_0040F8D4(param_2,param_1 + 0x11c,param_4,param_5,DAT_00410be8,param_1);
    }
    if (*(char *)(puVar1 + 0x14) != '\0') {
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

