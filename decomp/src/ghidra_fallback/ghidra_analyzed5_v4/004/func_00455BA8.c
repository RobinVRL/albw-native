#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern uint DAT_00455c48;
extern uint DAT_00455c4c;
extern uint DAT_00455c50;
extern float DAT_00455c54;

// USA 00455BA8 <- EU 00455B80 (Ghidra, non-matching)
// GLOBAL DAT_00455c48 uint
// GLOBAL DAT_00455c4c uint
// GLOBAL DAT_00455c50 uint
// GLOBAL DAT_00455c54 float

/* WARNING: Removing unreachable block (ram,0x00455b98) */
/* WARNING: Removing unreachable block (ram,0x00455ba4) */

void func_00455BA8(int param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (ushort *)(iVar1 + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  func_002C00A8(*(int *)(param_1 + 0x14));
  if (*(char *)(param_1 + 0x6c) != '\0') {
    uVar3 = *(uint *)(*(int *)(param_1 + 0xa4) + 0x1c);
    uVar4 = *(uint *)(*(int *)(param_1 + 0xa4) + 0x20);
    if (uVar3 <= DAT_00455c48) {
      bVar6 = SBORROW4(uVar3,DAT_00455c4c);
      iVar1 = uVar3 - DAT_00455c4c;
      bVar5 = uVar3 == DAT_00455c4c;
      if ((int)uVar3 <= (int)DAT_00455c4c) {
        uVar3 = DAT_00455c4c + 0x3e0000;
        bVar6 = SBORROW4(uVar4,uVar3);
        iVar1 = uVar4 - uVar3;
        bVar5 = uVar4 == uVar3;
      }
      if ((bVar5 || iVar1 < 0 != bVar6) && (uVar4 <= DAT_00455c50)) {
        if (*(char *)(param_1 + 0x6c) == '\x03') {
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
          *(undefined2 *)(param_1 + 0x2e) = 1;
          *(undefined2 *)(param_1 + 0x2c) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x1c);
          *(undefined2 *)(param_1 + 0x2e) = 3;
          *(undefined2 *)(param_1 + 0x2c) = 0;
        }
        func_002317C0((undefined2 *)(param_1 + 0x2c),DAT_00455c54);
        return;
      }
    }
  }
  return;
}

