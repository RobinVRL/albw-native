#include "ghidra_types.h"

extern int func_003FE070(int *param_1);
extern int func_004929B8(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_00503c74;
extern int *DAT_00503c78;

// USA 00503C48 <- EU 00503C20 (Ghidra, non-matching)
// GLOBAL DAT_00503c74 undefined4
// GLOBAL DAT_00503c78 int *

undefined4 * func_00503C48(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = DAT_00503c78;
  *param_1 = DAT_00503c74;
  if (param_1 == (undefined4 *)piVar1[1]) {
    piVar1[1] = 0;
    iVar3 = *piVar1;
    func_004929B8((undefined4 *)(iVar3 + 0x120));
    func_003FE070((int *)(iVar3 + 0xf0));
    *piVar1 = 0;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

