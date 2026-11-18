#include "ghidra_types.h"

extern undefined4 DAT_0016aa1c;
extern undefined4 DAT_0016aa20;

// USA 0016A91C <- EU 0016A91C (Ghidra, non-matching)
// GLOBAL DAT_0016aa1c undefined4
// GLOBAL DAT_0016aa20 undefined4

undefined4 func_0016A91C(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = DAT_0016aa20;
  uVar1 = DAT_0016aa1c;
  uVar5 = *(uint *)(param_1 + 0x90);
  uVar3 = 0;
  if (0 < (int)uVar5) {
    do {
      if (uVar3 < uVar5) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x98) + uVar3 * 4);
      }
      else {
        iVar6 = 0;
      }
      if (*(short *)(iVar6 + 6) == param_2) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar5);
  }
  if ((int)uVar5 < *(int *)(param_1 + 0x94)) {
    puVar4 = *(undefined4 **)(param_1 + 0x9c);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x9c) = *puVar4;
      *puVar4 = uVar1;
      *(undefined2 *)(puVar4 + 1) = 0xffff;
      *(undefined2 *)((int)puVar4 + 6) = 0xffff;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = uVar2;
      *(undefined1 *)(puVar4 + 0xd) = 0;
      *(undefined1 *)((int)puVar4 + 0x35) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
    }
    if (*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x94)) {
      *(undefined4 **)(*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x90) * 4) = puVar4;
      *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    }
  }
  else {
    puVar4 = (undefined4 *)0x0;
  }
  *(short *)((int)puVar4 + 6) = (short)param_2;
  *(short *)(puVar4 + 1) = (short)param_2 + 1;
  return 1;
}

