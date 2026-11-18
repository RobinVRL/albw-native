#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_0044AFE8(int param_1);
extern int func_0058DD10(int param_1);
extern int *DAT_0044a208;
extern float DAT_0044a20c;

// USA 0044A198 <- EU 0044A170 (Ghidra, non-matching)
// GLOBAL DAT_0044a208 int *
// GLOBAL DAT_0044a20c float

undefined4 func_0044A198(int param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  func_0044AFE8(param_1);
  iVar1 = func_0058DD10(*DAT_0044a208);
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x292) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x230);
    iVar4 = *(int *)(param_1 + 0x22c);
    *(int *)(iVar1 + 4) = iVar4;
    puVar2 = (ushort *)(iVar1 + 0x16);
    uVar3 = *puVar2;
    if (iVar4 == 0) {
      uVar3 = uVar3 & 0xffbf;
    }
    else {
      uVar3 = uVar3 | 0x40;
    }
    *puVar2 = uVar3;
    func_002C00A8(*(int *)(param_1 + 0x230));
    *(undefined2 *)(param_1 + 0xec) = 2;
    func_002317C0((undefined2 *)(param_1 + 0xec),DAT_0044a20c);
    *(undefined2 *)(param_1 + 0x140) = 0;
    func_002313DC(param_1 + 0x140);
    *(undefined2 *)(param_1 + 0x14c) = 0;
    return func_002313DC(param_1 + 0x14c);
  }
  return 0;
}

