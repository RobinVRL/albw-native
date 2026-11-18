#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E8A0(int param_1);
extern int func_00552FDC(int param_1,float fparam_0);
extern int DAT_0029083c;
extern float DAT_00290840;

// USA 00290774 <- EU 0029079C (Ghidra, non-matching)
// GLOBAL DAT_0029083c int
// GLOBAL DAT_00290840 float

/* WARNING: Removing unreachable block (ram,0x00290814) */

undefined4 func_00290774(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (((((*(uint *)(DAT_0029083c + *(short *)(iVar2 + 0x42) * 0x10 + 4) & 4) != 0) &&
       (iVar3 = func_00552FDC(*(int *)(iVar2 + 0x1c),DAT_00290840), iVar3 != 0)) &&
      (bVar1 = func_0052E8A0(*(int *)(iVar2 + 0x10)), !bVar1)) &&
     ((*(int *)(*(int *)(iVar2 + 0x10) + 0x5b0) == 0x3f800000 &&
      (puVar4 = (undefined1 *)func_002D55D0(*(int *)(iVar2 + 0x48),5), puVar4 != (undefined1 *)0x0))
     )) {
    *puVar4 = 1;
    *(undefined4 *)(puVar4 + 4) = param_2;
    return 1;
  }
  return 0;
}

