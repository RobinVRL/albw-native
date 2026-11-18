#include "ghidra_types.h"

extern int func_0010ACB8(undefined4 *param_1,uint param_2);
extern int func_0010C380(undefined4 *param_1,int param_2);
extern int func_003D31F4(undefined4 *param_1,int param_2);
extern undefined4 *DAT_003d32a4;

// USA 003D3254 <- EU 003D3230 (Ghidra, non-matching)
// GLOBAL DAT_003d32a4 undefined4 *

undefined4 func_003D3254(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_003d32a4;
  iVar2 = 0;
  do {
    iVar2 = func_0010C380(puVar3,iVar2);
    if (iVar2 == 0) goto LAB_003d3294;
  } while ((param_1 < *(uint *)(iVar2 + 0x18)) || (*(uint *)(iVar2 + 0x1c) <= param_1));
  iVar1 = func_0010ACB8((undefined4 *)(iVar2 + 0xc),param_1);
  if (iVar1 == 0) {
    iVar1 = iVar2;
  }
  puVar3 = (undefined4 *)(iVar1 + 0xc);
LAB_003d3294:
  return func_003D31F4(puVar3,param_1);
}

