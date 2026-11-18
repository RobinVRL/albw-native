#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int DAT_00629474;
extern int *DAT_00629478;

// USA 00629404 <- EU 006293DC (Ghidra, non-matching)
// GLOBAL DAT_00629474 int
// GLOBAL DAT_00629478 int *

undefined4 func_00629404(int *param_1)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  
  param_1[0x20d] = DAT_00629474;
  (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x853),0xffffffff);
  piVar1 = DAT_00629478;
  if (*(short *)((int)param_1 + 0x84a) == 0) {
    uVar3 = func_00111A64((uint *)(*DAT_00629478 + 0x660));
    sVar2 = (short)((ulonglong)uVar3 * 0x96 >> 0x20) + 0x96;
  }
  else {
    sVar2 = 0;
  }
  *(short *)(param_1 + 0x212) = sVar2;
  if (*(char *)((int)param_1 + 0x911) != -1) {
    uVar3 = func_00111A64((uint *)(*piVar1 + 0x660));
    *(short *)(param_1 + 0x214) = (short)((ulonglong)uVar3 * 300 >> 0x20) + 100;
  }
                    /* WARNING: Could not recover jumptable at 0x00629470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x98))(param_1);
}

