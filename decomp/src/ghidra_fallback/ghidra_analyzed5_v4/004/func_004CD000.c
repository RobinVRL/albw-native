#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int DAT_004cd05c;
extern undefined4 DAT_004cd060;
extern undefined4 DAT_004cd064;
extern undefined4 DAT_004cd068;

// USA 004CD000 <- EU 004CCFD8 (Ghidra, non-matching)
// GLOBAL DAT_004cd05c int
// GLOBAL DAT_004cd060 undefined4
// GLOBAL DAT_004cd064 undefined4
// GLOBAL DAT_004cd068 undefined4

void func_004CD000(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  iVar1 = DAT_004cd05c;
  if (*(int *)(DAT_004cd05c + 8) == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0x24,param_1,4);
    if (puVar3 + 4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = func_0010DA7C(puVar3 + 4,param_1,3);
      *puVar4 = DAT_004cd060;
    }
    bVar5 = puVar3 == (undefined4 *)0x0;
    if (bVar5) {
      puVar3 = (undefined4 *)0x0;
    }
    *(undefined4 **)(iVar1 + 0xc) = puVar4;
    if (!bVar5) {
      puVar3 = func_0010DA7C(puVar3,0,3);
      uVar2 = DAT_004cd068;
      puVar3[8] = DAT_004cd064;
      *puVar3 = uVar2;
    }
    *(undefined4 **)(iVar1 + 8) = puVar3;
  }
  return;
}

