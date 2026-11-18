#include "ghidra_types.h"

extern int func_0012E794(int param_1);
extern int func_0014D02C(int param_1,int param_2);
extern int func_001B6D8C(int param_1);
extern int func_00503970(int param_1,uint param_2);
extern int *DAT_00463c38;
extern int *DAT_00463c3c;

// USA 00463B98 <- EU 00463B70 (Ghidra, non-matching)
// GLOBAL DAT_00463c38 int *
// GLOBAL DAT_00463c3c int *

void func_00463B98(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  func_001B6D8C(param_1);
  func_0012E794(*DAT_00463c38);
  uVar4 = 0;
  do {
    puVar1 = (uint *)(param_1 + 200);
    if (uVar4 < 0x1a) {
      puVar1 = puVar1 + uVar4;
    }
    uVar2 = *puVar1;
    bVar6 = *(char *)(uVar2 + 0xd) == '\0';
    if (bVar6) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xe);
    }
    if (!bVar6 || uVar2 != 0) {
      puVar3 = (undefined4 *)(param_1 + 200);
      if (uVar4 < 0x1a) {
        puVar3 = puVar3 + uVar4;
      }
      piVar5 = (int *)*puVar3;
      (**(code **)(*piVar5 + 0x34))(piVar5);
      *(undefined1 *)((int)piVar5 + 0xe) = 0;
      *(undefined1 *)((int)piVar5 + 0xd) = 0;
    }
    piVar5 = (int *)(param_1 + 200);
    if (uVar4 < 0x1a) {
      piVar5 = piVar5 + uVar4;
    }
    func_0014D02C(param_1,*piVar5);
    piVar5 = DAT_00463c3c;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x1a);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  func_00503970(*piVar5,1);
  if (*(int **)(param_1 + 0x148) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x148) + 0x10))(*(int **)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  return;
}

