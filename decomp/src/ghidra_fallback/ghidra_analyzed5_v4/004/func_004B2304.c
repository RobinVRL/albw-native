#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern undefined4 *DAT_004b2374;
extern undefined4 DAT_004b2378;

// USA 004B2304 <- EU 004B22DC (Ghidra, non-matching)
// GLOBAL DAT_004b2374 undefined4 *
// GLOBAL DAT_004b2378 undefined4

undefined4 func_004B2304(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = DAT_004b2374;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = func_0010983C(*DAT_004b2374,*(int *)(param_1 + 0x20));
  }
  puVar2 = (undefined4 *)func_0010BAB4(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = *(undefined4 *)(param_2 + 0x19c34);
    puVar2[2] = 0x1e;
    *puVar2 = DAT_004b2378;
  }
  func_0048C378((int *)(param_1 + 0x18b4),0,puVar2);
  if (iVar3 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar3);
}

