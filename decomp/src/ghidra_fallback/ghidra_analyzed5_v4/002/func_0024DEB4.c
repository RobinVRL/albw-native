#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0024df84;
extern int DAT_0024df88;
extern uint *DAT_0024df8c;
extern undefined4 *DAT_0024df90;
extern undefined4 DAT_0024df94;

// USA 0024DEB4 <- EU 0024DEB4 (Ghidra, non-matching)
// GLOBAL DAT_0024df84 int *
// GLOBAL DAT_0024df88 int
// GLOBAL DAT_0024df8c uint *
// GLOBAL DAT_0024df90 undefined4 *
// GLOBAL DAT_0024df94 undefined4

void func_0024DEB4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar3 = *(uint *)(*(int *)(DAT_0024df88 + *DAT_0024df84) + 8);
    if (uVar3 != 0) {
      puVar1 = (undefined4 *)func_0052FBA0(*DAT_0024df84 + 0x3dbbc,uVar3);
      if (((*DAT_0024df8c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0024df8c), iVar2 != 0)) {
        *DAT_0024df90 = DAT_0024df94;
      }
      if ((puVar1 == (undefined4 *)0x0) ||
         (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0024df90), iVar2 == 0)) {
        puVar1 = (undefined4 *)0x0;
      }
      if ((puVar1 != (undefined4 *)0x0) && (uVar3 = (uint)*(short *)(param_1 + 0x2e), uVar3 < 0x10))
      {
        if (puVar1[uVar3 * 0xb + 0x119] != 0) {
          puVar1[uVar3 * 0xb + 0x119] = puVar1[uVar3 * 0xb + 0x119] + -1;
        }
      }
    }
    return;
  }
  return;
}

