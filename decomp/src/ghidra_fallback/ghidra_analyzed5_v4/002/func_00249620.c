#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 00249620 <- EU 00249620 (Ghidra, non-matching)

undefined4 func_00249620(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar6 = (int *)(*(char *)(param_1 + 0x48c) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4a4) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x4a4) + *(char *)(param_1 + 0x48c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x49c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x49c)) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x498);
  iVar2 = *(int *)(param_1 + 0x488) + 1;
  *(int *)(param_1 + 0x488) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x47c),uVar4,iVar5,piVar6);
  piVar6 = (int *)(param_1 + 0x478);
  func_00168E9C(*(int **)(param_1 + 0x47c),*(int *)(param_1 + 0x478),(int *)0x0);
  fStack_18 = *(float *)(param_1 + 0x3d0);
  uStack_14 = *(undefined4 *)(param_1 + 0x3d4);
  iVar2 = *piVar6;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&fStack_18);
  iVar2 = *piVar6;
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x4b4);
  return func_004CEAF0(*piVar6);
}

