#include "ghidra_types.h"

extern int func_002DFB78(int param_1);
extern int func_00450178(int param_1,int param_2);
extern int func_00459280(int param_1);
extern int func_0045E4AC(int param_1,uint param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int *DAT_00459ac0;
extern int *DAT_00459ac4;

// USA 00459A84 <- EU 00459A5C (Ghidra, non-matching)
// GLOBAL DAT_00459ac0 int *
// GLOBAL DAT_00459ac4 int *

undefined4 func_00459A84(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  func_00459280(param_1);
  piVar1 = (int *)(param_1 + 0x1e4);
  if (param_2 < 3) {
    piVar1 = piVar1 + param_2;
  }
  iVar3 = *piVar1;
  iVar2 = func_005229AC(*(int **)(iVar3 + 0x1c),DAT_00459ac0);
  piVar1 = DAT_00459ac4;
  func_00450178(*DAT_00459ac4,iVar2);
  if (*(char *)(iVar3 + 0xcc) == '\0') {
    func_0045E4AC(*piVar1,(uint)*(byte *)(iVar3 + 0xf8));
  }
  *(uint *)(param_1 + 0x210) = param_2;
  return func_002DFB78(*piVar1);
}

