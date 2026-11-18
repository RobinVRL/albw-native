#include "ghidra_types.h"

extern int DAT_004a9b5c;

// USA 004A9ADC <- EU 004A9AB4 (Ghidra, non-matching)
// GLOBAL DAT_004a9b5c int

undefined4 func_004A9ADC(int param_1,undefined4 param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  uVar7 = 0;
  *(undefined1 *)(DAT_004a9b5c + param_1) = 0;
  iVar3 = param_1 + 0x10 + param_3 * 0xc;
  if (0xe < param_3) {
    iVar3 = param_1 + 0x10;
  }
  iVar6 = *(int *)(iVar3 + 4);
  do {
    if (iVar6 == iVar3) {
      return uVar7;
    }
    piVar1 = *(int **)(iVar6 + 8);
    uVar4 = piVar1[5];
    bVar8 = param_4[3] != uVar4;
    if (bVar8) {
      uVar4 = (uint)*(byte *)((int)piVar1 + 0x61);
    }
    if (bVar8 && uVar4 != 0) {
      uVar5 = 0;
      if (*param_4 != 0) {
        uVar5 = param_2;
      }
      iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,uVar5,param_4);
      if (iVar2 != 0) {
        uVar7 = 1;
      }
      if (*(char *)(param_1 + 0xbf4c) != '\0') {
        return uVar7;
      }
    }
    iVar6 = *(int *)(iVar6 + 4);
  } while( true );
}

