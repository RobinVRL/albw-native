#include "ghidra_types.h"

extern int func_0065DFCC(undefined4 *param_1,undefined1 param_2);
extern int DAT_0021aef0;
extern undefined4 DAT_0021aef4;
extern undefined4 DAT_0021aef8;

// USA 0021AE78 <- EU 0021AE78 (Ghidra, non-matching)
// GLOBAL DAT_0021aef0 int
// GLOBAL DAT_0021aef4 undefined4
// GLOBAL DAT_0021aef8 undefined4

undefined4 func_0021AE78(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0021aef4;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) != '\0') {
    return 0;
  }
  if (*(short *)(DAT_0021aef0 + param_1) < 1) {
    return func_0065DFCC((undefined4 *)(param_1 + 0x8bc),5);
  }
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0021aef4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1328) = DAT_0021aef8;
  *(undefined4 *)(param_1 + 0x132c) = uVar1;
  *(undefined1 *)(param_1 + 0x1376) = 0;
  func_0065DFCC((undefined4 *)(param_1 + 0x8bc),2);
  *(undefined1 *)(param_1 + 0x1375) = 2;
  return 0;
}

