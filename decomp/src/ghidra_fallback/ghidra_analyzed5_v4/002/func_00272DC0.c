#include "ghidra_types.h"

extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004A1520();
extern undefined4 DAT_00272e4c;
extern int *DAT_00272e50;
extern undefined *DAT_00272e54;

// USA 00272DC0 <- EU 00272DE8 (Ghidra, non-matching)
// GLOBAL DAT_00272e4c undefined4
// GLOBAL DAT_00272e50 int *
// GLOBAL DAT_00272e54 undefined *

undefined4 * func_00272DC0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_00272e50;
  *param_1 = DAT_00272e4c;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar3 = *piVar1;
    func_00100950(iVar3 + 0x3d80,DAT_00272e54,0x620,10);
    func_00100950(iVar3 + 0x28,DAT_00272e54,0x620,10);
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

