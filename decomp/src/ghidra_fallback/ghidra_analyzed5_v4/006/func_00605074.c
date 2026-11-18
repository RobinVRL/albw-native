#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int DAT_00605088;

// USA 00605074 <- EU 0060504C (Ghidra, non-matching)
// GLOBAL DAT_00605088 int

void func_00605074(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x410);
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar1 = DAT_00605088;
    piVar3[200] = DAT_00605088 + 0x54;
    piVar3[0x103] = 0;
    *piVar3 = iVar1;
  }
  return;
}

