/* compilefix: func_0060286C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0060286C.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_002625C4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602878;
extern int DAT_0060287c;

// USA 0060286C <- EU 00602844 (Ghidra, non-matching)
// GLOBAL DAT_00602878 undefined4
// GLOBAL DAT_0060287c int

void *func_0060286C(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602878);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_002625C4(puVar1,param_1);
    iVar3 = DAT_0060287c + 0x84;
    *piVar2 = DAT_0060287c;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
