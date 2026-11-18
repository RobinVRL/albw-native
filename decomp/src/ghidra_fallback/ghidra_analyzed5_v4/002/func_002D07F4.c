#include "ghidra_types.h"

extern int func_001512E8(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00521380(int param_1);
extern uint *DAT_002d0938;
extern float DAT_002d093c;
extern int DAT_002d0940;

// USA 002D07F4 <- EU 002D07D0 (Ghidra, non-matching)
// GLOBAL DAT_002d0938 uint *
// GLOBAL DAT_002d093c float
// GLOBAL DAT_002d0940 int

undefined4 func_002D07F4(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  code *pcVar4;
  uint in_fpscr;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x43c) + *(char *)(param_1 + 0x424) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x434) + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x434)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x420) + 1;
  *(int *)(param_1 + 0x420) = iVar2;
  if (*(int *)(param_1 + 0x430) != 0) {
    fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x430),1,fVar5);
  }
  if ((*(char *)(*(int *)(param_1 + 0x444) + 0x30) != '\0') ||
     (*(char *)(param_1 + 0x424) == '\x03')) {
    local_18 = *(float *)(param_1 + 0x3d0);
    fStack_14 = *(float *)(param_1 + 0x3d4);
    pfVar3 = (float *)(DAT_002d0940 + (*DAT_002d0938 >> 0x18) * 0x10);
    fVar5 = (float)VectorUnsignedToFloat(*DAT_002d0938 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_10 = *(float *)(param_1 + 0x3d8) -
               (fStack_14 - *(float *)(param_1 + 0xc)) *
               (*pfVar3 + pfVar3[1] * fVar5 * DAT_002d093c);
    iVar2 = *(int *)(param_1 + 0x444);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&local_18);
    func_004CEAF0(*(int *)(param_1 + 0x444));
    iVar2 = *(int *)(param_1 + 0x448);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
    func_004356B4(*(int **)(param_1 + 0x448));
  }
  iVar2 = func_00521380(*(int *)(param_1 + 0x44c));
  if (iVar2 != 0) {
    return func_001512E8(*(int **)(param_1 + 0x44c));
  }
  return 0;
}

