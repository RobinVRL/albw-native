#include "ghidra_types.h"

extern int func_003D22CC(undefined4 *param_1,undefined4 *param_2);
extern int func_005642B8(uint *param_1,uint *param_2);

// USA 00563C54 <- EU 00563C2C (Ghidra, non-matching)

undefined4 func_00563C54(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_18 ((undefined4 *)(albw_frame + 0x8))
  iVar2 = param_1 + param_3 * 4;
  if (param_2 == 0) {
    if (param_3 < *(uint *)(param_1 + 0x210)) {
      return *(undefined4 *)(iVar2 + 0x21c);
    }
  }
  else if (param_3 < *(uint *)(param_1 + 0x3c0)) {
    if (*(uint *)(param_1 + 0x560) != *(uint *)(param_1 + 0x3c0)) {
      return *(undefined4 *)(iVar2 + 0x3cc);
    }
    puVar1 = func_003D22CC(auStack_18,(undefined4 *)(param_1 + param_3 * 8 + 0x564));
    uVar3 = 0;
    if (*(int *)(param_1 + 0x3c0) != 0) {
      do {
        iVar2 = func_005642B8(puVar1,(uint *)(*(int *)(param_1 + uVar3 * 4 + 0x3cc) + 0x20));
        if (iVar2 != 0) {
          return *(undefined4 *)(param_1 + uVar3 * 4 + 0x3cc);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x3c0));
    }
  }
  return 0;
}

