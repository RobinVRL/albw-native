#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002830F8(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00609864;
extern int DAT_00609868;
extern undefined4 *DAT_0060986c;

// USA 00609844 <- EU 0060981C (Ghidra, non-matching)
// GLOBAL DAT_00609864 undefined4
// GLOBAL DAT_00609868 int
// GLOBAL DAT_0060986c undefined4 *

int * func_00609844(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00609864);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_002830F8(puVar2,param_1);
    iVar1 = DAT_00609868;
    piVar3[200] = DAT_00609868 + 0xbc;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,DAT_0060986c);
  }
  return piVar3;
}

