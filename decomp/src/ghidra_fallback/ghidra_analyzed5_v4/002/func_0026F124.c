#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined *DAT_0026f190;

// USA 0026F124 <- EU 0026F14C (Ghidra, non-matching)
// GLOBAL DAT_0026f190 undefined *

void * func_0026F124(int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)func_00100118(param_1,DAT_0026f190,0x14,2);
  *(undefined1 *)((int)pvVar1 + 0x10) = 0;
  *(undefined1 *)((int)pvVar1 + 0x11) = 0;
  *(undefined1 *)((int)pvVar1 + 0x12) = 0;
  *(undefined1 *)((int)pvVar1 + 0x13) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0x24) = 0x80;
  *(undefined1 *)((int)pvVar1 + 0x25) = 0x80;
  *(undefined1 *)((int)pvVar1 + 0x26) = 0x80;
  *(undefined1 *)((int)pvVar1 + 0x27) = 0xff;
  return pvVar1;
}

