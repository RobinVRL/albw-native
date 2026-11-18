#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_00532C78(int param_1);
extern int func_0066C568(int *param_1);
extern int *DAT_0043c238;

// USA 0043C134 <- EU 0043C114 (Ghidra, non-matching)
// GLOBAL DAT_0043c238 int *

undefined4 func_0043C134(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = *(int *)(param_1 + 0xe4) != 0;
  iVar1 = 0;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0xe8);
  }
  if ((bVar4 && iVar1 != 0) &&
     (iVar1 = *(int *)(*DAT_0043c238 + 0x338), *(int *)(param_1 + 0x170) != iVar1)) {
    *(int *)(param_1 + 0x170) = iVar1;
    *(short *)(*(int *)(param_1 + 0xe4) + 0x60) = (short)iVar1;
    func_001788DC(*(int *)(param_1 + 0xe4),(undefined4 *)(param_1 + 0xd4));
    iVar1 = *(int *)(param_1 + 0xe4);
    piVar2 = *(int **)(param_1 + 0xe8);
    *(undefined2 *)(iVar1 + 0x32) = 0;
    *(undefined1 *)(iVar1 + 0x3d) = 0;
    (**(code **)(*piVar2 + 0x60))
              (piVar2,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0xe4) + 0x20) >> 1);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  if (*(char *)(param_1 + 0x188) == '\x01') {
    if ((*(int *)(param_1 + 0x178) != 0) &&
       (bVar4 = func_00532C78(*(int *)(param_1 + 0x178)), bVar4)) goto LAB_0043c22c;
    puVar3 = *(undefined4 **)(param_1 + 0x180);
    *(undefined1 *)(param_1 + 0x188) = 2;
  }
  else {
    if ((*(char *)(param_1 + 0x188) != '\x03') ||
       ((*(int *)(param_1 + 0x17c) != 0 && (bVar4 = func_00532C78(*(int *)(param_1 + 0x17c)), bVar4)
        ))) goto LAB_0043c22c;
    puVar3 = *(undefined4 **)(param_1 + 0x184);
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(puVar3);
  }
LAB_0043c22c:
  return func_0066C568((int *)(param_1 + 0x74));
}

