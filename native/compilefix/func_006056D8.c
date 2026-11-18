/* compilefix: func_006056D8, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_006056D8.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006056ec;
extern int DAT_006056f0;

// USA 006056D8 <- EU 006056B0 (Ghidra, non-matching)
// GLOBAL DAT_006056ec undefined4
// GLOBAL DAT_006056f0 int

void *func_006056D8(uint *param_1)
{
  void *albw_ret = 0;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006056ec);
  albw_ret = (void *)puVar2;   /* the ARM returns the new object in r0 */
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00150E40(puVar2,param_1);
    iVar1 = DAT_006056f0;
    *piVar3 = DAT_006056f0;
    *(undefined1 *)(piVar3 + 0x106) = 0;
    piVar3[200] = iVar1 + 0x54;
  }
  return albw_ret;
  return albw_ret;
}
