#include "ghidra_types.h"

extern int func_001510A4();
extern int func_004A8304(undefined4 param_1,int param_2);
extern int DAT_00287d90;
extern undefined4 *DAT_00287d94;

// USA 00287D20 <- EU 00287D48 (Ghidra, non-matching)
// GLOBAL DAT_00287d90 int
// GLOBAL DAT_00287d94 undefined4 *

undefined4 func_00287D20(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00287d90;
  param_1[200] = DAT_00287d90 + 0x54;
  *param_1 = iVar1;
  if ((char)param_1[0x109] != '\0') {
    func_004A8304(*DAT_00287d94,param_1[0x10a]);
    *(undefined1 *)(param_1 + 0x109) = 0;
  }
  return func_001510A4(param_1);
}

