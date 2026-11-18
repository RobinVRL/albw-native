#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605728;
extern int DAT_0060572c;

// USA 0060571C <- EU 006056F4 (Ghidra, non-matching)
// GLOBAL DAT_00605728 undefined4
// GLOBAL DAT_0060572c int

void func_0060571C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605728);
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00150E40(puVar1,param_1);
    iVar3 = DAT_0060572c + 0x54;
    *piVar2 = DAT_0060572c;
    piVar2[200] = iVar3;
  }
  return;
}

