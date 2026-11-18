#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_0058AC38(int param_1);
extern float fRam002bd1e8;
extern int iRam002bd1e4;

// USA 002BD17C <- EU 002BD158 (Ghidra, non-matching)
// GLOBAL UNK_002bd1e4 int
// GLOBAL UNK_002bd1e8 float

void func_002BD17C(int *param_1)

{
  uint in_fpscr;
  float fVar1;
  int iVar2;
  int iVar3;
  
  func_004F88A0(param_1,(undefined2 *)param_1[0x247]);
  *(undefined1 *)(param_1 + 599) = 1;
  func_004FABDC((int)param_1,5,0xffffffff,0);
  iVar3 = iRam002bd1e4;
  param_1[0xf7] = iRam002bd1e4;
  param_1[0xf8] = iVar3;
  param_1[0xf9] = iVar3;
  fVar1 = func_0058AC38(param_1);
  iVar2 = (int)fVar1;
  param_1[0x250] = iVar2;
  if (iVar2 == 0) {
    param_1[0x251] = iVar3;
  }
  else {
    fVar1 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x251] = (int)ALBW_AS_U32((fRam002bd1e8 / fVar1));
  }
  param_1[0x24f] = 0;
  return;
}

