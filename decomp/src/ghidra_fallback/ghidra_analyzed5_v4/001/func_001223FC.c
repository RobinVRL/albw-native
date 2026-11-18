#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int *DAT_001224c0;
extern undefined4 DAT_001224c4;

// USA 001223FC <- EU 001223FC (Ghidra, non-matching)
// GLOBAL DAT_001224c0 int *
// GLOBAL DAT_001224c4 undefined4

void func_001223FC(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(*DAT_001224c0 + 0x28);
  if (iVar3 != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc4) + 0x30) + 0x48) + param_2 * 4);
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(iVar2 + 0x20);
      uVar5 = *(undefined4 *)(iVar2 + 0x24);
      param_1[0x12] = *(undefined4 *)(iVar2 + 0x1c);
      param_1[0x13] = uVar4;
      param_1[0x14] = uVar5;
      cVar1 = *(char *)(iVar2 + 0x28);
      if (cVar1 == '\0') {
        func_0010E3C4(param_1 + 0xe,*(uint **)(iVar2 + 0x30),0x10);
      }
      else if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
        func_0010E3C4(param_1 + 0xe,*(uint **)(iVar2 + 0x30),0xc);
      }
      func_0010E3C4(param_1 + 0x1e,*(uint **)(iVar2 + 0x34),0x10);
    }
    uVar4 = DAT_001224c4;
    *param_1 = *(undefined4 *)
                (*(int *)(*(int *)(*(int *)(iVar3 + 0xc4) + 0x30) + 0x90) + param_2 * 4);
    param_1[0x23] = uVar4;
  }
  return;
}

