#include "ghidra_types.h"


// USA 003DA498 <- EU 003DA478 (Ghidra, non-matching)

int func_003DA498(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = param_1[2];
  iVar4 = *param_1;
  do {
    if (0xa3f < uVar1) {
LAB_003da51c:
      uVar3 = param_1[2];
      iVar4 = *param_1;
      uVar1 = 0;
      if (uVar3 != 0) {
        do {
          iVar2 = 0;
          uVar5 = uVar1;
          while ((uVar5 < uVar3 && (*(char *)(iVar4 + uVar1 + iVar2) == '\0'))) {
            iVar2 = iVar2 + 1;
            if (iVar2 == param_2) {
              for (uVar3 = uVar1; uVar3 < param_2 + uVar1; uVar3 = uVar3 + 1) {
                *(undefined1 *)(iVar4 + uVar3) = 1;
              }
              param_1[2] = param_2 + uVar1;
              return param_1[1] + uVar1 * 0x10;
            }
            uVar5 = uVar1 + iVar2;
          }
          uVar1 = uVar1 + iVar2 + 1;
        } while (uVar1 < uVar3);
      }
      return 0;
    }
    iVar2 = 0;
    uVar3 = uVar1;
    while ((uVar3 < 0xa40 && (*(char *)(iVar4 + uVar1 + iVar2) == '\0'))) {
      iVar2 = iVar2 + 1;
      if (iVar2 == param_2) {
        for (uVar3 = uVar1; uVar3 < uVar1 + param_2; uVar3 = uVar3 + 1) {
          *(undefined1 *)(iVar4 + uVar3) = 1;
        }
        param_1[2] = uVar1 + param_2;
        iVar4 = param_1[1] + uVar1 * 0x10;
        if (iVar4 != 0) {
          return iVar4;
        }
        goto LAB_003da51c;
      }
      uVar3 = uVar1 + iVar2;
    }
    uVar1 = uVar1 + iVar2 + 1;
  } while( true );
}

