#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_002D56A8(int param_1,float fparam_0);
extern int func_002D5A38(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052E5E4(int param_1,int param_2);
extern float func_0053EDC8(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0054CA3C(int param_1);
extern float DAT_0028e3e4;
extern float DAT_0028e3e8;
extern int DAT_0028e3ec;
extern float DAT_0028e3f0;
extern float DAT_0028e3f4;

// USA 0028E210 <- EU 0028E238 (Ghidra, non-matching)
// GLOBAL DAT_0028e3e4 float
// GLOBAL DAT_0028e3e8 float
// GLOBAL DAT_0028e3ec int
// GLOBAL DAT_0028e3f0 float
// GLOBAL DAT_0028e3f4 float

undefined4 func_0028E210(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = func_0052E5E4(*(int *)(param_1 + 0x28),4);
  if (iVar2 == 0) {
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= DAT_0028e3e4) goto LAB_0028e2f4;
  }
  else {
    if (param_2 == 0x35) {
      iVar2 = func_002D55E8(param_1);
      if ((iVar2 == 0) && (iVar2 = func_002D5A38(param_1), iVar2 == 0)) {
        func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_0028e3f0);
        func_002D56A8(param_1,DAT_0028e3f4);
        if (*(char *)(param_1 + 0x74) == '\0') {
          iVar2 = func_0054CA3C(*(int *)(param_1 + 0x48));
          if (iVar2 == 0) {
            cVar1 = *(char *)(param_1 + 0x74);
          }
          else {
            cVar1 = '\x01';
            *(undefined1 *)(param_1 + 0x74) = 1;
          }
          if (iVar2 == 0 && cVar1 == '\0') {
            return 0;
          }
        }
        if (9 < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
          return func_002D55D0(param_1,0x36);
        }
      }
      return 0;
    }
    if (param_2 != 0x36) {
      return 0;
    }
    fVar6 = DAT_0028e3e4;
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_0028e3e8);
    if (fVar6 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) {
      fVar4 = func_0053EDC8(*(int *)(param_1 + 0x4c) + 0x5c);
      fVar5 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x5c);
      if ((int)ALBW_AS_U32((fVar4 - fVar5)) <= DAT_0028e3ec) {
        return func_002D55D0(param_1,1);
      }
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0xc) {
      return 0;
    }
    iVar2 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x5c);
    if (iVar2 == 0) {
      return 0;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar6) {
LAB_0028e2f4:
      uVar3 = 0;
      goto LAB_0028e2f8;
    }
  }
  uVar3 = 1;
LAB_0028e2f8:
  return func_002D55D0(param_1,uVar3);
}

