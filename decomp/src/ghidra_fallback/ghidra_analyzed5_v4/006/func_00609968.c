#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0038F58C(int param_1,uint param_2);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006099b8;

// USA 00609968 <- EU 00609940 (Ghidra, non-matching)
// GLOBAL DAT_006099b8 undefined4

undefined4 * func_00609968(uint *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x334);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_004ED00C(puVar2,param_1);
    uVar1 = DAT_006099b8;
    puVar3[0xcb] = 0;
    *puVar3 = uVar1;
    *(undefined1 *)(puVar3 + 0xcc) = 0;
    puVar3[200] = puVar3[2];
    puVar3[0xc9] = puVar3[3];
    puVar3[0xca] = puVar3[4];
    if (*(short *)((int)param_1 + 0x2a) == 1) {
      *(undefined1 *)(puVar3 + 0xcc) = 1;
      func_0038F58C((int)puVar3,(uint)(puVar3 + 200));
    }
  }
  return puVar3;
}

