#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014F0B0(int param_1);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern float DAT_00511ff0;
extern float DAT_00511ff4;
extern uint DAT_00511ff8;
extern undefined4 DAT_00511ffc;
extern undefined4 DAT_00512000;
extern int *DAT_00512004;

// USA 00511EC0 <- EU 00511E98 (Ghidra, non-matching)
// GLOBAL DAT_00511ff0 float
// GLOBAL DAT_00511ff4 float
// GLOBAL DAT_00511ff8 uint
// GLOBAL DAT_00511ffc undefined4
// GLOBAL DAT_00512000 undefined4
// GLOBAL DAT_00512004 int *

void func_00511EC0(int param_1,uint *param_2,float *param_3,float *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(uint *)(albw_frame + 0x0))
  #define uStack_ac (*(uint *)(albw_frame + 0x4))
  #define uStack_a8 (*(uint *)(albw_frame + 0x8))
  #define uStack_a4 (*(uint *)(albw_frame + 0xc))
  #define uStack_a0 (*(uint *)(albw_frame + 0x10))
  #define uStack_9c (*(uint *)(albw_frame + 0x14))
  #define uStack_98 (*(uint *)(albw_frame + 0x18))
  #define local_94 (*(float * *)(albw_frame + 0x1c))
  #define local_90 (*(float * *)(albw_frame + 0x20))
  #define uStack_8c (*(uint *)(albw_frame + 0x24))
  #define uStack_88 (*(uint *)(albw_frame + 0x28))
  #define local_84 (*(uint *)(albw_frame + 0x2c))
  #define local_80 (*(uint *)(albw_frame + 0x30))
  #define uStack_7c (*(uint *)(albw_frame + 0x34))
  #define local_78 (*(uint *)(albw_frame + 0x38))
  #define local_74 (*(float *)(albw_frame + 0x3c))
  #define local_70 (*(float *)(albw_frame + 0x40))
  #define local_6c (*(float *)(albw_frame + 0x44))
  #define afStack_68 ((float *)(albw_frame + 0x48))
  #define afStack_5c ((float *)(albw_frame + 0x54))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  #define puStack_30 (*(uint * *)(albw_frame + 0x80))
  #define pfStack_2c (*(float * *)(albw_frame + 0x84))
  #define local_28 (*(float * *)(albw_frame + 0x88))
  piVar1 = DAT_00512004;
  local_b0 = *param_2;
  uStack_ac = param_2[1];
  uStack_a8 = param_2[2];
  uStack_a4 = param_2[3];
  uStack_a0 = param_2[4];
  uStack_9c = param_2[5];
  uStack_98 = param_2[6];
  local_94 = (float *)param_2[7];
  uVar8 = (ulonglong)DAT_00511ff8;
  local_78 = param_2[0xe];
  local_90 = (float *)param_2[8];
  uStack_8c = param_2[9];
  uStack_88 = param_2[10];
  local_84 = param_2[0xb];
  local_80 = param_2[0xc];
  uStack_7c = param_2[0xd];
  uVar6 = CONCAT44((*(float *)(param_1 + 0x4c4) - DAT_00511ff0) * DAT_00511ff4,
                   (*(float *)(param_1 + 0x4c0) - DAT_00511ff0) * DAT_00511ff4);
  iVar5 = 0;
  uVar7 = CONCAT44(DAT_00512000,DAT_00511ffc);
  iStack_34 = param_1;
  puStack_30 = param_2;
  pfStack_2c = param_3;
  local_28 = param_4;
  do {
    if (*(char *)(param_1 + 0x47c) != '\0') {
      return;
    }
    iVar4 = 0;
    do {
      if (*(char *)(param_1 + 0x47c) != '\0') break;
      if (iVar5 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 1;
      }
      if (iVar4 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = 1;
      }
      local_70 = -ALBW_AS_F32(((ulonglong)uVar6 >> 0x20));
      local_74 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      local_74 = local_74 * ALBW_AS_F32(uVar6);
      local_6c = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      local_6c = local_6c * ALBW_AS_F32(uVar6);
      func_00115C54(afStack_68,param_3,&local_74);
      local_90 = afStack_68;
      func_00115C54(afStack_5c,local_28,&local_74);
      local_84 = (uint)uVar8;
      local_94 = afStack_5c;
      func_0014F0B0(param_1);
      func_004A7620(*piVar1,&local_b0,0xf,ALBW_AS_F32(((ulonglong)uVar7 >> 0x20)),ALBW_AS_F32(uVar7));
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    iVar5 = iVar5 + 1;
    if (1 < iVar5) {
      return;
    }
  } while( true );
}

