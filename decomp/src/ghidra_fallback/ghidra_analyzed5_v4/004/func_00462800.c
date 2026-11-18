#include "ghidra_types.h"

extern int func_001B6CE4(int param_1);
extern int func_00231524(int param_1);
extern int func_00462924(int param_1);
extern float DAT_00462884;

// USA 00462800 <- EU 004627D8 (Ghidra, non-matching)
// GLOBAL DAT_00462884 float

undefined4 func_00462800(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = func_001B6CE4(param_1);
  if (*(char *)(param_1 + 0x81) == '\0') {
    if (*(char *)(param_1 + 0x80) != '\0') goto LAB_0046283c;
LAB_0046280c:
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if ((uint)(int)*(short *)(param_1 + 0x2e) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
      iVar2 = iVar2 + *(short *)(param_1 + 0x2e) * 0x38;
    }
    if (*(int *)(iVar2 + 0x14) < 0x3f800000) goto LAB_0046283c;
  }
  else if (*(char *)(param_1 + 0x80) == '\0') goto LAB_0046280c;
  func_00462924(param_1);
LAB_0046283c:
  if ((DAT_00462884 <= *(float *)(param_1 + 0x8c)) &&
     (uVar3 = VectorFloatToUnsigned(*(float *)(param_1 + 0x8c),3),
     uVar3 <= *(uint *)(param_1 + 0x90))) {
    func_00231524(param_1 + 0x2c);
    uVar1 = 1;
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return uVar1;
}

