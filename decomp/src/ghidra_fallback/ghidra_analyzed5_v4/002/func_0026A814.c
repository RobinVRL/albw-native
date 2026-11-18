#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0053A900(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0026a8ec;
extern float DAT_0026a8f0;

// USA 0026A814 <- EU 0026A83C (Ghidra, non-matching)
// GLOBAL DAT_0026a8ec int *
// GLOBAL DAT_0026a8f0 float

undefined4 func_0026A814(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  if ((((*(char *)(param_1 + 0xbaa) != '\0') && (*(int *)(param_1 + 0xb28) < 1)) &&
      (0x17 < *(int *)(param_1 + 0xba0))) &&
     ((iVar1 = func_0053A900(param_1), iVar1 != 0 && (*(char *)(param_1 + 0xbab) == '\0')))) {
    return func_00660718((undefined4 *)(param_1 + 0x8c8),0xe);
  }
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x974),DAT_0026a8ec[-1],
                        *DAT_0026a8ec,DAT_0026a8f0);
  if (iVar1 != 0) {
    func_00660718((undefined4 *)(param_1 + 0x8c8),(char)*(undefined4 *)(param_1 + 0xb9c));
  }
  return 0;
}

