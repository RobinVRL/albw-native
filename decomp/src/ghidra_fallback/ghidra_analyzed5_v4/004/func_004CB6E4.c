#include "ghidra_types.h"

extern int func_004CADD8(undefined4 param_1,uint param_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_004cb73c;

// USA 004CB6E4 <- EU 004CB6BC (Ghidra, non-matching)
// GLOBAL DAT_004cb73c undefined4

undefined4 func_004CB6E4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = DAT_004cb73c;
  *(int *)(param_1 + 0x934) = (int)*(char *)(param_1 + 0x8c1);
  *(undefined4 *)(param_1 + 0x91c) = 0;
  *(undefined4 *)(param_1 + 0x920) = uVar1;
  *(undefined4 *)(param_1 + 0x918) = 0;
  puVar2 = func_004CADD8(param_1,*(uint *)(param_1 + 0x92c));
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x8e8) = puVar2[0xf4];
    *(undefined4 *)(param_1 + 0x8ec) = puVar2[0xf5];
    *(undefined4 *)(param_1 + 0x8f0) = puVar2[0xf6];
    *(undefined1 *)(param_1 + 0x938) = 0;
    *(undefined1 *)(param_1 + 0x939) = 0;
    return 0;
  }
  return func_0066A284((undefined4 *)(param_1 + 0x8bc),(char)*(undefined4 *)(param_1 + 0x934));
}

