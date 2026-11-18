/* compilefix: func_00602E34, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00602E34.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00189FC8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00602e40;
extern int DAT_00602e44;

// USA 00602E34 <- EU 00602E0C (Ghidra, non-matching)
// GLOBAL DAT_00602e40 undefined4
// GLOBAL DAT_00602e44 int

void *func_00602E34(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602e40);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)func_00189FC8(puVar1,param_1);
    iVar3 = DAT_00602e44 + 0x78;
    *piVar2 = DAT_00602e44;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
