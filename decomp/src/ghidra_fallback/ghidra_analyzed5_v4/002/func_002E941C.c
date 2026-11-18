#include "ghidra_types.h"

extern int func_003A42B0(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 DAT_002e94cc;
extern float DAT_002e94d0;

// USA 002E941C <- EU 002E93F8 (Ghidra, non-matching)
// GLOBAL DAT_002e94cc undefined4
// GLOBAL DAT_002e94d0 float

void func_002E941C(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 uVar3;
  
  func_003A42B0(param_1 + 0x8ec,2);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  if (*(char *)(param_1 + 0xd45) == '\0') {
    func_004FC07C(param_1,0,0xffffffff,0);
  }
  else {
    func_004FC07C(param_1,0x18,0xffffffff,0);
  }
  uVar3 = DAT_002e94cc;
  if (*(char *)(param_1 + 0x8cd) != '!') {
    iVar1 = func_00548E78(param_1,0x14,0xf);
    *(int *)(param_1 + 0xb10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xb14) = uVar3;
    }
    else {
      fVar2 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xb14) = DAT_002e94d0 / fVar2;
    }
    *(undefined4 *)(param_1 + 0xb0c) = 0;
  }
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  return;
}

