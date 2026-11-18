#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004917C0(float *param_1,float *param_2,uint *param_3,float *param_4);
extern int func_004CEAF0(int param_1);
extern float *DAT_00246a28;
extern float DAT_00246a2c;
extern int *DAT_00246a30;

// USA 00246918 <- EU 00246918 (Ghidra, non-matching)
// GLOBAL DAT_00246a28 float *
// GLOBAL DAT_00246a2c float
// GLOBAL DAT_00246a30 int *

undefined4 func_00246918(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x428) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar2;
  if (*(int *)(param_1 + 0x424) != 0) {
    fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x424),1,fVar4);
  }
  fVar4 = DAT_00246a2c;
  iVar2 = *(int *)(param_1 + 0x410);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_00115D70(&local_28,DAT_00246a28,fVar4);
  local_40 = local_28;
  uStack_3c = uStack_24;
  uStack_38 = uStack_20;
  local_34 = *(int *)(param_1 + 0x43c) + *DAT_00246a30;
  iStack_30 = *(int *)(param_1 + 0x440) + DAT_00246a30[1];
  local_2c = *(int *)(param_1 + 0x444) + DAT_00246a30[2];
  func_004917C0((float *)(iVar2 + 0x80),&local_40,&local_34,(float *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x410));
}

