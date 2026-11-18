#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0036C45C(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern float DAT_0020e95c;
extern float DAT_0020e960;
extern float DAT_0020e964;
extern float DAT_0020e968;
extern float DAT_0020e96c;

// USA 0020E7D0 <- EU 0020E7D0 (Ghidra, non-matching)
// GLOBAL DAT_0020e95c float
// GLOBAL DAT_0020e960 float
// GLOBAL DAT_0020e964 float
// GLOBAL DAT_0020e968 float
// GLOBAL DAT_0020e96c float

void func_0020E7D0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  if (*(int **)(param_1 + 0xd44) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0xd44),param_2,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0xd44),*(int *)(param_1 + 0x40c),(int *)0x0);
  }
  uVar6 = func_0058AB74(param_1);
  if (((int)uVar6 == 0x1f) && (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
    func_004FABDC(param_1,0x20,10,0);
  }
  func_004D80A4(&local_28,*(uint *)(param_1 + 1000),DAT_0020e95c);
  local_24 = DAT_0020e960;
  local_1c = *(float *)(param_1 + 0x3d0) + local_28;
  local_18 = *(float *)(param_1 + 0xd34) + DAT_0020e960;
  local_14 = *(float *)(param_1 + 0x3d8) + local_20;
  func_004D838C((float *)(param_1 + 0xb84),&local_1c,DAT_0020e96c,DAT_0020e968,DAT_0020e964);
  *(undefined4 *)(param_1 + 0xd24) = *(undefined4 *)(param_1 + 0xb84);
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 0xb88);
  *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_1 + 0xb8c);
  *(undefined1 *)(param_1 + 0xb70) = 2;
  *(int *)(param_1 + 0xaa4) = param_1 + 0xd24;
  *(undefined1 *)(param_1 + 0xb72) = 1;
  uVar2 = *(uint *)(param_1 + 0xb4c);
  uVar3 = *(uint *)(param_1 + 0xb50);
  func_0036C45C(param_1 + 0xa7c);
  bVar5 = *(uint *)(param_1 + 0xb40) < *(uint *)(param_1 + 0xb44);
  if (bVar5) {
    uVar4 = *(uint *)(param_1 + 0x59c) | 1;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x59c) = uVar4;
  if (bVar5) {
    uVar4 = uVar4 | 2;
  }
  else {
    uVar4 = uVar4 & 0xfffffffd;
  }
  *(uint *)(param_1 + 0x59c) = uVar4;
  func_004FCDF4(param_1 + 0x5a8,(uint)bVar5);
  if (uVar3 <= uVar2) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x2d);
  }
  return;
}

