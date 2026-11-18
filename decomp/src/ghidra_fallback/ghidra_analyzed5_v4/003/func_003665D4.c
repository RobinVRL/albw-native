#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00147DA0(int param_1);
extern int func_002D5D3C(void *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 DAT_0036665c;
extern int *DAT_00366660;
extern uint *DAT_00366664;
extern undefined4 *DAT_00366668;
extern undefined4 DAT_0036666c;

// USA 003665D4 <- EU 003665B0 (Ghidra, non-matching)
// GLOBAL DAT_0036665c undefined4
// GLOBAL DAT_00366660 int *
// GLOBAL DAT_00366664 uint *
// GLOBAL DAT_00366668 undefined4 *
// GLOBAL DAT_0036666c undefined4

undefined4 func_003665D4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = DAT_0036665c;
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_00366660 + 0x3dbbc,*(uint *)(param_1[10] + 0x624));
  if (((*DAT_00366664 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00366664), iVar2 != 0)) {
    *DAT_00366668 = DAT_0036666c;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_00366668), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    func_00147DA0((int)puVar1);
  }
  *(undefined1 *)(param_1[0xb] + 199) = 1;
  func_002D5D3C(param_1);
  return (undefined4)param_1;
}

