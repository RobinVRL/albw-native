#include "ghidra_types.h"

extern int func_003A42B0(int param_1,int param_2);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int DAT_002e93f0;
extern int DAT_002e93f4;

// USA 002E9358 <- EU 002E9334 (Ghidra, non-matching)
// GLOBAL DAT_002e93f0 int
// GLOBAL DAT_002e93f4 int

undefined4 func_002E9358(int *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0x8cd) != '!') {
    func_004F9554(param_1[0x10c],0,0,1);
    func_004F9554(param_1[0x10d],0,0,1);
    func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
    func_004FAD90((int)param_1);
    iVar1 = DAT_002e93f0;
    param_1[0x167] = param_1[0x167] | 0x87;
    param_1[0x2c4] = 600;
    param_1[0x2c5] = iVar1;
    param_1[0x2c3] = 0;
    func_003A42B0((int)(param_1 + 0x23b),0);
    param_1[0x308] = (int)*(short *)(DAT_002e93f4 + (int)param_1);
    return func_004FC07C((int)param_1,0x24,0xffffffff,0);
  }
  return 0;
}

