#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014D7F4(float *param_1,float *param_2,float fparam_0,float fparam_1);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00171EF0(int param_1,undefined4 param_2);
extern int func_00172228(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_0019B04C(uint param_1);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00239E98(int param_1,undefined1 param_2);
extern int func_0023A5E0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0023C204(int param_1,float *param_2);
extern int func_0023C994(void);
extern int func_002916C8(int param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_002FCC34(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841D8(int param_1,undefined4 param_2);
extern int func_0058DA50(int param_1);
extern float *DAT_0023ae28;
extern int *DAT_0023ae2c;
extern int *DAT_0023ae30;
extern float DAT_0023ae34;
extern undefined4 DAT_0023ae38;
extern int *DAT_0023ae3c;
extern undefined4 DAT_0023ae40;
extern int DAT_0023ae44;
extern uint *DAT_0023ae60;
extern undefined DAT_0023ae78;
extern uint *DAT_0023b1ec;
extern undefined4 *DAT_0023b1f0;
extern int *DAT_0023b1f4;
extern int *DAT_0023b1f8;
extern undefined4 *DAT_0023b1fc;
extern undefined DAT_0023b200;
extern undefined DAT_0023b21c;
extern float DAT_0023b220;
extern float DAT_0023b224;
extern char s_SE_GameOctorok_CHARGE_0023ae48[];
extern char s_SE_GameOctorok_CHARGE_FAST_0023ae80[];
extern char s_SE_GameOctorok_SHOT_0023ae64[];
extern char s_SE_GameOctorok_SHOT_FAST_0023ae9c[];
extern char s_SE_GameOctorok_SHOT_FAST_WIND_0023aeb8[];
extern char s__SE_GameOctorok_HIT_BALL_0023b203[];
extern undefined4 _DAT_0023b200;

// USA 0023AA54 <- EU 0023AA54 (Ghidra, non-matching)
// GLOBAL DAT_0023ae28 float *
// GLOBAL DAT_0023ae2c int *
// GLOBAL DAT_0023ae30 int *
// GLOBAL DAT_0023ae34 float
// GLOBAL DAT_0023ae38 undefined4
// GLOBAL DAT_0023ae3c int *
// GLOBAL DAT_0023ae40 undefined4
// GLOBAL DAT_0023ae44 int
// GLOBAL DAT_0023ae60 uint *
// GLOBAL DAT_0023ae78 undefined
// GLOBAL DAT_0023b1ec uint *
// GLOBAL DAT_0023b1f0 undefined4 *
// GLOBAL DAT_0023b1f4 int *
// GLOBAL DAT_0023b1f8 int *
// GLOBAL DAT_0023b1fc undefined4 *
// GLOBAL DAT_0023b200 undefined
// GLOBAL DAT_0023b21c undefined
// GLOBAL DAT_0023b220 float
// GLOBAL DAT_0023b224 float
// GLOBAL s_SE_GameOctorok_CHARGE_0023ae48 string
// GLOBAL s_SE_GameOctorok_CHARGE_FAST_0023ae80 string
// GLOBAL s_SE_GameOctorok_SHOT_0023ae64 string
// GLOBAL s_SE_GameOctorok_SHOT_FAST_0023ae9c string
// GLOBAL s_SE_GameOctorok_SHOT_FAST_WIND_0023aeb8 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0023AA54(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 extraout_r1;
  code *pcVar8;
  int *piVar9;
  float *pfVar10;
  undefined4 uVar11;
  _Alignas(8) unsigned char albw_frame[0x330];
  #define local_328 (*(float *)(albw_frame + 0x8))
  #define fStack_324 (*(float *)(albw_frame + 0xc))
  #define iStack_320 (*(int *)(albw_frame + 0x10))
  #define local_31c (*(float *)(albw_frame + 0x14))
  #define local_318 (*(float *)(albw_frame + 0x18))
  #define iStack_314 (*(int *)(albw_frame + 0x1c))
  #define local_310 (*(int * *)(albw_frame + 0x20))
  #define local_308 (*(int *)(albw_frame + 0x28))
  #define local_304 (*(char * *)(albw_frame + 0x2c))
  #define local_300 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2fc (*(int *)(albw_frame + 0x34))
  #define local_2f8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_2f2 (*(undefined2 *)(albw_frame + 0x3e))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_2d0 (*(int *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x2d4))
  #define local_50 (*(int *)(albw_frame + 0x2e0))
  #define local_4c (*(char * *)(albw_frame + 0x2e4))
  #define local_48 (*(float *)(albw_frame + 0x2e8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2ec))
  #define local_40 (*(float *)(albw_frame + 0x2f0))
  #define local_3c (*(float *)(albw_frame + 0x2f4))
  #define iStack_38 (*(int *)(albw_frame + 0x2f8))
  #define piStack_34 (*(int * *)(albw_frame + 0x2fc))
  func_00115C54(&local_31c,*(float **)(*DAT_0023ae2c + 0x1c),DAT_0023ae28);
  iVar4 = DAT_0023ae44;
  uVar2 = DAT_0023ae40;
  piVar3 = DAT_0023ae3c;
  uVar11 = DAT_0023ae38;
  fVar7 = DAT_0023ae34;
  piVar9 = DAT_0023ae30;
  local_328 = local_31c;
  fStack_324 = local_318;
  iStack_320 = iStack_314;
  local_310 = param_1 + 0x11c;
  switch((char)param_1[0x11b]) {
  case '\0':
    func_0023C994();
    return func_00239E98((int)param_1,1);
  case '\x01':
    if (param_1[0x11c] == 2) {
      func_00172228(*DAT_0023ae30,3,0xffffffff,0xffffffff);
      func_00171EF0(*piVar9,0x1e);
    }
    if (param_1[0x11c] == 0x78) goto LAB_0023accc;
    break;
  case '\x02':
    if (param_1[0x11c] == 0x78) {
      if (param_1[0x11d] < 0x1e) {
        return func_00239E98((int)param_1,4);
      }
      return func_00239E98((int)param_1,6);
    }
    break;
  case '\x03':
    param_1[0x119] = -1;
    if (param_1[0x11c] == 1) {
      local_304 = s_SE_GameOctorok_CHARGE_FAST_0023ae80;
      local_308 = iVar4;
      func_00150A84(param_1,&local_308,0);
    }
    if (param_1[0x11c] == 0x14) {
      *(int *)(*piVar9 + 0x2d0) = 0x1e - param_1[0x11d];
      local_2fc = 0;
      local_2f8 = 0;
      local_300 = 0;
      local_2d4 = 0;
      local_2d0 = 0;
      local_5c = 0;
      func_002DFF7C(&local_31c);
      local_31c = ALBW_AS_F32(func_0019B04C(*DAT_0023ae60));
      local_48 = fVar7;
      uStack_44 = uVar11;
      local_40 = fVar7;
      func_00115C54(&local_3c,(float *)(param_1 + 0xf4),&local_48);
      local_318 = local_3c;
      iStack_314 = iStack_38;
      local_310 = piStack_34;
      local_2fc = param_1[0xfa];
      local_2d0 = param_1[0xb3];
      local_2f2 = 1;
      func_004C4AF4(*piVar3,(int *)&local_31c,0);
      local_4c = s_SE_GameOctorok_SHOT_FAST_0023ae9c;
      local_50 = iVar4;
      func_00150A84(param_1,&local_50,0);
      local_4c = s_SE_GameOctorok_SHOT_FAST_WIND_0023aeb8;
      local_50 = iVar4;
      func_00150A84(param_1,&local_50,0);
      if (param_1[0xd1] == 0) {
LAB_0023acc4:
        param_1[0x124] = 0;
        param_1[0x125] = 0;
        goto LAB_0023accc;
      }
      iVar4 = param_1[0x124];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x125])) {
code_r0x0023ae18:
        func_00110848(iVar4);
      }
LAB_0023aca8:
      func_004A1B9C((int *)&local_318,param_1[0xd1],(uint *)&DAT_0023ae78);
      param_1[0x124] = (int)ALBW_AS_U32(local_318);
      param_1[0x125] = iStack_314;
LAB_0023accc:
      return func_00239E98((int)param_1,2);
    }
    break;
  case '\x04':
    param_1[0x119] = -1;
    if (param_1[0x11c] == 1) {
      local_304 = s_SE_GameOctorok_CHARGE_0023ae48;
      local_308 = iVar4;
      func_00150A84(param_1,&local_308,0);
    }
    if (param_1[0x11c] == 0x1e) {
      *(int *)(*piVar9 + 0x2d0) = 0x1e - param_1[0x11d];
      local_2fc = 0;
      local_2f8 = 0;
      local_300 = 0;
      local_2d4 = 0;
      local_2d0 = 0;
      local_5c = 0;
      func_002DFF7C(&local_31c);
      local_31c = ALBW_AS_F32(func_0019B04C(*DAT_0023ae60));
      local_48 = fVar7;
      uStack_44 = uVar11;
      local_40 = fVar7;
      func_00115C54(&local_3c,(float *)(param_1 + 0xf4),&local_48);
      local_318 = local_3c;
      iStack_314 = iStack_38;
      local_310 = piStack_34;
      local_2fc = param_1[0xfa];
      local_2d0 = param_1[0xb3];
      local_2f2 = 0;
      func_004C4AF4(*piVar3,(int *)&local_31c,0);
      local_4c = s_SE_GameOctorok_SHOT_0023ae64;
      local_50 = iVar4;
      func_00150A84(param_1,&local_50,0);
      if (param_1[0xd1] == 0) goto LAB_0023acc4;
      iVar4 = param_1[0x124];
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == param_1[0x125])) goto code_r0x0023ae18;
      goto LAB_0023aca8;
    }
    break;
  case '\x05':
    puVar6 = (undefined4 *)func_0052FBA0(*DAT_0023ae3c + 0x3dbbc,param_1[0x123]);
    if (((*DAT_0023b1ec & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0023b1ec), iVar5 != 0)) {
      *DAT_0023b1f0 = uVar2;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar6)(puVar6,DAT_0023b1f0), iVar5 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 == (undefined4 *)0x0) {
      param_1[0x123] = 0;
      goto LAB_0023accc;
    }
    break;
  case '\x06':
    iVar5 = func_005841D8(*DAT_0023ae3c,*DAT_0023ae60);
    if (iVar5 == 0) {
      return func_00239E98((int)param_1,7);
    }
    break;
  case '\a':
    iVar5 = func_0058DA50(*DAT_0023b1f4);
    if (iVar5 != 0) {
      return func_00239E98((int)param_1,8);
    }
    break;
  case '\b':
    piVar3 = (int *)(**(code **)(*(int *)param_1[0x12e] + 0x40))((int *)param_1[0x12e]);
    iVar4 = (**(code **)(*piVar3 + 0x28))(piVar3);
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = (char)param_1[0x138];
    }
    if (iVar4 == 0 || cVar1 == '\0') {
      return 0;
    }
    func_002916C8(*DAT_0023ae2c);
    func_00171EF0(*piVar9,0x1e);
    param_1[0x11d] = 0;
    *(undefined1 *)(param_1 + 0x138) = 0;
    func_002FCC34(param_1[0x12d]);
    return func_00239E98((int)param_1,0);
  }
  func_001E8268(*(int *)(*DAT_0023b1f8 + 0x18),param_1 + 0x122,param_1 + 0x107,DAT_0023b1fc);
  iVar5 = _DAT_0023b200;
  param_1[0x10d] = (int)ALBW_AS_U32(fVar7);
  param_1[0x10e] = iVar5;
  param_1[0x10f] = (int)ALBW_AS_U32(fVar7);
  piVar9 = (int *)0x1f00;
  pcVar8 = (code *)(param_1 + 0x127);
  func_0014E2A0((int)param_1,param_1[0x126],pcVar8,0x1f00,0,0);
  if ((param_1[0x119] < 0) || (iVar5 = param_1[0x119] + 1, param_1[0x119] = iVar5, iVar5 != 3))
  goto LAB_0023b1b0;
  puVar6 = (undefined4 *)func_0052FBA0(*piVar3 + 0x3dbbc,param_1[0x11a]);
  if (((*DAT_0023b1ec & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0023b1ec), iVar5 != 0)) {
    *DAT_0023b1f0 = uVar2;
  }
  if (puVar6 == (undefined4 *)0x0) {
LAB_0023b118:
    puVar6 = (undefined4 *)0x0;
  }
  else {
    pcVar8 = *(code **)*puVar6;
    iVar5 = (*pcVar8)(puVar6,DAT_0023b1f0);
    if (iVar5 == 0) goto LAB_0023b118;
  }
  if (puVar6 != (undefined4 *)0x0) {
    func_0023C204((int)puVar6,(float *)(param_1 + 0x110));
    local_304 = s__SE_GameOctorok_HIT_BALL_0023b203 + 1;
    pcVar8 = (code *)0x0;
    local_308 = iVar4;
    func_00150A84(param_1,&local_308,0);
    pfVar10 = (float *)(param_1 + 0x124);
    if (param_1[0xd1] == 0) {
      *pfVar10 = 0.0;
      param_1[0x125] = 0;
    }
    else {
      fVar7 = *pfVar10;
      if ((fVar7 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar7) + 0x1c) == param_1[0x125])) {
        func_00110848((int)ALBW_AS_U32(fVar7));
      }
      pcVar8 = (code *)&DAT_0023b21c;
      func_004A1B9C((int *)&local_318,param_1[0xd1],(uint *)&DAT_0023b21c);
      *pfVar10 = local_318;
      param_1[0x125] = iStack_314;
    }
    if (param_1[0x11d] < 0x1e) {
      func_00239E98((int)param_1,3);
    }
  }
LAB_0023b1b0:
  func_0014D7F4((float *)(param_1 + 0x107),&local_328,DAT_0023b224,DAT_0023b220);
  func_0023A5E0((int)param_1,extraout_r1,pcVar8,piVar9);
  *local_310 = param_1[0x11c] + 1;
  return 0;
}

