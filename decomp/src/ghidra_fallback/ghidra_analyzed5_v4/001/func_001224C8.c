#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_00122584;

// USA 001224C8 <- EU 001224C8 (Ghidra, non-matching)
// GLOBAL DAT_00122584 undefined4

void func_001224C8(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0xc4) + 0x30) + 0x48) + param_2 * 4);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x20);
      uVar4 = *(undefined4 *)(iVar2 + 0x24);
      param_1[0x12] = *(undefined4 *)(iVar2 + 0x1c);
      param_1[0x13] = uVar3;
      param_1[0x14] = uVar4;
      cVar1 = *(char *)(iVar2 + 0x28);
      if (cVar1 == '\0') {
        func_0010E3C4(param_1 + 0xe,*(uint **)(iVar2 + 0x30),0x10);
      }
      else if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
        func_0010E3C4(param_1 + 0xe,*(uint **)(iVar2 + 0x30),0xc);
      }
      func_0010E3C4(param_1 + 0x1e,*(uint **)(iVar2 + 0x34),0x10);
    }
    uVar3 = DAT_00122584;
    *param_1 = *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_3 + 0xc4) + 0x30) + 0x90) + param_2 * 4);
    param_1[0x23] = uVar3;
    return;
  }
  return;
}

