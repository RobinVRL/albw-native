#include "ghidra_types.h"

extern int func_0028F7B0(int param_1,uint param_2);
extern int func_0052E620(int param_1,int param_2);
extern int func_0053F98C(int param_1);

// USA 001DCE44 <- EU 001DCE44 (Ghidra, non-matching)

undefined4 func_001DCE44(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  bVar1 = func_0052E620(param_1,param_3);
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x5f4);
    puVar3 = (undefined4 *)func_0028F7B0(*(int *)(param_1 + 0x614),0x67);
    if (puVar3 != (undefined4 *)0x0) {
      uVar5 = *(undefined4 *)(iVar2 + 0x3ba4);
      *puVar3 = *(undefined4 *)(iVar2 + 0x3b64);
      puVar3[1] = *(undefined4 *)(iVar2 + 0x3b68);
      puVar3[2] = *(undefined4 *)(iVar2 + 0x3b6c);
      puVar3[3] = *(undefined4 *)(iVar2 + 0x3b40);
      puVar3[4] = *(undefined4 *)(iVar2 + 0x3b44);
      puVar3[5] = *(undefined4 *)(iVar2 + 0x3b48);
      puVar3[6] = uVar5;
LAB_001dcf08:
      *(undefined4 *)(*(int *)(param_1 + 0x618) + 0x30) = 0;
      return 1;
    }
  }
  else if (((*(int *)(param_1 + 0x5a8) != 0x3f800000) && (*(char *)(param_1 + 0x5ad) == '\0')) &&
          (iVar2 = func_0053F98C(*(int *)(param_1 + 0x614)), iVar2 != 0x5f)) {
    if (param_2 == 0) {
      uVar4 = 0x68;
    }
    else {
      uVar4 = 0x69;
    }
    iVar2 = func_0028F7B0(*(int *)(param_1 + 0x614),uVar4);
    if (iVar2 != 0) goto LAB_001dcf08;
  }
  return 0;
}

