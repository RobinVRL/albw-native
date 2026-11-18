// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00521184();
extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern int DAT_001a48e4;
extern float DAT_001a48e8;
extern int DAT_001a48ec;
extern float DAT_001a48f0;

// USA 001A486C <- EU 001A486C (Ghidra, non-matching)
// GLOBAL DAT_001a48e4 int
// GLOBAL DAT_001a48e8 float
// GLOBAL DAT_001a48ec int
// GLOBAL DAT_001a48f0 float

void func_001A486C(int param_1)

{
  int iVar1;
  
  if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x8f0)) < DAT_001a48e4) {
    *(float *)(param_1 + 0x8f0) = *(float *)(param_1 + 0x8f0) + DAT_001a48e8;
  }
  iVar1 = func_00521184(param_1);
  func_0051D2F4((int *)(param_1 + 1000),iVar1,DAT_001a48ec,0x7fffffff,DAT_001a48f0);
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),*(float *)(param_1 + 0x8f0));
  if (0x27 < *(int *)(param_1 + 0x8bc)) {
    func_0065A5B8((undefined4 *)(param_1 + 0x8bc),5);
  }
  return;
}

