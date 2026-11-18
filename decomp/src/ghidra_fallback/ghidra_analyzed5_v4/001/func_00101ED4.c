#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_00101f6c;
extern undefined4 DAT_00101f70;

// USA 00101ED4 <- EU 00101ED4 (Ghidra, non-matching)
// GLOBAL DAT_00101f6c int *
// GLOBAL DAT_00101f70 undefined4

void func_00101ED4(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_00101f6c;
  if (*DAT_00101f6c == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x4c,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      *puVar3 = DAT_00101f70;
      piVar1[1] = (int)puVar3;
      puVar2[5] = puVar2 + 4;
      puVar2[6] = 0;
      puVar2[4] = puVar2 + 4;
      puVar2[7] = 0xffffffff;
      puVar2[9] = puVar2 + 8;
      puVar2[10] = 0;
      puVar2[8] = puVar2 + 8;
      puVar2[0xb] = 0xffffffff;
      puVar3 = func_0010B830(puVar2 + 0xc);
      puVar2 = puVar3 + -0xc;
      puVar3[-5] = 0x90;
      puVar3[-1] = 0x98;
    }
    *piVar1 = (int)puVar2;
  }
  return;
}

