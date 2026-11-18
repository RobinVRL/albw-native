#include "ghidra_types.h"

extern int func_004A143C(byte *param_1,uint param_2);
extern int *DAT_004c40b8;
extern int DAT_004c40bc;

// USA 004C403C <- EU 004C4014 (Ghidra, non-matching)
// GLOBAL DAT_004c40b8 int *
// GLOBAL DAT_004c40bc int

undefined4 func_004C403C(int param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (((*(int *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x9b9) != '\0')) &&
     (*(char *)(*(int *)(param_1 + 0x14) + 0x1600) == '\0')) {
    if ((*(int *)(*DAT_004c40b8 + 0x10) != 0) || (1 < *(uint *)(param_1 + 0x9c0))) {
      return 0;
    }
    iVar2 = DAT_004c40bc + 500;
    *(undefined1 *)(DAT_004c40bc + param_1) = param_2;
    uVar3 = *(uint *)(iVar2 + param_1);
    uVar1 = func_004A143C((byte *)(param_1 + 0x4bd8),0x1fc);
    *(uint *)(param_1 + 0x4dd4) = uVar1;
    if (uVar1 != uVar3) {
      *(undefined4 *)(param_1 + 0x9c0) = 8;
      return 1;
    }
  }
  return 1;
}

