#include "ghidra_types.h"

extern int func_0032EDFC(float *param_1,int param_2);
extern int func_0032EF74(float *param_1,float *param_2,float *param_3);
extern float func_005500C0(float *param_1,int param_2);
extern float DAT_00550218;

// USA 005500FC <- EU 005500D4 (Ghidra, non-matching)
// GLOBAL DAT_00550218 float

undefined4 func_005500FC(float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(float *)(albw_frame + 0x54))
  #define afStack_48 ((float *)(albw_frame + 0x58))
  local_98 = *param_1;
  local_94 = param_1[1];
  local_90 = param_1[2];
  local_8c = param_1[3];
  local_88 = param_1[4];
  local_84 = param_1[5];
  local_80 = param_1[6];
  local_7c = param_1[7];
  local_78 = param_1[8];
  local_74 = param_1[9];
  func_0032EDFC(&local_98,param_3 / 2);
  func_0032EF74(afStack_48,&local_98,param_2);
  fVar1 = func_005500C0(&local_98,afStack_48);
  if (DAT_00550218 < fVar1) {
    local_70 = *param_1;
    local_6c = param_1[1];
    local_68 = param_1[2];
    local_64 = param_1[3];
    local_60 = param_1[4];
    local_5c = param_1[5];
    local_58 = param_1[6];
    local_54 = param_1[7];
    local_50 = param_1[8];
    local_4c = param_1[9];
    fVar1 = DAT_00550218;
    func_0032EDFC(&local_70,-(param_3 / 2));
    func_0032EF74(afStack_48,&local_70,param_2);
    fVar2 = func_005500C0(&local_70,afStack_48);
    if (fVar2 <= fVar1) {
      return 1;
    }
  }
  return 0;
}

