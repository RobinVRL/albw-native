/* compilefix: func_00145B68, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/001/func_00145B68.c): 2 runtime type check(s) given
 * back their type-descriptor argument r1 (tools/rtti_arg_fix.py, BOOT_LOG 159). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005373A0(int param_1,float *param_2);
extern int *DAT_00145cd0;
extern uint *DAT_00145cd4;
extern undefined4 DAT_00145cd8;
extern undefined4 *DAT_00145cdc;
extern uint *DAT_00145ce0;
extern undefined4 *DAT_00145ce4;

// USA 00145B68 <- EU 00145B68 (Ghidra, non-matching)
// GLOBAL DAT_00145cd0 int *
// GLOBAL DAT_00145cd4 uint *
// GLOBAL DAT_00145cd8 undefined4
// GLOBAL DAT_00145cdc undefined4 *
// GLOBAL DAT_00145ce0 uint *
// GLOBAL DAT_00145ce4 undefined4 *

undefined4 func_00145B68(float *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  
  piVar1 = DAT_00145cd0;
  if (param_2 != 0) {
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_00145cd0 + 0x3dbbc,param_2);
    uVar2 = DAT_00145cd8;
    if (((*DAT_00145cd4 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00145cd4), iVar5 != 0)) {
      *DAT_00145cdc = uVar2;
    }
    if ((puVar4 == (undefined4 *)0x0) || (iVar5 = (**(code **)*puVar4)(puVar4,DAT_00145cdc), iVar5 == 0)) {   /* type descriptor restored (rtti_arg_fix) */
      puVar4 = (undefined4 *)0x0;
    }
    puVar3 = DAT_00145ce0;
    if ((puVar4 != (undefined4 *)0x0) && (uVar8 = 0, 0 < *(short *)(puVar4 + 0x127))) {
      do {
        puVar7 = puVar4 + 299;
        if (uVar8 < 0x10) {
          puVar7 = puVar4 + 299 + uVar8;
        }
        puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*puVar7);
        if (((*puVar3 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00145ce0), iVar5 != 0)) {
          *DAT_00145ce4 = uVar2;
        }
        if ((puVar6 == (undefined4 *)0x0) || (iVar5 = (**(code **)*puVar6)(puVar6,DAT_00145ce4), iVar5 == 0)) {   /* type descriptor restored (rtti_arg_fix) */
          puVar6 = (undefined4 *)0x0;
        }
        if ((puVar6 != (undefined4 *)0x0) &&
           (iVar5 = func_005373A0((int)puVar6,param_1), iVar5 != 0)) {
          return 1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)*(short *)(puVar4 + 0x127));
    }
  }
  return 0;
}

