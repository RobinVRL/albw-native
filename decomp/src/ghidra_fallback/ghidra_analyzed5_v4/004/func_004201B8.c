#include "ghidra_types.h"

extern int func_0042128C(undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4, undefined2 param_5,undefined2 param_6,undefined2 param_7,uint param_8, undefined1 param_9);

// USA 004201B8 <- EU 00420198 (Ghidra, non-matching)

undefined4 func_004201B8(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1[3] + 0xc);
  uVar1 = (**(code **)(*param_1 + 0x7c))(param_1);
  return func_0042128C(param_1 + 4,0,*(uint *)(iVar2 + 0x14),(char)*(undefined2 *)(iVar2 + 10),
                *(undefined2 *)(iVar2 + 0x10),*(undefined2 *)(iVar2 + 0x12),uVar1,
                *(uint *)(iVar2 + 4),1);
}

