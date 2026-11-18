// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00521184();
extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern int DAT_001a4be0;
extern float DAT_001a4be4;
extern int DAT_001a4be8;
extern float DAT_001a4bec;

// USA 001A4B68 <- EU 001A4B68 (Ghidra, non-matching)
// GLOBAL DAT_001a4be0 int
// GLOBAL DAT_001a4be4 float
// GLOBAL DAT_001a4be8 int
// GLOBAL DAT_001a4bec float

void func_001A4B68(int param_1)

{
  int iVar1;
  
  if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x8f0)) < DAT_001a4be0) {
    *(float *)(param_1 + 0x8f0) = *(float *)(param_1 + 0x8f0) + DAT_001a4be4;
  }
  iVar1 = func_00521184(param_1);
  func_0051D2F4((int *)(param_1 + 1000),iVar1,DAT_001a4be8,0x7fffffff,DAT_001a4bec);
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x8f0));
  if (0x3b < *(int *)(param_1 + 0x8bc)) {
    func_0065A5B8((undefined4 *)(param_1 + 0x8bc),4);
  }
  return;
}

