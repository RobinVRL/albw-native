#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010E294(int *param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010EF18(int *param_1,undefined4 param_2);
extern int DAT_0010e3a0;
extern int *DAT_0010e3a4;
extern int *DAT_0010e3a8;
extern int *DAT_0010e3ac;

// USA 0010E2A4 <- EU 0010E2A4 (Ghidra, non-matching)
// GLOBAL DAT_0010e3a0 int
// GLOBAL DAT_0010e3a4 int *
// GLOBAL DAT_0010e3a8 int *
// GLOBAL DAT_0010e3ac int *

int * func_0010E2A4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_0010e3a0;
  func_0010C0B8(DAT_0010e3a0);
  if (*DAT_0010e3a4 != 0) {
    iVar2 = func_0010E294((int *)(*DAT_0010e3a4 + 0x24));
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = *(int **)(iVar2 + 0x68);
    }
    if ((iVar2 != 0 && piVar3 != (int *)0x0) &&
       (piVar3 = func_0010EF18(piVar3,param_2), piVar3 != (int *)0x0)) {
      func_0010EEE0(iVar1);
      return piVar3;
    }
  }
  puVar4 = (undefined4 *)DAT_0010e3a8[2];
  puVar5 = puVar4 + *DAT_0010e3a8;
  for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    piVar3 = func_0010EF18((int *)*puVar4,param_2);
    if (piVar3 != (int *)0x0) goto LAB_0010e370;
  }
  puVar4 = (undefined4 *)DAT_0010e3ac[2];
  puVar5 = puVar4 + *DAT_0010e3ac;
  while( true ) {
    if (puVar4 == puVar5) {
      func_0010EEE0(iVar1);
      return (int *)0x0;
    }
    piVar3 = func_0010EF18((int *)*puVar4,param_2);
    if (piVar3 != (int *)0x0) break;
    puVar4 = puVar4 + 1;
  }
LAB_0010e370:
  func_0010EEE0(iVar1);
  return piVar3;
}

