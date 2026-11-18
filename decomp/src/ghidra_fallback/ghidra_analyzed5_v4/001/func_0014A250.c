#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_0014a308;
extern undefined4 DAT_0014a30c;

// USA 0014A250 <- EU 0014A250 (Ghidra, non-matching)
// GLOBAL DAT_0014a308 int *
// GLOBAL DAT_0014a30c undefined4

int func_0014A250(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_0014a308;
  if (*DAT_0014a308 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x60,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
      piVar1[1] = 0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_0014a30c;
      piVar1[1] = (int)puVar3;
      puVar2[0x14] = puVar2 + 0x13;
      puVar2[0x15] = 0;
      puVar2[0x13] = puVar2 + 0x13;
      puVar2[0x16] = 0xffffffff;
      *(undefined1 *)(puVar2 + 0x17) = 0;
      puVar2[4] = 0;
      iVar4 = 1;
      iVar5 = 1;
      do {
        puVar2[iVar4 + 4] = 0;
        iVar5 = iVar5 + 2;
        puVar2[iVar4 + 5] = 0;
        iVar4 = iVar4 + 2;
      } while (iVar5 < 0xf);
      puVar2[0x16] = 0x30;
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}

