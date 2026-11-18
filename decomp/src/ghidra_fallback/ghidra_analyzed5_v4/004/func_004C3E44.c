#include "ghidra_types.h"

extern int func_004A143C(byte *param_1,uint param_2);
extern int func_004C3BB8(int param_1,int param_2);
extern int func_0058450C(int param_1,int param_2);
extern int *DAT_004c3f4c;
extern int *DAT_004c3f50;
extern int *DAT_004c3f54;
extern int DAT_004c3f58;
extern uint DAT_004c3f5c;

// USA 004C3E44 <- EU 004C3E1C (Ghidra, non-matching)
// GLOBAL DAT_004c3f4c int *
// GLOBAL DAT_004c3f50 int *
// GLOBAL DAT_004c3f54 int *
// GLOBAL DAT_004c3f58 int
// GLOBAL DAT_004c3f5c uint

undefined4 func_004C3E44(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x1600) == '\0') {
    if ((((*(int *)(*DAT_004c3f4c + 0x10) != 0) || (*(int *)(param_1 + 0x10) == 0)) ||
        (*(char *)(param_1 + 0x9b9) == '\0')) || (1 < *(uint *)(param_1 + 0x9c0))) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(*DAT_004c3f50 + 0x78);
    iVar1 = func_004C3BB8(param_1,param_2);
    iVar4 = param_1 + 0x4dd8;
    if (iVar1 != 0) {
      puVar2 = (uint *)(iVar4 + *(int *)(param_1 + 0x9bc) * 4);
      *puVar2 = *puVar2 | 1;
    }
    *(undefined1 *)(param_1 + 0x9bb) = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0xc1);
    if (*DAT_004c3f54 != 0) {
      func_0058450C(*DAT_004c3f54,*(int *)(param_1 + 0x14) + 0xe00);
      iVar5 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(DAT_004c3f58 + iVar5);
      uVar3 = func_004A143C((byte *)(iVar5 + 0xe00),DAT_004c3f5c);
      *(uint *)(iVar5 + 0x13fc) = uVar3;
      if (*(int *)(iVar5 + 0x13fc) != iVar1) {
        puVar2 = (uint *)(iVar4 + *(int *)(param_1 + 0x9bc) * 4);
        *puVar2 = *puVar2 | 2;
      }
    }
    if ((*(uint *)(iVar4 + *(int *)(param_1 + 0x9bc) * 4) & 3) != 0) {
      *(undefined4 *)(param_1 + 0x9c0) = 7;
      return 1;
    }
  }
  return 1;
}

