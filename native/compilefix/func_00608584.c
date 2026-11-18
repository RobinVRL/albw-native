/* compilefix: func_00608584, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00608584.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00334104(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern undefined4 DAT_00608594;
extern int DAT_00608598;

// USA 00608584 <- EU 0060855C (Ghidra, non-matching)
// GLOBAL DAT_00608594 undefined4
// GLOBAL DAT_00608598 int

void *func_00608584(uint *param_1)
{
  void *albw_ret = 0;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00608594);
  albw_ret = (void *)puVar2;   /* the ARM returns the new object in r0 */
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00334104(puVar2,param_1,1);
    iVar1 = DAT_00608598;
    piVar3[200] = DAT_00608598 + 0x54;
    *piVar3 = iVar1;
  }
  return albw_ret;
  return albw_ret;
}
