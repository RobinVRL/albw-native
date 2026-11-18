#include "ghidra_types.h"

extern void func_001B6DE0(int param_1);
extern int func_002C00A8(int param_1);
extern int func_0066D3F0(undefined4 *param_1,int param_2);

// USA 00456354 <- EU 0045632C (Ghidra, non-matching)

/* WARNING: Removing unreachable block (ram,0x00456344) */
/* WARNING: Removing unreachable block (ram,0x00456350) */

void func_00456354(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 4) = 0;
  puVar2 = (ushort *)(iVar1 + 0x16);
  *puVar2 = *puVar2 & 0xffbf;
  func_002C00A8(*(int *)(param_1 + 0x14));
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    if (*(char *)(*(int *)(param_1 + 0xbc) + 0x15c) == '\x02') {
      func_0066D3F0((undefined4 *)(param_1 + 0x68),3);
    }
    else {
      func_0066D3F0((undefined4 *)(param_1 + 0x68),2);
    }
  }
  func_001B6DE0(param_1);
  return;
}

