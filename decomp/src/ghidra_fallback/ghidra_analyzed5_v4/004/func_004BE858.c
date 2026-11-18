#include "ghidra_types.h"

extern int func_004C0CC4(int param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern float DAT_004be970;
extern int DAT_004be974;
extern float DAT_004be978;
extern int DAT_004be97c;
extern float DAT_004be980;
extern float DAT_004be984;
extern float DAT_004be988;

// USA 004BE858 <- EU 004BE830 (Ghidra, non-matching)
// GLOBAL DAT_004be970 float
// GLOBAL DAT_004be974 int
// GLOBAL DAT_004be978 float
// GLOBAL DAT_004be97c int
// GLOBAL DAT_004be980 float
// GLOBAL DAT_004be984 float
// GLOBAL DAT_004be988 float

void func_004BE858(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  
  iVar1 = DAT_004be974;
  bVar3 = *(int *)(param_1 + 0x820) == 0;
  iVar2 = param_1;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0x824);
  }
  fVar4 = DAT_004be970;
  if (!bVar3 || iVar2 != 0) {
    func_0051D2F4((int *)(param_1 + 0x820),0,DAT_004be974,0x7fffffff,DAT_004be970);
    func_0051D2F4((int *)(param_1 + 0x824),0,iVar1,0x7fffffff,DAT_004be978);
    if (*(int *)(param_1 + 0x844) != -1) {
      if (*(int *)(param_1 + 0x840) == *(int *)(param_1 + 0x844)) {
        *(undefined4 *)(param_1 + 0x92c) = 0;
        *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_1 + 0x824);
      }
      else if ((*(uint *)(param_1 + 0x8ac) & 0x400) == 0) {
        *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_1 + 0x824);
      }
    }
  }
  iVar2 = func_004C0CC4(param_1);
  func_0051D2F4((int *)(param_1 + 0x81c),iVar2,DAT_004be97c,0x7fffffff,fVar4);
  if (*(int *)(param_1 + 0x840) != -1) {
    *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(param_1 + 0x81c);
    *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_1 + 0x820);
  }
  fVar4 = *(float *)(param_1 + 0x8bc);
  if (fVar4 != DAT_004be980) {
    if (DAT_004be984 < -fVar4) {
      fVar4 = fVar4 + DAT_004be984;
    }
    else {
      if (DAT_004be988 <= -fVar4) {
        *(float *)(param_1 + 0x8bc) = DAT_004be980;
        return;
      }
      fVar4 = fVar4 - DAT_004be984;
    }
    *(float *)(param_1 + 0x8bc) = fVar4;
  }
  return;
}

