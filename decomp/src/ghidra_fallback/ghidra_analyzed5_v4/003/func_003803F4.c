#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int DAT_00380500;
extern float DAT_00380504;
extern int *DAT_00380508;
extern float DAT_0038050c;
extern int *DAT_00380510;
extern int DAT_00380514;
extern float DAT_00380518;
extern undefined4 DAT_0038051c;

// USA 003803F4 <- EU 003803D0 (Ghidra, non-matching)
// GLOBAL DAT_00380500 int
// GLOBAL DAT_00380504 float
// GLOBAL DAT_00380508 int *
// GLOBAL DAT_0038050c float
// GLOBAL DAT_00380510 int *
// GLOBAL DAT_00380514 int
// GLOBAL DAT_00380518 float
// GLOBAL DAT_0038051c undefined4

float func_003803F4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fparam_0;
  
  iVar4 = DAT_00380500;
  *(undefined1 *)(param_1 + 0xb34) = 0;
  fVar6 = DAT_00380504;
  if (0 < *(short *)(iVar4 + param_1)) {
    iVar5 = *(int *)(param_1 + 0x43c);
    iVar4 = func_00588BE4(param_1);
    piVar2 = DAT_00380510;
    if ((iVar4 == *DAT_00380508) || (*(uint *)(param_1 + 0xaf4) < *(uint *)(param_1 + 0xaf8))) {
      *(undefined1 *)(param_1 + 0xb34) = 1;
      uVar3 = DAT_0038051c;
      fVar6 = DAT_00380518;
      if (*(char *)(iVar5 + 0x21) == '\x05') {
        *(undefined4 *)(param_1 + 0x6b0) = 0x32;
        *(undefined4 *)(param_1 + 0x6b4) = uVar3;
        *(undefined4 *)(param_1 + 0x6ac) = 0;
        return fVar6;
      }
    }
    else {
      fparam_0 = DAT_0038050c;
      if (*(char *)(iVar5 + 0x21) == '\x0e') {
        func_00291FE0(*DAT_00380510,param_1 + 0x3d0,DAT_0038050c);
      }
      if (*(char *)(iVar5 + 0x21) == '\b') {
        func_00291A38(*piVar2,param_1 + 0x3d0,fparam_0);
      }
      if (*(char *)(iVar5 + 0x21) == '\x05') {
        func_002917A4(*piVar2,param_1 + 0x3d0,0,fparam_0);
      }
      bVar1 = *(byte *)(DAT_00380514 + param_1);
      if ((1 < bVar1) && (bVar1 != 9 && bVar1 != 10)) {
        func_006678C0((undefined4 *)(param_1 + 0xa48),8);
      }
    }
  }
  return fVar6;
}

