#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010A464(undefined4 *param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014F0B0(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00192A48(int param_1,undefined4 param_2,uint param_3);
extern int func_00192B8C(int param_1);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004EAB38(int param_1,int param_2);
extern int func_00525BE0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00539200(int param_1);
extern int func_0054C21C(int param_1,undefined4 *param_2);
extern int func_00588268(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_0019339c;
extern float DAT_001933a0;
extern float DAT_001933a4;
extern uint DAT_001933a8;
extern uint DAT_001933ac;
extern int DAT_001933c4;
extern float DAT_001933c8;
extern float DAT_001933cc;
extern int DAT_001933d0;
extern int *DAT_001933d4;
extern int *DAT_001933d8;
extern uint *DAT_001933dc;
extern undefined4 *DAT_001933e0;
extern undefined4 DAT_001933e4;
extern int *DAT_001933e8;
extern int *DAT_001933ec;
extern int *DAT_001933f0;
extern float DAT_001933f4;
extern float DAT_00193574;
extern int DAT_00193578;
extern uint DAT_0019357c;
extern undefined4 *DAT_00193580;
extern undefined4 DAT_00193584;
extern float DAT_00193588;
extern float DAT_0019358c;
extern int *DAT_00193590;
extern char s_SE_KeySmall_BOUND_001933b0[];
extern char s_Twinkle_00193394[];

// USA 00192FC4 <- EU 00192FC4 (Ghidra, non-matching)
// GLOBAL DAT_0019339c int *
// GLOBAL DAT_001933a0 float
// GLOBAL DAT_001933a4 float
// GLOBAL DAT_001933a8 uint
// GLOBAL DAT_001933ac uint
// GLOBAL DAT_001933c4 int
// GLOBAL DAT_001933c8 float
// GLOBAL DAT_001933cc float
// GLOBAL DAT_001933d0 int
// GLOBAL DAT_001933d4 int *
// GLOBAL DAT_001933d8 int *
// GLOBAL DAT_001933dc uint *
// GLOBAL DAT_001933e0 undefined4 *
// GLOBAL DAT_001933e4 undefined4
// GLOBAL DAT_001933e8 int *
// GLOBAL DAT_001933ec int *
// GLOBAL DAT_001933f0 int *
// GLOBAL DAT_001933f4 float
// GLOBAL DAT_00193574 float
// GLOBAL DAT_00193578 int
// GLOBAL DAT_0019357c uint
// GLOBAL DAT_00193580 undefined4 *
// GLOBAL DAT_00193584 undefined4
// GLOBAL DAT_00193588 float
// GLOBAL DAT_0019358c float
// GLOBAL DAT_00193590 int *
// GLOBAL s_SE_KeySmall_BOUND_001933b0 string
// GLOBAL s_Twinkle_00193394 string

/* WARNING: Variable defined which should be unmapped: objStack_b0 */

undefined4 func_00192FC4(int *param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define objStack_b0 ((uint *)(albw_frame + 0x0))
  #define local_a8 ((int *)(albw_frame + 0x8))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(undefined1 *)(albw_frame + 0x28))
  #define local_87 (*(undefined1 *)(albw_frame + 0x29))
  #define local_80 (*(int * *)(albw_frame + 0x30))
  #define local_7c (*(int * *)(albw_frame + 0x34))
  #define local_74 (*(int *)(albw_frame + 0x3c))
  #define local_6c (*(undefined4 *)(albw_frame + 0x44))
  #define local_64 (*(int * *)(albw_frame + 0x4c))
  #define piStack_60 (*(int * *)(albw_frame + 0x50))
  #define local_54 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x64))
  #define local_48 (*(int *)(albw_frame + 0x68))
  #define local_44 (*(char * *)(albw_frame + 0x6c))
  #define local_38 (*(int *)(albw_frame + 0x78))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  #define iStack_30 (*(int *)(albw_frame + 0x80))
  bVar10 = *(char *)((int)param_1 + 0x446) != '\0';
  cVar1 = '\0';
  if (bVar10) {
    cVar1 = (char)param_1[0x104];
  }
  if (bVar10 && cVar1 != '\x01') {
    param_3 = s_Twinkle_00193394;
    if (param_1[0xd1] != 0) {
      func_004A1B9C(local_a8,param_1[0xd1],(uint *)s_Twinkle_00193394);
    }
    *(undefined1 *)((int)param_1 + 0x446) = 0;
  }
  fVar12 = DAT_001933a0;
  piVar2 = DAT_0019339c;
  switch((char)param_1[0x104]) {
  case '\0':
    param_1[0x10b] = param_1[0xf4];
    param_1[0x10c] = param_1[0xf5];
    param_1[0x10d] = param_1[0xf6];
    break;
  case '\x01':
    bVar10 = func_00588BF0((int)param_1,0);
    if ((bVar10) && ((short)param_1[0xb] == 1)) {
      func_00192A48((int)param_1,2,(uint)param_3);
    }
    break;
  case '\x02':
    pfVar8 = (float *)(param_1 + 0xf7);
    param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - DAT_001933a4));
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar8);
    uVar9 = DAT_001933a8;
    if (ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[0x10e])) {
      param_1[0xf5] = param_1[0x10e];
      if (uVar9 < (uint)param_1[0xf8]) {
        if (DAT_001933ac < (uint)param_1[0xf8]) {
          func_0010A464(local_a8);
          if ((char)param_1[0x112] == '\0') {
            local_44 = s_SE_KeySmall_BOUND_001933b0;
            local_48 = DAT_001933c4;
            func_00150A84(param_1,&local_48,(int)local_a8);
          }
          bVar10 = func_00539200((int)local_a8);
          if (bVar10) {
            fVar13 = -ALBW_AS_F32(param_1[0xf8]);
            if ((fVar12 <= fVar13) && (fVar12 = fVar13, DAT_001933c8 < fVar13)) {
              fVar12 = DAT_001933c8;
            }
            func_0025B860((int)local_a8,0,fVar12,DAT_001933c8);
          }
          func_0025B874(local_a8);
        }
        param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) * DAT_001933cc));
      }
      else {
        func_00192A48((int)param_1,3,(uint)pfVar8);
        uVar3 = *(ushort *)(param_1 + 0xb);
        bVar10 = uVar3 != 0;
        bVar11 = uVar3 != 3;
        if (bVar10 && bVar11) {
          uVar3 = (ushort)*(byte *)((int)param_1 + 0x447);
        }
        if ((bVar10 && bVar11) && uVar3 != 0) {
          func_004EAB38(*piVar2,0);
          *(undefined1 *)((int)param_1 + 0x447) = 0;
        }
      }
    }
    break;
  case '\x03':
    iVar6 = func_00588268(*DAT_0019339c);
    if (iVar6 == 0) {
      if ((short)param_1[0xb] != 0 && (short)param_1[0xb] != 3) {
        func_00165E28(param_1[0x10f],*(undefined2 *)(DAT_001933d0 + 0x2a));
      }
      func_00192A48((int)param_1,0,(uint)param_3);
    }
    break;
  case '\x04':
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_001933d4 + 0x3dbbc,param_1[0x110]);
    pfVar8 = (float *)(param_1 + 0x113);
    if (puVar4 == (undefined4 *)0x0) {
LAB_00193414:
      fVar15 = *pfVar8;
      fVar13 = ALBW_AS_F32(param_1[0x114]);
      fVar14 = ALBW_AS_F32(param_1[0x115]);
      if ((DAT_00193578 < (int)ALBW_AS_U32((fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14))) &&
         (fVar13 = SQRT(fVar15 * fVar15 + fVar13 * fVar13 + fVar14 * fVar14), fVar12 < fVar13)) {
        fVar13 = DAT_00193574 / fVar13;
        *pfVar8 = fVar15 * fVar13;
        param_1[0x114] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x114]) * fVar13));
        param_1[0x115] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x115]) * fVar13));
      }
      local_38 = param_1[0xf4];
      iStack_34 = param_1[0xf5];
      iStack_30 = param_1[0xf6];
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),pfVar8);
      local_a8[2] = (uint)puVar4 & 0xffff0000 | DAT_0019357c;
      objStack_b0[0] = 0;
      objStack_b0[1] = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_9c = 0xff;
      uStack_98 = 0;
      local_94 = 0;
      local_90 = 0;
      local_88 = 0;
      local_87 = 1;
      local_8c = fVar12;
      func_00110D44(&local_80,(byte *)objStack_b0,0x2a);
      local_50 = *DAT_00193580;
      uStack_4c = DAT_00193580[1];
      local_48 = DAT_00193580[2];
      local_7c = param_1 + 0x11a;
      local_80 = param_1 + 0xf4;
      piStack_60 = &local_38;
      local_54 = DAT_00193584;
      local_74 = param_1[0xb3];
      local_6c = 0x1f;
      local_64 = local_80;
      func_0014F0B0((int)param_1);
      uVar9 = 0xf;
      func_004A7620(*DAT_00193590,(uint *)&local_80,0xf,DAT_0019358c,DAT_00193588);
      func_00192A48((int)param_1,2,uVar9);
      *(undefined1 *)((int)param_1 + 0x445) = 0;
      param_1[0x110] = 0;
    }
    else {
      iVar6 = func_00588BE4((int)puVar4);
      if (iVar6 == *DAT_001933d8) {
        if (((*DAT_001933dc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_001933dc), iVar6 != 0))
        {
          *DAT_001933e0 = DAT_001933e4;
        }
        iVar6 = (**(code **)*puVar4)(puVar4,DAT_001933e0);
        puVar5 = (undefined4 *)0x0;
        if (iVar6 != 0) {
          puVar5 = puVar4;
        }
        if ((puVar5 == (undefined4 *)0x0) ||
           (iVar6 = func_00525BE0((int)puVar5,(float *)(param_1 + 0xf4),fVar12), iVar6 == 0))
        goto LAB_00193414;
      }
      else {
        iVar6 = func_00588BE4((int)puVar4);
        if ((((iVar6 != *DAT_001933e8) &&
             (iVar6 = func_00588BE4((int)puVar4), iVar6 != *DAT_001933ec)) &&
            (iVar6 = func_00588BE4((int)puVar4), iVar6 != *DAT_001933f0)) ||
           (iVar6 = func_0054C21C((int)puVar4,param_1 + 0xf4), iVar6 == 0)) goto LAB_00193414;
        param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) - DAT_001933f4));
      }
      func_00115C70(pfVar8,(float *)(param_1 + 0xf4),(float *)(param_1 + 0xda));
    }
  }
  if ((char)param_1[0x104] != '\x01') {
    iVar6 = param_1[0x105];
    fVar12 = ALBW_AS_F32(param_1[0xf5]);
    iVar7 = param_1[0xf6];
    *(int *)(iVar6 + 4) = param_1[0xf4];
    *(float *)(iVar6 + 8) = fVar12 + *(float *)(iVar6 + 0x58);
    *(int *)(iVar6 + 0xc) = iVar7;
    func_004356B4((int *)param_1[0x105]);
    objStack_b0[0] = 0;
    objStack_b0[1] = 0;
    func_0014E2A0((int)param_1,param_1[0x105],param_1 + 0x106,0x1100,0,0);
  }
  return func_00192B8C((int)param_1);
}

