#include "ghidra_types.h"

extern undefined4 DAT_003d26c4;

// USA 003D2634 <- EU 003D2610 (Ghidra, non-matching)
// GLOBAL DAT_003d26c4 undefined4

undefined4 func_003D2634(int *param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  *param_2 = param_1[1] - *param_1 >> 1;
  param_2[1] = *param_1;
  iVar4 = param_1[2];
  uVar3 = 0;
  *param_1 = iVar4;
  do {
    sVar1 = *(short *)(iVar4 + uVar3 * 2);
    if (sVar1 == 0x2f) {
      uVar2 = DAT_003d26c4;
      if (uVar3 < 0x100) {
        iVar4 = iVar4 + uVar3 * 2;
        param_1[1] = iVar4;
        param_1[2] = iVar4 + 2;
        sVar1 = *(short *)(iVar4 + 2);
        while (sVar1 == 0x2f) {
          iVar4 = param_1[2];
          param_1[2] = iVar4 + 2;
          sVar1 = *(short *)(iVar4 + 2);
        }
        if (*(short *)param_1[2] == 0) {
          *(undefined1 *)(param_1 + 3) = 1;
        }
LAB_003d2668:
        uVar2 = 0;
      }
      return uVar2;
    }
    if (sVar1 == 0) {
      iVar4 = iVar4 + uVar3 * 2;
      param_1[1] = iVar4;
      *(undefined1 *)(param_1 + 3) = 1;
      param_1[2] = iVar4;
      goto LAB_003d2668;
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

