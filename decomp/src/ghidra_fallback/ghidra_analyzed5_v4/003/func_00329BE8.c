#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004FCD5C(int param_1,int param_2);
extern float DAT_00329c48;

// USA 00329BE8 <- EU 00329BC4 (Ghidra, non-matching)
// GLOBAL DAT_00329c48 float

void func_00329BE8(int param_1)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = DAT_00329c48;
  *(undefined1 *)(param_1 + 0xc93) = 1;
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) - fVar1;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  func_004FCD5C(param_1 + 0x5a8,0);
  func_004CF478(*(int *)(param_1 + 0xa88),0);
  if (*(int *)(param_1 + 0xa80) != 0) {
    func_004CF478(*(int *)(param_1 + 0xa80),0);
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffd;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x651) != '\0') {
    do {
      func_00151148(*(int *)(param_1 + 0x5a8 + uVar2 * 4 + 0x54),0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x651));
  }
  return;
}

