#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_002313DC(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0048AC68(uint param_1);
extern float DAT_003a0d38;

// USA 003A0C98 <- EU 003A0C74 (Ghidra, non-matching)
// GLOBAL DAT_003a0d38 float

void func_003A0C98(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 0) {
    param_2 = 0;
    uVar4 = 0;
    do {
      uVar1 = func_0048AC68(*(uint *)(param_1 + 0x388 + uVar4 * 4));
      uVar4 = uVar4 + 1;
      param_2 = param_2 + uVar1;
    } while (uVar4 < 2);
  }
  if ((*(int *)(param_1 + 0x4c) != 0) && (**(int **)(param_1 + 0x50) != 0)) {
    *(short *)(*(int *)(param_1 + 0x48) + 0x60) = (short)param_2;
    func_001788DC(*(int *)(param_1 + 0x48),*(undefined4 **)(param_1 + 0x50));
    iVar3 = *(int *)(param_1 + 0x48);
    piVar2 = *(int **)(param_1 + 0x4c);
    *(undefined2 *)(iVar3 + 0x32) = 0;
    *(undefined1 *)(iVar3 + 0x3d) = 0;
    (**(code **)(*piVar2 + 0x60))
              (piVar2,*(undefined4 *)(*(int *)(param_1 + 0x48) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x48) + 0x20) >> 1);
  }
  if (param_2 < 0x32) {
    func_002313DC(param_1 + 0x24);
  }
  else {
    func_002317C0((undefined2 *)(param_1 + 0x24),DAT_003a0d38);
  }
  *(int *)(param_1 + 0x390) = param_2;
  return;
}

