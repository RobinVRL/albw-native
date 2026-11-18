#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FC178();
extern int func_004FC570();
extern int func_0058A8F0(int param_1);
extern int func_0066B1B4(undefined4 *param_1,undefined1 param_2);

// USA 00501010 <- EU 00500FE8 (Ghidra, non-matching)

void func_00501010(int *param_1)

{
  uint uVar1;
  int iVar2;
  float fparam_0;
  
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fparam_0);
  if (param_1[0x22f] < 0x14) {
    uVar1 = param_1[0x168] | 0x8000000;
  }
  else {
    uVar1 = param_1[0x168] & 0xf7ffffff;
  }
  param_1[0x168] = uVar1;
  iVar2 = func_0058A8F0((int)param_1);
  if (iVar2 != 0) {
    param_1[0x167] = param_1[0x167] | 4;
    func_004FC178((int)param_1);
    param_1[0x110] = (int)(param_1 + 0x149);
    func_004FC570(param_1);
    param_1[0x168] = param_1[0x168] & 0xf7ffffff;
    func_0066B1B4(param_1 + 0x22f,2);
  }
  return;
}

