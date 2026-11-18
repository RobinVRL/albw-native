#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00521018(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_00656794(undefined4 *param_1,undefined1 param_2);
extern float DAT_001273a0;

// USA 00127308 <- EU 00127308 (Ghidra, non-matching)
// GLOBAL DAT_001273a0 float

void func_00127308(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x8e4) * DAT_001273a0;
  *(float *)(param_1 + 0x8e4) = fVar3;
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),fVar3);
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    func_004FABDC(param_1,0,0xffffffff,0);
  }
  if (*(int *)(param_1 + 0x8bc) == 0x3c) {
    func_00656794((undefined4 *)(param_1 + 0x8bc),0);
  }
  fVar3 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar3);
  bVar1 = func_00521018(param_1);
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x8ed) = 1;
  }
  return;
}

