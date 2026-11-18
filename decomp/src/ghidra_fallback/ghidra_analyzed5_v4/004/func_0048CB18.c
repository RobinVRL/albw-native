#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_0048cbd0;

// USA 0048CB18 <- EU 0048CAF0 (Ghidra, non-matching)
// GLOBAL DAT_0048cbd0 undefined4

void func_0048CB18(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    uVar1 = func_0010CEE0(*(int *)(param_1 + 0x10) << 2,param_3,4);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = DAT_0048cbd0;
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        puVar2 = (undefined4 *)func_0010CF28(0x40,param_3,4);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[1] = param_2;
          *puVar2 = uVar1;
          *(char *)(puVar2 + 2) = (char)iVar3;
          puVar2[4] = puVar2 + 3;
          puVar2[5] = 0;
          puVar2[3] = puVar2 + 3;
          puVar2[8] = puVar2 + 7;
          puVar2[9] = 0;
          puVar2[7] = puVar2 + 7;
          puVar2[0xc] = puVar2 + 0xb;
          puVar2[0xd] = 0;
          puVar2[0xb] = puVar2 + 0xb;
          *(undefined1 *)(puVar2 + 0xf) = 0;
          puVar2[6] = 0x10;
          puVar2[10] = 0x10;
          puVar2[0xe] = 0x10;
        }
        *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar3 * 4) = puVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}

