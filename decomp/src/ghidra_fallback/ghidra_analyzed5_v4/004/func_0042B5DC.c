#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float DAT_0042b80c;
extern float DAT_0042b810;

// USA 0042B5DC <- EU 0042B5BC (Ghidra, non-matching)
// GLOBAL DAT_0042b80c float
// GLOBAL DAT_0042b810 float

undefined4 func_0042B5DC(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define fStack_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define fStack_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x48))
  #define afStack_44 ((float *)(albw_frame + 0x4c))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define fStack_34 (*(float *)(albw_frame + 0x5c))
  #define fStack_30 (*(float *)(albw_frame + 0x60))
  func_00115C70(&local_78,(float *)(param_1 + 4),(float *)(param_2 + 4));
  local_84 = local_78;
  fStack_80 = fStack_74;
  local_7c = local_70;
  fVar4 = *(float *)(param_1 + 0x58) + *(float *)(param_2 + 0x58);
  fVar3 = local_78 * local_78 + fStack_74 * fStack_74 + local_70 * local_70;
  if ((fVar3 < fVar4 * fVar4) && (0x34000000 < (int)ALBW_AS_U32(fVar3))) {
    if (param_3 != 0) {
      local_50 = *(float *)(param_1 + 0x10);
      uStack_4c = *(undefined4 *)(param_1 + 0x14);
      uStack_48 = *(undefined4 *)(param_1 + 0x18);
      func_00115C70(afStack_44,(float *)(param_2 + 4),(float *)(param_2 + 0x10));
      func_00115C54(&local_50,&local_50,afStack_44);
      func_00115C70(&local_78,&local_50,(float *)(param_2 + 4));
      fVar2 = local_84 * local_78 + fStack_80 * fStack_74 + local_7c * local_70;
      fVar1 = fVar2;
      if (DAT_0042b80c <= fVar2) {
        fVar1 = fVar3;
      }
      if ((DAT_0042b80c <= fVar2 && DAT_0042b80c <= fVar3) && fVar1 != DAT_0042b80c) {
        fVar3 = SQRT(fVar3);
        func_00115D70(&local_38,&local_84,DAT_0042b810 / fVar3);
        *(float *)(param_3 + 4) = local_38;
        *(float *)(param_3 + 8) = fStack_34;
        *(float *)(param_3 + 0xc) = fStack_30;
        *(float *)(param_3 + 0x1c) = fVar4 - fVar3;
        func_00115D70(&local_38,(float *)(param_3 + 4),*(float *)(param_1 + 0x58));
        local_64 = local_38;
        local_60 = fStack_34;
        local_5c = fStack_30;
        func_00115C70(&local_38,(float *)(param_1 + 4),&local_64);
        *(float *)(param_3 + 0x10) = local_38;
        *(float *)(param_3 + 0x14) = fStack_34;
        *(float *)(param_3 + 0x18) = fStack_30;
      }
      else {
        fVar3 = DAT_0042b80c;
        func_00115DC8(&local_78);
        func_00115D70(&local_38,&local_78,*(float *)(param_2 + 0x58));
        local_6c = local_38;
        fStack_68 = fStack_34;
        local_64 = fStack_30;
        func_00115C54(&local_38,(float *)(param_2 + 4),&local_6c);
        *(float *)(param_3 + 0x10) = local_38;
        *(float *)(param_3 + 0x14) = fStack_34;
        *(float *)(param_3 + 0x18) = fStack_30;
        func_00115C70(&local_60,(float *)(param_3 + 0x10),(float *)(param_1 + 4));
        fVar4 = SQRT(local_60 * local_60 + local_5c * local_5c + local_58 * local_58);
        if (fVar4 == fVar3) {
          func_00115DC8(&local_60);
        }
        else {
          local_60 = local_60 / fVar4;
          local_5c = local_5c / fVar4;
          local_58 = local_58 / fVar4;
        }
        *(float *)(param_3 + 4) = local_60;
        *(float *)(param_3 + 8) = local_5c;
        *(float *)(param_3 + 0xc) = local_58;
        *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 0x58) + fVar4;
      }
    }
    return 1;
  }
  return 0;
}

