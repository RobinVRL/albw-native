#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_002313DC(int param_1);
extern int func_0023194C(int param_1,undefined4 param_2);
extern undefined4 DAT_00392828;

// USA 00392778 <- EU 00392754 (Ghidra, non-matching)
// GLOBAL DAT_00392828 undefined4

undefined4 func_00392778(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x3c) = DAT_00392828;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(uint *)(param_1 + 0x1c) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 4);
  }
  func_002313DC(iVar1);
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x24);
  }
  func_002313DC(iVar1);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar1 = extraout_r1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  if (iVar2 != 0 && iVar1 != 0) {
    *(short *)(iVar2 + 0x60) = (short)(int)*(float *)(param_1 + 0x3c);
    func_001788DC(*(int *)(param_1 + 0x30),*(undefined4 **)(param_1 + 0x38));
    iVar1 = *(int *)(param_1 + 0x30);
    piVar3 = *(int **)(param_1 + 0x34);
    *(undefined2 *)(iVar1 + 0x32) = 0;
    *(undefined1 *)(iVar1 + 0x3d) = 0;
    (**(code **)(*piVar3 + 0x60))
              (piVar3,*(undefined4 *)(*(int *)(param_1 + 0x30) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x30) + 0x20) >> 1);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0x24);
  }
  return func_0023194C(iVar1,(int)*(float *)(param_1 + 0x3c));
}

