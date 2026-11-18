/* compilefix: func_00602B58, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00602B58.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00137F88(undefined4 *param_1,uint *param_2);
extern int DAT_00602b64;

// USA 00602B58 <- EU 00602B30 (Ghidra, non-matching)
// GLOBAL DAT_00602b64 int

void *func_00602B58(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x450);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00137F88(puVar1,param_1);
    iVar3 = DAT_00602b64 + 0x54;
    *piVar2 = DAT_00602b64;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
