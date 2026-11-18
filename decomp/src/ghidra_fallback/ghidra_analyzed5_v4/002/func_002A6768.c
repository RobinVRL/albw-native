#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036C408(undefined4 param_1,undefined4 param_2);
extern int func_0036C45C(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float *DAT_002a6864;
extern undefined4 *DAT_002a6868;

// USA 002A6768 <- EU 002A6744 (Ghidra, non-matching)
// GLOBAL DAT_002a6864 float *
// GLOBAL DAT_002a6868 undefined4 *

undefined4 func_002A6768(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  undefined8 uVar5;
  
  func_004FACD4(param_1,(int *)0x0,param_3,param_4);
  func_00115C54((float *)(param_1 + 0xa84),(float *)(param_1 + 0x3d0),DAT_002a6864);
  uVar5 = func_0058AB74(param_1);
  if (((int)uVar5 == 0x1c) && (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
    func_004FABDC(param_1,0x1d,0xffffffff,0);
  }
  if (*(int *)(param_1 + 0x9e0) < 0x5a) {
    fVar4 = (float)VectorSignedToFloat(0x5a - *(int *)(param_1 + 0x9e0),(byte)(in_fpscr >> 0x15) & 3
                                      );
    func_0051D39C((int *)(param_1 + 1000),0,(int)fVar4);
  }
  iVar1 = func_0036C45C(param_1 + 0x8d4);
  bVar3 = *(uint *)(param_1 + 0x99c) <= *(uint *)(param_1 + 0x998);
  if (bVar3) {
    uVar2 = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x59c) | 1;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  if (bVar3) {
    uVar2 = uVar2 & 0xfffffffd;
  }
  else {
    uVar2 = uVar2 | 2;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  if (bVar3) {
    func_004FCDF4(param_1 + 0x5a8,0);
    *(undefined1 *)(param_1 + 0xb9c) = 1;
  }
  else {
    func_004FCDF4(param_1 + 0x5a8,1);
  }
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x2000;
  return func_0036C408(param_1 + 0x8d4,*DAT_002a6868);
}

