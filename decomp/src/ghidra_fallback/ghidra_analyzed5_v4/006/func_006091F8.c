#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00388D78(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00609218;
extern int DAT_0060921c;
extern undefined4 *DAT_00609220;

// USA 006091F8 <- EU 006091D0 (Ghidra, non-matching)
// GLOBAL DAT_00609218 undefined4
// GLOBAL DAT_0060921c int
// GLOBAL DAT_00609220 undefined4 *

int * func_006091F8(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00609218);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_00388D78(puVar2,param_1);
    iVar1 = DAT_0060921c;
    piVar3[200] = DAT_0060921c + 0xb8;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,DAT_00609220);
  }
  return piVar3;
}

