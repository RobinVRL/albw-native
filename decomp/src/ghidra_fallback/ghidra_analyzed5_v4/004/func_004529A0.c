#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_00231488(int param_1,float fparam_0);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00452af0;
extern float DAT_00452af4;

// USA 004529A0 <- EU 00452978 (Ghidra, non-matching)
// GLOBAL DAT_00452af0 float
// GLOBAL DAT_00452af4 float

undefined4 func_004529A0(int param_1)

{
  uint uVar1;
  int *piVar2;
  float fparam_0;
  
  piVar2 = *(int **)(param_1 + 0xb0);
  (**(code **)(*(int *)(param_1 + 0x144) + 8))(param_1 + 0x144);
  uVar1 = 0;
  do {
    if (*(short *)(*(int *)(param_1 + 0x148) + uVar1 * 2) == 0) {
      if ((int)uVar1 < 0x40001) goto LAB_004529d4;
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x40001);
  uVar1 = 0;
LAB_004529d4:
  (**(code **)(*(int *)(param_1 + 0x144) + 8))(param_1 + 0x144);
  (**(code **)(*piVar2 + 0x60))(piVar2,*(undefined4 *)(param_1 + 0x148),0,uVar1 & 0xffff);
  piVar2 = *(int **)(param_1 + 0xb4);
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  uVar1 = 0;
  do {
    if (*(short *)(*(int *)(param_1 + 0xbc) + uVar1 * 2) == 0) {
      if ((int)uVar1 < 0x40001) goto LAB_00452a54;
      break;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x40001);
  uVar1 = 0;
LAB_00452a54:
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  (**(code **)(*piVar2 + 0x60))(piVar2,*(undefined4 *)(param_1 + 0xbc),0,uVar1 & 0xffff);
  func_00231340((short *)(param_1 + 0x98));
  fparam_0 = DAT_00452af0;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x9a) = 3;
  *(undefined2 *)(param_1 + 0x98) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x98),fparam_0);
  if (**(short **)(param_1 + 0x1d8) == 0) {
    return func_00231488(param_1 + 0x98,fparam_0);
  }
  return func_00231488(param_1 + 0x98,DAT_00452af4);
}

