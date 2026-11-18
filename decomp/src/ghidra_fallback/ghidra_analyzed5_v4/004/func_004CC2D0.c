#include "ghidra_types.h"

extern int func_004C90E8(int param_1);
extern int func_004CA164(int *param_1);
extern int func_004CB500(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern float DAT_004cc32c;
extern float DAT_004cc330;

// USA 004CC2D0 <- EU 004CC2A8 (Ghidra, non-matching)
// GLOBAL DAT_004cc32c float
// GLOBAL DAT_004cc330 float

undefined4 func_004CC2D0(int *param_1)

{
  int iVar1;
  
  func_004C90E8((int)param_1);
  iVar1 = func_004D838C((float *)(param_1 + 0xf4),(float *)(param_1 + 0x25b),DAT_004cc32c,
                        DAT_004cc330,DAT_004cc32c);
  if (iVar1 != 0) {
    param_1[0x167] = param_1[0x167] | 0x10;
    if (*(char *)((int)param_1 + 0x98e) != '\0') {
      return func_004CA164(param_1);
    }
    if ((char)param_1[0x25e] != '\0') {
      return func_004CB500((int)param_1);
    }
    func_0066A284(param_1 + 0x22f,4);
  }
  return 0;
}

