#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int *DAT_004cd790;
extern undefined4 DAT_004cd794;
extern undefined4 DAT_004cd798;
extern int *DAT_004cd79c;

// USA 004CD6EC <- EU 004CD6C4 (Ghidra, non-matching)
// GLOBAL DAT_004cd790 int *
// GLOBAL DAT_004cd794 undefined4
// GLOBAL DAT_004cd798 undefined4
// GLOBAL DAT_004cd79c int *

int func_004CD6EC(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar1 = DAT_004cd790;
  if (*DAT_004cd790 == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0xcc,param_1,4);
    if (puVar3 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar4 = func_0010DA7C(puVar3,param_1,3);
      *puVar4 = DAT_004cd794;
      piVar1[1] = (int)puVar4;
      *(undefined1 *)(puVar3 + 4) = 0;
      puVar3[6] = puVar3 + 5;
      puVar3[7] = 0;
      puVar3[5] = puVar3 + 5;
      puVar3[8] = 0xffffffff;
      puVar3[10] = puVar3 + 9;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0xffffffff;
      uVar2 = DAT_004cd798;
      puVar3[9] = puVar3 + 9;
      puVar3[0xd] = uVar2;
      puVar3[0xf] = puVar3 + 0xe;
      puVar3[0x10] = 0;
      puVar3[0xe] = puVar3 + 0xe;
      puVar3[0x11] = 0;
      func_00110490(puVar3 + 0x12,0x80);
      puVar3[0x32] = *DAT_004cd79c + 0x4d0;
      puVar3[8] = 0x20;
      puVar3[0xc] = 0x28;
    }
    *piVar1 = (int)puVar3;
  }
  return *piVar1;
}

