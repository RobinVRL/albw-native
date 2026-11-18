#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002E26E8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);
extern int func_005583F8(char *param_1);
extern int *DAT_004c6628;

// USA 004C65B8 <- EU 004C6590 (Ghidra, non-matching)
// GLOBAL DAT_004c6628 int *

void func_004C65B8(int param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(*DAT_004c6628 + 0x18) == '\a' || *(char *)(*DAT_004c6628 + 0x18) == '%') {
    pcVar1 = *(char **)(param_1 + 0x51c);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = (char *)(param_1 + 0x444);
      *(char **)(param_1 + 0x51c) = pcVar1;
    }
    puVar2 = (undefined4 *)func_0010BAB4(0x84);
    puVar4 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = func_005583F8(pcVar1);
      puVar4 = func_002E26E8(puVar2,param_1,param_1 + 0x56c,*(undefined4 *)(param_1 + 0x574),
                             *(undefined4 *)(param_1 + 0x578),iVar3);
    }
    *(undefined4 **)(param_1 + 0x5b0) = puVar4;
  }
  else {
    *(undefined4 *)(param_1 + 0x51c) = 0;
  }
  return;
}

