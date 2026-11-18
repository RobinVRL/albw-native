// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001E34F0(int param_1,undefined4 param_2,int param_3);
extern int *DAT_00255ba4;
extern uint DAT_00255ba8;
extern uint DAT_00255bac;

// USA 00255AB4 <- EU 00255ADC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_00255ba4 int *
// GLOBAL DAT_00255ba8 uint
// GLOBAL DAT_00255bac uint

undefined4 func_00255AB4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != 0) {
    func_001E34F0(*(int *)(*DAT_00255ba4 + 0x130),param_2,param_3);
    uVar3 = DAT_00255ba8;
    if (param_2 < 0) {
      iVar2 = (uint)*(ushort *)(iVar1 + 0x4fc) + param_2;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      *(short *)(iVar1 + 0x4fc) = (short)iVar2;
    }
    else {
      uVar4 = (uint)*(ushort *)(iVar1 + 0x4fc) + param_2;
      if (uVar4 < DAT_00255ba8) {
        uVar5 = *(int *)(iVar1 + 0x514) + param_2;
        uVar3 = DAT_00255bac;
        if (uVar5 <= DAT_00255bac) {
          uVar3 = uVar5;
        }
        *(uint *)(iVar1 + 0x514) = uVar5;
        *(uint *)(iVar1 + 0x514) = uVar3;
        *(short *)(iVar1 + 0x4fc) = (short)uVar4;
      }
      else {
        uVar5 = (DAT_00255ba8 - *(ushort *)(iVar1 + 0x4fc)) + *(int *)(iVar1 + 0x514);
        uVar4 = DAT_00255bac;
        if (uVar5 <= DAT_00255bac) {
          uVar4 = uVar5;
        }
        *(uint *)(iVar1 + 0x514) = uVar5;
        *(uint *)(iVar1 + 0x514) = uVar4;
        *(short *)(iVar1 + 0x4fc) = (short)uVar3;
      }
    }
    if (*(char *)(iVar1 + 0x504) != '\0') {
      *(int *)(iVar1 + 0x500) = *(int *)(iVar1 + 0x500) + param_2;
    }
  }
  return 1;
}

