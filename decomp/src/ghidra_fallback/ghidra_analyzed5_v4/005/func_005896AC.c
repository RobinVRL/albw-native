#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0042DD38(int param_1,int param_2,int param_3);
extern int func_0068B200(float *param_1,float *param_2);
extern float DAT_00589a20;
extern undefined4 DAT_00589a24;
extern uint DAT_00589a28;
extern float *DAT_00589a2c;

// USA 005896AC <- EU 00589684 (Ghidra, non-matching)
// GLOBAL DAT_00589a20 float
// GLOBAL DAT_00589a24 undefined4
// GLOBAL DAT_00589a28 uint
// GLOBAL DAT_00589a2c float *

uint func_005896AC(int param_1,float *param_2,uint *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_r10;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(undefined4 *)(albw_frame + 0x0))
  #define local_bc ((float *)(albw_frame + 0x4))
  #define local_ac (*(uint *)(albw_frame + 0x14))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(undefined1 *)(albw_frame + 0x2c))
  #define local_93 (*(undefined1 *)(albw_frame + 0x2d))
  #define local_90 (*(uint *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined1 *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(undefined4 *)(albw_frame + 0x48))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x60))
  #define local_5c (*(float *)(albw_frame + 0x64))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_4c (*(float * *)(albw_frame + 0x74))
  #define local_3c (*(float *)(albw_frame + 0x84))
  #define local_38 (*(float *)(albw_frame + 0x88))
  #define fStack_34 (*(float *)(albw_frame + 0x8c))
  #define fStack_30 (*(float *)(albw_frame + 0x90))
  puVar4 = &local_c0;
  iVar2 = *(int *)(param_1 + 0x18);
  uVar5 = 0;
  bVar1 = false;
  fVar7 = DAT_00589a20;
  if ((iVar2 != 0) && ((param_3[5] & 1 << (*(ushort *)(iVar2 + 0x28) & 0x1f)) != 0)) {
    fVar6 = *(float *)(param_4 + 0x58) + ALBW_AS_F32(param_3[9]);
    if (((*(float *)(iVar2 + 0x34) <= *(float *)(param_4 + 4) + fVar6) &&
        (((*(float *)(iVar2 + 0x3c) <= *(float *)(param_4 + 0xc) + fVar6 &&
          (*(float *)(param_4 + 4) - fVar6 <= *(float *)(iVar2 + 0x40))) &&
         (*(float *)(param_4 + 0xc) - fVar6 <= *(float *)(iVar2 + 0x48))))) &&
       ((*(float *)(iVar2 + 0x38) <= *(float *)(param_4 + 8) + fVar6 &&
        (*(float *)(param_4 + 8) - fVar6 <= *(float *)(iVar2 + 0x44))))) {
      local_c0 = DAT_00589a24;
      local_a4 = DAT_00589a20;
      local_78 = 0x1f;
      uVar3 = 0x1f;
      local_9c = 0;
      local_98 = 0.0;
      local_a0 = CONCAT22((*(undefined2 *)((char *)&local_a0 + 2)),0x1f);
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      if (param_2 == (float *)0x0) {
        uVar3 = param_3[1];
      }
      if (param_2 == (float *)0x0 && uVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      uVar3 = func_0042DD38(param_4,*(int *)(param_1 + 0x18),(int)puVar4);
      if (uVar3 != 0) {
        local_98 = *(float *)(param_1 + 0x20);
        if (param_2 != (float *)0x0) {
          unaff_r10 = 1;
        }
        if (param_2 == (float *)0x0) {
          unaff_r10 = 0;
        }
        uVar5 = 1;
        bVar1 = true;
        local_a0 = CONCAT22((*(undefined2 *)((char *)&local_a0 + 2)),*(undefined2 *)(*(int *)(param_1 + 0x18) + 0x28));
        local_9c = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c);
        local_90 = (uint)*(ushort *)(param_1 + 0x24);
        puVar4 = (undefined4 *)param_3[1];
        if (puVar4 != (undefined4 *)0x0) {
          iVar2 = (**(code **)*puVar4)(puVar4,&local_c0);
          uVar5 = (uint)(iVar2 != 0);
          if (iVar2 == 0) goto LAB_00589860;
        }
        if (unaff_r10 != 0) {
          func_00115D70(&local_5c,local_bc,local_a4);
          local_68 = local_5c;
          uStack_64 = uStack_58;
          uStack_60 = uStack_54;
          func_0068B200(param_2,&local_68);
        }
      }
    }
  }
LAB_00589860:
  iVar2 = *(int *)(param_1 + 0x10);
  if ((iVar2 != 0) && (((char)param_3[10] == '\0' || (*(short *)(iVar2 + 0x88) != 0)))) {
    fVar6 = *(float *)(param_4 + 0x58) + ALBW_AS_F32(param_3[9]);
    if ((*(float *)(iVar2 + 0x34) <= *(float *)(param_4 + 4) + fVar6) &&
       (((*(float *)(iVar2 + 0x3c) <= *(float *)(param_4 + 0xc) + fVar6 &&
         (*(float *)(param_4 + 4) - fVar6 <= *(float *)(iVar2 + 0x40))) &&
        (*(float *)(param_4 + 0xc) - fVar6 <= *(float *)(iVar2 + 0x48))))) {
      if ((*(float *)(iVar2 + 0x38) <= *(float *)(param_4 + 8) + fVar6) &&
         (*(float *)(param_4 + 8) - fVar6 <= *(float *)(iVar2 + 0x44))) {
        local_ac = DAT_00589a28 | iVar2 + 0x34U & 0xffff0000;
        local_bc[0] = 0.0;
        local_bc[1] = 0.0;
        local_bc[2] = 0.0;
        local_bc[3] = 0.0;
        local_a8 = 0xff;
        local_a4 = 0.0;
        local_a0 = 0;
        local_9c = 0;
        local_94 = 0;
        local_93 = 1;
        local_98 = fVar7;
        func_00110D44(&local_68,(byte *)local_bc,0x2a);
        local_38 = *DAT_00589a2c;
        fStack_34 = DAT_00589a2c[1];
        fStack_30 = DAT_00589a2c[2];
        local_3c = fVar7;
        func_0010E3C4((uint *)&local_68,param_3,0x3c);
        local_84 = *(float *)(param_4 + 4);
        uStack_80 = *(undefined4 *)(param_4 + 8);
        uStack_7c = *(undefined4 *)(param_4 + 0xc);
        func_00115C70(&local_84,&local_84,&local_38);
        local_4c = &local_84;
        uVar5 = (**(code **)(**(int **)(param_1 + 0x10) + 0x14))
                          (*(int **)(param_1 + 0x10),param_2,&local_68);
        if (uVar5 != 0) goto LAB_005899f0;
      }
    }
  }
  if (!bVar1) {
    return uVar5;
  }
LAB_005899f0:
  puVar4 = *(undefined4 **)(param_1 + 0x28);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(puVar4,param_3 + 3,1);
  }
  return uVar5;
}

