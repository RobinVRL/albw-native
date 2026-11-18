#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004A8304(undefined4 param_1,int param_2);
extern int DAT_0019292c;
extern undefined4 *DAT_00192930;

// USA 001928E4 <- EU 001928E4 (Ghidra, non-matching)
// GLOBAL DAT_0019292c int
// GLOBAL DAT_00192930 undefined4 *

undefined4 func_001928E4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0019292c + 0x54;
  *param_1 = DAT_0019292c;
  param_1[200] = iVar1;
  if (*(char *)((int)param_1 + 0x429) != '\0') {
    func_004A8304(*DAT_00192930,param_1[0x103]);
    *(undefined1 *)((int)param_1 + 0x429) = 0;
  }
  return func_001510A4(param_1);
}

