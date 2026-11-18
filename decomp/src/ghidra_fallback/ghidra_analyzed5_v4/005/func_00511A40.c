#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014F0B0(int param_1);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_00511EC0(int param_1,uint *param_2,float *param_3,float *param_4);
extern uint DAT_00511c78;
extern float DAT_00511c7c;
extern undefined4 *DAT_00511c80;
extern float DAT_00511c84;
extern undefined4 DAT_00511c88;
extern float DAT_00511c8c;
extern float DAT_00511c90;
extern int *DAT_00511c94;

// USA 00511A40 <- EU 00511A18 (Ghidra, non-matching)
// GLOBAL DAT_00511c78 uint
// GLOBAL DAT_00511c7c float
// GLOBAL DAT_00511c80 undefined4 *
// GLOBAL DAT_00511c84 float
// GLOBAL DAT_00511c88 undefined4
// GLOBAL DAT_00511c8c float
// GLOBAL DAT_00511c90 float
// GLOBAL DAT_00511c94 int *

void func_00511A40(uint param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fparam_0;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(uint *)(albw_frame + 0x0))
  #define local_bc (*(int *)(albw_frame + 0x4))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a4 (*(float * *)(albw_frame + 0x1c))
  #define local_a0 (*(float * *)(albw_frame + 0x20))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x38))
  #define local_84 ((byte *)(albw_frame + 0x3c))
  #define local_74 (*(uint *)(albw_frame + 0x4c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(undefined1 *)(albw_frame + 0x64))
  #define local_5b (*(undefined1 *)(albw_frame + 0x65))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define fStack_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(float *)(albw_frame + 0x70))
  #define afStack_4c ((float *)(albw_frame + 0x74))
  #define afStack_40 ((float *)(albw_frame + 0x80))
  if (*(char *)(param_1 + 0x4bd) != '\0') {
    local_74 = DAT_00511c78 | param_1 & 0xffff0000;
    local_84[0] = 0;
    local_84[1] = 0;
    local_84[2] = 0;
    local_84[3] = 0;
    local_84[4] = 0;
    local_84[5] = 0;
    local_84[6] = 0;
    local_84[7] = 0;
    local_84[8] = 0;
    local_84[9] = 0;
    local_84[10] = 0;
    local_84[0xb] = 0;
    local_84[0xc] = 0;
    local_84[0xd] = 0;
    local_84[0xe] = 0;
    local_84[0xf] = 0;
    local_70 = 0xff;
    uStack_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_60 = DAT_00511c7c;
    local_5c = 0;
    local_5b = 1;
    fVar5 = DAT_00511c7c;
    func_00110D44(&local_c0,local_84,0x2a);
    local_90 = *DAT_00511c80;
    uStack_8c = DAT_00511c80[1];
    uStack_88 = DAT_00511c80[2];
    local_bc = param_1 + 0x4f8;
    local_a0 = (float *)(param_1 + 0x368);
    local_a4 = (float *)(param_1 + 0x3d0);
    local_c0 = 0;
    local_94 = SQRT(*(float *)(param_1 + 0x4c0) * *(float *)(param_1 + 0x4c0) +
                    *(float *)(param_1 + 0x4c4) * *(float *)(param_1 + 0x4c4) +
                    *(float *)(param_1 + 0x4c8) * *(float *)(param_1 + 0x4c8)) * DAT_00511c84;
    local_b4 = *(undefined4 *)(param_1 + 0x2cc);
    local_ac = DAT_00511c88;
    fVar6 = DAT_00511c84;
    func_0014F0B0(param_1);
    piVar3 = DAT_00511c94;
    fparam_0 = DAT_00511c90;
    fparam_1 = DAT_00511c8c;
    func_004A7620(*DAT_00511c94,&local_c0,0xf,DAT_00511c90,DAT_00511c8c);
    if (*(char *)(param_1 + 0x47a) != '\0') {
      *(undefined1 *)(param_1 + 0x47a) = 0;
      *(undefined1 *)(param_1 + 0x47c) = 0;
      *(undefined1 *)(param_1 + 0x47b) = 0;
      fVar7 = *(float *)(param_1 + 0x4c0) * fVar6;
      fVar6 = (*(float *)(param_1 + 0x4c4) - fVar7 * fparam_0) * fVar6;
      local_58 = fVar5;
      fStack_54 = fVar6;
      local_50 = fVar5;
      func_00115C70(afStack_4c,(float *)(param_1 + 0x368),&local_58);
      local_a0 = afStack_4c;
      func_00115C70(afStack_40,(float *)(param_1 + 0x3d0),&local_58);
      local_a4 = afStack_40;
      local_94 = fVar7;
      func_0014F0B0(param_1);
      uVar4 = func_004A7620(*piVar3,&local_c0,0xf,fparam_0,fparam_1);
      cVar1 = *(char *)(param_1 + 0x47a);
      if (cVar1 != '\0') {
        uVar4 = (uint)*(byte *)(param_1 + 0x47c);
      }
      if (cVar1 == '\0' || uVar4 == 0) {
        *(undefined1 *)(param_1 + 0x47a) = 0;
        func_00511EC0(param_1,&local_c0,(float *)(param_1 + 0x368),(float *)(param_1 + 0x3d0));
        bVar2 = *(char *)(param_1 + 0x47a) != '\0';
        *(bool *)(param_1 + 0x47a) = bVar2 || cVar1 != '\0';
        if (!bVar2 && cVar1 == '\0') {
          local_58 = fVar5;
          fStack_54 = fVar6;
          local_50 = fVar5;
          func_00115C54(afStack_4c,(float *)(param_1 + 0x368),&local_58);
          local_a0 = afStack_4c;
          func_00115C54(afStack_40,(float *)(param_1 + 0x3d0),&local_58);
          local_a4 = afStack_40;
          local_94 = fVar7;
          func_0014F0B0(param_1);
          func_004A7620(*piVar3,&local_c0,0xf,fparam_0,fparam_1);
        }
      }
    }
  }
  return;
}

