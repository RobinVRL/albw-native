#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_0017B8D0(int param_1);
extern int func_0017BF74(int param_1);
extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00270784(int param_1,int param_2);
extern int func_00312754(int param_1);
extern int func_003616E4(int param_1);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004BC7BC(int param_1);
extern float func_004BDFFC(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_0051B7C4(int param_1);
extern int func_00520FC0(void);
extern int func_006260FC(int param_1,int param_2,undefined1 param_3);
extern int func_00626A48(int param_1);
extern int *DAT_00312f98;
extern int *DAT_00312f9c;
extern float DAT_00312fa0;
extern float DAT_00312fa4;
extern undefined4 *DAT_00312fa8;
extern float DAT_00312fac;
extern float DAT_00312fb0;
extern int *DAT_00312fb4;
extern float DAT_00312fb8;
extern float DAT_00312fbc;
extern float DAT_00312fc0;
extern undefined4 *DAT_00312fc4;
extern float *DAT_00312fc8;
extern int *DAT_00313100;

// USA 00312CA0 <- EU 00312C7C (Ghidra, non-matching)
// GLOBAL DAT_00312f98 int *
// GLOBAL DAT_00312f9c int *
// GLOBAL DAT_00312fa0 float
// GLOBAL DAT_00312fa4 float
// GLOBAL DAT_00312fa8 undefined4 *
// GLOBAL DAT_00312fac float
// GLOBAL DAT_00312fb0 float
// GLOBAL DAT_00312fb4 int *
// GLOBAL DAT_00312fb8 float
// GLOBAL DAT_00312fbc float
// GLOBAL DAT_00312fc0 float
// GLOBAL DAT_00312fc4 undefined4 *
// GLOBAL DAT_00312fc8 float *
// GLOBAL DAT_00313100 int *

/* WARNING: Variable defined which should be unmapped: objStack_48 */

undefined1 func_00312CA0(int param_1,undefined4 param_2)

{
  short sVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  fVar11 = DAT_00312fa4;
  fVar9 = DAT_00312fa0;
  piVar2 = DAT_00312f9c;
  iVar4 = *DAT_00312f98;
  switch(param_2) {
  case 0:
    if (iVar4 != 0) {
      func_003616E4(iVar4);
    }
    break;
  case 1:
    iVar4 = *DAT_00312f9c;
    if (iVar4 == 0) {
      return 1;
    }
    sVar1 = *(short *)(param_1 + 0x95a);
    pfVar6 = (float *)(param_1 + 0xa48);
    puVar14 = (undefined4 *)(param_1 + 0xa54);
    if (sVar1 == 0) {
      if (*(short *)(param_1 + 0xa34) == 0xaf) {
        *(float *)(param_1 + 0xa80) = DAT_00312fa4;
        puVar3 = DAT_00312fa8;
        iVar4 = *(int *)(iVar4 + 0x18);
        if (iVar4 == 0) goto LAB_00312e24;
        *puVar14 = *DAT_00312fa8;
        *(undefined4 *)(param_1 + 0xa58) = puVar3[1];
        *(undefined4 *)(param_1 + 0xa5c) = puVar3[2];
        *(undefined4 *)(param_1 + 0xa60) = puVar3[3];
        uVar12 = puVar3[5];
        uVar13 = puVar3[6];
        *(undefined4 *)(param_1 + 0xa64) = puVar3[4];
        *(undefined4 *)(param_1 + 0xa68) = uVar12;
        *(undefined4 *)(param_1 + 0xa6c) = uVar13;
        *(undefined4 *)(param_1 + 0xa70) = puVar3[7];
        *(undefined4 *)(param_1 + 0xa74) = puVar3[8];
        *(undefined4 *)(param_1 + 0xa78) = puVar3[9];
        *(undefined2 *)(param_1 + 0xa7c) = *(undefined2 *)(puVar3 + 10);
        *(undefined2 *)(param_1 + 0xa7e) = *(undefined2 *)((int)puVar3 + 0x2a);
        *(undefined4 *)(param_1 + 0xa84) = *(undefined4 *)(param_1 + 0xa60);
        pfVar5 = (float *)func_00520FC0();
        fVar15 = DAT_00312fac;
        fVar8 = *pfVar5;
        fVar10 = pfVar5[1];
        *(float *)(param_1 + 0xa50) = pfVar5[2];
        *pfVar6 = fVar8;
        *(float *)(param_1 + 0xa4c) = fVar10;
        objStack_48[2] = (uint)&local_3c;
        *(float *)(param_1 + 0xa48) = *(float *)(param_1 + 0xa48) - fVar15;
        *(float *)(param_1 + 0xa50) = *(float *)(param_1 + 0xa50) - fVar9;
        *(float *)(param_1 + 0xa4c) = *(float *)(param_1 + 0xa4c) + fVar9;
        local_3c = DAT_00312fb0;
        local_34 = DAT_00312fb0;
        objStack_48[0] = 0;
        objStack_48[1] = 0;
        local_38 = fVar11;
        func_00120FBC(iVar4,(undefined4 *)(param_1 + 0xa40),pfVar6,puVar14,0,0,
                      (float *)objStack_48[2]);
      }
      if (*(short *)(param_1 + 0xa34) != 0) {
LAB_00312e24:
        *(short *)(param_1 + 0xa34) = *(short *)(param_1 + 0xa34) + -1;
        return 0;
      }
      if (*DAT_00312fb4 != 0) {
        func_00270784(*DAT_00312fb4,300);
      }
      func_004BC7BC(param_1);
      iVar4 = func_00312754(param_1);
      if (iVar4 != 0) {
        func_0017BF74(iVar4);
      }
    }
    else {
      if (sVar1 != 1) {
        if (sVar1 != 2) {
          return 0;
        }
        *(undefined1 *)(param_1 + 0xa38) = 0;
        puVar3 = DAT_00312fc4;
        iVar4 = *(int *)(iVar4 + 0x18);
        if (iVar4 != 0) {
          *puVar14 = *DAT_00312fc4;
          *(undefined4 *)(param_1 + 0xa58) = puVar3[1];
          *(undefined4 *)(param_1 + 0xa5c) = puVar3[2];
          *(undefined4 *)(param_1 + 0xa60) = puVar3[3];
          uVar12 = puVar3[5];
          uVar13 = puVar3[6];
          *(undefined4 *)(param_1 + 0xa64) = puVar3[4];
          *(undefined4 *)(param_1 + 0xa68) = uVar12;
          *(undefined4 *)(param_1 + 0xa6c) = uVar13;
          *(undefined4 *)(param_1 + 0xa70) = puVar3[7];
          *(undefined4 *)(param_1 + 0xa74) = puVar3[8];
          *(undefined4 *)(param_1 + 0xa78) = puVar3[9];
          pfVar5 = DAT_00312fc8;
          *(undefined2 *)(param_1 + 0xa7c) = *(undefined2 *)(puVar3 + 10);
          *(undefined2 *)(param_1 + 0xa7e) = *(undefined2 *)((int)puVar3 + 0x2a);
          fVar9 = pfVar5[1];
          fVar11 = pfVar5[2];
          *pfVar6 = *pfVar5;
          *(float *)(param_1 + 0xa4c) = fVar9;
          *(float *)(param_1 + 0xa50) = fVar11;
          func_001E8268(iVar4,(int *)(param_1 + 0xa40),pfVar6,puVar14);
        }
        *(undefined2 *)(param_1 + 0x95a) = 0;
        return 1;
      }
      fVar11 = DAT_00312fa0;
      fVar15 = func_004BDFFC(*(float *)(param_1 + 0xa80),DAT_00312fa4,DAT_00312fbc,DAT_00312fb8,
                             DAT_00312fb8);
      fVar9 = DAT_00312fc0;
      *(float *)(param_1 + 0xa80) = *(float *)(param_1 + 0xa80) + fVar11;
      *(float *)(param_1 + 0xa60) = *(float *)(param_1 + 0xa84) + fVar15 * fVar9;
      if (*(int *)(iVar4 + 0x18) != 0) {
        func_001E8268(*(int *)(iVar4 + 0x18),(int *)(param_1 + 0xa40),pfVar6,puVar14);
      }
      if (fVar15 != 1.0) {
        return 0;
      }
    }
    *(short *)(param_1 + 0x95a) = *(short *)(param_1 + 0x95a) + 1;
    return 0;
  case 2:
    if (*(char *)(param_1 + 0x964) != '\n') {
      func_006260FC(param_1,10,0);
    }
    if (*(char *)(param_1 + 0xa38) == '\0') {
      return 0;
    }
    iVar4 = func_00312754(param_1);
    if (iVar4 == 0) {
      return 1;
    }
    func_0017B8D0(iVar4);
    return 1;
  case 3:
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
    pfVar6 = (float *)func_00520FC0();
    local_3c = *pfVar6;
    local_38 = pfVar6[1];
    local_34 = pfVar6[2];
    objStack_48[0] = (uint)ALBW_AS_U32(fVar11);
    objStack_48[1] = (uint)ALBW_AS_U32(fVar11);
    objStack_48[2] = (uint)ALBW_AS_U32(fVar11);
    func_00115C70((float *)objStack_48,&local_3c,(float *)(param_1 + 0x3d0));
    iVar4 = func_004904CC(ALBW_AS_F32(objStack_48[0]),ALBW_AS_F32(objStack_48[2]));
    *(int *)(param_1 + 1000) = iVar4;
    *(undefined4 *)(param_1 + 0x828) = 0;
    *(float *)(*(int *)(param_1 + 0x7a0) + 0x134) = fVar9;
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) & 0xfffffffb;
    func_00626A48(param_1);
    iVar7 = *piVar2;
    iVar4 = 0;
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 0x18);
    }
    if (iVar7 != 0 && iVar4 != 0) {
      func_001212EC(iVar4,(int *)(param_1 + 0xa40),0,0);
    }
    break;
  case 4:
    if (iVar4 != 0) {
      func_001DD484(iVar4,0x50,1);
    }
    if (*DAT_00313100 != 0) {
      func_0051B7C4(*DAT_00313100);
    }
  }
  return 1;
}

