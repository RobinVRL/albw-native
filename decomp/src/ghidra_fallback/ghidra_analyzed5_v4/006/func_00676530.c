#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_003CD7B4(int *param_1);
extern int func_003CD868(int *param_1,int param_2);

// USA 00676530 <- EU 00676508 (Ghidra, non-matching)

undefined4 func_00676530(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  piVar2 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  while( true ) {
    piVar2 = param_1 + 5;
    func_0010C0C0(piVar2);
    if (0 < param_1[10]) break;
    func_0010C160(piVar2);
    func_003CD7B4(param_1 + 1);
  }
  uVar3 = *(undefined4 *)(*param_1 + param_1[9] * 4);
  uVar4 = func_00110710(param_1[9] + 1,param_1[8]);
  param_1[9] = (int)((ulonglong)uVar4 >> 0x20);
  param_1[10] = param_1[10] + -1;
  if (0 < param_1[0xc]) {
    func_003CD868(param_1 + 3,1);
  }
  func_0010C160(piVar2);
  piVar2 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return uVar3;
}

