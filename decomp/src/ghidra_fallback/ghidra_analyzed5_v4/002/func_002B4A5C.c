#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00662638(undefined4 *param_1,undefined1 param_2);

// USA 002B4A5C <- EU 002B4A38 (Ghidra, non-matching)

void func_002B4A5C(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = *(int *)(param_1 + 0x958);
  if (iVar2 != 0) {
    fVar3 = func_0058AA40(param_1);
    fVar4 = func_0058AC38(param_1);
    *(float *)(*(int *)(iVar2 + 0x14) + 0x10) = fVar3 / fVar4;
  }
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x988) != '\0') {
      uVar1 = 10;
    }
    func_00662638((undefined4 *)(param_1 + 0x8ec),uVar1);
  }
  return;
}

