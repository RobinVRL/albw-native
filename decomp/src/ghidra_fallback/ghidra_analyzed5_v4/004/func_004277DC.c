#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);

// USA 004277DC <- EU 004277BC (Ghidra, non-matching)

void func_004277DC(int param_1)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  func_004CF478(*(int *)(param_1 + 0xc),0);
  bVar2 = (*(uint *)(param_1 + 8) & 1) == 0;
  if (bVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 4);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + ((int)*(uint *)(param_1 + 8) >> 1));
  if (!bVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*piVar1 + *(int *)(param_1 + 4));
  }
  (*UNRECOVERED_JUMPTABLE)(piVar1,0);
  if (*(int *)(param_1 + 0x28) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    func_004CF478(*(int *)(param_1 + 0x28),0);
    bVar2 = (*(uint *)(param_1 + 8) & 1) == 0;
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 4);
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x28) + ((int)*(uint *)(param_1 + 8) >> 1));
    if (!bVar2) {
      UNRECOVERED_JUMPTABLE = *(code **)(*piVar1 + *(int *)(param_1 + 4));
    }
    (*UNRECOVERED_JUMPTABLE)(piVar1,0);
  }
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  func_004CF478(*(int *)(param_1 + 0x48),0);
  bVar2 = (*(uint *)(param_1 + 8) & 1) == 0;
  if (bVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 4);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x48) + ((int)*(uint *)(param_1 + 8) >> 1));
  if (!bVar2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*piVar1 + *(int *)(param_1 + 4));
  }
                    /* WARNING: Could not recover jumptable at 0x0042787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar1,0);
  return;
}

