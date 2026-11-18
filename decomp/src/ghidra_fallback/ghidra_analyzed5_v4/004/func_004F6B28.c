#include "ghidra_types.h"

extern int func_002AC2D4(int param_1);
extern int func_00542A9C(int param_1);

// USA 004F6B28 <- EU 004F6B00 (Ghidra, non-matching)

void func_004F6B28(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  *(undefined2 *)(param_1 + 0x50c) = *(undefined2 *)(param_1 + 0x508);
  if ((*(uint *)(param_1 + 0x658) < *(uint *)(param_1 + 0x65c)) &&
     (uVar2 = *(uint *)(param_1 + 0x658) + 1, *(uint *)(param_1 + 0x658) = uVar2,
     *(uint *)(param_1 + 0x65c) <= uVar2)) {
    func_002AC2D4(*(int *)(param_1 + 0x510));
  }
  uVar2 = *(uint *)(param_1 + 0x5a0) & 0xfbffffff;
  *(uint *)(param_1 + 0x5a0) = uVar2;
  if (*(uint *)(param_1 + 0x664) < *(uint *)(param_1 + 0x668)) {
    *(uint *)(param_1 + 0x5a0) = uVar2 | 0x4000000;
    *(uint *)(param_1 + 0x664) = *(uint *)(param_1 + 0x664) + 1;
  }
  if (*(uint *)(param_1 + 0x670) < *(uint *)(param_1 + 0x674)) {
    *(uint *)(param_1 + 0x670) = *(uint *)(param_1 + 0x670) + 1;
  }
  if (*(uint *)(param_1 + 0x67c) < *(uint *)(param_1 + 0x680)) {
    *(uint *)(param_1 + 0x67c) = *(uint *)(param_1 + 0x67c) + 1;
  }
  if (*(uint *)(param_1 + 0x688) < *(uint *)(param_1 + 0x68c)) {
    *(uint *)(param_1 + 0x688) = *(uint *)(param_1 + 0x688) + 1;
  }
  if (*(uint *)(param_1 + 0x694) < *(uint *)(param_1 + 0x698)) {
    *(uint *)(param_1 + 0x694) = *(uint *)(param_1 + 0x694) + 1;
  }
  if (*(uint *)(param_1 + 0x6a0) < *(uint *)(param_1 + 0x6a4)) {
    *(uint *)(param_1 + 0x6a0) = *(uint *)(param_1 + 0x6a0) + 1;
  }
  if (*(uint *)(param_1 + 0x6ac) < *(uint *)(param_1 + 0x6b0)) {
    *(uint *)(param_1 + 0x6ac) = *(uint *)(param_1 + 0x6ac) + 1;
  }
  if (*(uint *)(param_1 + 0x6b8) < *(uint *)(param_1 + 0x6bc)) {
    *(uint *)(param_1 + 0x6b8) = *(uint *)(param_1 + 0x6b8) + 1;
  }
  if (*(uint *)(param_1 + 0x6c4) < *(uint *)(param_1 + 0x6c8)) {
    *(uint *)(param_1 + 0x6c4) = *(uint *)(param_1 + 0x6c4) + 1;
  }
  if (*(uint *)(param_1 + 0x6d0) < *(uint *)(param_1 + 0x6d4)) {
    *(uint *)(param_1 + 0x6d0) = *(uint *)(param_1 + 0x6d0) + 1;
  }
  if (*(uint *)(param_1 + 0x6dc) < *(uint *)(param_1 + 0x6e0)) {
    *(uint *)(param_1 + 0x6dc) = *(uint *)(param_1 + 0x6dc) + 1;
  }
  if (*(uint *)(param_1 + 0x6e8) < *(uint *)(param_1 + 0x6ec)) {
    *(uint *)(param_1 + 0x6e8) = *(uint *)(param_1 + 0x6e8) + 1;
  }
  if (*(uint *)(param_1 + 0x6f4) < *(uint *)(param_1 + 0x6f8)) {
    *(uint *)(param_1 + 0x6f4) = *(uint *)(param_1 + 0x6f4) + 1;
  }
  if (*(uint *)(param_1 + 0x700) < *(uint *)(param_1 + 0x704)) {
    *(uint *)(param_1 + 0x700) = *(uint *)(param_1 + 0x700) + 1;
  }
  if (*(uint *)(param_1 + 0x70c) < *(uint *)(param_1 + 0x710)) {
    *(uint *)(param_1 + 0x70c) = *(uint *)(param_1 + 0x70c) + 1;
  }
  if (*(uint *)(param_1 + 0x718) < *(uint *)(param_1 + 0x71c)) {
    *(uint *)(param_1 + 0x718) = *(uint *)(param_1 + 0x718) + 1;
  }
  if (*(uint *)(param_1 + 0x724) < *(uint *)(param_1 + 0x728)) {
    *(uint *)(param_1 + 0x724) = *(uint *)(param_1 + 0x724) + 1;
  }
  if (*(uint *)(param_1 + 0x730) < *(uint *)(param_1 + 0x734)) {
    *(uint *)(param_1 + 0x730) = *(uint *)(param_1 + 0x730) + 1;
  }
  if (*(uint *)(param_1 + 0x73c) < *(uint *)(param_1 + 0x740)) {
    *(uint *)(param_1 + 0x73c) = *(uint *)(param_1 + 0x73c) + 1;
  }
  if (*(uint *)(param_1 + 0x868) < *(uint *)(param_1 + 0x86c)) {
    *(uint *)(param_1 + 0x868) = *(uint *)(param_1 + 0x868) + 1;
  }
  if (*(uint *)(param_1 + 0x85c) < *(uint *)(param_1 + 0x860)) {
    *(uint *)(param_1 + 0x85c) = *(uint *)(param_1 + 0x85c) + 1;
  }
  bVar1 = func_00542A9C(*(int *)(param_1 + 0x510));
  if (((bVar1) || (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0')) &&
     (*(short *)(param_1 + 0x784) != 0)) {
    *(short *)(param_1 + 0x784) = *(short *)(param_1 + 0x784) + -1;
  }
  return;
}

