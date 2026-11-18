#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001D2BC4(undefined4 *param_1,uint *param_2);
extern int DAT_0060ae98;

// USA 0060AE8C <- EU 0060AE64 (Ghidra, non-matching)
// GLOBAL DAT_0060ae98 int

void func_0060AE8C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x640);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_001D2BC4(puVar1,param_1);
    iVar3 = DAT_0060ae98 + 0x78;
    *piVar2 = DAT_0060ae98;
    piVar2[200] = iVar3;
  }
  return;
}

