#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FBFBC(int param_1,int param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int DAT_002f184c;
extern int DAT_002f1850;
extern int DAT_002f1854;

// USA 002F176C <- EU 002F1748 (Ghidra, non-matching)
// GLOBAL DAT_002f184c int
// GLOBAL DAT_002f1850 int
// GLOBAL DAT_002f1854 int

void func_002F176C(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  func_004F9554(param_1[0x10c],7,0,1);
  func_004F9554(param_1[0x10d],7,0,1);
  func_004F88A0(param_1,(undefined2 *)param_1[699]);
  func_004FAD90((int)param_1);
  param_1[0x167] = param_1[0x167] | 0x87;
  func_004FC07C((int)param_1,0x18,0xffffffff,0);
  func_004FBFBC((int)param_1,2,0);
  iVar2 = DAT_002f184c;
  param_1[0x167] = param_1[0x167] | 0x200;
  iVar3 = DAT_002f1850;
  cVar1 = *(char *)((int)param_1 + 0x8cd);
  if (cVar1 == '\x01') {
    param_1[0x2c4] = 0x3c;
  }
  else {
    if (cVar1 == '\n' || cVar1 == ' ') {
      param_1[0x354] = iVar2;
      param_1[0x302] = iVar2;
    }
    iVar3 = DAT_002f1854;
    param_1[0x2c4] = 0x1e;
  }
  param_1[0x2c5] = iVar3;
  param_1[0x2c3] = 0;
  param_1[0x2e6] = iVar2;
  param_1[0xf7] = iVar2;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar2;
  return;
}

