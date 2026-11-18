#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern int *DAT_0010d630;
extern undefined4 DAT_0010d634;

// USA 0010D5C8 <- EU 0010D5C8 (Ghidra, non-matching)
// GLOBAL DAT_0010d630 int *
// GLOBAL DAT_0010d634 undefined4

int func_0010D5C8(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  
  piVar1 = DAT_0010d630;
  if (*DAT_0010d630 == 0) {
    puVar2 = (uint *)func_0010CEE0(0x20,param_1,4);
    puVar3 = (undefined4 *)0x0;
    uVar4 = extraout_r1;
    if (puVar2 + 4 != (uint *)0x0) {
      puVar3 = func_0010DA7C(puVar2 + 4,param_1,3);
      uVar4 = DAT_0010d634;
      *puVar3 = DAT_0010d634;
    }
    piVar1[1] = (int)puVar3;
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      func_0010FD28(puVar2,uVar4);
    }
    *piVar1 = (int)puVar2;
  }
  return *piVar1;
}

