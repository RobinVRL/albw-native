#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_0034C698(undefined4 *param_1,uint param_2);
extern undefined4 DAT_003696a4;
extern undefined4 DAT_003696a8;
extern undefined4 DAT_003696ac;

// USA 0036959C <- EU 00369578 (Ghidra, non-matching)
// GLOBAL DAT_003696a4 undefined4
// GLOBAL DAT_003696a8 undefined4
// GLOBAL DAT_003696ac undefined4

undefined4 * func_0036959C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = DAT_003696ac;
  uVar1 = DAT_003696a8;
  *param_1 = DAT_003696a4;
  param_1[1] = uVar1;
  param_1[2] = *(undefined4 *)(param_2 + 4);
  param_1[3] = 0;
  param_1[4] = uVar2;
  puVar3 = (undefined4 *)func_0010BAB4(0x78);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0017A520(puVar3,0x400,(int *)0x0,0);
  }
  param_1[10] = puVar4;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0x5c);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0034C698(puVar3,3);
  }
  param_1[0xf] = puVar4;
  param_1[0x10] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  func_0010B3EC(param_1 + 0x31,3,(int)(param_1 + 0x34));
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  func_0010B3EC(param_1 + 0x37,3,(int)(param_1 + 0x3a));
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  param_1[0x11] = 0;
  iVar6 = 0;
  iVar5 = 0;
  param_1[0x12] = 0;
  do {
    param_1[iVar6 + 0x13] = 0;
    iVar5 = iVar5 + 2;
    param_1[iVar6 + 0x14] = 0;
    iVar6 = iVar6 + 2;
  } while (iVar5 < 0x14);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return param_1;
}

