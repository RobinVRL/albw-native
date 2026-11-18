#include "ghidra_types.h"

extern int func_004A143C(byte *param_1,uint param_2);
extern int func_0058450C(int param_1,int param_2);
extern int *DAT_004c3a38;
extern int *DAT_004c3a3c;
extern int DAT_004c3a40;
extern uint DAT_004c3a44;

// USA 004C397C <- EU 004C3954 (Ghidra, non-matching)
// GLOBAL DAT_004c3a38 int *
// GLOBAL DAT_004c3a3c int *
// GLOBAL DAT_004c3a40 int
// GLOBAL DAT_004c3a44 uint

undefined4 func_004C397C(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x1600) == '\0') {
    if ((((*(int *)(*DAT_004c3a38 + 0x10) != 0) || (*(int *)(param_1 + 0x10) == 0)) ||
        (*(char *)(param_1 + 0x9b9) == '\0')) || (1 < *(uint *)(param_1 + 0x9c0))) {
      return 0;
    }
    if (*DAT_004c3a3c != 0) {
      func_0058450C(*DAT_004c3a3c,*(int *)(param_1 + 0x14) + 0xe00);
      iVar4 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(DAT_004c3a40 + iVar4);
      uVar1 = func_004A143C((byte *)(iVar4 + 0xe00),DAT_004c3a44);
      *(uint *)(iVar4 + 0x13fc) = uVar1;
      if (*(int *)(iVar4 + 0x13fc) != iVar3) {
        puVar2 = (uint *)(param_1 + 0x4dd8 + *(int *)(param_1 + 0x9bc) * 4);
        *puVar2 = *puVar2 | 2;
        *(undefined4 *)(param_1 + 0x9c0) = 7;
        return 1;
      }
    }
  }
  return 1;
}

