/* compilefix: func_00605940, the converted stage-2 text (./build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00605940.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001BA8C4(undefined4 *param_1,uint *param_2,int param_3,int param_4);
extern undefined4 DAT_00605978;
extern int DAT_0060597c;
extern char s_MapActor_0060596c[];

// USA 00605940 <- EU 00605918 (Ghidra, non-matching)
// GLOBAL DAT_00605978 undefined4
// GLOBAL DAT_0060597c int
// GLOBAL s_MapActor_0060596c string

void *func_00605940(uint *param_1)
{
  void *albw_ret = 0;
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  puVar1 = (undefined4 *)func_0010BAB4(0x490);
  albw_ret = (void *)puVar1;   /* the ARM returns the new object in r0 */
  if (puVar1 != (undefined4 *)0x0) {
    local_c = s_MapActor_0060596c;
    local_10 = DAT_00605978;
    piVar2 = func_001BA8C4(puVar1,param_1,1,(int)&local_10);
    iVar3 = DAT_0060597c + 0x5c;
    *piVar2 = DAT_0060597c;
    piVar2[200] = iVar3;
  }
  return albw_ret;
  return albw_ret;
}
