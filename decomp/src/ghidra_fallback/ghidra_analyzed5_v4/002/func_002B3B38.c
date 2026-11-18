#include "ghidra_types.h"

extern int func_0014EE44(int param_1,int param_2,undefined2 *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBFBC(int param_1,int param_2,int param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0058A6B0(int *param_1,int param_2);
extern float fRam002b3b90;

// USA 002B3B38 <- EU 002B3B14 (Ghidra, non-matching)
// GLOBAL UNK_002b3b90 float

undefined4 func_002B3B38(int param_1)

{
  undefined2 *puVar1;
  float fVar2;
  
  func_004FABDC(param_1,2,0xffffffff,0);
  func_004FBFBC(param_1,0,0);
  fVar2 = fRam002b3b90;
  func_004FB4C4(param_1,fRam002b3b90);
  if (*(int *)(param_1 + 0x958) != 0) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x958) + 0x14) + 0x10) = fVar2;
  }
  *(undefined1 *)(param_1 + 0x985) = 0;
  puVar1 = (undefined2 *)func_0054DDF4(param_1,1);
  if ((*(uint *)(param_1 + 0x5a0) & 0x20000) != 0) {
    func_0014EE44(param_1,*(int *)(param_1 + 0x420),puVar1);
    if (*(int *)(param_1 + 0x428) != 0) {
      func_0014EE44(param_1,*(int *)(param_1 + 0x428),puVar1);
    }
    func_004FAD90(param_1);
    return 0;
  }
  func_0014EE44(param_1,*(int *)(param_1 + 0x420),puVar1);
  func_0058A6B0((int *)param_1,*(int *)(param_1 + 0x420));
  if (*(int *)(param_1 + 0x428) != 0) {
    func_0014EE44(param_1,*(int *)(param_1 + 0x428),puVar1);
    return func_0058A6B0((int *)param_1,*(int *)(param_1 + 0x428));
  }
  return 0;
}

