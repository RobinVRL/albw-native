#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_0033453c;
extern float DAT_00334540;
extern undefined4 DAT_00334544;

// USA 00334474 <- EU 00334450 (Ghidra, non-matching)
// GLOBAL DAT_0033453c float
// GLOBAL DAT_00334540 float
// GLOBAL DAT_00334544 undefined4

void func_00334474(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0x464) != 0) {
      func_00151148(*(int *)(param_1 + 0x464),0);
    }
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + DAT_0033453c;
    func_004CF478(*(int *)(param_1 + 0x43c),0);
    *(undefined1 *)(param_1 + 0x411) = 0;
    break;
  case 1:
    *(undefined1 *)(param_1 + 0x410) = 0xb4;
    *(undefined1 *)(param_1 + 0x414) = 1;
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x410) = 0;
    break;
  case 3:
    if (*(int *)(param_1 + 0x464) != 0) {
      func_00151148(*(int *)(param_1 + 0x464),1);
    }
    func_004CF478(*(int *)(param_1 + 0x43c),1);
    *(undefined1 *)(param_1 + 0x411) = 1;
    break;
  case 4:
    *(float *)(param_1 + 0x454) = *(float *)(param_1 + 0x3d4) + DAT_00334540;
    uVar1 = DAT_00334544;
    *(undefined4 *)(param_1 + 0x45c) = 0x1e;
    *(undefined4 *)(param_1 + 0x460) = uVar1;
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  *(char *)(param_1 + 0x438) = (char)param_2;
  return;
}

