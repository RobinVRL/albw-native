#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_003CD7B4(int *param_1);
extern int func_003CD868(int *param_1,int param_2);

// USA 006765F8 <- EU 006765D0 (Ghidra, non-matching)

void func_006765F8(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  piVar2 = (int *)(param_1 + 0x68);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  while( true ) {
    piVar2 = (int *)(param_1 + 0x4c);
    func_0010C0C0(piVar2);
    if (*(uint *)(param_1 + 0x60) < *(uint *)(param_1 + 0x58)) break;
    func_0010C160(piVar2);
    func_003CD7B4((int *)(param_1 + 0x44));
  }
  uVar3 = func_00110710(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60),
                        *(uint *)(param_1 + 0x58));
  *(undefined4 *)(*(int *)(param_1 + 0x38) + (int)((ulonglong)uVar3 >> 0x20) * 4) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (0 < *(int *)(param_1 + 100)) {
    func_003CD868((int *)(param_1 + 0x3c),1);
  }
  func_0010C160(piVar2);
  piVar2 = (int *)(param_1 + 0x68);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return;
}

