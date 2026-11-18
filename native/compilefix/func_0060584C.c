/* compilefix: func_0060584C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0060584C.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00261468(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605858;
extern int DAT_0060585c;

// USA 0060584C <- EU 00605824 (Ghidra, non-matching)
// GLOBAL DAT_00605858 undefined4
// GLOBAL DAT_0060585c int

void *func_0060584C(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605858);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00261468(puVar1,param_1);
    iVar3 = DAT_0060585c + 0x58;
    *piVar2 = DAT_0060585c;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
