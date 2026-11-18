/* compilefix: func_00607620, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00607620.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00301944(undefined4 *param_1,uint *param_2);
extern int DAT_0060762c;

// USA 00607620 <- EU 006075F8 (Ghidra, non-matching)
// GLOBAL DAT_0060762c int

void *func_00607620(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x640);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00301944(puVar1,param_1);
    iVar3 = DAT_0060762c + 0x78;
    *piVar2 = DAT_0060762c;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
