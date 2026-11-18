#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern void func_0065E398();
extern float fRam0021fac4;
extern undefined4 DAT_0021fac0;

// USA 0021FA4C <- EU 0021FA4C (Ghidra, non-matching)
// GLOBAL DAT_0021fac0 undefined4
// GLOBAL UNK_0021fac4 float

void func_0021FA4C(int param_1)

{
  undefined4 uVar1;
  float in_s0;
  
  if (*(char *)(param_1 + 0xaff) != '\0') {
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0x15,in_s0);
  }
  uVar1 = DAT_0021fac0;
  if (*(char *)(param_1 + 0x8c5) != '\x17') {
    *(undefined4 *)(param_1 + 0xa6c) = 0x32;
    *(undefined4 *)(param_1 + 0xa70) = uVar1;
    *(undefined4 *)(param_1 + 0xa68) = 0;
    func_004FABDC(param_1,0,0,0);
    func_004FB4E0(param_1,fRam0021fac4);
    *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 0xa10);
  }
  return;
}

