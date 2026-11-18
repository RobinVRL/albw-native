#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049F434(int *param_1,int param_2,undefined *param_3);
extern undefined *DAT_004b9588;
extern undefined *DAT_004b958c;

// USA 004B9528 <- EU 004B9500 (Ghidra, non-matching)
// GLOBAL DAT_004b9588 undefined *
// GLOBAL DAT_004b958c undefined *

undefined4 func_004B9528(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float in_s0;
  float fparam_0;
  
  *(undefined4 *)(param_2 + 0x10) = 0;
  func_0010F1F8((int *)(*(int *)(param_1 + 0x54) + param_2),in_s0);
  fparam_0 = in_s0;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x1c);
    bVar4 = iVar3 == 0;
    if (bVar4) {
      iVar3 = *(int *)(iVar2 + 0x18);
    }
    if (!bVar4 || iVar3 != 0) {
      func_0010F1F8((int *)(iVar2 + *(int *)(param_1 + 100)),fparam_0);
      puVar1 = DAT_004b9588;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      func_0049F434((int *)(param_1 + 0x58),*(int *)(param_1 + 100),puVar1);
    }
  }
  return func_0049F434((int *)(param_1 + 0x48),*(int *)(param_1 + 0x54),DAT_004b958c);
}

