#include "ghidra_types.h"

extern void func_0015D0E0(int param_1);
extern int func_00160430(int param_1,undefined1 param_2);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern int func_00588F08(int param_1);
extern int *DAT_0015ef80;
extern int *DAT_0015ef84;
extern undefined *DAT_0015ef88;

// USA 0015EEDC <- EU 0015EEE0 (Ghidra, non-matching)
// GLOBAL DAT_0015ef80 int *
// GLOBAL DAT_0015ef84 int *
// GLOBAL DAT_0015ef88 undefined *

undefined4 func_0015EEDC(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_0015D0E0(param_1);
  *(undefined4 *)(param_1 + 0xf90) = 0;
  *(undefined4 *)(param_1 + 0xf94) = 0;
  *(undefined1 *)(param_1 + 0xf54) = 3;
  *(int *)(param_1 + 0xe8c) = param_1 + 0xf80;
  func_0036C058(param_1 + 0xe60,0x1e,0x14,0);
  puVar1 = (undefined4 *)func_00588F08(*DAT_0015ef80);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_1 + 0xf7c) = puVar1[2];
  *(undefined4 *)(param_1 + 0xf74) = uVar2;
  *(undefined4 *)(param_1 + 0xf78) = uVar3;
  *(undefined4 *)(param_1 + 0xf68) = uVar2;
  *(undefined4 *)(param_1 + 0xf6c) = *(undefined4 *)(param_1 + 0xf78);
  *(undefined4 *)(param_1 + 0xf70) = *(undefined4 *)(param_1 + 0xf7c);
  func_00160430(param_1,0x16);
  return func_0052FD7C(*DAT_0015ef84 + 0x3dbbc,DAT_0015ef88,0);
}

