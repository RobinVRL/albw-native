#include "ghidra_types.h"

extern int func_002B200C(undefined4 param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 DAT_002e4dc0;

// USA 002E4D70 <- EU 002E4D4C (Ghidra, non-matching)
// GLOBAL DAT_002e4dc0 undefined4

undefined4 func_002E4D70(int param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  
  *(undefined4 *)(param_1 + 0x4f0) = DAT_002e4dc0;
  if ((((param_2 == 0) && (*(char *)(param_3 + 0x2a) != '\0')) &&
      (uVar1 = (uint)*(char *)(param_3 + 0x24), uVar1 != 0x1f && uVar1 != 10)) &&
     (uVar1 != 9 && uVar1 != 0xb)) {
    bVar2 = uVar1 == 3;
    if (bVar2) {
      uVar1 = (uint)*(byte *)(param_3 + 0x25);
    }
    if (!bVar2 || uVar1 != 2) {
      uVar1 = func_002B200C(uVar1);
      return func_004FABDC(param_1,2,uVar1,0);
    }
  }
  return 0;
}

