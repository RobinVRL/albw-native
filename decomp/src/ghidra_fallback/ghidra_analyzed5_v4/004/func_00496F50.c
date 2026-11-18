#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_004968B4(int param_1,int *param_2,int *param_3);
extern int func_004979CC(int param_1,uint param_2,int *param_3);
extern int func_004A1828(uint *param_1,uint param_2,uint *param_3);
extern uint DAT_00496fbc;
extern undefined4 DAT_00496fc0;

// USA 00496F50 <- EU 00496F28 (Ghidra, non-matching)
// GLOBAL DAT_00496fbc uint
// GLOBAL DAT_00496fc0 undefined4

undefined4 func_00496F50(int param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  func_004979CC(param_1,0,(int *)0x0);
  uVar1 = DAT_00496fbc;
  puVar3 = (undefined4 *)(param_1 + 0x487c);
  puVar4 = (uint *)*puVar3;
  *puVar4 = *(byte *)(param_1 + 0x16) | 0x80000000;
  uVar2 = DAT_00496fc0;
  puVar4[1] = uVar1;
  func_001150CC(puVar4 + 2,param_2,uVar2);
  *puVar3 = puVar4 + 0x10;
  puVar4 = func_004A1828(puVar4 + 0x10,(uint)*(byte *)(param_1 + 0x1e),param_3);
  *puVar3 = puVar4;
  puVar4 = func_004A1828(puVar4,(uint)*(byte *)(param_1 + 0x26),param_4);
  *puVar3 = puVar4;
  return func_004968B4(param_1,(int *)(param_1 + 0x21dc),(int *)(param_1 + 0x2970));
}

