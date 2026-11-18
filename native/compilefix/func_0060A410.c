/* compilefix: func_0060A410, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0060A410.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0037A860(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a414;
extern undefined4 DAT_0060a418;

// USA 0060A410 <- EU 0060A3E8 (Ghidra, non-matching)
// GLOBAL DAT_0060a414 undefined4
// GLOBAL DAT_0060a418 undefined4

void *func_0060A410(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060a414);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)func_0037A860(puVar1,param_1);
    *puVar1 = DAT_0060a418;
  }
  return albw_ret;
  return albw_ret;
}
