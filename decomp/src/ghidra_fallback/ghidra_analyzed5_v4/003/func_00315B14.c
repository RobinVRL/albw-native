#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00315878(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float DAT_00315c24;
extern float DAT_00315c28;

// USA 00315B14 <- EU 00315AF0 (Ghidra, non-matching)
// GLOBAL DAT_00315c24 float
// GLOBAL DAT_00315c28 float

undefined4 func_00315B14(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x24))
  fVar4 = DAT_00315c24;
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) - *(int *)(param_1 + 0x484);
  local_38 = fVar4;
  local_34 = fVar4;
  func_00115154(&local_34,&local_38,*(uint *)(param_1 + 1000));
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x478) * local_34;
  *(float *)(param_1 + 0x3e0) = fVar4;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x478) * local_38;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  local_30 = local_34 * DAT_00315c28;
  local_28 = local_38 * DAT_00315c28;
  local_2c = fVar4;
  func_00115C70(&local_24,(float *)(param_1 + 0x3d0),&local_30);
  *(float *)(param_1 + 0x368) = local_24;
  *(undefined4 *)(param_1 + 0x36c) = uStack_20;
  *(undefined4 *)(param_1 + 0x370) = uStack_1c;
  piVar3 = (int *)(*(int *)(param_1 + 0x470) + *(char *)(param_1 + 0x458) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x470) + *(char *)(param_1 + 0x458) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x468) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x454) + 1;
  *(int *)(param_1 + 0x454) = iVar2;
  if (*(int *)(param_1 + 0x464) != 0) {
    fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x464),1,fVar4);
  }
  return func_00315878(param_1);
}

