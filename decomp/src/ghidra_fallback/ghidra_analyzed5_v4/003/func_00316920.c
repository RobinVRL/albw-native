#include "ghidra_types.h"

extern int func_0014F510(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);

// USA 00316920 <- EU 003168FC (Ghidra, non-matching)

void func_00316920(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  func_0014F510(param_1,*(undefined4 *)(param_1 + 0x430),param_1 + 0x464,0x1800,0,0);
  local_14 = *(undefined4 *)(param_1 + 1000);
  local_18 = 0;
  uStack_10 = 0;
  func_0049216C((float *)(param_1 + 0x48c),&local_18,(float *)(param_1 + 0x3d0));
  return;
}

