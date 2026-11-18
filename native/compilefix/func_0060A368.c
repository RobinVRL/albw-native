/* compilefix: func_0060A368, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0060A368.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00367A18(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060a36c;

// USA 0060A368 <- EU 0060A340 (Ghidra, non-matching)
// GLOBAL DAT_0060a36c undefined4

void *func_0060A368(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x940);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = func_00367A18(puVar1,param_1);
    *puVar1 = DAT_0060a36c;
  }
  return albw_ret;
  return albw_ret;
}
