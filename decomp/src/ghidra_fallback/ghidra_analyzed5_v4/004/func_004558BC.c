#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern uint DAT_004559e4;
extern uint DAT_004559e8;
extern uint DAT_004559ec;
extern float DAT_004559f0;

// USA 004558BC <- EU 00455894 (Ghidra, non-matching)
// GLOBAL DAT_004559e4 uint
// GLOBAL DAT_004559e8 uint
// GLOBAL DAT_004559ec uint
// GLOBAL DAT_004559f0 float

void func_004558BC(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20;
  func_00231448(param_1 + 0x38);
  cVar1 = *(char *)(param_1 + 0x98);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x5e) = 5;
LAB_00455904:
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  else {
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x5e) = 6;
      goto LAB_00455904;
    }
    if (cVar1 == '\x03') {
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x5e) = 7;
      *(undefined2 *)(param_1 + 0x5c) = 0;
    }
  }
  func_00231524(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    uVar2 = *(uint *)(*(int *)(param_1 + 0xa4) + 0x1c);
    uVar4 = *(uint *)(*(int *)(param_1 + 0xa4) + 0x20);
    if (uVar2 <= DAT_004559e4) {
      bVar6 = SBORROW4(uVar2,DAT_004559e8);
      iVar3 = uVar2 - DAT_004559e8;
      bVar5 = uVar2 == DAT_004559e8;
      if ((int)uVar2 <= (int)DAT_004559e8) {
        uVar2 = DAT_004559e8 + 0x3e0000;
        bVar6 = SBORROW4(uVar4,uVar2);
        iVar3 = uVar4 - uVar2;
        bVar5 = uVar4 == uVar2;
      }
      if ((bVar5 || iVar3 < 0 != bVar6) && (uVar4 <= DAT_004559ec)) goto LAB_00455990;
    }
    iVar3 = *(int *)(param_1 + 0xbc);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 0x15c);
    }
    if (iVar3 == 0 || cVar1 == '\0') {
LAB_00455990:
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
      if (*(char *)(param_1 + 0x6c) == '\x03') {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined2 *)(param_1 + 0x22) = 0;
        *(undefined2 *)(param_1 + 0x20) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined2 *)(param_1 + 0x22) = 2;
        *(undefined2 *)(param_1 + 0x20) = 0;
      }
      func_002317C0((undefined2 *)(param_1 + 0x20),DAT_004559f0);
      return;
    }
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  }
  return;
}

