/* compilefix: func_00604E20, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00604E20.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00332D8C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00604e2c;
extern int DAT_00604e30;

// USA 00604E20 <- EU 00604DF8 (Ghidra, non-matching)
// GLOBAL DAT_00604e2c undefined4
// GLOBAL DAT_00604e30 int

void *func_00604E20(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604e2c);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_00332D8C(puVar1,param_1);
    iVar3 = DAT_00604e30 + 0x5c;
    *piVar2 = DAT_00604e30;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
