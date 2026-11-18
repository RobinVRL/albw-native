#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_003406B8(int param_1);
extern int func_0052E8A0(int param_1);
extern int DAT_002916e8;
extern int *DAT_002916ec;

// USA 002915B8 <- EU 002915E0 (Ghidra, non-matching)
// GLOBAL DAT_002916e8 int
// GLOBAL DAT_002916ec int *

undefined4 func_002915B8(int param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  bVar2 = func_0052E8A0(*(int *)(iVar3 + 0x10));
  if (!bVar2) {
    iVar4 = (int)*(short *)(iVar3 + 0x42);
    cVar1 = *(char *)(DAT_002916e8 + iVar4 * 0x10);
    if (cVar1 != '\x16') {
      if (cVar1 == '\v') {
        if (iVar4 != 0x4c) {
          return 0;
        }
      }
      else {
        if (iVar4 == 0x42 || iVar4 == 0xa6) {
          return 0;
        }
        if (cVar1 == '\x0f' || cVar1 == '\x17') {
          return 0;
        }
      }
      if (((*(int *)(*DAT_002916ec + 0x44) == 0) ||
          (*(int *)(*DAT_002916ec + 0x44) != *(int *)(iVar3 + 0x78))) && (cVar1 != '\x13')) {
        if (iVar4 == 0x43) {
          iVar3 = *(int *)(iVar3 + 0x1c);
          *(undefined1 *)(iVar3 + 0x529) = 1;
          *(undefined4 *)(iVar3 + 0x51c) = *param_2;
          *(undefined4 *)(iVar3 + 0x520) = param_2[1];
          *(undefined4 *)(iVar3 + 0x524) = param_2[2];
          return 1;
        }
        func_002D55D0(*(int *)(iVar3 + 0x48),0x43);
        iVar4 = *(int *)(iVar3 + 0x1c);
        *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(iVar4 + 0x74);
        *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)(iVar4 + 0x78);
        *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar4 + 0x7c);
        if (*(char *)(*(int *)(iVar3 + 0x1c) + 0x16e) != '\0') {
          func_003406B8(*(int *)(iVar3 + 0x1c));
        }
        return 1;
      }
    }
  }
  return 0;
}

