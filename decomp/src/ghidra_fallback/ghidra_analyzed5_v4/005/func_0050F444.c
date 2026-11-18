#include "ghidra_types.h"

extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00687E28(undefined4 *param_1);
extern int *DAT_0050f474;
extern undefined4 *DAT_0050f478;
extern int DAT_0050f47c;

// USA 0050F444 <- EU 0050F41C (Ghidra, non-matching)
// GLOBAL DAT_0050f474 int *
// GLOBAL DAT_0050f478 undefined4 *
// GLOBAL DAT_0050f47c int

void func_0050F444(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  piVar1 = DAT_0050f474;
  puVar2 = (undefined4 *)
           func_005841A8(*DAT_0050f474,*DAT_0050f478,*(int **)(DAT_0050f47c + *DAT_0050f474));
  bVar3 = *(undefined4 **)(*piVar1 + 0x3dbc8) != puVar2;
  if (bVar3) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if ((bVar3 && puVar2 != (undefined4 *)0x0) &&
     (puVar2 = func_00687E28(puVar2), puVar2 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0xa08) = puVar2[0xb3];
  }
  return;
}

