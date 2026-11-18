#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0024E438(int param_1,undefined4 *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0024e920;
extern int DAT_0024e924;
extern uint *DAT_0024e928;
extern undefined4 *DAT_0024e92c;
extern undefined4 DAT_0024e930;

// USA 0024E838 <- EU 0024E838 (Ghidra, non-matching)
// GLOBAL DAT_0024e920 int *
// GLOBAL DAT_0024e924 int
// GLOBAL DAT_0024e928 uint *
// GLOBAL DAT_0024e92c undefined4 *
// GLOBAL DAT_0024e930 undefined4

undefined4 func_0024E838(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = *(uint *)(*(int *)(DAT_0024e924 + *DAT_0024e920) + 8);
    if (uVar3 != 0) {
      puVar1 = (undefined4 *)func_0052FBA0(*DAT_0024e920 + 0x3dbbc,uVar3);
      if (((*DAT_0024e928 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0024e928), iVar2 != 0)) {
        *DAT_0024e92c = DAT_0024e930;
      }
      if ((puVar1 == (undefined4 *)0x0) ||
         (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0024e92c), iVar2 == 0)) {
        puVar1 = (undefined4 *)0x0;
      }
      if (((puVar1 != (undefined4 *)0x0) &&
          (uVar3 = (uint)*(short *)((int)param_1 + 0x2e), uVar3 < 0x10)) &&
         (iVar2 = func_0024E438((int)(puVar1 + uVar3 * 0xb + 0x110),param_1), iVar2 != 0)) {
        puVar1[0x1c0] = puVar1[0x1c0] | 1 << (uVar3 & 0xff);
        return 1;
      }
    }
  }
  return 0;
}

