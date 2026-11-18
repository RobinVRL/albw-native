#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_003CD7B4(int *param_1);
extern int func_003CD868(int *param_1,int param_2);

// USA 006763A8 <- EU 00676380 (Ghidra, non-matching)

void func_006763A8(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  
  piVar2 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  while( true ) {
    piVar2 = param_1 + 5;
    func_0010C0C0(piVar2);
    if ((uint)param_1[10] < (uint)param_1[8]) break;
    func_0010C160(piVar2);
    func_003CD7B4(param_1 + 3);
  }
  uVar4 = func_00110710((param_1[9] + param_1[8]) - 1,param_1[8]);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  param_1[9] = iVar3;
  *(undefined4 *)(*param_1 + iVar3 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    func_003CD868(param_1 + 1,1);
  }
  func_0010C160(piVar2);
  piVar2 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + -1;
  return;
}

