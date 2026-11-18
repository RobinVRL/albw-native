#include "ghidra_types.h"

extern int func_004B964C(int param_1);
extern int func_004B9998(int param_1);
extern int func_004CF478(int param_1,int param_2);

// USA 004277AC <- EU 0042778C (Ghidra, non-matching)

void func_004277AC(int param_1)

{
  int iVar1;
  int *piVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  
  func_004B964C(param_1);
  func_004B9998(param_1);
  iVar1 = *(int *)(param_1 + 0x74);
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  func_004CF478(*(int *)(iVar1 + 0xc),0);
  bVar3 = (*(uint *)(iVar1 + 8) & 1) == 0;
  if (bVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 4);
  }
  piVar2 = (int *)(*(int *)(iVar1 + 0xc) + ((int)*(uint *)(iVar1 + 8) >> 1));
  if (!bVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + *(int *)(iVar1 + 4));
  }
  (*UNRECOVERED_JUMPTABLE)(piVar2,0);
  if (*(int *)(iVar1 + 0x28) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    func_004CF478(*(int *)(iVar1 + 0x28),0);
    bVar3 = (*(uint *)(iVar1 + 8) & 1) == 0;
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 4);
    }
    piVar2 = (int *)(*(int *)(iVar1 + 0x28) + ((int)*(uint *)(iVar1 + 8) >> 1));
    if (!bVar3) {
      UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + *(int *)(iVar1 + 4));
    }
    (*UNRECOVERED_JUMPTABLE)(piVar2,0);
  }
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  func_004CF478(*(int *)(iVar1 + 0x48),0);
  bVar3 = (*(uint *)(iVar1 + 8) & 1) == 0;
  if (bVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 4);
  }
  piVar2 = (int *)(*(int *)(iVar1 + 0x48) + ((int)*(uint *)(iVar1 + 8) >> 1));
  if (!bVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*piVar2 + *(int *)(iVar1 + 4));
  }
                    /* WARNING: Could not recover jumptable at 0x0042787c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(piVar2,0);
  return;
}

