#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern undefined4 DAT_001b68ec;
extern undefined4 DAT_001b68f0;
extern undefined4 DAT_001b6900;
extern char s_GetMdlHeap_001b68f4[];

// USA 001B687C <- EU 001B687C (Ghidra, non-matching)
// GLOBAL DAT_001b68ec undefined4
// GLOBAL DAT_001b68f0 undefined4
// GLOBAL DAT_001b6900 undefined4
// GLOBAL s_GetMdlHeap_001b68f4 string

undefined4 * func_001B687C(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = (undefined4 *)func_001663BC(param_1,DAT_001b68ec,0,7,1);
  local_18 = DAT_001b6900;
  *puVar1 = DAT_001b68f0;
  local_14 = s_GetMdlHeap_001b68f4;
  piVar2 = func_0010B954(0x4000,(int)&local_18,(int *)0x0,1,0);
  puVar1[0x42] = piVar2;
  *(undefined1 *)((int)puVar1 + 0x12) = 1;
  return puVar1;
}

