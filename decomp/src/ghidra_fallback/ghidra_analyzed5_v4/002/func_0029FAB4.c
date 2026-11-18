#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00152B6C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0019CE50(undefined4 *param_1);
extern int *DAT_0029fb50;
extern undefined4 DAT_0029fb54;
extern undefined4 DAT_0029fb58;
extern undefined4 DAT_0029fb5c;
extern undefined4 DAT_0029fb60;
extern undefined4 DAT_0029fb64;
extern undefined4 DAT_0029fb68;

// USA 0029FAB4 <- EU 0029FA90 (Ghidra, non-matching)
// GLOBAL DAT_0029fb50 int *
// GLOBAL DAT_0029fb54 undefined4
// GLOBAL DAT_0029fb58 undefined4
// GLOBAL DAT_0029fb5c undefined4
// GLOBAL DAT_0029fb60 undefined4
// GLOBAL DAT_0029fb64 undefined4
// GLOBAL DAT_0029fb68 undefined4

int func_0029FAB4(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_0029fb50;
  if (*DAT_0029fb50 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(DAT_0029fb54,param_1,4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 + 0x141 != (undefined4 *)0x0) {
      puVar3 = func_0010DA7C(puVar2 + 0x141,param_1,3);
      *puVar3 = DAT_0029fb58;
    }
    piVar1[1] = (int)puVar3;
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)func_0019CE50(puVar2);
      *puVar3 = DAT_0029fb64;
      puVar2 = (undefined4 *)func_0010BAB4(DAT_0029fb68);
      iVar4 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        iVar4 = func_00152B6C(puVar2,puVar3,0,1);
      }
      puVar3[0x145] = iVar4;
    }
    *piVar1 = (int)puVar3;
  }
  return *piVar1;
}

