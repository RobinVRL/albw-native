#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00581D60(int param_1);
extern int *DAT_00558338;
extern uint *DAT_0055833c;
extern undefined4 DAT_00558340;
extern undefined4 *DAT_00558344;

// USA 005582E8 <- EU 005582C0 (Ghidra, non-matching)
// GLOBAL DAT_00558338 int *
// GLOBAL DAT_0055833c uint *
// GLOBAL DAT_00558340 undefined4
// GLOBAL DAT_00558344 undefined4 *

undefined4 * func_005582E8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((-1 < *(short *)(param_1 + 0x18)) &&
     (iVar3 = func_00581D60(*DAT_00558338), *(short *)(param_1 + 0x18) != iVar3)) {
    if (((*DAT_0055833c & 1) == 0) &&
       (iVar3 = func_00100174((int *)DAT_0055833c), puVar2 = DAT_00558344, uVar1 = DAT_00558340,
       iVar3 != 0)) {
      *DAT_00558344 = DAT_00558340;
      puVar2[1] = uVar1;
      puVar2[2] = uVar1;
    }
    return DAT_00558344;
  }
  return (undefined4 *)(param_1 + 0x28);
}

