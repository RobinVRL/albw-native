/* compilefix: func_0060749C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0060749C.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00261468(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006074a8;
extern int DAT_006074ac;

// USA 0060749C <- EU 00607474 (Ghidra, non-matching)
// GLOBAL DAT_006074a8 undefined4
// GLOBAL DAT_006074ac int

void *func_0060749C(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006074a8);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00261468(puVar1,param_1);
    iVar3 = DAT_006074ac + 0x58;
    *piVar2 = DAT_006074ac;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
