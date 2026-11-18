#include "ghidra_types.h"

extern int func_00382EE0(undefined4 *param_1,undefined4 param_2);
extern int func_00383670(undefined4 *param_1,undefined4 param_2);
extern int func_0038766C(undefined4 *param_1,undefined4 param_2);
extern int func_00397E24(undefined4 *param_1,undefined4 param_2);
extern int func_0039866C(undefined4 *param_1,undefined4 param_2);
extern int func_00398E6C(undefined4 *param_1,undefined4 param_2);
extern int func_00399620(undefined4 *param_1,undefined4 param_2);
extern int func_00399A2C(undefined4 *param_1,undefined4 param_2);
extern int func_0039A45C(undefined4 *param_1,undefined4 param_2);
extern int func_003A27BC(undefined4 *param_1,undefined4 param_2);
extern int func_003A3CF4(undefined4 *param_1,undefined4 param_2);
extern int func_003AB500(undefined4 *param_1,undefined4 param_2);
extern int func_003AF6EC(undefined4 *param_1,undefined4 param_2);
extern int func_003B05CC(undefined4 *param_1,undefined4 param_2);
extern int func_003BB388(undefined4 *param_1,undefined4 param_2);
extern int func_003BCE6C(undefined4 *param_1,undefined4 param_2);

// USA 003A37D4 <- EU 003A37B0 (Ghidra, non-matching)

undefined4 * func_003A37D4(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = func_0038766C((undefined4 *)(param_1 + 0xc),param_2);
  iVar1 = func_0039A45C((undefined4 *)(iVar1 + 0x1e4),param_2);
  puVar2 = func_00382EE0((undefined4 *)(iVar1 + 0xdc),param_2);
  puVar2 = func_003AF6EC(puVar2 + 0x10,param_2);
  puVar2 = func_003A27BC(puVar2 + 0x13,param_2);
  puVar2 = func_00398E6C(puVar2 + 0xf,param_2);
  iVar1 = func_003BB388(puVar2 + 0x10,param_2);
  puVar2 = func_003A3CF4((undefined4 *)(iVar1 + 0x40),param_2);
  iVar1 = func_0039866C(puVar2 + 0x10,param_2);
  iVar1 = func_003AB500((undefined4 *)(iVar1 + 0x100),param_2);
  iVar1 = func_00397E24((undefined4 *)(iVar1 + 0x44),param_2);
  iVar1 = func_00399620((undefined4 *)(iVar1 + 0x50),param_2);
  iVar1 = func_003B05CC((undefined4 *)(iVar1 + 0x110),param_2);
  puVar2 = func_003BCE6C((undefined4 *)(iVar1 + 0x13c),param_2);
  puVar2 = func_00383670(puVar2 + 0xf,param_2);
  puVar2 = func_00399A2C(puVar2 + 0x10,param_2);
  *(undefined1 *)(puVar2 + 4) = 3;
  *(undefined1 *)((int)puVar2 + 0x11) = 3;
  *(undefined1 *)((int)puVar2 + 0x12) = 0;
  *(undefined1 *)((int)puVar2 + 0x13) = 0;
  puVar2[5] = param_2;
  return puVar2 + -0x22c;
}

