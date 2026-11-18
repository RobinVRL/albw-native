#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00494DFC(undefined4 *param_1);
extern int func_0058FA08();
extern undefined4 DAT_006888b4;

// USA 00688848 <- EU 00688820 (Ghidra, non-matching)
// GLOBAL DAT_006888b4 undefined4

undefined4 func_00688848(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  float in_s0;
  
  *param_1 = DAT_006888b4;
  if (param_1[0x25] != 0) {
    piVar1 = (int *)param_1[0x22];
    while (piVar1 != param_1 + 0x21) {
      piVar2 = (int *)piVar1[1];
      func_0010F1F8(piVar1,in_s0);
      param_1[0x23] = param_1[0x23] + -1;
      piVar1 = piVar1 + -0x17;
      (**(code **)*piVar1)(piVar1);
      *piVar1 = param_1[0x24];
      param_1[0x24] = piVar1;
      piVar1 = piVar2;
    }
    func_0058FA08(param_1[0x25]);
    param_1[0x26] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
  }
  return func_00494DFC(param_1);
}

