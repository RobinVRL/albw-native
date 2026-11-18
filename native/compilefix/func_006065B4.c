/* compilefix: func_006065B4, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_006065B4.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006065d0;
extern undefined4 *DAT_006065d4;

// USA 006065B4 <- EU 0060658C (Ghidra, non-matching)
// GLOBAL DAT_006065d0 undefined4
// GLOBAL DAT_006065d4 undefined4 *

void *func_006065B4(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x330);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_004ED00C(puVar1,param_1);
    puVar1 = DAT_006065d4;
    *puVar2 = DAT_006065d0;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    puVar2[200] = *puVar1;
    puVar2[0xc9] = uVar3;
    puVar2[0xca] = uVar4;
    *(undefined1 *)(puVar2 + 0xcb) = 0;
  }
  return albw_ret;
  return albw_ret;
}
