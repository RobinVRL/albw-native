#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0058A468(int param_1);
extern float fRam002a08c4;
extern int iRam002a08c0;
extern undefined4 uRam002a08bc;
extern undefined4 uRam002a08c8;
extern undefined4 uRam002a08cc;
extern undefined4 uRam002a08d0;
extern undefined4 DAT_002a08b8;

// USA 002A07AC <- EU 002A0788 (Ghidra, non-matching)
// GLOBAL DAT_002a08b8 undefined4
// GLOBAL UNK_002a08bc undefined4
// GLOBAL UNK_002a08c0 int
// GLOBAL UNK_002a08c4 float
// GLOBAL UNK_002a08c8 undefined4
// GLOBAL UNK_002a08cc undefined4
// GLOBAL UNK_002a08d0 undefined4

void func_002A07AC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0x58c) = DAT_002a08b8;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff48;
  func_00151148(*(int *)(param_1 + 0x95c),0);
  iVar2 = iRam002a08c0;
  uVar4 = uRam002a08bc;
  *(undefined4 *)(param_1 + 0x3dc) = uRam002a08bc;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  *(undefined4 *)(param_1 + 0x900) = uVar4;
  uVar1 = uRam002a08c8;
  fVar5 = fRam002a08c4;
  if (*(short *)(iVar2 + param_1) < 1) {
    iVar2 = func_0058A468(param_1);
    func_004FC78C(param_1,(short)iVar2);
    uVar1 = uRam002a08d0;
    iVar2 = (int)*(short *)(param_1 + 0x30);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x914) = uRam002a08cc;
      *(undefined4 *)(param_1 + 0x918) = uVar1;
      *(undefined4 *)(param_1 + 0x910) = 0;
      return;
    }
    *(int *)(param_1 + 0x914) = iVar2;
  }
  else {
    iVar2 = (int)*(short *)(param_1 + 0x2e);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x914) = 0x1e0;
      *(undefined4 *)(param_1 + 0x918) = uVar1;
      *(undefined4 *)(param_1 + 0x910) = 0;
      return;
    }
    *(int *)(param_1 + 0x914) = iVar2;
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x918) = uVar4;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x918) = fVar5 / fVar3;
  }
  *(undefined4 *)(param_1 + 0x910) = 0;
  return;
}

