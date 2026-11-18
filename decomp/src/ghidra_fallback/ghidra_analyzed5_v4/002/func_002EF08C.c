#include "ghidra_types.h"

extern int func_003A42B0(int param_1,int param_2);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int DAT_002ef134;

// USA 002EF08C <- EU 002EF068 (Ghidra, non-matching)
// GLOBAL DAT_002ef134 int

void func_002EF08C(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  if (*(char *)((int)param_1 + 0x8cd) != '!') {
    func_004F9554(param_1[0x10c],0,0,1);
    func_004F9554(param_1[0x10d],0,0,1);
    func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
    func_004FAD90((int)param_1);
    iVar1 = DAT_002ef134;
    param_1[0x167] = param_1[0x167] | 0x87;
    param_1[0x2c4] = 600;
    param_1[0x2c5] = iVar1;
    param_1[0x2c3] = 0;
    func_003A42B0((int)(param_1 + 0x23b),0);
    param_1[0x308] = (int)(short)param_1[0x142];
    func_004FC07C((int)param_1,0x28,0xffffffff,0);
    uVar2 = 2;
    if ((short)param_1[0x142] < 1) {
      uVar2 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x859) = uVar2;
  }
  return;
}

