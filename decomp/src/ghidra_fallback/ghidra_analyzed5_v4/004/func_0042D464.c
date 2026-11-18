#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern float func_0042DA98(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6);

// USA 0042D464 <- EU 0042D444 (Ghidra, non-matching)

/* WARNING: Variable defined which should be unmapped: objStack_70 */

undefined4 func_0042D464(int param_1,float *param_2,float *param_3,int param_4,float fparam_0)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_70 ((uint *)(albw_frame + 0x0))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define fStack_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define uStack_44 (*(uint *)(albw_frame + 0x2c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  #define afStack_28 ((float *)(albw_frame + 0x48))
  local_58 = *param_2;
  fStack_54 = param_2[1];
  local_50 = param_2[2];
  func_00115D70(&local_48,param_3,fparam_0);
  local_64 = local_48;
  uStack_60 = uStack_44;
  uStack_5c = uStack_40;
  func_00115C54(&local_48,&local_58,&local_64);
  objStack_70[0] = (uint)&local_3c;
  objStack_70[1] = (uint)&local_38;
  local_34 = local_48;
  uStack_30 = uStack_44;
  uStack_2c = uStack_40;
  fVar3 = func_0042DA98((float *)(param_1 + 0x58),(float *)(param_1 + 100),&local_58,&local_34,
                        (float *)objStack_70[0],(float *)objStack_70[1]);
  fVar4 = *(float *)(param_1 + 0x70);
  if (fVar4 * fVar4 <= fVar3) {
    uVar1 = 0;
  }
  else {
    if (param_4 != 0) {
      func_00115C70(afStack_28,(float *)(param_1 + 100),(float *)(param_1 + 0x58));
      func_00115D70(afStack_28,afStack_28,local_3c);
      func_00115D70(&local_64,&local_64,local_38);
      func_00115C70((float *)(param_4 + 4),afStack_28,&local_64);
      func_00115DC8((float *)(param_4 + 4));
      pfVar2 = (float *)(param_4 + 0x10);
      *(float *)(param_4 + 0x1c) = fVar4 - SQRT(fVar3);
      *pfVar2 = local_64;
      *(undefined4 *)(param_4 + 0x14) = uStack_60;
      *(undefined4 *)(param_4 + 0x18) = uStack_5c;
      func_00115D70((float *)objStack_70,(float *)(param_4 + 4),fVar4 - SQRT(fVar3));
      local_48 = ALBW_AS_F32(objStack_70[0]);
      uStack_44 = objStack_70[1];
      func_00115C54(pfVar2,pfVar2,&local_48);
    }
    uVar1 = 1;
  }
  return uVar1;
}

