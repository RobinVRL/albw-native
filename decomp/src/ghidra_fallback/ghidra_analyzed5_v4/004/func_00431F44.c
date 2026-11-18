#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0042E990(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4);
extern int func_0042EFB0(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 *param_5);
extern int func_0068B200(float *param_1,float *param_2);
extern undefined4 DAT_00432238;
extern undefined4 *DAT_0043223c;
extern int *DAT_00432240;
extern float DAT_00432244;
extern int DAT_00432248;
extern int DAT_0043224c;
extern undefined4 *DAT_00432250;
extern char *DAT_00432254;
extern float DAT_00432258;

// USA 00431F44 <- EU 00431F24 (Ghidra, non-matching)
// GLOBAL DAT_00432238 undefined4
// GLOBAL DAT_0043223c undefined4 *
// GLOBAL DAT_00432240 int *
// GLOBAL DAT_00432244 float
// GLOBAL DAT_00432248 int
// GLOBAL DAT_0043224c int
// GLOBAL DAT_00432250 undefined4 *
// GLOBAL DAT_00432254 char *
// GLOBAL DAT_00432258 float

int func_00431F44(int param_1,int param_2,byte *param_3)

{
  ushort uVar1;
  int *piVar2;
  char *pcVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(int *)(albw_frame + 0xc))
  #define local_a0 (*(int *)(albw_frame + 0x10))
  #define local_9c (*(float *)(albw_frame + 0x14))
  #define local_98 (*(int *)(albw_frame + 0x18))
  #define local_94 (*(int *)(albw_frame + 0x1c))
  #define auStack_90 ((undefined4 *)(albw_frame + 0x20))
  #define local_7c (*(int *)(albw_frame + 0x34))
  #define local_74 (*(float * *)(albw_frame + 0x3c))
  #define pfStack_70 (*(float * *)(albw_frame + 0x40))
  #define local_68 (*(char *)(albw_frame + 0x48))
  #define local_64 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(undefined4 *)(albw_frame + 0x58))
  #define local_50 (*(undefined4 * *)(albw_frame + 0x60))
  #define iStack_4c (*(int *)(albw_frame + 0x64))
  #define local_48 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_40 (*(float *)(albw_frame + 0x70))
  #define local_3c (*(float *)(albw_frame + 0x74))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define local_34 (*(float *)(albw_frame + 0x7c))
  #define local_30 (*(float *)(albw_frame + 0x80))
  #define local_2c (*(float *)(albw_frame + 0x84))
  func_00110D44(auStack_90,param_3,0x2a);
  local_64 = DAT_00432238;
  local_60 = *DAT_0043223c;
  uStack_5c = DAT_0043223c[1];
  local_58 = DAT_0043223c[2];
  if ((param_3[0x28] != 0) && (*(char *)(param_1 + 0x4a0) == '\0')) {
    pfVar4 = *(float **)(param_3 + 0x1c);
    fVar10 = *pfVar4 - *(float *)(param_1 + 0x490);
    fVar12 = pfVar4[1] - *(float *)(param_1 + 0x494);
    fVar9 = *(float *)(param_1 + 0x49c) * *(float *)(param_1 + 0x49c);
    fVar11 = pfVar4[2] - *(float *)(param_1 + 0x498);
    if ((fVar9 < fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11) ||
       (pfVar4 = *(float **)(param_3 + 0x20), fVar10 = *pfVar4 - *(float *)(param_1 + 0x490),
       fVar12 = pfVar4[1] - *(float *)(param_1 + 0x494),
       fVar11 = pfVar4[2] - *(float *)(param_1 + 0x498),
       fVar9 < fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11)) {
      local_68 = '\0';
    }
  }
  func_00115C70(&local_a8,*(float **)(param_3 + 0x20),(float *)(param_1 + 4));
  func_00115C70(&local_9c,*(float **)(param_3 + 0x1c),(float *)(param_1 + 4));
  fVar9 = DAT_00432244;
  piVar2 = DAT_00432240;
  pfStack_70 = &local_a8;
  local_74 = &local_9c;
  piVar7 = DAT_00432240 + 0xc;
  DAT_00432240[6] = (int)ALBW_AS_U32(local_a8);
  piVar2[7] = local_a4;
  piVar2[8] = local_a0;
  piVar2[9] = (int)ALBW_AS_U32(local_9c);
  piVar2[10] = local_98;
  piVar2[0xb] = local_94;
  *(undefined1 *)((int)piVar2 + 0x6d) = 0;
  *(undefined1 *)(piVar2 + 0x1b) = 0;
  *(undefined1 *)((int)piVar2 + 0x6f) = 0;
  piVar2[0x18] = (int)ALBW_AS_U32(fVar9);
  *piVar2 = (int)auStack_90;
  *piVar7 = param_2;
  piVar2[0xd] = 0;
  func_00115C70((float *)(piVar2 + 0x12),local_74,pfStack_70);
  iVar5 = DAT_0043224c;
  piVar2[0xe] = *(int *)(DAT_00432248 + 4);
  local_50 = DAT_00432250;
  local_48 = *(undefined4 *)(iVar5 + 0x10);
  uStack_44 = *(undefined4 *)(iVar5 + 0x14);
  iStack_4c = param_1;
  if (local_68 == '\0') {
    if ((ALBW_AS_F32(piVar2[6]) - ALBW_AS_F32(piVar2[9])) * (ALBW_AS_F32(piVar2[6]) - ALBW_AS_F32(piVar2[9])) +
        (ALBW_AS_F32(piVar2[7]) - ALBW_AS_F32(piVar2[10])) * (ALBW_AS_F32(piVar2[7]) - ALBW_AS_F32(piVar2[10])) +
        (ALBW_AS_F32(piVar2[8]) - ALBW_AS_F32(piVar2[0xb])) * (ALBW_AS_F32(piVar2[8]) - ALBW_AS_F32(piVar2[0xb])) <=
        *(float *)(*(int *)(param_1 + 0x58) + 0xe8)) {
      func_0042E990(param_1,(float *)(piVar2 + 6),local_7c,&local_50);
    }
    else {
      local_34 = DAT_00432258;
      local_30 = DAT_00432258;
      local_2c = DAT_00432258;
      local_40 = fVar9;
      local_3c = fVar9;
      local_38 = fVar9;
      func_0068B200(&local_40,(float *)(piVar2 + 6));
      func_0068B200(&local_40,(float *)(piVar2 + 9));
      func_0042EFB0(param_1,&local_40,&local_34,local_7c,&local_50);
    }
  }
  else {
    piVar2[0x1a] = local_7c;
    pcVar3 = DAT_00432254;
    puVar8 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
    uVar1 = *puVar8;
    while (uVar1 != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar8 * 0x10;
      *(int *)(param_1 + 0x70) = iVar5;
      uVar6 = (uint)*(ushort *)(iVar5 + 0xe);
      if ((piVar2[0x1a] & 1 << (uVar6 & 0x1f)) != 0) {
        uVar6 = (uVar6 & 0xb000) >> 0xc;
        if (*pcVar3 == '\0') {
          if (uVar6 != 8) goto LAB_00432144;
        }
        else if (uVar6 != 9) {
LAB_00432144:
          (*(code *)*local_50)(&local_50,param_1);
        }
      }
      puVar8 = puVar8 + 1;
      uVar1 = *puVar8;
    }
  }
  return (int)*(char *)((int)piVar2 + 0x6d);
}

