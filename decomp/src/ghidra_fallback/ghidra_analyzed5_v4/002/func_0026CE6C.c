#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004F500C();
extern int func_006609A0(undefined4 *param_1,undefined1 param_2);
extern int iRam0026cf04;
extern int *piRam0026cf00;
extern int *piRam0026cf08;

// USA 0026CE6C <- EU 0026CE94 (Ghidra, non-matching)
// GLOBAL UNK_0026cf00 int *
// GLOBAL UNK_0026cf04 int
// GLOBAL UNK_0026cf08 int *

void func_0026CE6C(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  short sVar1;
  uint uVar2;
  
  func_004F500C(param_1,param_2,param_3,param_4);
  sVar1 = *(short *)((int)param_1 + 0x2e);
  if ((0 < sVar1) &&
     (uVar2 = func_00111A64((uint *)(*piRam0026cf00 + 0x660)),
     (int)((ulonglong)uVar2 * 100 >> 0x20) < (int)sVar1)) {
    func_001D6FD0(param_1 + 0xf4,(uint)*(byte *)(iRam0026cf04 + (uint)*(byte *)(param_1 + 0x24b)),10
                  ,piRam0026cf08,-1);
    func_006609A0(param_1 + 0x23c,0xc);
  }
  return;
}

