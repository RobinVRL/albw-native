#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_0065C310(undefined4 *param_1,undefined1 param_2);
extern int DAT_001cd150;
extern int *DAT_001cd154;

// USA 001CD0F8 <- EU 001CD0F8 (Ghidra, non-matching)
// GLOBAL DAT_001cd150 int
// GLOBAL DAT_001cd154 int *

undefined4 func_001CD0F8(int param_1)

{
  func_004CDF40(*DAT_001cd154,(uint)*(ushort *)(DAT_001cd150 + (uint)*(byte *)(param_1 + 0x4f9) * 2)
                ,1);
  func_004CF478(*(int *)(param_1 + 0x40c),0);
  func_00151148(*(int *)(param_1 + 0x410),0);
  return func_0065C310((undefined4 *)(param_1 + 0x4d4),6);
}

