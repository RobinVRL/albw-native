#include "ghidra_types.h"

extern int func_0036B758(int param_1);
extern int func_0036BE78();
extern int func_0036C09C(undefined4 param_1,uint param_2);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern float DAT_002255c8;
extern undefined4 DAT_002255cc;

// USA 002254CC <- EU 002254CC (Ghidra, non-matching)
// GLOBAL DAT_002255c8 float
// GLOBAL DAT_002255cc undefined4

undefined4 func_002254CC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x468);
  iVar3 = param_1 + 0x48c;
  if (*(char *)(param_1 + 0x73d) == '\x01') {
    if ((iVar2 == 0x67 || iVar2 == 0x6b) || iVar2 == 0x96) goto LAB_0022552c;
  }
  else if (((iVar2 == 0x5c || iVar2 == 0x61) || (iVar2 == 0x67 || iVar2 == 0x6b)) ||
          (iVar2 == 0x84 || iVar2 == 0x96)) {
LAB_0022552c:
    func_0036C09C(iVar3,2);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x68c) + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_002255c8) {
      if (DAT_002255c8 < *(float *)(iVar2 + 8)) goto LAB_002255bc;
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_002255bc;
    func_0065E774((undefined4 *)(param_1 + 0x468),4);
    uVar1 = DAT_002255cc;
    *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x60) = DAT_002255cc;
    *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x58) = uVar1;
    func_0036B758(iVar3);
    *(undefined1 *)(param_1 + 0x5fd) = 1;
  }
LAB_002255bc:
  return func_0036BE78(iVar3);
}

