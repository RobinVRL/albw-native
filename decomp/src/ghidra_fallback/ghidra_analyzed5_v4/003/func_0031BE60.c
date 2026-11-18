#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern int func_0031BEC0(int param_1,int param_2);

// USA 0031BE60 <- EU 0031BE3C (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x0031beb0) */

undefined4 func_0031BE60(int param_1)

{
  byte *pbVar1;
  
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xca) = 3;
  *(undefined2 *)(param_1 + 200) = 0;
  if (*(char *)(param_1 + 0xe3) == '\0') {
    func_002313DC(param_1 + 200);
    func_002313DC(param_1 + 0xb4);
    (**(code **)(*(int *)(param_1 + 0x88) + 8))(param_1 + 0x88);
    func_00231448(param_1 + 0xb4);
    pbVar1 = (byte *)(*(int *)(param_1 + 0xa4) + 0x70);
    *pbVar1 = *pbVar1 | 8;
    return 0;
  }
  func_00231524(param_1 + 200);
  return func_0031BEC0(param_1 + 0x78,1);
}

