#include "ghidra_types.h"

extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int *DAT_0022537c;

// USA 00225324 <- EU 00225324 (Ghidra, non-matching)
// GLOBAL DAT_0022537c int *

void func_00225324(int param_1)

{
  int iVar1;
  
  iVar1 = func_004D80EC((float *)(*(int *)(param_1 + 0x608) + 4),*(float **)(*DAT_0022537c + 0x1c),0
                       );
  *(uint *)(param_1 + 0x6a4) = (iVar1 + 0x40000000U & 0xc0000000) + 0xe0000000;
  *(undefined1 *)(param_1 + 0x74f) = 0;
  *(bool *)(param_1 + 0x751) = *(char *)(param_1 + 0x73c) == '\0';
  return;
}

