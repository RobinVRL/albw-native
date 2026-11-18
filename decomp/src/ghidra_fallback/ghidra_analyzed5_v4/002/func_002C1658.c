#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00432EC0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6);

// USA 002C1658 <- EU 002C1634 (Ghidra, non-matching)

undefined4 func_002C1658(int param_1)

{
  uint uVar1;
  uint uVar2;
  int in_r1;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1cc);
  piVar3 = (int *)(param_1 + 0x17c);
  iVar4 = param_1 + 0x17c;
  if (uVar1 < 2) {
    in_r1 = uVar1 * 5;
  }
  uVar2 = 1 - uVar1;
  if (uVar1 < 2) {
    piVar3 = piVar3 + in_r1 * 2;
  }
  bVar5 = uVar2 < 2;
  if (bVar5) {
    uVar2 = uVar2 * 5;
  }
  if (bVar5) {
    iVar4 = iVar4 + uVar2 * 8;
  }
  func_0010E3C4(*(uint **)(iVar4 + 4),(uint *)piVar3[1],*piVar3 * 0x24);
  func_0010E3C4(*(uint **)(iVar4 + 0xc),(uint *)piVar3[3],piVar3[2] * 0x18);
  func_0010E3C4(*(uint **)(iVar4 + 0x14),(uint *)piVar3[5],piVar3[4] * 0x24);
  uVar1 = 1 - *(int *)(param_1 + 0x1cc);
  uVar2 = **(uint **)(param_1 + 0x178);
  *(uint *)(param_1 + 0x1cc) = uVar1;
  iVar4 = param_1 + 0x17c;
  if (uVar1 < 2) {
    iVar4 = param_1 + 0x17c + uVar1 * 0x28;
  }
  func_00432EC0(*(uint **)(param_1 + 0x178),*(uint *)(iVar4 + 4),*(uint *)(iVar4 + 0x14),
                *(uint *)(iVar4 + 0xc),0x5a,uVar2);
  return *(undefined4 *)(param_1 + 0x178);
}

