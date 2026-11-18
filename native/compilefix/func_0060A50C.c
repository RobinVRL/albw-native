/* compilefix: func_0060A50C, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_0060A50C.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00137F88(undefined4 *param_1,uint *param_2);
extern int DAT_0060a518;

// USA 0060A50C <- EU 0060A4E4 (Ghidra, non-matching)
// GLOBAL DAT_0060a518 int

void *func_0060A50C(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x450);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00137F88(puVar1,param_1);
    iVar3 = DAT_0060a518 + 0x54;
    *piVar2 = DAT_0060a518;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
