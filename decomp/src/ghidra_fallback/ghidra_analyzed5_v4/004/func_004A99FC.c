#include "ghidra_types.h"

extern int func_004A9ADC(int param_1,undefined4 param_2,uint param_3,int *param_4);
extern int DAT_004a9ab0;

// USA 004A99FC <- EU 004A99D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_004a9ab0 int

undefined4 func_004A99FC(int param_1,int param_2,undefined4 param_3,uint param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  uVar6 = 0;
  *(undefined1 *)(DAT_004a9ab0 + param_1) = 0;
  if (param_4 < 0xf) {
    param_2 = param_2 + param_4 * 0xc;
  }
  iVar5 = *(int *)(param_2 + 4);
  do {
    if (iVar5 == param_2) {
      if ((*(char *)(param_1 + 0xbf4c) == '\0') &&
         (iVar5 = func_004A9ADC(param_1,param_3,param_4,param_5), iVar5 != 0)) {
        uVar6 = 1;
      }
      return uVar6;
    }
    piVar1 = *(int **)(iVar5 + 8);
    uVar3 = piVar1[5];
    bVar7 = param_5[3] != uVar3;
    if (bVar7) {
      uVar3 = (uint)*(byte *)((int)piVar1 + 0x61);
    }
    if (bVar7 && uVar3 != 0) {
      uVar4 = 0;
      if (*param_5 != 0) {
        uVar4 = param_3;
      }
      iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,uVar4,param_5);
      if (iVar2 != 0) {
        uVar6 = 1;
      }
      if (*(char *)(param_1 + 0xbf4c) != '\0') {
        return uVar6;
      }
    }
    iVar5 = *(int *)(iVar5 + 4);
  } while( true );
}

