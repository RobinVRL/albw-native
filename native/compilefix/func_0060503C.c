/* compilefix: func_0060503C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0060503C.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001768A4(undefined4 *param_1,uint *param_2);
extern int DAT_00605048;

// USA 0060503C <- EU 00605014 (Ghidra, non-matching)
// GLOBAL DAT_00605048 int

void *func_0060503C(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x550);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_001768A4(puVar1,param_1);
    iVar3 = DAT_00605048 + 0x90;
    *piVar2 = DAT_00605048;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
