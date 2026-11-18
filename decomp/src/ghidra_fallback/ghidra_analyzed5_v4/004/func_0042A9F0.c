#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0042ADDC(int param_1,int param_2,int param_3);
extern int func_0042BD5C(int param_1,float *param_2,float *param_3,int param_4,float fparam_0,float fparam_1);
extern int func_0042CBE4(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00435B54(undefined4 *param_1,undefined4 *param_2);
extern int func_004363B4(int param_1);
extern float DAT_0042acec;
extern float DAT_0042acf0;
extern undefined4 DAT_0042acf4;

// USA 0042A9F0 <- EU 0042A9D0 (Ghidra, non-matching)
// GLOBAL DAT_0042acec float
// GLOBAL DAT_0042acf0 float
// GLOBAL DAT_0042acf4 undefined4

undefined1 func_0042A9F0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 (*(float *)(albw_frame + 0x8))
  #define local_d4 (*(float *)(albw_frame + 0xc))
  #define local_d0 (*(float *)(albw_frame + 0x10))
  #define local_cc (*(float *)(albw_frame + 0x14))
  #define local_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define fStack_c0 (*(float *)(albw_frame + 0x20))
  #define fStack_bc (*(float *)(albw_frame + 0x24))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(float *)(albw_frame + 0x74))
  #define local_68 (*(float *)(albw_frame + 0x78))
  #define local_64 (*(float *)(albw_frame + 0x7c))
  #define local_60 (*(float *)(albw_frame + 0x80))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x84))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x88))
  #define local_54 (*(float *)(albw_frame + 0x8c))
  #define local_50 (*(float *)(albw_frame + 0x90))
  #define fStack_4c (*(float *)(albw_frame + 0x94))
  #define local_48 (*(float *)(albw_frame + 0x98))
  #define local_44 (*(float *)(albw_frame + 0x9c))
  #define local_40 (*(float *)(albw_frame + 0xa0))
  #define local_3c (*(float *)(albw_frame + 0xa4))
  #define afStack_38 ((float *)(albw_frame + 0xa8))
  #define afStack_2c ((float *)(albw_frame + 0xb4))
  #define local_20 ((undefined4 *)(albw_frame + 0xc0))
  func_00115D70(afStack_38,(float *)(param_2 + 0x58),DAT_0042acec);
  iVar2 = func_0042CBE4(param_2,(float *)(param_1 + 0x58),param_3,*(float *)(param_1 + 0x70));
  pfVar4 = (float *)(param_1 + 100);
  if ((iVar2 == 0) ||
     (iVar2 = func_0042CBE4(param_2,pfVar4,param_3,*(float *)(param_1 + 0x70)), iVar2 == 0)) {
    func_00115C70(&local_54,pfVar4,(float *)(param_1 + 0x58));
    fVar5 = SQRT(local_54 * local_54 + local_50 * local_50 + fStack_4c * fStack_4c);
    func_00115DC8(&local_54);
    cVar1 = func_0042BD5C(param_2,(float *)(param_1 + 0x58),&local_54,param_3,fVar5,
                          *(float *)(param_1 + 0x70));
    if (cVar1 == '\0') {
      local_d0 = -local_54;
      local_cc = -local_50;
      local_c8 = -fStack_4c;
      cVar1 = func_0042BD5C(param_2,pfVar4,&local_d0,param_3,fVar5,*(float *)(param_1 + 0x70));
      if (cVar1 == '\0') {
        return 0;
      }
      if (param_3 == 0) {
        return 1;
      }
      func_00115C70(&local_c4,(float *)(param_3 + 0x10),(float *)(param_1 + 0x58));
      fVar5 = local_c4 * *(float *)(param_3 + 4) + fStack_c0 * *(float *)(param_3 + 8) +
              fStack_bc * *(float *)(param_3 + 0xc);
    }
    else {
      if (param_3 == 0) {
        return 1;
      }
      func_00115C70(&local_d8,(float *)(param_3 + 0x10),pfVar4);
      fVar5 = local_d8 * *(float *)(param_3 + 4) + local_d4 * *(float *)(param_3 + 8) +
              local_d0 * *(float *)(param_3 + 0xc);
    }
    *(float *)(param_3 + 0x1c) = fVar5;
  }
  else {
    func_00115C70(afStack_2c,(float *)(param_2 + 4),(float *)(param_2 + 0x10));
    local_60 = *(float *)(param_1 + 0x10);
    uStack_5c = *(undefined4 *)(param_1 + 0x14);
    uStack_58 = *(undefined4 *)(param_1 + 0x18);
    func_00115C54(&local_60,&local_60,afStack_2c);
    func_00115C70(&local_d4,(float *)(param_1 + 4),&local_60);
    fVar5 = SQRT(local_d4 * local_d4 + local_d0 * local_d0 + local_cc * local_cc);
    if ((int)ALBW_AS_U32(fVar5) < 0x34000000) {
      iVar2 = func_0042CBE4(param_2,(float *)(param_1 + 4),param_3,DAT_0042acf0);
      if (iVar2 != 0 && param_3 != 0) {
        func_004363B4(param_3);
        local_48 = *(float *)(param_3 + 4);
        local_44 = *(float *)(param_3 + 8);
        local_40 = *(float *)(param_3 + 0xc);
        func_00115DC8(&local_48);
        local_64 = local_48 * *(float *)(param_3 + 0x10) + local_44 * *(float *)(param_3 + 0x14) +
                   local_40 * *(float *)(param_3 + 0x18);
        local_70 = local_48;
        local_6c = local_44;
        local_68 = local_40;
        local_20[0] = 5;
        local_3c = local_64;
        puVar3 = (undefined4 *)func_00435B54(&local_c8,local_20);
        *puVar3 = DAT_0042acf4;
        func_0042ADDC(param_1,(int)&local_c8,param_3);
      }
    }
    else {
      local_d4 = local_d4 / fVar5;
      local_d0 = local_d0 / fVar5;
      local_cc = local_cc / fVar5;
      cVar1 = func_0042BD5C(param_2,&local_60,&local_d4,param_3,fVar5,*(float *)(param_1 + 0x70));
      if (cVar1 != '\0' && param_3 != 0) {
        func_00115C70(&local_c8,(float *)(param_3 + 0x10),(float *)(param_1 + 4));
        *(float *)(param_3 + 0x1c) =
             local_c8 * *(float *)(param_3 + 4) + local_c4 * *(float *)(param_3 + 8) +
             fStack_c0 * *(float *)(param_3 + 0xc);
      }
    }
  }
  return 1;
}

