#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_00314ae0;
extern uint DAT_00314ae4;

// USA 00314A98 <- EU 00314A74 (Ghidra, non-matching)
// GLOBAL DAT_00314ae0 int *
// GLOBAL DAT_00314ae4 uint

void func_00314A98(int param_1)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = DAT_00314ae4;
  piVar1 = DAT_00314ae0;
  if (*(short *)(param_1 + 0x994) == 0) {
    uVar3 = func_00111A64((uint *)(*DAT_00314ae0 + 0x660));
    *(uint *)(param_1 + 0x990) = (int)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20) + uVar4;
    uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
    sVar2 = (short)((ulonglong)uVar4 * 200 >> 0x20) + 200;
  }
  else {
    sVar2 = *(short *)(param_1 + 0x994) + -1;
  }
  *(short *)(param_1 + 0x994) = sVar2;
  *(int *)(param_1 + 1000) = *(int *)(param_1 + 0x990) + *(int *)(param_1 + 1000);
  return;
}

