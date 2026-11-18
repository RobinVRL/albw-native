#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00558370(int param_1,undefined4 *param_2);
extern int func_00588CFC(undefined4 param_1,float *param_2,undefined4 *param_3,undefined4 *param_4, float *param_5,int param_6,float fparam_0,float fparam_1,float fparam_2);
extern int *DAT_002e13f0;
extern undefined4 *DAT_002e13f4;
extern float *DAT_002e13f8;
extern float DAT_002e13fc;

// USA 002E12C0 <- EU 002E129C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_002e13f0 int *
// GLOBAL DAT_002e13f4 undefined4 *
// GLOBAL DAT_002e13f8 float *
// GLOBAL DAT_002e13fc float

undefined4
func_002E12C0(undefined4 param_1,float *param_2,float *param_3,undefined4 *param_4,int param_5,
             float fparam_0)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float in_s1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define fStack_20 (*(float *)(albw_frame + 0x30))
  #define local_1c ((float *)(albw_frame + 0x34))
  fVar4 = func_00558370(param_5,local_1c);
  pfVar3 = *(float **)(*DAT_002e13f0 + 0x1c);
  local_28 = *pfVar3;
  fStack_20 = pfVar3[2];
  local_24 = pfVar3[1] + fparam_0;
  iVar2 = func_00588CFC(*DAT_002e13f4,&local_48,param_3,param_4,&local_28,
                        *(int *)(*DAT_002e13f0 + 0x20),fVar4,in_s1,local_1c[0]);
  fVar4 = DAT_002e13fc;
  if (iVar2 == 0) {
    if ((local_48 == *DAT_002e13f8) && (local_44 == DAT_002e13f8[1])) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      func_00115C70(&local_40,&local_28,param_3);
      local_34 = local_40;
      local_30 = fStack_3c;
      local_2c = local_38;
      local_40 = local_40 * local_48;
      local_38 = local_38 * local_44;
      func_00115C70(&local_34,&local_34,&local_40);
      *param_2 = local_34;
      param_2[1] = local_30;
      param_2[2] = local_2c;
      return 0;
    }
  }
  *param_2 = DAT_002e13fc;
  param_2[1] = fVar4;
  param_2[2] = fVar4;
  return 1;
}

