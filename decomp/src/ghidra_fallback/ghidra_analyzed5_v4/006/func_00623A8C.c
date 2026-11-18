#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int DAT_00623afc;
extern int *DAT_00623b00;

// USA 00623A8C <- EU 00623A64 (Ghidra, non-matching)
// GLOBAL DAT_00623afc int
// GLOBAL DAT_00623b00 int *

undefined4 func_00623A8C(int *param_1)

{
  int *piVar1;
  short sVar2;
  uint uVar3;
  
  param_1[0x20d] = DAT_00623afc;
  (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x853),0xffffffff);
  piVar1 = DAT_00623b00;
  if (*(short *)((int)param_1 + 0x84a) == 0) {
    uVar3 = func_00111A64((uint *)(*DAT_00623b00 + 0x660));
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
                    /* WARNING: Could not recover jumptable at 0x00623af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x98))(param_1);
}

