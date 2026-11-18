#include "ghidra_types.h"

extern int func_00166620(int param_1,int param_2);
extern int func_00166C00(int param_1,int param_2);
extern void func_001B6DE0(int param_1);
extern int func_004B9528(int param_1,int param_2);
extern int *DAT_0046c09c;

// GLOBAL DAT_0046c09c int *
// USA 0046BFF0 <- EU 0046BFF0 (Ghidra, function missing from the decomp table)

void func_0046BFF0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  bool bVar6;
  
  func_001B6DE0(param_1);
  piVar5 = DAT_0046c09c;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  func_00166620(*piVar5,param_1);
  func_00166C00(*piVar5,1);
  uVar4 = 0;
  do {
    puVar1 = (uint *)(param_1 + 0xbc);
    if (uVar4 < 2) {
      puVar1 = puVar1 + uVar4;
    }
    uVar2 = *puVar1;
    bVar6 = *(char *)(uVar2 + 0xd) == '\0';
    if (bVar6) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xe);
    }
    if (!bVar6 || uVar2 != 0) {
      puVar3 = (undefined4 *)(param_1 + 0xbc);
      if (uVar4 < 2) {
        puVar3 = puVar3 + uVar4;
      }
      piVar5 = (int *)*puVar3;
      (**(code **)(*piVar5 + 0x34))(piVar5);
      *(undefined1 *)((int)piVar5 + 0xe) = 0;
      *(undefined1 *)((int)piVar5 + 0xd) = 0;
    }
    piVar5 = (int *)(param_1 + 0xbc);
    if (uVar4 < 2) {
      piVar5 = piVar5 + uVar4;
    }
    func_004B9528(param_1,*piVar5);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  return;
}

