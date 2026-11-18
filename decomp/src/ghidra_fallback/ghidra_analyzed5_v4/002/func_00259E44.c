#include "ghidra_types.h"

extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00294F4C(int param_1,int param_2,float fparam_0);
extern int func_00297138(int param_1,int *param_2);
extern int func_00297298(int param_1,int param_2);
extern int func_00297448(int param_1,int param_2,float fparam_0);
extern int func_00297474(int param_1,int param_2,float fparam_0);
extern int func_004EC074(int param_1,int param_2,float fparam_0);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern float func_005380E0(int param_1);
extern float func_005381B4(int param_1);
extern int func_005382AC(undefined4 param_1,int *param_2,char *param_3,int param_4);
extern int func_00539024(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_00539200(int param_1);
extern int func_00540368(int param_1,uint param_2);
extern int func_00540980(int param_1);
extern int func_00540A70(int param_1,int *param_2);
extern int func_005822A0(int param_1,uint param_2,undefined4 param_3);
extern int func_00584B94(int param_1,int param_2);
extern float DAT_0025a1dc;
extern undefined4 DAT_0025a1e0;
extern int *DAT_0025a1e4;
extern int DAT_0025a1e8;
extern int DAT_0025a1ec;
extern float DAT_0025a20c;
extern float DAT_0025a210;
extern float DAT_0025a214;
extern int *DAT_0025a218;
extern int DAT_0025a21c;
extern int *DAT_0025a220;
extern int DAT_0025a224;
extern int *DAT_0025a228;
extern float DAT_0025a22c;
extern float DAT_0025a230;
extern float DAT_0025a234;
extern char s_SE_ENV_DUNGEON_HERA_WIND_0025a1f0[];

// USA 00259E44 <- EU 00259E6C (Ghidra, non-matching)
// GLOBAL DAT_0025a1dc float
// GLOBAL DAT_0025a1e0 undefined4
// GLOBAL DAT_0025a1e4 int *
// GLOBAL DAT_0025a1e8 int
// GLOBAL DAT_0025a1ec int
// GLOBAL DAT_0025a20c float
// GLOBAL DAT_0025a210 float
// GLOBAL DAT_0025a214 float
// GLOBAL DAT_0025a218 int *
// GLOBAL DAT_0025a21c int
// GLOBAL DAT_0025a220 int *
// GLOBAL DAT_0025a224 int
// GLOBAL DAT_0025a228 int *
// GLOBAL DAT_0025a22c float
// GLOBAL DAT_0025a230 float
// GLOBAL DAT_0025a234 float
// GLOBAL s_SE_ENV_DUNGEON_HERA_WIND_0025a1f0 string

undefined4 func_00259E44(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fparam_1;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x8))
  #define local_74 ((char *)(albw_frame + 0xc))
  #define uStack_35 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  iVar5 = DAT_0025a1e8;
  piVar1 = DAT_0025a1e4;
  uVar10 = CONCAT44(DAT_0025a1e0,DAT_0025a1dc);
  fVar9 = DAT_0025a1dc;
  if (*(char *)(param_1 + 0xd9) != '\0') {
    local_2c = *(undefined4 *)(DAT_0025a1ec + 0x3c);
    local_30 = DAT_0025a1e8;
    iVar3 = func_00540A70(*DAT_0025a1e4,&local_30);
    if (iVar3 == 0) {
      bVar2 = true;
      goto LAB_00259ec8;
    }
  }
  bVar2 = false;
LAB_00259ec8:
  if (bVar2) {
    local_7c = s_SE_ENV_DUNGEON_HERA_WIND_0025a1f0;
    local_80 = iVar5;
    func_004EC988(*piVar1,&local_80,param_1 + 0x78);
    bVar2 = func_00539200(param_1 + 0x78);
    if (bVar2) {
      fparam_1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4c),
                                            (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = ALBW_AS_F32(uVar10);
      fVar8 = DAT_0025a20c + fparam_1 * DAT_0025a210;
      fVar7 = DAT_0025a20c;
      if ((DAT_0025a20c <= fVar8) && (fVar7 = fVar8, fVar9 < fVar8)) {
        fVar7 = fVar9;
      }
      func_0025B860(param_1 + 0x78,0,fVar7,fparam_1);
      fVar9 = fVar9 - fVar7 * DAT_0025a214;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x4c);
  bVar2 = uVar4 == *(uint *)(param_1 + 0x50);
  if (bVar2) {
    uVar4 = (uint)*(byte *)(param_1 + 0xda);
  }
  if (!bVar2 || uVar4 != 0) {
    if (*(char *)(param_1 + 0xd9) == '\0') {
      iVar5 = func_00540980(*piVar1);
      if (iVar5 != 0) {
        func_00294F4C(*piVar1,0x3c,ALBW_AS_F32(uVar10));
      }
    }
    else {
      iVar5 = func_00540980(*piVar1);
      if ((iVar5 != 0) && (iVar5 = func_00540368(*piVar1,0x10), iVar5 == 0)) {
        func_00294F4C(*piVar1,0x3c,fVar9);
      }
    }
  }
  if ((*DAT_0025a218 != 0) && (bVar2 = func_00584B94(*DAT_0025a218,DAT_0025a21c), !bVar2)) {
    uVar6 = 1;
    bVar2 = func_005822A0(*DAT_0025a220,0x17,1);
    iVar5 = DAT_0025a224;
    if (bVar2) {
      if (*(char *)(param_1 + 0xda) == '\0') {
        return 0;
      }
      local_7c = local_74;
      uStack_78 = 0x40;
      uStack_35 = 0;
      local_74[0] = '\0';
      local_80 = DAT_0025a224;
      if (*(char *)(param_1 + 0xd9) == '\0') {
        func_005382AC(param_1,&local_80,(char *)(*DAT_0025a228 + 0x18),1);
        iVar5 = func_00540A70(*piVar1,&local_80);
        if (iVar5 == 0) {
          func_00297298(*piVar1,0x1e);
          func_00259354(*piVar1,&local_80,0x3c);
          func_00294F4C(*piVar1,0x3c,fVar9);
        }
      }
      else {
        func_00539024(param_1,(int)&local_80,uVar6,param_4);
        iVar5 = func_00540A70(*piVar1,&local_80);
        if (iVar5 == 0) {
          func_00297298(*piVar1,0x1e);
          func_00259354(*piVar1,&local_80,0x3c);
          func_00294F4C(*piVar1,0x3c,ALBW_AS_F32(uVar10));
        }
      }
    }
    else if ((*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x4c)) &&
            (0xc < *(int *)(param_1 + 0x4c))) {
      func_00297298(*piVar1,0x1e);
      local_7c = local_74;
      uStack_78 = 0x40;
      uStack_35 = 0;
      local_74[0] = '\0';
      local_80 = iVar5;
      func_00539024(param_1,(int)&local_80,uVar6,param_4);
      func_00297138(*piVar1,&local_80);
      func_00294F4C(*piVar1,0x3c,ALBW_AS_F32(uVar10));
    }
  }
  fVar9 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
  if (*(char *)(param_1 + 0xda) != '\0') {
    if (*(char *)(param_1 + 0xd9) == '\0') {
      fVar7 = func_005380E0(param_1);
      func_00297448(*piVar1,0x3c,fVar7);
      fVar7 = func_005381B4(param_1);
      func_004EC074(*piVar1,0x3c,fVar7);
      return func_00297474(*piVar1,0x3c,fVar9);
    }
    func_00297448(*piVar1,0x3c,DAT_0025a22c);
    func_004EC074(*piVar1,0x3c,DAT_0025a230);
    func_00297474(*piVar1,0x3c,DAT_0025a234);
  }
  return 0;
}

