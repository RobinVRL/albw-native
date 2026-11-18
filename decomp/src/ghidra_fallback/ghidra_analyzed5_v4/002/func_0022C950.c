#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0036C45C(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);

// USA 0022C950 <- EU 0022C950 (Ghidra, non-matching)

void func_0022C950(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  undefined8 uVar5;
  
  if (*(int **)(param_1 + 0xaa8) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0xaa8),param_2,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0xaa8),*(int *)(param_1 + 0x40c),(int *)0x0);
  }
  uVar5 = func_0058AB74(param_1);
  if (((int)uVar5 == 0xb) && (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
    func_004FC07C(param_1,0xc,0xffffffff,0);
  }
  if (*(int *)(param_1 + 0x8fc) < 0x14) {
    fVar4 = (float)VectorSignedToFloat(0x14 - *(int *)(param_1 + 0x8fc),(byte)(in_fpscr >> 0x15) & 3
                                      );
    func_0051D39C((int *)(param_1 + 1000),0,(int)fVar4);
  }
  iVar1 = func_0036C45C(param_1 + 0x968);
  if (*(uint *)(param_1 + 0xa2c) < *(uint *)(param_1 + 0xa30)) {
    uVar3 = *(uint *)(param_1 + 0x59c) | 3;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x59c) & 0xfffffffc;
  }
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = uVar3 | 0x2000;
  }
  *(uint *)(param_1 + 0x59c) = uVar3;
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x59c) = uVar2;
  }
  return;
}

