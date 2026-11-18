#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00129460(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_00129EE4(int param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001D3EA4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, undefined2 param_5,undefined2 param_6);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0051D37C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00520FD4(void);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00656A1C(undefined4 *param_1,undefined1 param_2);
extern int DAT_001298cc;
extern int DAT_001298d0;
extern float DAT_001298fc;
extern int *DAT_00129900;
extern uint DAT_00129904;
extern float *DAT_00129908;
extern int *DAT_0012990c;
extern int DAT_00129910;
extern int DAT_00129914;
extern float DAT_00129918;
extern int *DAT_0012991c;
extern float DAT_00129920;
extern char s_SE_Lynel_FRAME_001298d4[];
extern char s_SE_Lynel_FRAME_FINISH_001298e4[];

// USA 0012953C <- EU 0012953C (Ghidra, non-matching)
// GLOBAL DAT_001298cc int
// GLOBAL DAT_001298d0 int
// GLOBAL DAT_001298fc float
// GLOBAL DAT_00129900 int *
// GLOBAL DAT_00129904 uint
// GLOBAL DAT_00129908 float *
// GLOBAL DAT_0012990c int *
// GLOBAL DAT_00129910 int
// GLOBAL DAT_00129914 int
// GLOBAL DAT_00129918 float
// GLOBAL DAT_0012991c int *
// GLOBAL DAT_00129920 float
// GLOBAL s_SE_Lynel_FRAME_001298d4 string
// GLOBAL s_SE_Lynel_FRAME_FINISH_001298e4 string

undefined4 func_0012953C(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 ((char * *)(albw_frame + 0xc))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define fStack_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(float *)(albw_frame + 0x40))
  #define local_2c (*(float *)(albw_frame + 0x44))
  #define local_28 (*(float *)(albw_frame + 0x48))
  #define local_24 (*(float *)(albw_frame + 0x4c))
  #define local_20 (*(int *)(albw_frame + 0x50))
  #define local_1c (*(int *)(albw_frame + 0x54))
  #define local_18 ((int *)(albw_frame + 0x58))
  cVar1 = *(char *)((int)param_1 + 0x975);
  if (cVar1 == '\0') {
    iVar6 = func_0058A8F0((int)param_1);
    if (iVar6 != 0) {
      *(undefined1 *)((int)param_1 + 0x975) = 1;
      goto LAB_00129588;
    }
  }
  else if (cVar1 == '\x01') {
LAB_00129588:
    iVar6 = DAT_001298cc;
    if ((uint)param_1[0x254] < (uint)param_1[0x255]) {
      param_1[0x254] = param_1[0x254] + 1;
    }
    else {
      param_1[0x255] = 5;
      param_1[0x256] = iVar6;
      param_1[0x254] = 0;
      local_64[0] = (char *)param_1[0xb3];
      param_4 = param_1[0x24d];
      func_001D3EA4(param_1 + 0x243,param_1[0x24f],local_64,param_4,0,0);
    }
    local_68 = DAT_001298d0;
    if ((uint)param_1[0x25a] < (uint)param_1[0x25b]) {
      param_1[0x25a] = param_1[0x25a] + 1;
      local_64[0] = s_SE_Lynel_FRAME_001298d4;
      param_3 = 0;
      func_001507D8((int)param_1,&local_68,0);
    }
    else {
      param_4 = 0;
      func_004FC07C((int)param_1,8,0xffffffff,0);
      *(undefined1 *)((int)param_1 + 0x975) = 2;
      local_64[0] = s_SE_Lynel_FRAME_FINISH_001298e4;
      param_3 = 0;
      func_00150A84(param_1,&local_68,0);
    }
  }
  else {
    if (cVar1 != '\x02') goto LAB_00129754;
    iVar6 = func_0058A8F0((int)param_1);
    if (iVar6 != 0) {
      func_00129EE4((int)param_1);
    }
  }
  if (*(char *)((int)param_1 + 0x975) == '\x01') {
    bVar5 = func_00520FD4();
    if (!bVar5) {
      iVar6 = func_00520FC0();
      fVar11 = *(float *)(iVar6 + 4) - ALBW_AS_F32(param_1[0xf5]);
      if (fVar11 <= DAT_001298fc) {
        fVar11 = -fVar11;
      }
      if (((int)ALBW_AS_U32(fVar11) < 0x3f800001) &&
         (lVar2 = (ulonglong)DAT_00129904 * (ulonglong)*(uint *)(*DAT_00129900 + 0x10) +
                  (ulonglong)DAT_00129904, param_3 = (undefined4)lVar2,
         *(uint *)(*DAT_00129900 + 0x10) + (uint)((ulonglong)lVar2 >> 0x21) * -7 != 0))
      goto LAB_00129748;
    }
    bVar5 = func_00520FD4();
    if (bVar5) {
LAB_00129730:
      return func_00656A1C(param_1 + 0x22f,0);
    }
    puVar7 = (undefined4 *)func_00520FC0();
    iVar6 = func_00129460((int)param_1,puVar7,param_3,param_4);
    if (iVar6 != 0) goto LAB_00129730;
  }
LAB_00129748:
  if (*(char *)((int)param_1 + 0x975) == '\x02') {
    return 0;
  }
LAB_00129754:
  piVar10 = param_1 + 0x241;
  local_38 = *DAT_00129908;
  fStack_34 = DAT_00129908[1];
  local_30 = DAT_00129908[2];
  local_2c = *DAT_00129908;
  local_28 = DAT_00129908[1];
  local_24 = DAT_00129908[2];
  func_001119F4(&local_68,
                (undefined4 *)
                (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x249] * 0x30));
  local_2c = local_5c;
  local_28 = ALBW_AS_F32(local_4c);
  local_24 = ALBW_AS_F32(local_3c);
  pfVar8 = (float *)func_00520FC0();
  func_00115C70(&local_38,pfVar8,&local_2c);
  local_20 = func_004904CC(local_38,local_30);
  param_1[0x24c] = local_20;
  piVar3 = DAT_0012990c;
  local_20 = local_20 - param_1[0xfa];
  func_0051D37C(&local_20,-*DAT_0012990c,*DAT_0012990c);
  fVar11 = DAT_00129918;
  iVar4 = DAT_00129914;
  iVar6 = DAT_00129910;
  param_1[0x24e] = local_20;
  iVar6 = func_0051D2F4(piVar10,local_20,iVar4,iVar6,fVar11);
  if (iVar6 != 0) {
    local_1c = *piVar10 + *piVar3;
    uVar9 = func_0058E2B8(&local_1c);
    if ((uint)piVar3[9] <= uVar9) {
      local_18[0] = *piVar10 - *piVar3;
      uVar9 = func_0058E2B8(local_18);
      if ((uint)piVar3[9] <= uVar9) {
        if (*(char *)((int)param_1 + 0x975) == '\0') {
          return 0;
        }
        return func_004FC07C((int)param_1,6,0xffffffff,0);
      }
    }
    func_0051D2F4(param_1 + 0xfa,param_1[0x24c],DAT_0012991c[-1],*DAT_0012991c,DAT_00129920);
    if (*(char *)((int)param_1 + 0x975) != '\0') {
      return func_004FC07C((int)param_1,7,0xffffffff,0);
    }
  }
  return 0;
}

