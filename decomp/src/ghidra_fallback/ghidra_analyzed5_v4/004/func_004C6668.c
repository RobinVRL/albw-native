#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_004C78E4(undefined4 *param_1);
extern int *DAT_004c66a8;
extern undefined4 DAT_004c66ac;

// USA 004C6668 <- EU 004C6640 (Ghidra, non-matching)
// GLOBAL DAT_004c66a8 int *
// GLOBAL DAT_004c66ac undefined4

void func_004C6668(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  piVar1 = DAT_004c66a8;
  if (*DAT_004c66a8 == 0) {
    puVar2 = (undefined4 *)func_0010CEE0(0x5b4,param_1,4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 + 0x141 != (undefined4 *)0x0) {
      puVar3 = func_0010DA7C(puVar2 + 0x141,param_1,3);
      *puVar3 = DAT_004c66ac;
    }
    piVar1[1] = (int)puVar3;
    if (puVar2 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = func_004C78E4(puVar2);
    }
    *piVar1 = (int)puVar3;
  }
  return;
}

