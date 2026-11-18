#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_00260e1c;
extern undefined4 DAT_00260e20;

// USA 00260D10 <- EU 00260D38 (Ghidra, non-matching)
// GLOBAL DAT_00260e1c int *
// GLOBAL DAT_00260e20 undefined4

void func_00260D10(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_00260e1c;
  if (*DAT_00260e1c == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x5b0,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_00260e20;
      piVar1[1] = (int)puVar3;
      puVar2[4] = 0;
      puVar3 = puVar2 + 9;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      if (puVar3 != (undefined4 *)0x0) {
        iVar4 = 0;
        iVar5 = 0x1f;
        puVar2[7] = puVar3;
        do {
          iVar5 = iVar5 + -1;
          puVar3[iVar4] = puVar3 + iVar4 + 9;
          iVar4 = iVar4 + 9;
        } while (iVar5 != 0);
        puVar2[0x120] = 0;
        puVar2[8] = puVar3;
        func_0010B3EC(puVar2 + 4,0x20,(int)(puVar2 + 0x129));
      }
      puVar2[0x149] = 0;
      puVar2[0x14a] = 0;
      puVar2[0x14b] = 0;
      func_0010B3EC(puVar2 + 0x149,0x20,(int)(puVar2 + 0x14c));
    }
    *piVar1 = (int)puVar2;
  }
  return;
}

