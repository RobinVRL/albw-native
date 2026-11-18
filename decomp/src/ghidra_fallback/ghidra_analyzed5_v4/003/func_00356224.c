#include "ghidra_types.h"

extern int func_002917D4(int param_1,undefined4 param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int *DAT_0035628c;
extern int DAT_00356290;
extern float DAT_00356294;

// USA 00356224 <- EU 00356200 (Ghidra, non-matching)
// GLOBAL DAT_0035628c int *
// GLOBAL DAT_00356290 int
// GLOBAL DAT_00356294 float

undefined4 func_00356224(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0xa60) == '\b') && (*(short *)(DAT_00356290 + param_1) == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((*(int *)(param_1 + 0x3a0) == *(int *)(param_1 + 0x8c0)) && (param_2 != 0)) && (!bVar1)) {
    return func_004FABDC(param_1,10,0xffffffff,0);
  }
  if (*(char *)(param_3 + 0x24) != '\x05') {
    return 0;
  }
  return func_002917D4(*DAT_0035628c,0,DAT_00356294);
}

