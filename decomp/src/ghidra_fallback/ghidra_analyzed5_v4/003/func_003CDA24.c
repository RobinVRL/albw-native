#include "ghidra_types.h"

extern int func_003CDC2C(int *param_1);
extern int func_003CDC3C(int *param_1,int param_2);
extern uint DAT_003cda90;
extern uint DAT_003cda94;
extern uint DAT_003cda98;

// USA 003CDA24 <- EU 003CDA00 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_003cda90 uint
// GLOBAL DAT_003cda94 uint
// GLOBAL DAT_003cda98 uint

uint func_003CDA24(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = DAT_003cda90;
  if ((((param_3 & 0xfff) == 0) && (param_1[5] = param_2, uVar2 = DAT_003cda94, param_1[2] == 0)) &&
     (iVar1 = func_003CDC3C(param_1,param_3), uVar2 = DAT_003cda98, iVar1 != 0)) {
    *(byte *)(param_1 + 4) = ~(byte)(param_5 >> 1) & 1;
    uVar2 = param_1[5];
    software_interrupt(0x1f);
    if ((uVar2 & 0x80000000) == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else {
      func_003CDC2C(param_1);
    }
  }
  return uVar2;
}

