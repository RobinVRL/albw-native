#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern void func_0036DEC8(undefined1 *param_1,float *param_2,int param_3);
extern int func_0054D884(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00359288;
extern uint *DAT_0035928c;
extern undefined4 *DAT_00359290;
extern undefined4 DAT_00359294;
extern undefined *DAT_00359298;
extern float DAT_0035929c;

// USA 00358FB8 <- EU 00358F94 (Ghidra, non-matching)
// GLOBAL DAT_00359288 int *
// GLOBAL DAT_0035928c uint *
// GLOBAL DAT_00359290 undefined4 *
// GLOBAL DAT_00359294 undefined4
// GLOBAL DAT_00359298 undefined *
// GLOBAL DAT_0035929c float

undefined4 func_00358FB8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  undefined4 *puVar9;
  uint uVar10;
  float *pfVar11;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define afStack_cc ((float *)(albw_frame + 0x4))
  #define local_78 ((float *)(albw_frame + 0x58))
  #define local_50 (*(float * *)(albw_frame + 0x80))
  #define iStack_2c (*(int *)(albw_frame + 0xa4))
  #define local_28 (*(undefined4 * *)(albw_frame + 0xa8))
  iStack_2c = param_1;
  local_28 = param_2;
  iVar4 = func_00588BE4((int)param_2);
  puVar9 = local_28;
  if (iVar4 == *DAT_00359288) {
    if (((*DAT_0035928c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0035928c), iVar4 != 0)) {
      *DAT_00359290 = DAT_00359294;
    }
    iVar4 = (**(code **)*puVar9)(puVar9,DAT_00359290);
    if (iVar4 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    local_50 = (float *)(puVar9 + 0xf4);
    func_00100118((int)(afStack_cc + 0xc),DAT_00359298,0xc,3);
    func_00100118((int)local_78,DAT_00359298,0xc,3);
    uVar10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 4);
      uVar1 = 1 << (uVar10 & 0xff);
      pfVar11 = local_78 + uVar10 * 3;
      if ((*(uint *)(iVar4 + 200) & uVar1) == 0) {
        func_0036DEC8((undefined1 *)(iVar4 + 0x34),pfVar11,uVar10);
        fVar6 = *pfVar11;
        fVar8 = local_78[uVar10 * 3 + 1];
        pfVar5 = (float *)(iVar4 + 4);
        if (uVar10 < 3) {
          pfVar5 = pfVar5 + uVar10 * 3;
        }
        pfVar5[2] = local_78[uVar10 * 3 + 2];
        *pfVar5 = fVar6;
        pfVar5[1] = fVar8;
        *(uint *)(iVar4 + 200) = *(uint *)(iVar4 + 200) | uVar1;
      }
      else {
        pfVar5 = (float *)(iVar4 + 4);
        if (uVar10 < 3) {
          pfVar5 = pfVar5 + uVar10 * 3;
        }
        fVar8 = pfVar5[1];
        fVar6 = pfVar5[2];
        *pfVar11 = *pfVar5;
        local_78[uVar10 * 3 + 1] = fVar8;
        local_78[uVar10 * 3 + 2] = fVar6;
      }
      func_00115C70(local_78 + uVar10 * 3 + -9,local_50,pfVar11);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 3);
    func_00100118((int)(afStack_cc + 3),DAT_00359298,0xc,3);
    func_00115C70(afStack_cc + 3,local_78 + 3,local_78);
    func_00115C70(afStack_cc + 6,local_78 + 6,local_78 + 3);
    func_00115C70(afStack_cc + 9,local_78,local_78 + 6);
    iVar4 = -1;
    bVar2 = afStack_cc[5] * afStack_cc[0xc] - afStack_cc[3] * afStack_cc[0xe] <= DAT_0035929c;
    cVar3 = !bVar2;
    if (bVar2) {
      iVar4 = 0;
    }
    if (DAT_0035929c < afStack_cc[8] * afStack_cc[0xf] - afStack_cc[6] * afStack_cc[0x11]) {
      cVar3 = cVar3 + '\x01';
    }
    else {
      iVar4 = 1;
    }
    if (DAT_0035929c < afStack_cc[0xb] * afStack_cc[0x12] - afStack_cc[9] * afStack_cc[0x14]) {
      cVar3 = cVar3 + '\x01';
    }
    else {
      iVar4 = 2;
    }
    if (cVar3 == '\x03') {
      return 1;
    }
    if (((cVar3 == '\x02') && (-1 < iVar4)) && (iVar4 < 3)) {
      iVar7 = func_0054D884(local_28[0xb4] + 0x18,0);
      fVar6 = *(float *)(iVar7 + 4);
      pfVar11 = afStack_cc + iVar4 * 3 + 3;
      func_00115DC8(pfVar11);
      func_00115D70(pfVar11,pfVar11,
                    local_78[iVar4 * 3 + -9] * *pfVar11 +
                    local_78[iVar4 * 3 + -7] * afStack_cc[iVar4 * 3 + 5]);
      func_00115C54(pfVar11,pfVar11,local_78 + iVar4 * 3);
      if ((*pfVar11 - *local_50) * (*pfVar11 - *local_50) +
          (afStack_cc[iVar4 * 3 + 5] - local_50[2]) * (afStack_cc[iVar4 * 3 + 5] - local_50[2]) <=
          fVar6 * fVar6) {
        return 1;
      }
    }
  }
  return 0;
}

