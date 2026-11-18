#include "ghidra_types.h"


// USA 003406B8 <- EU 00340694 (Ghidra, non-matching)

void * func_003406B8(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0x8c) = *(undefined1 *)(param_1 + 0xb4);
  return (void *)param_1;
}

