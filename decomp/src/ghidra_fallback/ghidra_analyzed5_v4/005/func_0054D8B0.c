#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00151358(int *param_1);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_002C3524(int param_1,uint param_2);

// USA 0054D8B0 <- EU 0054D888 (Ghidra, non-matching)

int * func_0054D8B0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int *piVar4;
  
  if (param_3 < 4) {
    iVar1 = param_1 + param_3 * 0x1c;
    puVar3 = (ushort *)(iVar1 + 0x60);
    if ((puVar3 != (ushort *)0x0) && (-1 < (short)*puVar3)) {
      puVar2 = (undefined4 *)func_0010BAB4(0x20);
      if (puVar2 == (undefined4 *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = func_0015137C(puVar2,param_2,*puVar3 & 0xff);
      }
      piVar4[4] = *(int *)(iVar1 + 100);
      piVar4[5] = *(int *)(iVar1 + 0x68);
      piVar4[6] = *(int *)(iVar1 + 0x6c);
      func_00151358(piVar4);
      piVar4[1] = *(int *)(iVar1 + 0x70);
      piVar4[2] = *(int *)(iVar1 + 0x74);
      piVar4[3] = *(int *)(iVar1 + 0x78);
      if (*(char *)(iVar1 + 99) != '\0') {
        func_002C3524((int)piVar4,1);
      }
      return piVar4;
    }
  }
  return (int *)0x0;
}

