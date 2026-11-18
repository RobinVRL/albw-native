#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_002375D4(undefined4 *param_1,uint *param_2);
extern int func_004D44F4(int param_1);
extern int DAT_0060aa14;

// USA 0060A9C4 <- EU 0060A99C (Ghidra, non-matching)
// GLOBAL DAT_0060aa14 int

int * func_0060A9C4(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x650);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_002375D4(puVar2,param_1);
    iVar1 = DAT_0060aa14;
    piVar3[200] = DAT_0060aa14 + 0x78;
    *piVar3 = iVar1;
    piVar3[0x193] = 0;
    func_001E518C(piVar3,param_1,0,0,0);
    func_004D44F4((int)piVar3);
    *(undefined1 *)(piVar3 + 0x192) = 0;
    *(undefined1 *)((int)piVar3 + 0x649) = 1;
  }
  return piVar3;
}

