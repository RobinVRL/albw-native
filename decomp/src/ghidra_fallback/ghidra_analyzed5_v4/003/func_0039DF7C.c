#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_0039e0c8;
extern float DAT_0039e0cc;
extern int *DAT_0039e0d0;
extern undefined4 DAT_0039e0d4;

// USA 0039DF7C <- EU 0039DF58 (Ghidra, non-matching)
// GLOBAL DAT_0039e0c8 int *
// GLOBAL DAT_0039e0cc float
// GLOBAL DAT_0039e0d0 int *
// GLOBAL DAT_0039e0d4 undefined4

undefined4 func_0039DF7C(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_10 (*(float *)(albw_frame + 0x20))
  uVar2 = (uint)*(byte *)(param_1 + 0x410);
  bVar4 = uVar2 == 1;
  if (bVar4) {
    uVar2 = *(uint *)(param_1 + 0x4a0);
  }
  if ((bVar4 && uVar2 == 2) &&
     (iVar3 = func_0052FBA0(*DAT_0039e0c8 + 0x3dbbc,*(uint *)(param_1 + 0x50)), iVar3 != 0)) {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar3 + 0x40c) + 0x24) + 0x14) +
            *(int *)(iVar3 + 0xb80) * 0x30;
    local_28 = *(float *)(iVar3 + 8);
    local_24 = *(undefined4 *)(iVar3 + 0x18);
    local_20 = *(undefined4 *)(iVar3 + 0x28);
    local_18 = *(float *)(iVar3 + 0xc);
    local_14 = *(undefined4 *)(iVar3 + 0x1c);
    local_10 = *(float *)(iVar3 + 0x2c);
    iVar3 = func_0068C690(&local_28);
    func_0068A3EC(&local_28,DAT_0039e0cc);
    func_00115C54(&local_18,&local_18,&local_28);
    local_1c = iVar3 - (*(int *)(param_1 + 1000) + *DAT_0039e0d0 * 10);
    uVar2 = func_0058E2B8(&local_1c);
    iVar3 = func_0058E2B8(DAT_0039e0d0);
    if ((uVar2 < (uint)(iVar3 << 1)) &&
       (local_18 = *(float *)(param_1 + 0x3d0) - local_18,
       local_10 = *(float *)(param_1 + 0x3d8) - local_10,
       (int)ALBW_AS_U32((local_18 * local_18 + local_10 * local_10)) < 0x3e800000)) {
      *(float *)(param_1 + 0x454) = *(float *)(param_1 + 0x3d0);
      uVar1 = DAT_0039e0d4;
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x3d4);
      *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x3d8);
      *(undefined4 *)(param_1 + 0x4f4) = 10;
      *(undefined4 *)(param_1 + 0x4f8) = uVar1;
      *(undefined4 *)(param_1 + 0x4a0) = 3;
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      return 1;
    }
  }
  return 0;
}

