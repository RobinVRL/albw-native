#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060af60;
extern int DAT_0060af64;

// USA 0060AF54 <- EU 0060AF2C (Ghidra, non-matching)
// GLOBAL DAT_0060af60 undefined4
// GLOBAL DAT_0060af64 int

void func_0060AF54(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060af60);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00150E40(puVar1,param_1);
    iVar3 = DAT_0060af64 + 0x54;
    *piVar2 = DAT_0060af64;
    piVar2[200] = iVar3;
  }
  return;
}

