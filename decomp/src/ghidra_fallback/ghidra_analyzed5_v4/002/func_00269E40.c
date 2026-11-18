#include "ghidra_types.h"

extern int func_0036C45C(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern float DAT_00269f28;
extern float DAT_00269f2c;
extern float DAT_00269f30;

// USA 00269E40 <- EU 00269E68 (Ghidra, non-matching)
// GLOBAL DAT_00269f28 float
// GLOBAL DAT_00269f2c float
// GLOBAL DAT_00269f30 float

void func_00269E40(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_004FC07C(param_1,8,0xffffffff,0);
  }
  func_004D838C((float *)(param_1 + 0xab4),(float *)(param_1 + 0x984),DAT_00269f30,DAT_00269f2c,
                DAT_00269f28);
  *(float **)(param_1 + 0x9d4) = (float *)(param_1 + 0xab4);
  *(undefined1 *)(param_1 + 0xaa0) = 2;
  iVar1 = func_0036C45C(param_1 + 0x9ac);
  bVar3 = *(uint *)(param_1 + 0xa70) < *(uint *)(param_1 + 0xa74);
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

