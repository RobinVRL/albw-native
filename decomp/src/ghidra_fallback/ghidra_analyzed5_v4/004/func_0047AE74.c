#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BEE00(int param_1);
extern int func_002C00A8(int param_1);
extern float DAT_0047af10;

// USA 0047AE74 <- EU 0047AE4C (Ghidra, non-matching)
// GLOBAL DAT_0047af10 float

void func_0047AE74(int param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  float fparam_0;
  
  if (*(char *)(param_1 + 0x30e) != '\0') {
    uVar4 = 0;
    do {
      piVar2 = (int *)(param_1 + 0x118);
      if (uVar4 < 0x14) {
        piVar2 = piVar2 + uVar4;
      }
      iVar5 = *piVar2;
      func_002C00A8(*(int *)(iVar5 + 0x14));
      uVar4 = uVar4 + 1;
      puVar3 = (ushort *)(*(int *)(iVar5 + 0x14) + 0x16);
      uVar1 = *puVar3;
      *puVar3 = uVar1 | 1;
      *(ushort *)(*(int *)(iVar5 + 0x14) + 0x16) = uVar1 & 0xffbf | 1;
    } while ((int)uVar4 < 0x14);
    func_0012C790(*(int *)(param_1 + 0x208));
    func_002BEE00(*(int *)(param_1 + 0x1fc));
    func_0012C790(*(int *)(param_1 + 0x1fc));
    fparam_0 = DAT_0047af10;
    *(undefined2 *)(param_1 + 0x1b8) = 2;
    func_002317C0((undefined2 *)(param_1 + 0x1b8),fparam_0);
    if ((*(ushort *)(param_1 + 0x1c4) & 0xff) == 0) {
      *(undefined2 *)(param_1 + 0x1c4) = 2;
      func_002317C0((undefined2 *)(param_1 + 0x1c4),fparam_0);
    }
    *(undefined1 *)(param_1 + 0x30e) = 0;
  }
  return;
}

