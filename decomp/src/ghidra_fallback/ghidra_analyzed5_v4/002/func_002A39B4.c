#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A45FC(int param_1,int param_2);
extern int func_002A604C(int param_1);
extern int func_002A6B54(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern undefined4 *DAT_002a3c90;
extern float DAT_002a3c94;
extern float DAT_002a3c98;
extern int DAT_002a3c9c;
extern undefined4 DAT_002a3ca0;
extern undefined4 DAT_002a3ca4;
extern undefined4 DAT_002a3ca8;

// USA 002A39B4 <- EU 002A3990 (Ghidra, non-matching)
// GLOBAL DAT_002a3c90 undefined4 *
// GLOBAL DAT_002a3c94 float
// GLOBAL DAT_002a3c98 float
// GLOBAL DAT_002a3c9c int
// GLOBAL DAT_002a3ca0 undefined4
// GLOBAL DAT_002a3ca4 undefined4
// GLOBAL DAT_002a3ca8 undefined4

void func_002A39B4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define afStack_40 ((float *)(albw_frame + 0x10))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  func_002A45FC(param_1,0);
  puVar2 = DAT_002a3c90;
  *(undefined1 *)(param_1 + 0xb91) = 0;
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  *(undefined4 *)(param_1 + 0xa98) = puVar2[2];
  *(undefined4 *)(param_1 + 0xa90) = uVar7;
  *(undefined4 *)(param_1 + 0xa94) = uVar8;
  func_002A604C(param_1);
  func_002A6B54(param_1);
  fVar10 = DAT_002a3c94;
  fVar12 = *(float *)(param_1 + 0xb28);
  fVar12 = fVar12 + (*(float *)(param_1 + 0xb2c) - fVar12) * DAT_002a3c94;
  *(float *)(param_1 + 0xb28) = fVar12;
  fVar11 = DAT_002a3c98;
  if (fVar12 <= *(float *)(param_1 + 0xb2c) + fVar10) {
    *(float *)(param_1 + 0xb28) = *(float *)(param_1 + 0xb2c);
  }
  *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xb4c) < 0) {
    pfVar3 = (float *)func_00520FC0();
    iVar6 = DAT_002a3c9c;
    fVar10 = *pfVar3 - *(float *)(param_1 + 8);
    fVar12 = pfVar3[2] - *(float *)(param_1 + 0x10);
    if ((int)ALBW_AS_U32((fVar10 * fVar10 + fVar12 * fVar12)) < DAT_002a3c9c) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      uVar5 = (int)((ulonglong)uVar5 * 4 >> 0x20) * 0x40000000;
      iVar9 = 0;
      local_2c = DAT_002a3ca0;
      local_34 = fVar11;
      local_30 = fVar11;
      do {
        func_004D7F70(&local_34,uVar5);
        func_00115C54(&local_50,&local_34,(float *)(param_1 + 0xa90));
        pfVar3 = (float *)func_00520FC0();
        if (iVar6 < (int)ALBW_AS_U32(((*pfVar3 - local_50) * (*pfVar3 - local_50) +
                         (pfVar3[2] - local_48) * (pfVar3[2] - local_48)))) {
          *(float *)(param_1 + 0xa90) = local_50;
          *(undefined4 *)(param_1 + 0xa94) = uStack_4c;
          *(float *)(param_1 + 0xa98) = local_48;
          break;
        }
        iVar9 = iVar9 + 1;
        uVar5 = uVar5 + 0x40000000;
      } while (iVar9 < 4);
    }
  }
  else {
    pfVar3 = (float *)func_00520FC0();
    fVar11 = *pfVar3 - *(float *)(param_1 + 0xa9c);
    fVar10 = pfVar3[2] - *(float *)(param_1 + 0xaa4);
    iVar6 = 1;
    *(undefined4 *)(param_1 + 0xa90) = *(undefined4 *)(param_1 + 0xa9c);
    *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0xaa0);
    *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_1 + 0xaa4);
    uVar14 = (ulonglong)(uint)ALBW_AS_U32((fVar11 * fVar11 + fVar10 * fVar10));
    do {
      pfVar3 = (float *)func_00520FC0();
      iVar9 = param_1 + iVar6 * 0xc;
      fVar10 = *pfVar3 - *(float *)(iVar9 + 0xa9c);
      fVar11 = pfVar3[2] - *(float *)(iVar9 + 0xaa4);
      if (ALBW_AS_F32(uVar14) < fVar10 * fVar10 + fVar11 * fVar11) {
        pfVar3 = (float *)func_00520FC0();
        fVar12 = *(float *)(iVar9 + 0xa9c);
        fVar13 = *(float *)(iVar9 + 0xaa4);
        fVar11 = *pfVar3 - fVar12;
        uVar7 = *(undefined4 *)(iVar9 + 0xaa0);
        fVar10 = pfVar3[2] - fVar13;
        *(float *)(param_1 + 0xa90) = fVar12;
        *(undefined4 *)(param_1 + 0xa94) = uVar7;
        *(float *)(param_1 + 0xa98) = fVar13;
        uVar14 = (ulonglong)(uint)ALBW_AS_U32((fVar11 * fVar11 + fVar10 * fVar10));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
  }
  func_004FC07C(param_1,0x13,0xffffffff,0);
  if (*(char *)(param_1 + 0xb92) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xb97);
  }
  else {
    if (*(char *)(param_1 + 0xb92) != '\x03') goto LAB_002a3c48;
    cVar1 = *(char *)(param_1 + 0xb96);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xb2c) = DAT_002a3ca4;
  }
LAB_002a3c48:
  func_00115C70(afStack_40,(float *)(param_1 + 0xa90),(float *)(param_1 + 0x3d0));
  iVar6 = func_0068C690(afStack_40);
  *(int *)(param_1 + 0xb7c) = iVar6;
  uVar7 = DAT_002a3ca8;
  *(undefined4 *)(param_1 + 0xb64) = 0x32;
  *(undefined4 *)(param_1 + 0xb68) = uVar7;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  return;
}

