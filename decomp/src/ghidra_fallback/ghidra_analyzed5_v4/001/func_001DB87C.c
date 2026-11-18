#include "ghidra_types.h"

extern int func_00149C08(byte *param_1,byte *param_2);
extern int func_0025538C(int param_1,int param_2);
extern int *DAT_001db8d4;

// USA 001DB87C <- EU 001DB87C (Ghidra, non-matching)
// GLOBAL DAT_001db8d4 int *

void func_001DB87C(int param_1,byte *param_2)

{
  if (*(char *)(*DAT_001db8d4 + 0x25) == '\0') {
    func_0025538C(param_1 + 0x40c,(int)param_2);
    func_00149C08((byte *)(param_1 + 0x598),param_2);
    param_2[200] = *(byte *)(param_1 + 0x699);
    param_2[0xc9] = *(byte *)(param_1 + 0x6b1);
    param_2[0xca] = *(byte *)(param_1 + 0x6a5);
  }
  return;
}

