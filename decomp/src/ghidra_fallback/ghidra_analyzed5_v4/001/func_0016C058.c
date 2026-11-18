#include "ghidra_types.h"

extern int func_00270A78(uint *param_1,uint param_2,int param_3,int *param_4,undefined4 *param_5, uint param_6,int param_7);

// USA 0016C058 <- EU 0016C058 (Ghidra, non-matching)

void func_0016C058(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0xfa7) == '\0') {
    uVar3 = 0x30;
    do {
      piVar2 = (int *)(param_1 + 0x284);
      if (uVar3 < 0x33) {
        piVar2 = (int *)(param_1 + 0x284 + uVar3 * 0x38);
      }
      *(undefined1 *)((int)piVar2 + 0x15) = 1;
      if (*piVar2 != 0) {
        iVar1 = *(int *)(param_1 + 0x10) + (uVar3 & 0xffff) * 0x278;
        *(undefined4 *)(iVar1 + 0x168) = 0;
        *(undefined4 *)(iVar1 + 0x16c) = 0;
        func_00270A78((uint *)*piVar2,uVar3,0,(int *)(param_1 + 0x10),piVar2 + 2,param_2,
                      (int)(char)piVar2[5]);
      }
      uVar3 = uVar3 + 1;
      *(undefined1 *)((int)piVar2 + 0x15) = 0;
      *(undefined1 *)((int)piVar2 + 0x16) = 0;
    } while ((int)uVar3 < 0x33);
  }
  return;
}

