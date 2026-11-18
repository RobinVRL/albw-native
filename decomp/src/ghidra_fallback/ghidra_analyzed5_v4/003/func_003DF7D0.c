#include "ghidra_types.h"

extern int func_0010AA9C(void);
extern int DAT_003df820;

// USA 003DF7D0 <- EU 003DF7B0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 undefined2
// PARAM param_6 Stack[0x4]:2 undefined2
// PARAM param_7 Stack[0x8]:2 undefined2
// GLOBAL DAT_003df820 int

bool func_003DF7D0(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,
                  undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = func_0010AA9C();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_003df820 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined2 *)(puVar2 + 0x10) = param_7;
    *(undefined2 *)((int)puVar2 + 0x42) = param_6;
    *(undefined2 *)(puVar2 + 0x11) = param_5;
    *(undefined2 *)((int)puVar2 + 0x46) = param_4;
    *(undefined2 *)(puVar2 + 0x12) = param_3;
    *puVar2 = *puVar2 | 0x1000000;
  }
  return iVar1 != 0;
}

