// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00556B54(int param_1);
extern int func_00556B7C(int param_1);
extern int *DAT_0035efcc;
extern undefined4 DAT_0035efd0;

// USA 0035EF44 <- EU 0035EF20 (Ghidra, non-matching)
// GLOBAL DAT_0035efcc int *
// GLOBAL DAT_0035efd0 undefined4

undefined4 func_0035EF44(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  
  if (((((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(param_1 + 0x510) == '\x01')) &&
       (*(char *)(param_1 + 0x512) == '\0')) &&
      ((iVar3 = *DAT_0035efcc, *(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x05' &&
       (((iVar3 == 0 || (bVar2 = func_00556B7C(iVar3), !bVar2)) ||
        (bVar2 = func_00556B54(iVar3), !bVar2)))))) && (*(char *)(param_1 + 0x510) == '\x01')) {
    *(undefined1 *)(param_1 + 0x510) = 0;
    uVar1 = DAT_0035efd0;
    *(undefined4 *)(param_1 + 0x4ac) = 6;
    *(undefined4 *)(param_1 + 0x4b0) = uVar1;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
  }
  return 1;
}

