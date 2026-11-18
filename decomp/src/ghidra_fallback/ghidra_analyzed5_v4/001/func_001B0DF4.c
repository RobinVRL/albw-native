#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int func_004FB134(int param_1);
extern int func_00674418(int *param_1,uint param_2);
extern undefined4 DAT_001b0ec8;
extern float DAT_001b0ecc;
extern int *DAT_001b0ed0;

// USA 001B0DF4 <- EU 001B0DF4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b0ec8 undefined4
// GLOBAL DAT_001b0ecc float
// GLOBAL DAT_001b0ed0 int *

void func_001B0DF4(int *param_1,uint param_2)

{
  int iVar1;
  float in_s0;
  float fVar2;
  
  func_00674418(param_1,param_2);
  if (*(char *)((int)param_1 + 0xa32) != '\0') {
    func_002B1FB4((int)param_1,-1,(ushort)DAT_001b0ec8);
    func_004FB134((int)param_1);
    *(undefined1 *)((int)param_1 + 0xa32) = 0;
    if ((char)param_1[0x28d] == '\0') {
      func_002F8DE4(param_1,0xd,0,0);
    }
    else {
      func_002F8DE4(param_1,0xe,0,0);
    }
    if (param_2 == 0xf) {
      iVar1 = param_1[0x289];
      if (iVar1 == 5) {
        fVar2 = DAT_001b0ecc;
        func_002917A4(*DAT_001b0ed0,param_1 + 0xf4,0,DAT_001b0ecc);
        return;
      }
      if (iVar1 == 8) {
        fVar2 = DAT_001b0ecc;
        func_00291A38(*DAT_001b0ed0,param_1 + 0xf4,DAT_001b0ecc);
        return;
      }
      in_s0 = DAT_001b0ecc;
      if (iVar1 == 0xe) {
        fVar2 = DAT_001b0ecc;
        func_00291FE0(*DAT_001b0ed0,param_1 + 0xf4,DAT_001b0ecc);
        return;
      }
    }
  }
  return;
}

