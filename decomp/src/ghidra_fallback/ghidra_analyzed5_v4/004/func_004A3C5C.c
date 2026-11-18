#include "ghidra_types.h"

extern int func_0010FBAC(uint *param_1,uint *param_2);

// USA 004A3C5C <- EU 004A3C34 (Ghidra, non-matching)

void func_004A3C5C(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x3c4) == 0) {
    iVar2 = 0;
    do {
      pcVar3 = (char *)(param_1 + iVar2 * 0xa0);
      if (*pcVar3 != '\0') {
        (**(code **)(*(int *)(pcVar3 + 4) + 8))(pcVar3 + 4);
        uVar1 = func_0010FBAC(*(uint **)(pcVar3 + 8),*(uint **)(param_2 + 8));
        if (uVar1 == 0) {
          *pcVar3 = '\0';
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
  }
  return;
}

