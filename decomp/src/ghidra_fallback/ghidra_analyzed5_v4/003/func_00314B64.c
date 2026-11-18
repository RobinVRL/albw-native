#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_00314b8c;
extern uint DAT_00314b90;
extern int DAT_00314b94;

// USA 00314B64 <- EU 00314B40 (Ghidra, non-matching)
// GLOBAL DAT_00314b8c int *
// GLOBAL DAT_00314b90 uint
// GLOBAL DAT_00314b94 int

void func_00314B64(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_00314b90;
  piVar1 = DAT_00314b8c;
  uVar2 = func_00111A64((uint *)(*DAT_00314b8c + 0x660));
  *(uint *)(param_1 + 0x990) = (int)((ulonglong)uVar3 * (ulonglong)uVar2 >> 0x20) + uVar3;
  uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
  *(short *)(DAT_00314b94 + param_1) = (short)((ulonglong)uVar3 * 200 >> 0x20) + 200;
  return;
}

