#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001512E8(int *param_1);
extern int func_001920E4(float *param_1,int param_2,float fparam_0);
extern int func_002877C4(undefined4 *param_1,int param_2);
extern int func_003929C4(int *param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_00511A40(uint param_1);
extern int func_00511CC0(int param_1);
extern int func_00511EC0(int param_1,uint *param_2,float *param_3,float *param_4);
extern float DAT_00512660;
extern int *DAT_00512664;
extern int *DAT_00512668;
extern undefined4 DAT_0051266c;
extern int *DAT_00512670;
extern undefined4 DAT_00512674;
extern undefined4 DAT_00512678;
extern undefined4 *DAT_0051267c;
extern undefined4 DAT_00512680;
extern float DAT_00512684;

// USA 005122E8 <- EU 005122C0 (Ghidra, non-matching)
// GLOBAL DAT_00512660 float
// GLOBAL DAT_00512664 int *
// GLOBAL DAT_00512668 int *
// GLOBAL DAT_0051266c undefined4
// GLOBAL DAT_00512670 int *
// GLOBAL DAT_00512674 undefined4
// GLOBAL DAT_00512678 undefined4
// GLOBAL DAT_0051267c undefined4 *
// GLOBAL DAT_00512680 undefined4
// GLOBAL DAT_00512684 float

undefined4 func_005122E8(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(int * *)(albw_frame + 0x8))
  #define local_c4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_bc (*(uint *)(albw_frame + 0x14))
  #define local_b8 (*(int * *)(albw_frame + 0x18))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_b0 (*(int *)(albw_frame + 0x20))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_90 (*(float *)(albw_frame + 0x40))
  #define local_8c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x50))
  #define local_7c (*(undefined4 *)(albw_frame + 0x54))
  #define local_78 (*(undefined4 *)(albw_frame + 0x58))
  #define local_74 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define local_6c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x68))
  #define local_64 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(undefined1 *)(albw_frame + 0x78))
  #define local_57 (*(undefined1 *)(albw_frame + 0x79))
  #define local_54 (*(float *)(albw_frame + 0x7c))
  #define local_50 (*(int * *)(albw_frame + 0x80))
  #define local_4c (*(undefined4 *)(albw_frame + 0x84))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define fStack_40 (*(float *)(albw_frame + 0x90))
  #define local_3c (*(float *)(albw_frame + 0x94))
  #define local_38 (*(float *)(albw_frame + 0x98))
  #define piStack_34 (*(int * *)(albw_frame + 0x9c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0xa0))
  param_1[0x129] = param_1[0x129] + 1;
  func_00511CC0((int)param_1);
  piVar2 = DAT_00512664;
  fVar4 = DAT_00512660;
  if (*(char *)((int)param_1 + 0x479) != '\0') {
    iVar3 = func_003929C4(param_1 + 0x123);
    if (iVar3 == 0) {
      return 0;
    }
    (**(code **)(param_1[200] + 0x34))(param_1 + 200);
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    return 0;
  }
  if ((*(char *)((int)param_1 + 0x4be) != '\0') &&
     (iVar3 = param_1[0x12a], param_1[0x12a] = iVar3 + -1, iVar3 + -1 < 1)) {
    *(undefined1 *)((int)param_1 + 0x4be) = 0;
    *(undefined1 *)((int)param_1 + 0x4bd) = 1;
    param_1[0x129] = 0;
    param_1[0x128] = param_1[0xf5];
    param_1[0xf8] = (int)ALBW_AS_U32(fVar4);
    func_001512E8((int *)param_1[0x12e]);
    func_004A8BFC(*DAT_00512668,(int)(param_1 + 0x105),(uint)*(byte *)(param_1 + 0x12f));
    local_b4 = DAT_0051266c;
    local_b8 = piVar2;
    func_00150A84(param_1,(int *)&local_b8,0);
    if (*(char *)((int)param_1 + 0x479) != '\0') {
      return 0;
    }
  }
  if (*(char *)((int)param_1 + 0x2d7) != '\0') {
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x47a) = 0;
  *(undefined1 *)(param_1 + 0x11f) = 0;
  *(undefined1 *)((int)param_1 + 0x47b) = 0;
  func_00511A40((uint)param_1);
  if (*(char *)((int)param_1 + 0x47a) != '\0') {
    if ((char)param_1[0x11f] == '\0') {
      if (*(char *)((int)param_1 + 0x47b) != '\0') {
        if ((char)param_1[300] == '\0') {
          *(undefined1 *)(param_1 + 300) = 1;
        }
        goto LAB_005124b8;
      }
LAB_0051251c:
      local_70 = DAT_00512678;
      local_80 = 0;
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_6c = 0xff;
      uStack_68 = 0;
      local_64 = 0;
      local_60 = 0;
      local_58 = 0;
      local_57 = 1;
      local_5c = fVar4;
      func_00110D44(&local_bc,(byte *)&local_80,0x2a);
      uVar6 = (ulonglong)(uint)ALBW_AS_U32(DAT_00512684);
      local_8c = *DAT_0051267c;
      uStack_88 = DAT_0051267c[1];
      uStack_84 = DAT_0051267c[2];
      local_b8 = param_1 + 0x13e;
      local_bc = 0;
      local_b0 = param_1[0xb3];
      cVar1 = (char)param_1[0x11f];
      local_90 = fVar4;
      local_a8 = DAT_00512680;
      fVar5 = DAT_00512684;
      while (cVar1 == '\0') {
        *(undefined1 *)((int)param_1 + 0x47a) = 0;
        local_44 = fVar4;
        fStack_40 = fVar5;
        local_3c = fVar4;
        func_00115C70(&local_54,(float *)(param_1 + 0xf4),&local_44);
        local_38 = local_54;
        piStack_34 = local_50;
        uStack_30 = local_4c;
        func_00511EC0((int)param_1,&local_bc,(float *)(param_1 + 0xf4),&local_38);
        if (0x3f000000 < (int)ALBW_AS_U32(fVar5)) break;
        fVar5 = fVar5 + ALBW_AS_F32(uVar6);
        cVar1 = (char)param_1[0x11f];
      }
      *(undefined1 *)((int)param_1 + 0x47a) = 1;
      if ((char)param_1[0x11f] == '\0') {
        (**(code **)(param_1[200] + 0x30))(param_1 + 200);
        local_4c = DAT_00512674;
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
        local_50 = piVar2;
        func_00150A84(param_1,(int *)&local_50,0);
      }
    }
    else {
      if (*(char *)(*DAT_00512670 + 0x18) != '\a' && *(char *)(*DAT_00512670 + 0x18) != '%') {
        func_001920E4((float *)(param_1 + 0x120),(int)(char)param_1[0x11e],ALBW_AS_F32(param_1[299]));
      }
      (**(code **)(param_1[200] + 0x30))(param_1 + 200);
      local_b4 = DAT_00512674;
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
      local_b8 = piVar2;
      func_00150A84(param_1,(int *)&local_b8,0);
      if (*(char *)((int)param_1 + 0x47b) == '\0') {
        if ((char)param_1[0x11f] == '\0') goto LAB_0051251c;
        (**(code **)(param_1[200] + 0x30))(param_1 + 200);
        local_b4 = DAT_00512674;
        *(undefined1 *)((int)param_1 + 0x2d7) = 1;
        local_b8 = piVar2;
        func_00150A84(param_1,(int *)&local_b8,0);
      }
    }
  }
  if ((char)param_1[300] == '\0') {
    return 0;
  }
LAB_005124b8:
  if (ALBW_AS_F32(param_1[0x121]) < ALBW_AS_F32(param_1[0xf5])) {
    return 0;
  }
  func_002877C4(param_1 + 0x120,(int)(char)param_1[0x11e]);
  param_1[0xf4] = param_1[0x120];
  param_1[0xf5] = param_1[0x121];
  local_c4 = DAT_00512674;
  param_1[0xf6] = param_1[0x122];
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  local_c8 = piVar2;
  return func_00150A84(param_1,(int *)&local_c8,0);
}

