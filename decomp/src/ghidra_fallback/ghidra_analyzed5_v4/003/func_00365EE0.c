#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0018B874(undefined4 *param_1,float *param_2,uint param_3,undefined2 param_4, undefined4 param_5);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5A38(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E5E4(int param_1,int param_2);
extern float func_0053EDC8(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0053EE40(int param_1,float fparam_0);
extern int func_0054CAB4(int param_1);
extern float DAT_003660dc;
extern int DAT_003660e0;
extern uint DAT_003660e4;
extern float DAT_003660e8;
extern float DAT_003660ec;
extern float DAT_003660f0;

// USA 00365EE0 <- EU 00365EBC (Ghidra, non-matching)
// GLOBAL DAT_003660dc float
// GLOBAL DAT_003660e0 int
// GLOBAL DAT_003660e4 uint
// GLOBAL DAT_003660e8 float
// GLOBAL DAT_003660ec float
// GLOBAL DAT_003660f0 float

undefined4 func_00365EE0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  undefined2 in_r3;
  int *piVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  iVar2 = func_0052E5E4(*(int *)(param_1 + 0x28),8);
  if (iVar2 == 0) {
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_003660dc) goto LAB_00365f80;
  }
  else {
    if (param_2 == 0x33) {
      iVar2 = func_002D55E8(param_1);
      if ((iVar2 == 0) && (iVar2 = func_002D5A38(param_1), iVar2 == 0)) {
        piVar4 = *(int **)(param_1 + 0x3c);
        iVar2 = *piVar4;
        uVar9 = func_00114608(DAT_003660e4,extraout_r1);
        func_0051D2CC(piVar4,(int)uVar9 + iVar2 & 0xe0000000,DAT_003660e8);
        func_002D56A8(param_1,DAT_003660ec);
        if (*(char *)(param_1 + 0x71) == '\0') {
          iVar2 = func_0054CAB4(*(int *)(param_1 + 0x48));
          if (iVar2 == 0) {
            cVar1 = *(char *)(param_1 + 0x71);
          }
          else {
            cVar1 = '\x01';
            *(undefined1 *)(param_1 + 0x71) = 1;
          }
          if (iVar2 == 0 && cVar1 == '\0') {
            return 0;
          }
        }
        if (4 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
          return func_002D55D0(param_1,0x34);
        }
      }
      return 0;
    }
    if (param_2 != 0x34) {
      return 0;
    }
    fVar8 = DAT_003660dc;
    iVar2 = func_002D55E8(param_1);
    if (iVar2 != 0) {
      return 0;
    }
    if (fVar8 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) {
      fVar6 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x5c);
      fVar7 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
      if ((int)ALBW_AS_U32((fVar6 - fVar7)) <= DAT_003660e0) {
        return func_002D55D0(param_1,1);
      }
    }
    iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar2 == 0) {
      iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_003660f0);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x28);
      bVar5 = 2 < *(uint *)(iVar2 + 0x454);
      if (bVar5) {
        in_r3 = 1;
      }
      if (!bVar5) {
        in_r3 = 0;
      }
      return func_0018B874(*(undefined4 **)(param_1 + 0x30),(float *)(iVar2 + 0x3dc),
                    **(uint **)(param_1 + 0x3c),in_r3,*(undefined4 *)(iVar2 + 0x2cc));
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar8) {
LAB_00365f80:
      uVar3 = 0;
      goto LAB_00365f84;
    }
  }
  uVar3 = 1;
LAB_00365f84:
  return func_002D55D0(param_1,uVar3);
}

