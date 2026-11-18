#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_00141D9C(int *param_1,int param_2);
extern int func_001424F0(int param_1,int param_2);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0014F0B0(int param_1);
extern int func_0037C06C(undefined4 *param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_00520ED8(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052108C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int DAT_001423cc;
extern uint DAT_001423d0;
extern int DAT_001423d4;
extern float DAT_001423d8;
extern float DAT_001423dc;
extern undefined4 DAT_001423e0;
extern int DAT_001423e4;
extern uint DAT_001423e8;
extern undefined4 *DAT_001423ec;
extern int *DAT_001423f0;
extern int *DAT_00142470;

// USA 00141FB4 <- EU 00141FB4 (Ghidra, non-matching)
// GLOBAL DAT_001423cc int
// GLOBAL DAT_001423d0 uint
// GLOBAL DAT_001423d4 int
// GLOBAL DAT_001423d8 float
// GLOBAL DAT_001423dc float
// GLOBAL DAT_001423e0 undefined4
// GLOBAL DAT_001423e4 int
// GLOBAL DAT_001423e8 uint
// GLOBAL DAT_001423ec undefined4 *
// GLOBAL DAT_001423f0 int *
// GLOBAL DAT_00142470 int *

undefined4 func_00141FB4(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_108 (*(float *)(albw_frame + 0x8))
  #define local_104 (*(float *)(albw_frame + 0xc))
  #define local_100 (*(float *)(albw_frame + 0x10))
  #define local_fc (*(float *)(albw_frame + 0x14))
  #define iStack_f8 (*(int *)(albw_frame + 0x18))
  #define local_f4 (*(int *)(albw_frame + 0x1c))
  #define local_ec (*(int * *)(albw_frame + 0x24))
  #define local_e8 (*(int *)(albw_frame + 0x28))
  #define local_e0 (*(int *)(albw_frame + 0x30))
  #define local_dc (*(undefined2 *)(albw_frame + 0x34))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_d4 (*(int *)(albw_frame + 0x3c))
  #define local_d0 (*(float * *)(albw_frame + 0x40))
  #define local_cc (*(undefined1 * *)(albw_frame + 0x44))
  #define local_c0 (*(float *)(albw_frame + 0x50))
  #define local_bc (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_b4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_b0 ((byte *)(albw_frame + 0x60))
  #define uStack_a0 (*(uint *)(albw_frame + 0x70))
  #define local_9c (*(undefined4 *)(albw_frame + 0x74))
  #define local_98 (*(undefined4 *)(albw_frame + 0x78))
  #define local_94 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x80))
  #define local_8c (*(undefined4 *)(albw_frame + 0x84))
  #define local_88 (*(undefined1 *)(albw_frame + 0x88))
  #define local_87 (*(undefined1 *)(albw_frame + 0x89))
  #define local_70 (*(float *)(albw_frame + 0xa0))
  #define iStack_6c (*(int *)(albw_frame + 0xa4))
  #define iStack_68 (*(int *)(albw_frame + 0xa8))
  #define afStack_60 ((float *)(albw_frame + 0xb0))
  iVar3 = param_1[0x141];
  piVar6 = param_1 + 0x143;
  param_1[0x141] = iVar3 + 1U;
  cVar1 = (char)param_1[0x140];
  if (cVar1 == '\0') {
    param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x142])));
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    iVar3 = func_004904CC(ALBW_AS_F32(param_1[0xf8]),
                          SQRT(ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) +
                               ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9])));
    param_1[0x143] = iVar3;
    func_0037C06C(param_1 + 0x110);
    if (((uint)param_1[0x141] < 0xf0) && ((uint)param_1[0xf5] <= DAT_001423d0)) {
      local_f4 = *(int *)(DAT_001423d4 + 0x27c);
      local_fc = *(float *)(DAT_001423d4 + 0x274);
      iStack_f8 = *(int *)(DAT_001423d4 + 0x278);
      func_00491E80(afStack_60,-param_1[0x143],param_1[0xfa],0);
      func_00115D18(&local_fc,afStack_60,&local_fc);
      uVar2 = DAT_001423e0;
      fVar9 = DAT_001423dc;
      fVar7 = ALBW_AS_F32(param_1[0xf8]);
      uVar8 = CONCAT44(DAT_001423dc,DAT_001423d8);
      iVar3 = 0;
      if ((DAT_001423d8 < fVar7) ||
         ((int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) + fVar7 * fVar7 +
               ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9]))) < DAT_001423e4)) {
        param_1[0x14c] = (int)ALBW_AS_U32(local_fc);
        param_1[0x14d] = iStack_f8;
        param_1[0x14e] = local_f4;
        iVar3 = func_0014EEC8((int)param_1,(uint)(param_1 + 0xf4),&local_fc,uVar2,fVar9);
      }
      else {
        func_0014F0B0((int)param_1);
        uStack_a0 = (uint)piVar6 & 0xffff0000 | DAT_001423e8;
        local_b0[0] = 0;
        local_b0[1] = 0;
        local_b0[2] = 0;
        local_b0[3] = 0;
        local_9c = 0xff;
        local_b0[4] = 0;
        local_b0[5] = 0;
        local_b0[6] = 0;
        local_b0[7] = 0;
        local_b0[8] = 0;
        local_b0[9] = 0;
        local_b0[10] = 0;
        local_b0[0xb] = 0;
        local_b0[0xc] = 0;
        local_b0[0xd] = 0;
        local_b0[0xe] = 0;
        local_b0[0xf] = 0;
        local_98 = 0;
        local_94 = 0;
        local_90 = 0;
        local_8c = (undefined4)uVar8;
        local_88 = 0;
        local_87 = 1;
        func_00110D44(&local_ec,local_b0,0x2a);
        local_c0 = ALBW_AS_F32(uVar8);
        local_bc = *DAT_001423ec;
        uStack_b8 = DAT_001423ec[1];
        uStack_b4 = DAT_001423ec[2];
        local_e8 = param_1[0x123];
        local_108 = ALBW_AS_F32(param_1[0x14f]);
        local_104 = ALBW_AS_F32(param_1[0x150]);
        local_100 = ALBW_AS_F32(param_1[0x151]);
        local_70 = ALBW_AS_F32(param_1[0xf4]);
        iStack_6c = param_1[0xf5];
        iStack_68 = param_1[0xf6];
        if ((local_108 == local_c0 && local_104 == local_c0) && local_100 == local_c0) {
          func_00115C54(&local_108,(float *)(param_1 + 0xda),&local_fc);
          param_1[0x14f] = (int)ALBW_AS_U32(local_108);
          param_1[0x150] = (int)ALBW_AS_U32(local_104);
          param_1[0x151] = (int)ALBW_AS_U32(local_100);
        }
        fVar9 = ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
        func_00115C54(&local_70,&local_70,&local_fc);
        local_ec = param_1 + 0xf4;
        local_d0 = &local_70;
        local_e0 = param_1[0xb3];
        local_d8 = uVar2;
        local_dc = (undefined2)param_1[0x15];
        local_d4 = param_1[0xe8];
        param_1[0x14c] = (int)ALBW_AS_U32(local_fc);
        param_1[0x14d] = iStack_f8;
        param_1[0x14e] = local_f4;
        local_cc = (undefined1 *)&local_108;
        local_c0 = fVar9;
        iVar4 = func_004A8030(*DAT_001423f0,(int *)&local_ec,0xff);
        if (iVar4 != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0xda);
          iVar10 = param_1[0xdc];
          func_00115C70(&local_108,&local_108,&local_fc);
          param_1[0xda] = (int)ALBW_AS_U32(local_108);
          param_1[0xdb] = (int)ALBW_AS_U32(local_104);
          param_1[0xdc] = (int)ALBW_AS_U32(local_100);
          pfVar5 = (float *)(param_1 + 0xf4);
          *pfVar5 = local_108;
          param_1[0xf5] = (int)ALBW_AS_U32(local_104);
          param_1[0xf6] = (int)ALBW_AS_U32(local_100);
          *pfVar5 = ALBW_AS_F32(param_1[0x149]);
          param_1[0xf5] = param_1[0x14a];
          param_1[0xf6] = param_1[0x14b];
          iVar3 = func_0014EEC8((int)param_1,(uint)pfVar5,&local_fc,uVar2,fVar9);
          param_1[0xda] = (int)uVar8;
          iVar4 = (int)((ulonglong)uVar8 >> 0x20);
          param_1[0xdb] = iVar4;
          param_1[0xdc] = iVar10;
          param_1[0xf4] = (int)uVar8;
          param_1[0xf5] = iVar4;
          param_1[0xf6] = iVar10;
          param_1[0xf4] = param_1[0x149];
          param_1[0xf5] = param_1[0x14a];
          param_1[0xf6] = param_1[0x14b];
        }
      }
      iVar4 = func_00520ED8((int)param_1);
      if (((iVar4 == 0) && (iVar4 = func_00520FF8((int)param_1), iVar4 == 0)) &&
         (iVar4 = func_0052108C((int)param_1), iVar4 == 0)) {
        if (iVar3 != 0) {
          func_00141D9C(param_1,1);
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
      }
      if (*(char *)((int)param_1 + 0x2d7) != '\0') {
        return 0;
      }
LAB_001423b4:
      return func_001424F0((int)param_1,0);
    }
  }
  else if (cVar1 == '\x01') {
    if (iVar3 + 1U < 0xf0) {
      if (*(char *)((int)param_1 + 0x2d7) != '\0') {
        return 0;
      }
      iVar3 = func_0052FBA0(*DAT_00142470 + 0x3dbbc,param_1[0x145]);
      if (iVar3 != 0) {
        func_00115C70(&local_104,(float *)(iVar3 + 0x3d0),(float *)(param_1 + 0x146));
        func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0x149),&local_104);
        return func_001424F0((int)param_1,1);
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
      return 0;
    }
    param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x142])));
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    *piVar6 = DAT_001423cc + *piVar6;
    if ((uint)param_1[0x141] < 0x1e) goto LAB_001423b4;
  }
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  return 0;
}

