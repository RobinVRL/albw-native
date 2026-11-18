/* compilefix: func_006059A8, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_006059A8.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00279840(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006059b4;
extern int DAT_006059b8;

// USA 006059A8 <- EU 00605980 (Ghidra, non-matching)
// GLOBAL DAT_006059b4 undefined4
// GLOBAL DAT_006059b8 int

void *func_006059A8(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006059b4);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00279840(puVar1,param_1);
    iVar3 = DAT_006059b8 + 0x5c;
    *piVar2 = DAT_006059b8;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
