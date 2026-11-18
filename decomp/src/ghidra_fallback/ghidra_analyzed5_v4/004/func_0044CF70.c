#include "ghidra_types.h"

extern int func_0044E28C(int param_1);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0044cff0;
extern int *DAT_0044cff4;

// USA 0044CF70 <- EU 0044CF48 (Ghidra, non-matching)
// GLOBAL DAT_0044cff0 undefined4
// GLOBAL DAT_0044cff4 int *

undefined4 func_0044CF70(int param_1,float fparam_0,float fparam_1)

{
  int *piVar1;
  
  *(float *)(param_1 + 0xe0) = fparam_0;
  *(float *)(param_1 + 0xe4) = fparam_1;
  *(float *)(param_1 + 0xe8) = fparam_0;
  *(float *)(param_1 + 0xec) = fparam_1;
  *(float *)(param_1 + 0xfc) = fparam_0;
  *(float *)(param_1 + 0x100) = fparam_1;
  *(undefined4 *)(param_1 + 0x104) = DAT_0044cff0;
  if (*(char *)(*(int *)(param_1 + 300) + 0x15c) == '\x02') {
    func_0066CD9C((undefined4 *)(param_1 + 0xb0),5);
  }
  else {
    func_0066CD9C((undefined4 *)(param_1 + 0xb0),7);
  }
  func_0044E28C(param_1);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  if ((*(undefined4 **)(param_1 + 0x1c))[4] == 0) {
    piVar1 = (int *)**(undefined4 **)(param_1 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x0044cfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar1 + 0x30))(piVar1,*DAT_0044cff4 + 0x6b4,1);
  }
  return 0;
}

