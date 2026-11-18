#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_003CD868(int *param_1,int param_2);

// USA 00676328 <- EU 00676300 (Ghidra, non-matching)

undefined4 func_00676328(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = param_1 + 5;
  func_0010C0C0(piVar1);
  if ((uint)param_1[10] < (uint)param_1[8]) {
    uVar2 = func_00110710(param_1[10] + param_1[9],param_1[8]);
    *(undefined4 *)(*param_1 + (int)((ulonglong)uVar2 >> 0x20) * 4) = param_2;
    param_1[10] = param_1[10] + 1;
    if (0 < param_1[0xb]) {
      func_003CD868(param_1 + 1,1);
    }
    func_0010C160(piVar1);
    return 1;
  }
  func_0010C160(piVar1);
  return 0;
}

