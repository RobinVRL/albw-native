#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float fRam002bc99c;
extern int iRam002bc9a0;

// USA 002BC930 <- EU 002BC90C (Ghidra, non-matching)
// GLOBAL UNK_002bc99c float
// GLOBAL UNK_002bc9a0 int

void func_002BC930(int *param_1)

{
  int iVar1;
  float fVar2;
  
  func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
  *(undefined1 *)(param_1 + 599) = 0;
  param_1[0x167] = param_1[0x167] & 0xfffffc70;
  func_004FABDC((int)param_1,0,0,0);
  fVar2 = fRam002bc99c;
  func_004FB4E0((int)param_1,fRam002bc99c);
  param_1[0xf7] = (int)ALBW_AS_U32(fVar2);
  param_1[0xf8] = (int)ALBW_AS_U32(fVar2);
  param_1[0xf9] = (int)ALBW_AS_U32(fVar2);
  iVar1 = iRam002bc9a0;
  param_1[0x250] = 0x78;
  param_1[0x251] = iVar1;
  param_1[0x24f] = 0;
  return;
}

