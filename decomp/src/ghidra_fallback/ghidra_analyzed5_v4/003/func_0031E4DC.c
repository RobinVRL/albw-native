#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_0031e518;
extern int *DAT_0031e51c;
extern undefined4 DAT_0031e520;

// USA 0031E4DC <- EU 0031E4B8 (Ghidra, non-matching)
// GLOBAL DAT_0031e518 undefined4
// GLOBAL DAT_0031e51c int *
// GLOBAL DAT_0031e520 undefined4

undefined4 func_0031E4DC(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = func_0010DA7C(param_1,0,3);
  uVar2 = DAT_0031e520;
  *puVar3 = DAT_0031e518;
  piVar1 = DAT_0031e51c;
  puVar3[4] = param_2;
  iVar4 = *piVar1;
  puVar3[6] = 0;
  puVar3[5] = iVar4 + 0x340;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = uVar2;
  puVar3[10] = uVar2;
  puVar3[0xb] = 0;
  puVar3[0xc] = uVar2;
  puVar3[0xd] = uVar2;
  return (undefined4)param_1;
}

