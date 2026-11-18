#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0042BD5C(int param_1,float *param_2,float *param_3,int param_4,float fparam_0,float fparam_1);
extern int func_0042CF00(int param_1,float *param_2,float *param_3,int param_4,float fparam_0);
extern int func_0042D218(int param_1,float *param_2,float *param_3,int param_4,float fparam_0);
extern int func_0042D464(int param_1,float *param_2,float *param_3,int param_4,float fparam_0);
extern int func_004363B4(int param_1);
extern void func_0068A458(float *param_1,float *param_2);
extern float DAT_0042b104;

// USA 0042AFC4 <- EU 0042AFA4 (Ghidra, non-matching)
// GLOBAL DAT_0042b104 float

uint func_0042AFC4(int param_1,int param_2,int param_3)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define afStack_20 ((float *)(albw_frame + 0x20))
  sVar1 = *(short *)(param_2 + 0x54);
  pfVar5 = (float *)(param_1 + 0x10);
  if (sVar1 == 5) {
    func_00115C70(&local_38,pfVar5,(float *)(param_1 + 4));
    local_2c = local_38;
    uStack_28 = uStack_34;
    uStack_24 = uStack_30;
    func_0068A458(afStack_20,&local_2c);
    uVar3 = func_0042CF00(param_2,(float *)(param_1 + 4),afStack_20,param_3,fVar6);
    return uVar3;
  }
  if (sVar1 == 6) {
    func_00115C70(&local_2c,pfVar5,(float *)(param_1 + 4));
    local_38 = local_2c;
    uStack_34 = uStack_28;
    uStack_30 = uStack_24;
    func_0068A458(afStack_20,&local_38);
    iVar4 = func_0042D218(param_2,(float *)(param_1 + 4),afStack_20,param_3,fVar6);
    uVar3 = 0;
    if (iVar4 != 0) {
      if (param_3 != 0) {
        func_004363B4(param_3);
      }
      return 1;
    }
  }
  else {
    if (sVar1 == 8) {
      func_00115C70(&local_2c,pfVar5,(float *)(param_1 + 4));
      local_38 = local_2c;
      uStack_34 = uStack_28;
      uStack_30 = uStack_24;
      func_0068A458(afStack_20,&local_38);
      bVar2 = func_0042BD5C(param_2,(float *)(param_1 + 4),afStack_20,param_3,fVar6,DAT_0042b104);
      return (uint)bVar2;
    }
    if (sVar1 == 9) {
      func_00115C70(&local_2c,pfVar5,(float *)(param_1 + 4));
      local_38 = local_2c;
      uStack_34 = uStack_28;
      uStack_30 = uStack_24;
      func_0068A458(afStack_20,&local_38);
      uVar3 = func_0042D464(param_2,(float *)(param_1 + 4),afStack_20,param_3,fVar6);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

