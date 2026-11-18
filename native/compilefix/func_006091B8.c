/* compilefix: func_006091B8, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_006091B8.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00334104(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern undefined4 DAT_006091c8;
extern int DAT_006091cc;

// USA 006091B8 <- EU 00609190 (Ghidra, non-matching)
// GLOBAL DAT_006091c8 undefined4
// GLOBAL DAT_006091cc int

void *func_006091B8(uint *param_1)
{
  void *albw_ret = 0;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006091c8);
  albw_ret = (void *)puVar2;   /* the ARM returns the new object in r0 */
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00334104(puVar2,param_1,1);
    iVar1 = DAT_006091cc;
    piVar3[200] = DAT_006091cc + 0x54;
    *piVar3 = iVar1;
  }
  return albw_ret;
  return albw_ret;
}
