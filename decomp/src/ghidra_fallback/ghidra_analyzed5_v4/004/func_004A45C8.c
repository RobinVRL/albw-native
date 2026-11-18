#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_004a4704;
extern float DAT_004a4708;
extern float DAT_004a470c;
extern int *DAT_004a4710;
extern int DAT_004a4714;
extern int *DAT_004a4718;

// USA 004A45C8 <- EU 004A45A0 (Ghidra, non-matching)
// GLOBAL DAT_004a4704 int
// GLOBAL DAT_004a4708 float
// GLOBAL DAT_004a470c float
// GLOBAL DAT_004a4710 int *
// GLOBAL DAT_004a4714 int
// GLOBAL DAT_004a4718 int *

void func_004A45C8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_r3;
  uint uVar4;
  uint in_fpscr;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(int *)(albw_frame + 0x4))
  #define local_60 ((int *)(albw_frame + 0x10))
  uVar4 = param_2 + 1;
  iVar1 = (int)((ulonglong)((longlong)DAT_004a4704 * (longlong)(int)uVar4) >> 0x20);
  iVar1 = (iVar1 >> 2) - (iVar1 >> 0x1f);
  fparam_0_00 = (float)VectorSignedToFloat(9 - iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fparam_0 = (float)VectorSignedToFloat(9 - (uVar4 + iVar1 * -10),(byte)(in_fpscr >> 0x15) & 3);
  func_002316CC(param_1 + 0x5c,fparam_0);
  if ((int)uVar4 < 10) {
    func_002316CC(param_1 + 0x74,DAT_004a4708);
  }
  else {
    func_002316CC(param_1 + 0x68,fparam_0_00);
    func_002316CC(param_1 + 0x74,DAT_004a470c);
  }
  piVar3 = DAT_004a4710;
  if (*(int *)(param_1 + 0x80) != 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[3] = 0xffffffff;
    local_60[2] = 0;
    (**(code **)(*DAT_004a4710 + 8))(DAT_004a4710);
    piVar2 = func_006896BC(local_60 + 4,piVar3[1],uVar4,in_r3);
    (**(code **)(*piVar2 + 8))(piVar2);
    local_6c = piVar2[1];
    local_70 = DAT_004a4714;
    func_005826A4(*DAT_004a4718,local_60,piVar3 + -2,&local_70);
    if (local_60[0] != 0) {
      func_001788DC(param_3,local_60);
      piVar3 = *(int **)(param_1 + 0x80);
      *(undefined2 *)(param_3 + 0x32) = 0;
      *(undefined1 *)(param_3 + 0x3d) = 0;
      (**(code **)(*piVar3 + 0x60))
                (piVar3,*(undefined4 *)(param_3 + 8),0,*(ushort *)(param_3 + 0x20) >> 1);
    }
  }
  return;
}

