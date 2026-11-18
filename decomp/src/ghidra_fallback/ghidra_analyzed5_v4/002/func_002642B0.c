#include "ghidra_types.h"

extern int func_00323DF0(char *param_1,char param_2,int *param_3);
extern undefined8 func_00323E88(char *param_1,uint param_2,uint *param_3);
extern int func_003242F8(int param_1,float *param_2);
extern int func_003243A8(char *param_1,float *param_2,float *param_3);
extern int func_0036CE40(int *param_1,uint *param_2);
extern int func_0036CF20(undefined4 *param_1);
extern int func_0036CF2C(uint *param_1,undefined4 param_2,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0053A254(int param_1);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00264650;
extern uint DAT_00264654;
extern float DAT_00264658;
extern uint DAT_0026465c;
extern float DAT_00264660;

// USA 002642B0 <- EU 002642D8 (Ghidra, non-matching)
// GLOBAL DAT_00264650 float
// GLOBAL DAT_00264654 uint
// GLOBAL DAT_00264658 float
// GLOBAL DAT_0026465c uint
// GLOBAL DAT_00264660 float

undefined4 func_002642B0(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((int *)(albw_frame + 0x14))
  iVar3 = func_003243A8((char *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0),
                        (float *)(param_1 + 0x3dc));
  if (*(char *)(param_1 + 0xa48) == '\0') {
    fVar10 = *(float *)(param_1 + 0x3e4) * DAT_00264650;
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_00264650;
LAB_00264358:
    *(float *)(param_1 + 0x3e4) = fVar10;
  }
  else {
    pfVar8 = *(float **)(param_1 + 0xa14);
    fVar10 = func_0051CF68(pfVar8 + 3,*pfVar8,pfVar8[1],pfVar8[2]);
    pfVar8[4] = fVar10;
    iVar4 = *(int *)(param_1 + 0xa14);
    if (*(int *)(iVar4 + 0xc) != 0x3f800000) {
      *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0xa4c) * *(float *)(iVar4 + 0x10);
      fVar10 = *(float *)(param_1 + 0xa54) * *(float *)(iVar4 + 0x10);
      goto LAB_00264358;
    }
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xa4c);
    *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0xa54);
  }
  puVar9 = (undefined4 *)(param_1 + 0x8bc);
  if (*(int *)(param_1 + 0x8bc) < 4) {
    return 0;
  }
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0xa00) == '\0') {
      func_003242F8(param_1 + 0x8f0,local_38);
      iVar3 = func_0068C690(local_38);
      if (local_38[0] != DAT_00264658 || local_30 != DAT_00264658) {
        func_0068C690((float *)(param_1 + 0x3dc));
        local_2c[0] = *(int *)(param_1 + 0xa10) - iVar3;
        uVar7 = func_0058E2B8(local_2c);
        if (DAT_0026465c < uVar7) {
          *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 1000);
          *(int *)(param_1 + 0xa10) = iVar3;
          cVar1 = *(char *)(param_1 + 0xa48);
          goto joined_r0x002644b0;
        }
      }
      func_0051D2CC((int *)(param_1 + 1000),iVar3,DAT_00264660);
      *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(param_1 + 1000);
    }
    else {
      func_0036CF20(*(undefined4 **)(param_1 + 0xa04));
      uVar12 = (ulonglong)DAT_00264654;
      iVar3 = 0;
      do {
        if ((*(char *)(param_1 + 0x8e0) != iVar3) ||
           (bVar2 = func_00323DF0((char *)(param_1 + 0x8f0),(char)iVar3,(int *)0x0), bVar2)) {
          func_0036CF2C(*(uint **)(param_1 + 0xa04),iVar3,ALBW_AS_F32(uVar12));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      puVar6 = (uint *)func_0058A7D4();
      uVar5 = func_0036CE40(*(int **)(param_1 + 0xa04),puVar6);
      cVar1 = (char)uVar5;
      *(char *)(param_1 + 0x8e0) = cVar1;
      *(undefined1 *)(param_1 + 0xa00) = 0;
      *(int *)(param_1 + 0xa10) = (int)cVar1 << 0x1e;
      *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 1000);
      if ((int)cVar1 != *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) {
        cVar1 = *(char *)(param_1 + 0xa48);
joined_r0x002644b0:
        if (cVar1 != '\0') {
          return func_00660490(puVar9,9);
        }
        return func_00660490(puVar9,5);
      }
    }
  }
  else {
    fVar11 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0xa2c);
    fVar10 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0xa34);
    if (0x3fc00000 < (int)ALBW_AS_U32((fVar11 * fVar11 + fVar10 * fVar10))) {
      if (*(char *)(param_1 + 0xa48) != '\0') goto LAB_002645f4;
      iVar3 = func_0053A254(param_1);
      goto joined_r0x00264400;
    }
    puVar6 = (uint *)func_0058A7D4();
    uVar13 = func_00323E88((char *)(param_1 + 0x8f0),(int)*(char *)(param_1 + 0x8e0),puVar6);
    *(char *)(param_1 + 0x8e0) = (char)uVar13;
    *(undefined1 *)(param_1 + 0xa00) = 0;
    *(uint *)(param_1 + 0xa10) = (uint)uVar13 << 0x1e;
    *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 1000);
    if ((uint)uVar13 != *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) {
      cVar1 = *(char *)(param_1 + 0xa48);
      goto joined_r0x002644b0;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x8e4);
  if (uVar7 < *(uint *)(param_1 + 0x8e8)) {
    uVar7 = uVar7 + 1;
    *(uint *)(param_1 + 0x8e4) = uVar7;
  }
  if (uVar7 < *(uint *)(param_1 + 0x8e8)) {
    return 0;
  }
  if (*(char *)(param_1 + 0xa48) != '\0') {
LAB_002645f4:
    return func_00660490(puVar9,3);
  }
  iVar3 = func_0053A254(param_1);
joined_r0x00264400:
  if (iVar3 != 0) {
    return func_00660490(puVar9,10);
  }
  return func_00660490(puVar9,4);
}

