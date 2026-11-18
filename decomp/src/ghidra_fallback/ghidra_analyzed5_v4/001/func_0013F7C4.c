#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_0013f9b8;
extern int DAT_0013f9bc;

// USA 0013F7C4 <- EU 0013F7C4 (Ghidra, non-matching)
// GLOBAL DAT_0013f9b8 float
// GLOBAL DAT_0013f9bc int

void func_0013F7C4(int param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  fVar3 = *(float *)(param_1 + 0x4bc);
  if (fVar3 <= DAT_0013f9b8) {
    fVar3 = -fVar3;
  }
  if ((DAT_0013f9bc < (int)ALBW_AS_U32(fVar3)) ||
     ((int)ALBW_AS_U32((*(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x4d4))) < 0x3f000000)) {
    if (*(char *)(param_1 + 0x520) != '\0') {
      local_2c = *(float *)(param_1 + 0x4a8);
      uStack_24 = *(undefined4 *)(param_1 + 0x4b0);
      local_28 = DAT_0013f9b8;
      fVar3 = DAT_0013f9b8;
      func_00115DC8(&local_2c);
      uVar1 = func_0068C690(&local_2c);
      local_44 = *(float *)(param_1 + 0x3dc);
      local_40 = *(undefined4 *)(param_1 + 0x3e0);
      local_3c = *(float *)(param_1 + 0x3e4);
      local_30 = func_0068C690(&local_44);
      local_30 = local_30 - uVar1;
      uVar2 = func_0058E2B8(&local_30);
      if (0x3fffffff < uVar2) {
        func_004D7F70(&local_44,-uVar1);
        if ((*(char *)(param_1 + 0x51c) == '\0') || (*(uint *)(param_1 + 0x504) < 2)) {
          fVar3 = -(local_3c * *(float *)(*(int *)(param_1 + 0x42c) + 0x20));
        }
        local_3c = fVar3;
        func_004D7F70(&local_44,uVar1);
        *(float *)(param_1 + 0x3dc) = local_44;
        *(int *)(param_1 + 0x3e0) = local_40;
        *(float *)(param_1 + 0x3e4) = local_3c;
        *(int *)(param_1 + 0x504) = *(int *)(param_1 + 0x504) + 1;
        return;
      }
    }
  }
  else {
    local_48 = *(float *)(param_1 + 0x3dc);
    local_44 = *(float *)(param_1 + 0x3e0);
    local_40 = *(int *)(param_1 + 0x3e4);
    func_004D7F70(&local_48,-*(int *)(param_1 + 0x4e8));
    local_48 = -local_48;
    local_34 = local_44;
    local_30 = local_40;
    local_38 = local_48;
    func_004D7F70(&local_48,*(uint *)(param_1 + 0x4e8));
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_48);
    local_38 = local_38 * *(float *)(*(int *)(param_1 + 0x42c) + 0x20);
    func_004D7F70(&local_38,*(uint *)(param_1 + 0x4e8));
    *(float *)(param_1 + 0x3dc) = local_38;
    *(float *)(param_1 + 0x3e0) = local_34;
    *(int *)(param_1 + 0x3e4) = local_30;
  }
  return;
}

