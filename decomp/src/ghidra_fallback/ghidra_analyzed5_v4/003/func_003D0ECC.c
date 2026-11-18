#include "ghidra_types.h"

extern int func_003CEACC(void);
extern int func_003D0FD8(void);
extern int DAT_003d0f70;
extern undefined4 DAT_003d0f74;
extern undefined4 DAT_003d0f78;
extern undefined4 DAT_003d0f7c;

// USA 003D0ECC <- EU 003D0EA8 (Ghidra, non-matching)
// GLOBAL DAT_003d0f70 int
// GLOBAL DAT_003d0f74 undefined4
// GLOBAL DAT_003d0f78 undefined4
// GLOBAL DAT_003d0f7c undefined4

undefined4 * func_003D0ECC(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_003d0f70;
  *param_1 = DAT_003d0f74;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(iVar3 + 3) = 0;
  *(undefined1 *)(iVar3 + 4) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[0x21f] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  param_1[0x22c] = 0;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  uVar2 = DAT_003d0f7c;
  if (param_2 == 0) {
    uVar1 = (undefined2)DAT_003d0f78;
    *(undefined2 *)(param_1 + 0x7f) = uVar1;
    *(undefined2 *)(param_1 + 0xeb) = uVar1;
    *(short *)(param_1 + 0x157) = (short)uVar2;
    param_1[1] = 0;
    func_003CEACC();
    iVar3 = func_003D0FD8();
    if (iVar3 == 0) {
      *(undefined1 *)((int)param_1 + 9) = 0;
    }
    else {
      *(undefined1 *)((int)param_1 + 9) = 1;
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return param_1;
}

