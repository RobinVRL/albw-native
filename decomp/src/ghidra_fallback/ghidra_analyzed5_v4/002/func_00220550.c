#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern void func_0065E398();
extern float DAT_002205a8;
extern float DAT_002205ac;

// USA 00220550 <- EU 00220550 (Ghidra, non-matching)
// GLOBAL DAT_002205a8 float
// GLOBAL DAT_002205ac float

undefined4 func_00220550(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = DAT_002205ac;
  iVar1 = func_005211F4(param_1,DAT_002205ac,DAT_002205a8);
  if (iVar1 == 0) {
    func_0065E398((undefined4 *)(param_1 + 0x8c0),0xf,fparam_0);
    return 0;
  }
  if (*(char *)(param_1 + 0x8c5) != '\a') {
    return func_004FC07C(param_1,5,0xc,0);
  }
  return func_004FABDC(param_1,5,0xc,0);
}

