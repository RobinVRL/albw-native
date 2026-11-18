#include "ghidra_types.h"

extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int *DAT_00261450;

// USA 0026137C <- EU 002613A4 (Ghidra, non-matching)
// GLOBAL DAT_00261450 int *

undefined4 func_0026137C(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  piVar1 = DAT_00261450;
  uVar2 = (uint)*(ushort *)(param_1 + 0x36);
  *(undefined1 *)(param_1 + 0x423) = 1;
  if (uVar2 != 0) {
    iVar4 = *piVar1;
    iVar3 = (int)*(char *)(param_1 + 0x420) + uVar2;
    for (; (int)uVar2 < iVar3; uVar2 = uVar2 + 1) {
      func_004AD9E8(iVar4,uVar2,(uint)*(byte *)(param_1 + 0x34),1,in_s0);
    }
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x38);
  if (uVar2 != 0) {
    iVar4 = *piVar1;
    iVar3 = (int)*(char *)(param_1 + 0x421) + uVar2;
    for (; (int)uVar2 < iVar3; uVar2 = uVar2 + 1) {
      func_004AD9E8(iVar4,uVar2,(uint)*(byte *)(param_1 + 0x35),0,in_s0);
    }
  }
  if (*(char *)(param_1 + 0x422) == '\0') {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return 0;
}

