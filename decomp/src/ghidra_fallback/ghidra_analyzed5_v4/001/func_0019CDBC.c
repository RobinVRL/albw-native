#include "ghidra_types.h"

extern int func_00370754(undefined4 *param_1,int *param_2);
extern int func_00540270(uint *param_1,int param_2,undefined4 param_3,uint param_4);

// USA 0019CDBC <- EU 0019CDBC (Ghidra, non-matching)

void func_0019CDBC(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  
  iVar5 = 0;
  iVar4 = param_1 + 4;
  iVar3 = 0;
  do {
    puVar6 = (uint *)(param_2 + iVar5 * 0x38);
    *(undefined1 *)(iVar4 + iVar3 * 0x40 + 6) = 0xff;
    *(undefined1 *)(iVar4 + iVar3 * 0x40 + 5) = 0;
    if (-1 < (char)puVar6[0xd]) {
      iVar1 = func_00540270(puVar6,0,iVar5 * 7,param_4);
      puVar2 = (undefined4 *)(iVar4 + iVar3 * 0x40);
      if (iVar1 == 0) {
        func_00370754(puVar2,(int *)puVar6);
      }
      else {
        *(undefined1 *)((int)puVar2 + 6) = 0xff;
      }
    }
    iVar1 = iVar4 + iVar3 * 0x40;
    if (*(char *)(iVar1 + 6) < '\0') {
      *(undefined1 *)(iVar1 + 6) = 0xff;
      *(undefined1 *)(iVar4 + iVar3 * 0x40 + 5) = 0;
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar3 != 0x14);
  return;
}

