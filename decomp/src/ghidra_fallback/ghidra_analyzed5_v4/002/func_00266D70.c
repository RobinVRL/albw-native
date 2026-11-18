#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern float DAT_00266e80;
extern float DAT_00266e84;
extern float DAT_00266e88;

// USA 00266D70 <- EU 00266D98 (Ghidra, non-matching)
// GLOBAL DAT_00266e80 float
// GLOBAL DAT_00266e84 float
// GLOBAL DAT_00266e88 float

void func_00266D70(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  float fparam_0;
  
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  iVar1 = func_004D838C((float *)(param_1 + 0xab4),(float *)(param_1 + 0x984),DAT_00266e88,
                        DAT_00266e84,DAT_00266e80);
  *(float **)(param_1 + 0x9d4) = (float *)(param_1 + 0xab4);
  *(undefined1 *)(param_1 + 0xaa0) = 2;
  func_0036BE78(param_1 + 0x9ac);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0xaec) == '\0') {
      func_004FC07C(param_1,0x15,0xffffffff,0);
    }
    uVar2 = func_0058A8F0(param_1);
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0xaec);
    }
    if (!bVar3 || uVar2 != 0) {
      *(undefined1 *)(param_1 + 0xaec) = 1;
      func_004FC07C(param_1,0x16,0xffffffff,0);
      if (*(uint *)(param_1 + 0xad4) < *(uint *)(param_1 + 0xad8)) {
        *(uint *)(param_1 + 0xad4) = *(uint *)(param_1 + 0xad4) + 1;
      }
      else {
        func_00660718((undefined4 *)(param_1 + 0x8c8),10);
      }
    }
  }
  return;
}

