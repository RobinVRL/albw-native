#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B830(undefined4 *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_002331cc;
extern undefined4 DAT_002331d0;
extern undefined4 DAT_002331d4;
extern int DAT_002331d8;
extern undefined *DAT_002331dc;
extern int DAT_002331e0;
extern undefined *DAT_002331e4;
extern int DAT_002331e8;
extern int DAT_002331ec;

// USA 002330F8 <- EU 002330F8 (Ghidra, non-matching)
// GLOBAL DAT_002331cc int *
// GLOBAL DAT_002331d0 undefined4
// GLOBAL DAT_002331d4 undefined4
// GLOBAL DAT_002331d8 int
// GLOBAL DAT_002331dc undefined *
// GLOBAL DAT_002331e0 int
// GLOBAL DAT_002331e4 undefined *
// GLOBAL DAT_002331e8 int
// GLOBAL DAT_002331ec int

void func_002330F8(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_002331cc;
  if (*DAT_002331cc == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(DAT_002331d0,param_1,4);
    if (puVar2 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_0010DA7C(puVar2,param_1,3);
      iVar4 = DAT_002331d8;
      *puVar3 = DAT_002331d4;
      piVar1[1] = (int)puVar3;
      iVar4 = func_00100118((int)(puVar2 + 4),DAT_002331dc,iVar4,2);
      *(undefined1 *)(DAT_002331e0 + iVar4) = 1;
      iVar4 = func_00100118(iVar4 + 0xb854,DAT_002331e4,0x10,6);
      *(undefined1 *)(iVar4 + 0x60) = 1;
      *(undefined1 *)(iVar4 + 0x61) = 4;
      *(undefined4 *)(DAT_002331e8 + iVar4 + -0xb864) = 0;
      puVar2 = func_0010B830((undefined4 *)(iVar4 + 0x68));
      puVar2 = func_0010B830(puVar2 + 7);
      puVar2 = puVar2 + -0x2e3a;
      *(undefined1 *)(DAT_002331ec + (int)puVar2) = 1;
    }
    *piVar1 = (int)puVar2;
  }
  return;
}

