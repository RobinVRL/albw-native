#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern float DAT_00225dec;
extern float DAT_00225df0;

// USA 00225D18 <- EU 00225D18 (Ghidra, non-matching)
// GLOBAL DAT_00225dec float
// GLOBAL DAT_00225df0 float

void func_00225D18(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float in_s2;
  
  iVar2 = func_0036BE78(param_1 + 0x48c);
  if (iVar2 != 0) {
    func_0065E774((undefined4 *)(param_1 + 0x468),4);
    *(undefined1 *)(param_1 + 0x5fd) = 1;
  }
  fVar1 = DAT_00225dec;
  iVar2 = *(int *)(param_1 + 0x68c);
  uVar3 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    in_s2 = DAT_00225df0;
  }
  fVar5 = *(float *)(*(int *)(iVar2 + 0x14) + 0x14);
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      iVar4 = *(int *)(iVar2 + 0x14);
      if (uVar3 < *(uint *)(iVar2 + 0xc)) {
        iVar4 = iVar4 + uVar3 * 0x28;
      }
      if ((in_s2 <= fVar1) || (fVar5 != in_s2)) {
        *(float *)(iVar4 + 0xc) = fVar5;
        *(float *)(iVar4 + 8) = fVar5;
      }
      else {
        *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0x14);
        *(float *)(iVar4 + 8) = *(float *)(iVar4 + 0x14);
      }
      uVar3 = uVar3 + 1;
      *(float *)(iVar4 + 0x10) = fVar1;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined1 *)(iVar4 + 0x26) = 1;
      *(undefined1 *)(iVar4 + 0x25) = 1;
    } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
  }
  return;
}

