#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_004B96F0(int param_1);
extern int func_004B989C(int param_1);
extern int func_0051BC08(int param_1,uint param_2,undefined4 param_3,int param_4);
extern int *DAT_00447ad4;

// USA 00447A40 <- EU 00447A18 (Ghidra, non-matching)
// GLOBAL DAT_00447ad4 int *

undefined4 func_00447A40(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  func_0051BC08(*DAT_00447ad4,param_2,param_3,param_4);
  uVar4 = 0;
  do {
    uVar3 = *(uint *)(param_1 + 0x1ac);
    if (uVar4 < uVar3) {
      param_3 = *(int *)(param_1 + 0x1b4);
      iVar1 = *(int *)(param_3 + uVar4 * 4);
    }
    else {
      iVar1 = 0;
    }
    if (*(char *)(iVar1 + 0x6c) != '\0') {
      if (uVar4 < uVar3) {
        uVar3 = *(uint *)(param_1 + 0x1b4);
        piVar2 = *(int **)(uVar3 + uVar4 * 4);
      }
      else {
        piVar2 = (int *)0x0;
      }
      func_001B6C2C(piVar2,uVar3,param_3,param_4);
      if (uVar4 < *(uint *)(param_1 + 0x1ac)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar4 * 4);
      }
      else {
        iVar1 = 0;
      }
      *(char *)(iVar1 + 0xf) = '\x15' - (char)uVar4;
      if (uVar4 < *(uint *)(param_1 + 0x1ac)) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar4 * 4);
      }
      else {
        iVar1 = 0;
      }
      param_3 = *(int *)(iVar1 + 0x14);
      *(char *)(param_3 + 0x14) = (*(char *)(*(int *)(param_1 + 0x14) + 0x14) - (char)uVar4) + -1;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x14);
  func_004B989C(*(int *)(param_1 + 0x10));
  return func_004B96F0(*(int *)(param_1 + 0x10));
}

