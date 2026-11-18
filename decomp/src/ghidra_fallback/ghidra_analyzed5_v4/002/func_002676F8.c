#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern float DAT_002677b8;
extern float DAT_002677bc;
extern float DAT_002677c0;

// USA 002676F8 <- EU 00267720 (Ghidra, non-matching)
// GLOBAL DAT_002677b8 float
// GLOBAL DAT_002677bc float
// GLOBAL DAT_002677c0 float

void func_002676F8(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  iVar1 = func_004D838C((float *)(param_1 + 0xab4),(float *)(param_1 + 0x984),DAT_002677c0,
                        DAT_002677bc,DAT_002677b8);
  *(float **)(param_1 + 0x9d4) = (float *)(param_1 + 0xab4);
  *(undefined1 *)(param_1 + 0xaa0) = 2;
  func_0036BE78(param_1 + 0x9ac);
  if (iVar1 != 0) {
    func_004FC07C(param_1,0x12,0xffffffff,0);
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      func_00660718((undefined4 *)(param_1 + 0x8c8),0xc);
    }
  }
  return;
}

