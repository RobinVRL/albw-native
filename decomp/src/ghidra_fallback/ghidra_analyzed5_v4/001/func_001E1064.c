#include "ghidra_types.h"

extern int DAT_001e1220;
extern undefined *DAT_001e1224;

// USA 001E1064 <- EU 001E1064 (Ghidra, non-matching)
// GLOBAL DAT_001e1220 int
// GLOBAL DAT_001e1224 undefined *

int func_001E1064(int param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
LAB_001e1068:
  do {
    pcVar1 = DAT_001e1224;
    if (param_3 == 0xffffffff) {
      param_3 = (uint)(char)*(undefined4 *)(DAT_001e1220 + param_1);
    }
    iVar2 = 0;
    if (param_3 == 7) {
      uVar5 = 0;
      do {
        pcVar1 = DAT_001e1224;
        iVar4 = param_1 + 0x10;
        if (uVar5 < 7) {
          iVar4 = iVar4 + uVar5 * 0x328;
        }
        if (*(int *)(iVar4 + 0xc) != 0) {
          iVar2 = param_1 + 0x10;
          if (uVar5 < 7) {
            iVar2 = iVar2 + uVar5 * 0x328;
          }
          iVar4 = 0;
          if (0 < *(int *)(iVar2 + 0xc)) {
            do {
              iVar3 = (*pcVar1)(*(undefined4 *)(*(int *)(iVar2 + 0x14) + iVar4 * 4),param_2);
              if (iVar3 == 0) {
                iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + iVar4 * 4);
                if (iVar2 != 0) {
                  return iVar2;
                }
                goto LAB_001e11c4;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(iVar2 + 0xc));
          }
          iVar2 = 0;
        }
LAB_001e11c4:
        uVar5 = uVar5 + 1;
        if (6 < (int)uVar5) {
          return iVar2;
        }
      } while( true );
    }
    iVar2 = param_1 + 0x10;
    if (param_3 < 7) {
      iVar2 = iVar2 + param_3 * 0x328;
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
      return 0;
    }
    iVar2 = param_1 + 0x10;
    if (param_3 < 7) {
      iVar2 = iVar2 + param_3 * 0x328;
    }
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar3 = (*pcVar1)(*(undefined4 *)(*(int *)(iVar2 + 0x14) + iVar4 * 4),param_2);
        if (iVar3 == 0) {
          iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + iVar4 * 4);
          if (iVar2 != 0) {
            return iVar2;
          }
          break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0xc));
    }
    if (param_3 != 1) {
      if (param_3 != 2) {
        if (param_3 != 4 && param_3 != 5) {
          return 0;
        }
        param_3 = 2;
        if (*(int *)(param_1 + 0x66c) != 0) goto LAB_001e1068;
      }
      param_3 = 1;
      if (*(int *)(param_1 + 0x344) != 0) goto LAB_001e1068;
    }
    param_3 = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      return 0;
    }
  } while( true );
}

