#include "ghidra_types.h"

extern int func_0014AE1C(int param_1,int param_2);
extern void func_001B6DE0(int param_1);
extern int func_004B9528(int param_1,int param_2);
extern int func_0058D808(int param_1);
extern int func_0058DB74(int param_1);
extern int *DAT_00442e80;
extern int *DAT_00442e84;
extern int *DAT_00442e88;

// USA 00442DCC <- EU 00442DAC (Ghidra, non-matching)
// GLOBAL DAT_00442e80 int *
// GLOBAL DAT_00442e84 int *
// GLOBAL DAT_00442e88 int *

void func_00442DCC(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  piVar6 = DAT_00442e80;
  iVar1 = func_0058DB74(*DAT_00442e80);
  if ((iVar1 == 0) && (iVar1 = func_0058D808(*piVar6), iVar1 != 0)) {
    func_0014AE1C(*DAT_00442e84,0);
  }
  *(undefined1 *)(*DAT_00442e88 + 0x79) = 0;
  func_001B6DE0(param_1);
  uVar5 = 0;
  do {
    puVar2 = (uint *)(param_1 + 0xbc);
    if (uVar5 < 2) {
      puVar2 = puVar2 + uVar5;
    }
    uVar3 = *puVar2;
    bVar7 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar7) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar7 || uVar3 != 0) {
      puVar4 = (undefined4 *)(param_1 + 0xbc);
      if (uVar5 < 2) {
        puVar4 = puVar4 + uVar5;
      }
      piVar6 = (int *)*puVar4;
      (**(code **)(*piVar6 + 0x34))(piVar6);
      *(undefined1 *)((int)piVar6 + 0xe) = 0;
      *(undefined1 *)((int)piVar6 + 0xd) = 0;
    }
    piVar6 = (int *)(param_1 + 0xbc);
    if (uVar5 < 2) {
      piVar6 = piVar6 + uVar5;
    }
    func_004B9528(param_1,*piVar6);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return;
}

