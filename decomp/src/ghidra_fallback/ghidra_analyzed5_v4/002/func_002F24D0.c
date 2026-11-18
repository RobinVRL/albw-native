// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361658();
extern int func_0036BE78();
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_00687EA0(undefined4 *param_1);
extern int *DAT_002f25b4;
extern int *DAT_002f25b8;

// USA 002F24D0 <- EU 002F24AC (Ghidra, non-matching)
// GLOBAL DAT_002f25b4 int *
// GLOBAL DAT_002f25b8 int *

void func_002F24D0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002f25b4 + 0x3dbbc,*(uint *)(param_1 + 0xca8));
  puVar1 = func_00687EA0(puVar1);
  func_0036BE78(param_1 + 0x964);
  iVar2 = *(int *)(param_1 + 0xb7c);
  if (iVar2 == 0) {
    if (*(uint *)(param_1 + 0xb1c) <= *(uint *)(param_1 + 0xb18)) {
      func_00361658(*DAT_002f25b8);
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[0xb8] = puVar1[0xb8] | 2;
      }
      iVar2 = *(int *)(param_1 + 0xb7c) + 1;
      goto LAB_002f256c;
    }
    *(uint *)(param_1 + 0xb18) = *(uint *)(param_1 + 0xb18) + 1;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = 2;
LAB_002f256c:
      *(int *)(param_1 + 0xb7c) = iVar2;
      return;
    }
    if (iVar2 == 2) {
      if ((*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) ||
         (*(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1,
         **(int **)(*(int *)(param_1 + 0xdb4) + 0x14) == 2)) {
        *(int *)(param_1 + 0xb7c) = 3;
        return;
      }
    }
    else if (iVar2 == 3) {
      func_006640EC((undefined4 *)(param_1 + 0x8c8),0x1c,in_s0);
    }
  }
  return;
}

