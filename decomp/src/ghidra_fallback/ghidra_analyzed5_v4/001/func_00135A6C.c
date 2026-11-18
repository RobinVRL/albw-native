#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0034CA24(undefined4 *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float *DAT_00135b9c;

// USA 00135A6C <- EU 00135A6C (Ghidra, non-matching)
// GLOBAL DAT_00135b9c float *

undefined4 func_00135A6C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x30]; /* entry_sp - 0x30 .. entry_sp + 0x0 */
#define stack0xffffffd8 (*(undefined4 *)(albw_frame + 0x8))
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 extraout_r1_01;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  #define local_1c ((float *)(albw_frame + 0x14))
  piVar6 = (int *)(*(char *)(param_1 + 0x4bc) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4d4) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x4d4) + *(char *)(param_1 + 0x4bc) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x4cc) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x4cc)) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x4c8);
  iVar2 = *(int *)(param_1 + 0x4b8) + 1;
  *(int *)(param_1 + 0x4b8) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x4f0),uVar4,iVar5,piVar6);
  func_00169A80(*(int **)(param_1 + 0x4f4),extraout_r1_01,iVar5,piVar6);
  func_00168E9C(*(int **)(param_1 + 0x4f0),*(int *)(param_1 + 0x4ec),(int *)0x1);
  func_00168E9C(*(int **)(param_1 + 0x4f4),*(int *)(param_1 + 0x4ec),(int *)0x1);
  func_00115C54(local_1c,(float *)(param_1 + 0x3d0),DAT_00135b9c);
  iVar2 = *(int *)(param_1 + 0x4ec);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),(float *)&stack0xffffffd8);
  func_004CEAF0(*(int *)(param_1 + 0x4ec));
  func_0034CA24((undefined4 *)(param_1 + 0x40c));
  return func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x464),param_1 + 0x454,0x1f00,0,0);
}

