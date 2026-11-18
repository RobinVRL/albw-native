#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_00225760;
extern float DAT_00225764;
extern float DAT_00225768;
extern float DAT_0022576c;
extern int DAT_00225770;
extern float DAT_00225774;
extern float DAT_00225778;
extern float DAT_0022577c;
extern int DAT_00225780;

// USA 002255D0 <- EU 002255D0 (Ghidra, non-matching)
// GLOBAL DAT_00225760 float
// GLOBAL DAT_00225764 float
// GLOBAL DAT_00225768 float
// GLOBAL DAT_0022576c float
// GLOBAL DAT_00225770 int
// GLOBAL DAT_00225774 float
// GLOBAL DAT_00225778 float
// GLOBAL DAT_0022577c float
// GLOBAL DAT_00225780 int

void func_002255D0(int param_1,uint param_2,int param_3,int param_4,float fparam_0,float fparam_1)

{
  float fVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define uStack_94 (*(uint *)(albw_frame + 0xc))
  #define uStack_90 (*(uint *)(albw_frame + 0x10))
  #define uStack_8c (*(uint *)(albw_frame + 0x14))
  #define uStack_88 (*(uint *)(albw_frame + 0x18))
  #define uStack_84 (*(uint *)(albw_frame + 0x1c))
  #define uStack_80 (*(uint *)(albw_frame + 0x20))
  #define uStack_7c (*(uint *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define uStack_74 (*(uint *)(albw_frame + 0x2c))
  #define uStack_70 (*(uint *)(albw_frame + 0x30))
  #define uStack_6c (*(uint *)(albw_frame + 0x34))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x50))
  #define local_34 (*(undefined4 *)(albw_frame + 0x6c))
  func_001119F4(auStack_50,
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x24) + 0xc) + param_3 * 0x40 + 0x10)
               );
  local_5c = local_34;
  local_60 = fparam_0;
  local_58 = fparam_1;
  func_004D8AEC(&local_98,param_2,&local_60);
  puVar2 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x24) + 0xc) + param_3 * 0x40);
  puVar2[4] = (uint)ALBW_AS_U32(local_98);
  puVar2[5] = uStack_94;
  puVar2[6] = uStack_90;
  puVar2[7] = uStack_8c;
  puVar2[8] = uStack_88;
  puVar2[9] = uStack_84;
  puVar2[10] = uStack_80;
  puVar2[0xb] = uStack_7c;
  fVar1 = DAT_00225760;
  puVar2[0xc] = local_78;
  puVar2[0xd] = uStack_74;
  puVar2[0xe] = uStack_70;
  puVar2[0xf] = uStack_6c;
  *puVar2 = *puVar2 & 0xf3ffffff;
  fVar5 = fVar1;
  if ((param_4 != 0) && (uVar3 = (uint)*(byte *)(param_1 + 0x746), uVar3 < 0x23)) {
    if (uVar3 < 0x20) {
      if (uVar3 < 0x14) {
        if (uVar3 < 0xb) {
          fVar5 = *(float *)(DAT_00225780 + uVar3 * 4);
        }
        else {
          fVar5 = (float)VectorSignedToFloat(0x14 - uVar3,(byte)(in_fpscr >> 0x15) & 3);
          fVar5 = DAT_00225764 + fVar5 * DAT_00225778 * DAT_0022577c;
        }
      }
      else {
        iVar4 = (int)((ulonglong)((longlong)DAT_00225770 * (longlong)(int)(uVar3 - 0x14)) >> 0x20);
        uVar3 = (uVar3 - 0x14) + (iVar4 - (iVar4 >> 0x1f)) * -3 & 0xff;
        fVar5 = DAT_00225764;
        if ((uVar3 != 0) && (fVar5 = fVar1, uVar3 != 1)) {
          fVar5 = DAT_00225774;
        }
      }
    }
    else {
      fVar5 = (float)VectorSignedToFloat(uVar3 - 0x20,(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = DAT_00225764 + fVar5 * DAT_00225768 * DAT_0022576c;
    }
  }
  puVar2 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x594) + 0x24) + 0xc) + param_3 * 0x40);
  puVar2[1] = (uint)ALBW_AS_U32(fVar5);
  puVar2[2] = (uint)ALBW_AS_U32(fVar1);
  puVar2[3] = (uint)ALBW_AS_U32(fVar5);
  *puVar2 = *puVar2 & 0xfd7fffff;
  return;
}

