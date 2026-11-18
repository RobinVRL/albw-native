/* compilefix: func_0049105C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_0049105C.c): 1 runtime type check(s) given
 * back their type-descriptor argument r1 (tools/rtti_arg_fix.py, BOOT_LOG 159). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004085E8(int param_1,undefined4 param_2,undefined4 param_3);
extern int *DAT_00491124;
extern uint *DAT_00491128;
extern undefined4 *DAT_0049112c;
extern undefined4 DAT_00491130;
extern uint *DAT_00491134;
extern undefined4 *DAT_00491138;
extern undefined4 DAT_0049113c;

// USA 0049105C <- EU 00491034 (Ghidra, non-matching)
// GLOBAL DAT_00491124 int *
// GLOBAL DAT_00491128 uint *
// GLOBAL DAT_0049112c undefined4 *
// GLOBAL DAT_00491130 undefined4
// GLOBAL DAT_00491134 uint *
// GLOBAL DAT_00491138 undefined4 *
// GLOBAL DAT_0049113c undefined4

undefined4 func_0049105C(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*DAT_00491124 + 0x1c);
  if (((*DAT_00491128 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00491128), iVar1 != 0)) {
    *DAT_0049112c = DAT_00491130;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar1 = (**(code **)*puVar2)(puVar2,DAT_0049112c), iVar1 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (((*DAT_00491134 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00491134), iVar1 != 0)) {
    *DAT_00491138 = DAT_0049113c;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (**(code **)(*param_2 + 4))(param_2,DAT_00491138), iVar1 == 0)) {   /* type descriptor restored (rtti_arg_fix) */
    param_2 = (int *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar2 + 1;
  }
  return func_004085E8(param_1 + 4,puVar2,param_2[3]);
}

