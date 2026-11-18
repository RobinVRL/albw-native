#include "ghidra_types.h"

extern int func_00323DF0(char *param_1,char param_2,int *param_3);
extern undefined8 func_00323E88(char *param_1,uint param_2,uint *param_3);
extern int func_003242F8(int param_1,float *param_2);
extern int func_003243A8(char *param_1,float *param_2,float *param_3);
extern int func_0036CE40(int *param_1,uint *param_2);
extern int func_0036CF20(undefined4 *param_1);
extern int func_0036CF2C(uint *param_1,undefined4 param_2,float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_0065E254(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0021e564;
extern uint DAT_0021e568;
extern float DAT_0021e56c;
extern uint DAT_0021e570;
extern float DAT_0021e574;

// USA 0021E344 <- EU 0021E344 (Ghidra, non-matching)
// GLOBAL DAT_0021e564 float
// GLOBAL DAT_0021e568 uint
// GLOBAL DAT_0021e56c float
// GLOBAL DAT_0021e570 uint
// GLOBAL DAT_0021e574 float

undefined4 func_0021E344(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((int *)(albw_frame + 0x14))
  fVar7 = *(float *)(param_1 + 0x3e4) * DAT_0021e564;
  *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0x3dc) * DAT_0021e564;
  *(float *)(param_1 + 0x3e4) = fVar7;
  iVar3 = func_003243A8((char *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0),
                        (float *)(param_1 + 0x3dc));
  if (*(int *)(param_1 + 0x8bc) < 2) {
    return 0;
  }
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0xa00) == '\0') {
      func_003242F8(param_1 + 0x8f0,local_38);
      iVar3 = func_0068C690(local_38);
      if (local_38[0] != DAT_0021e56c || local_30 != DAT_0021e56c) {
        func_0068C690((float *)(param_1 + 0x3dc));
        local_2c[0] = *(int *)(param_1 + 0xa10) - iVar3;
        uVar6 = func_0058E2B8(local_2c);
        if (DAT_0021e570 < uVar6) {
          *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 1000);
          *(int *)(param_1 + 0xa10) = iVar3;
          goto LAB_0021e488;
        }
      }
      func_0051D2CC((int *)(param_1 + 1000),iVar3,DAT_0021e574);
      *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(param_1 + 1000);
    }
    else {
      func_0036CF20(*(undefined4 **)(param_1 + 0xa04));
      uVar8 = (ulonglong)DAT_0021e568;
      iVar3 = 0;
      do {
        if ((*(char *)(param_1 + 0x8e0) != iVar3) ||
           (bVar2 = func_00323DF0((char *)(param_1 + 0x8f0),(char)iVar3,(int *)0x0), bVar2)) {
          func_0036CF2C(*(uint **)(param_1 + 0xa04),iVar3,ALBW_AS_F32(uVar8));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_0036CE40(*(int **)(param_1 + 0xa04),puVar4);
      cVar1 = (char)uVar5;
      *(char *)(param_1 + 0x8e0) = cVar1;
      *(undefined1 *)(param_1 + 0xa00) = 0;
      *(int *)(param_1 + 0xa10) = (int)cVar1 << 0x1e;
      *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 1000);
      if ((int)cVar1 != *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) goto LAB_0021e488;
    }
  }
  else {
    puVar4 = (uint *)func_0058A7D4();
    uVar9 = func_00323E88((char *)(param_1 + 0x8f0),(int)*(char *)(param_1 + 0x8e0),puVar4);
    *(char *)(param_1 + 0x8e0) = (char)uVar9;
    *(undefined1 *)(param_1 + 0xa00) = 0;
    *(uint *)(param_1 + 0xa10) = (uint)uVar9 << 0x1e;
    *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 1000);
    if ((uint)uVar9 != *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) {
LAB_0021e488:
      return func_0065E254((undefined4 *)(param_1 + 0x8bc),5);
    }
  }
  uVar6 = *(uint *)(param_1 + 0x8e4);
  if (uVar6 < *(uint *)(param_1 + 0x8e8)) {
    uVar6 = uVar6 + 1;
    *(uint *)(param_1 + 0x8e4) = uVar6;
  }
  if (uVar6 < *(uint *)(param_1 + 0x8e8)) {
    return 0;
  }
  return func_0065E254((undefined4 *)(param_1 + 0x8bc),3);
}

