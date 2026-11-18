/* compilefix: func_00604B0C, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/006/func_00604B0C.c): an actor profile creator printed as
 * `void`; the ARM returns the new object (tools/void_creator_fix.py, BOOT_LOG 158). */
#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001BA8C4(undefined4 *param_1,uint *param_2,int param_3,int param_4);
extern undefined4 DAT_00604b50;
extern int DAT_00604b54;
extern char s_MapActor_00604b44[];

// USA 00604B0C <- EU 00604AE4 (Ghidra, non-matching)
// GLOBAL DAT_00604b50 undefined4
// GLOBAL DAT_00604b54 int
// GLOBAL s_MapActor_00604b44 string

void *func_00604B0C(uint *param_1)
{
  void *albw_ret = 0;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  puVar2 = (undefined4 *)func_0010BAB4(0x490);
  albw_ret = (void *)puVar2;   /* the ARM returns the new object in r0 */
  if (puVar2 != (undefined4 *)0x0) {
    local_c = s_MapActor_00604b44;
    local_10 = DAT_00604b50;
    piVar3 = func_001BA8C4(puVar2,param_1,1,(int)&local_10);
    iVar1 = DAT_00604b54;
    piVar3[200] = DAT_00604b54 + 0x5c;
    *piVar3 = iVar1;
    piVar3[0xb8] = piVar3[0xb8] | 1;
  }
  return albw_ret;
  return albw_ret;
}
