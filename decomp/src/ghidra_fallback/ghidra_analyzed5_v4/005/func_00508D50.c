#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern float DAT_00508f28;
extern float DAT_00508f2c;
extern int DAT_00508f30;

// USA 00508D50 <- EU 00508D28 (Ghidra, non-matching)
// GLOBAL DAT_00508f28 float
// GLOBAL DAT_00508f2c float
// GLOBAL DAT_00508f30 int

undefined4 func_00508D50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  float fVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(float *)(albw_frame + 0x0))
  #define local_9c (*(float *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(undefined4 *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x50))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(float *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define local_34 (*(float *)(albw_frame + 0x6c))
  #define local_30 (*(float *)(albw_frame + 0x70))
  #define local_2c (*(float *)(albw_frame + 0x74))
  #define fStack_28 (*(float *)(albw_frame + 0x78))
  func_00115C70(&local_3c,(float *)(param_2 + 0x10),(float *)(param_1 + 0x3d0));
  func_00115C70(&local_30,(float *)(param_1 + 0x450),(float *)(param_1 + 0x3d0));
  fparam_0 = DAT_00508f28;
  if (local_3c * local_3c + local_38 * local_38 + local_34 * local_34 <
      local_30 * local_30 + local_2c * local_2c + fStack_28 * fStack_28) {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x454) = uVar1;
    *(undefined4 *)(param_1 + 0x458) = uVar2;
    pfVar3 = (float *)(param_2 + 4);
    if ((*(int *)(param_1 + 0x4f8) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x4f8) + 0x1c) == *(int *)(param_1 + 0x4fc))) {
      local_a0 = DAT_00508f2c;
      local_9c = DAT_00508f2c;
      local_98 = fparam_0;
      fVar4 = *pfVar3 * DAT_00508f2c + *(float *)(param_2 + 8) * DAT_00508f2c +
              *(float *)(param_2 + 0xc) * fparam_0;
      if (fVar4 <= DAT_00508f2c) {
        fVar4 = -fVar4;
      }
      if (DAT_00508f30 < (int)ALBW_AS_U32(fVar4)) {
        local_a0 = fparam_0;
        local_98 = DAT_00508f2c;
      }
      func_00115E10(&local_48,pfVar3,&local_a0);
      local_54 = local_48;
      local_50 = uStack_44;
      local_4c = uStack_40;
      func_00115DC8(&local_54);
      func_00115E10(&local_48,&local_54,pfVar3);
      local_a0 = local_48;
      local_9c = ALBW_AS_F32(uStack_44);
      local_98 = ALBW_AS_F32(uStack_40);
      func_00115DC8(&local_a0);
      local_90 = local_54;
      local_80 = local_50;
      local_70 = local_4c;
      local_8c = *pfVar3;
      local_7c = *(undefined4 *)(param_2 + 8);
      local_6c = *(undefined4 *)(param_2 + 0xc);
      local_88 = local_a0;
      local_78 = ALBW_AS_U32(local_9c);
      local_68 = ALBW_AS_U32(local_98);
      local_84 = *(undefined4 *)(param_1 + 0x450);
      local_74 = *(undefined4 *)(param_1 + 0x454);
      local_64 = *(undefined4 *)(param_1 + 0x458);
      func_004A2E80(*(int *)(param_1 + 0x4f8),&local_90,fparam_0);
    }
    if (*(char *)(param_1 + 0x535) == '\0') {
      func_0035227C(param_1 + 0x324,(*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
    }
    else {
      func_0035227C(param_1 + 0x324,5);
    }
  }
  return 1;
}

