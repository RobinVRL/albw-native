#include "ghidra_types.h"

extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int func_00375430(undefined2 param_1,int param_2,ushort param_3,undefined2 param_4);

// USA 00328984 <- EU 00328960 (Ghidra, non-matching)

int func_00328984(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x998) == '\0') {
    sVar5 = 3;
  }
  else {
    sVar5 = 0;
  }
  do {
    puVar2 = (undefined4 *)(param_1 + 0x8ec);
    if (uVar4 < 3) {
      puVar2 = puVar2 + uVar4;
    }
    *puVar2 = 0;
    func_00375430((short)uVar4 + sVar5,*(int *)(param_1 + 0x8c4),(short)*(char *)(param_1 + 0x998),0
                 );
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  func_0036E490((byte *)(param_1 + 0x8f8),2,*(int *)(param_1 + 0x8c4));
  iVar3 = param_1 + 0xc00;
  if (*(char *)(param_1 + 0xc96) != '\0') {
    cVar1 = *(char *)(param_1 + 0xc99);
    if (*(char *)(param_1 + 0xa70) == '\0') {
      sVar5 = 3;
    }
    else {
      sVar5 = 0;
    }
    uVar4 = 0;
    do {
      puVar2 = (undefined4 *)(param_1 + 0x9c4);
      if (uVar4 < 3) {
        puVar2 = puVar2 + uVar4;
      }
      *puVar2 = 0;
      func_00375430((short)uVar4 + sVar5,*(int *)(param_1 + 0x99c),(short)*(char *)(param_1 + 0xa70)
                    ,(short)cVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
    iVar3 = *(int *)(param_1 + 0x99c);
    if (cVar1 == '\0') {
      iVar3 = func_0036E490((byte *)(param_1 + 0x9d0),2,iVar3);
    }
    else {
      iVar3 = func_0036E490((byte *)(param_1 + 0x9d0),3,iVar3);
    }
    *(undefined1 *)(param_1 + 0xc99) = 0;
  }
  return iVar3;
}

