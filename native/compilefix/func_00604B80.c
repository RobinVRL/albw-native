/* compilefix: func_00604B80, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00604B80.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004D392C(undefined4 *param_1,uint *param_2,int param_3);
extern undefined4 DAT_00604ba8;
extern undefined4 DAT_00604bac;
extern undefined4 DAT_00604bb0;
extern int DAT_00604bb4;

// USA 00604B80 <- EU 00604B58 (Ghidra, non-matching)
// GLOBAL DAT_00604ba8 undefined4
// GLOBAL DAT_00604bac undefined4
// GLOBAL DAT_00604bb0 undefined4
// GLOBAL DAT_00604bb4 int

void *func_00604B80(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604ba8);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    local_c = DAT_00604bac;
    local_10 = DAT_00604bb0;
    piVar2 = func_004D392C(puVar1,param_1,(int)&local_10);
    iVar3 = DAT_00604bb4 + 0x54;
    *piVar2 = DAT_00604bb4;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
