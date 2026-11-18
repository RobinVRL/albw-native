#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FB0D8(int param_1,float *param_2);
extern undefined4 DAT_0032f69c;
extern float DAT_0032f6a0;
extern int DAT_0032f6a4;

// USA 0032F620 <- EU 0032F5FC (Ghidra, non-matching)
// GLOBAL DAT_0032f69c undefined4
// GLOBAL DAT_0032f6a0 float
// GLOBAL DAT_0032f6a4 int

undefined4 func_0032F620(int param_1)

{
  int iVar1;
  float fparam_0;
  undefined4 uVar2;
  
  if (*(uint *)(param_1 + 0x938) <= *(uint *)(param_1 + 0x934)) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x1000;
    return 0;
  }
  *(uint *)(param_1 + 0x934) = *(uint *)(param_1 + 0x934) + 1;
  *(undefined4 *)(param_1 + 0x91c) = DAT_0032f69c;
  uVar2 = *(undefined4 *)(param_1 + 0x3e0);
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),DAT_0032f6a0);
  iVar1 = DAT_0032f6a4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x928) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(iVar1 + 0xc);
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  return func_004FB0D8(param_1,(float *)(param_1 + 0x3e0));
}

