#include "ghidra_types.h"

extern int func_001087BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern undefined4 DAT_00104708;
extern undefined4 DAT_0010470c;

// USA 0010467C <- EU 0010467C (Ghidra, non-matching)
// GLOBAL DAT_00104708 undefined4
// GLOBAL DAT_0010470c undefined4

undefined4 * func_0010467C(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = param_2 + 3;
  uVar4 = uVar2 & 0xfffffffc;
  uVar5 = param_2 + param_3 & 0xfffffffc;
  if (uVar4 <= uVar5) {
    uVar2 = uVar5 - uVar4;
  }
  if (uVar4 <= uVar5 && 0x13 < uVar2) {
    func_001087BC(param_1,DAT_00104708,uVar4,uVar5,param_4);
    *(undefined2 *)(param_1 + 0xd) = 0;
    *(undefined2 *)((int)param_1 + 0x36) = 0;
    puVar3 = (undefined2 *)param_1[6];
    iVar1 = param_1[7];
    *puVar3 = (short)DAT_0010470c;
    puVar3[1] = 0;
    *(int *)(puVar3 + 2) = (iVar1 - (int)puVar3) + -0x10;
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    param_1[9] = puVar3;
    param_1[10] = puVar3;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  else {
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

