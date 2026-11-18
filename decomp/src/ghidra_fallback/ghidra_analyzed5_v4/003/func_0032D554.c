#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036C45C(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int DAT_0032d604;
extern float DAT_0032d608;
extern float *DAT_0032d60c;

// USA 0032D554 <- EU 0032D530 (Ghidra, non-matching)
// GLOBAL DAT_0032d604 int
// GLOBAL DAT_0032d608 float
// GLOBAL DAT_0032d60c float *

void func_0032D554(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  func_0051D2F4((int *)(param_1 + 1000),0,DAT_0032d604,0x7fffffff,DAT_0032d608);
  uVar4 = func_0058AB74(param_1);
  if (((int)uVar4 == 6) && (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
    func_004FC07C(param_1,7,8,0);
  }
  func_00115C54((float *)(param_1 + 0xc24),(float *)(param_1 + 0x3d0),DAT_0032d60c);
  iVar1 = func_0036C45C(param_1 + 0xaa0);
  bVar3 = *(uint *)(param_1 + 0xb64) < *(uint *)(param_1 + 0xb68);
  if (bVar3) {
    uVar2 = *(uint *)(param_1 + 0x59c) | 1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  if (bVar3) {
    uVar2 = uVar2 | 2;
  }
  else {
    uVar2 = uVar2 & 0xfffffffd;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  func_004FCDF4(param_1 + 0x5a8,(uint)bVar3);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x2000;
  }
  return;
}

