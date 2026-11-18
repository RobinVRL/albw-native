#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_0016F43C(int *param_1,int param_2);
extern int func_0016F56C(int *param_1,int param_2);
extern int func_0016F6A4(undefined4 param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_0016F954(int *param_1,int param_2,int param_3);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_005568F4(int param_1);
extern int *piRam0016fd2c;
extern uint DAT_0016fd1c;
extern int DAT_0016fd20;
extern int *DAT_0016fd24;
extern float DAT_0016fd28;
extern int *DAT_0016fd30;

// USA 0016FAB0 <- EU 0016FAB0 (Ghidra, non-matching)
// GLOBAL DAT_0016fd1c uint
// GLOBAL DAT_0016fd20 int
// GLOBAL DAT_0016fd24 int *
// GLOBAL DAT_0016fd28 float
// GLOBAL DAT_0016fd30 int *
// GLOBAL UNK_0016fd2c int *

void func_0016FAB0(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  ulonglong uVar12;
  
  iVar2 = DAT_0016fd20;
  iVar7 = 0;
  iVar8 = param_1[0x187];
  iVar9 = param_1[0x188];
  if (iVar8 != 0) {
    uVar12 = (ulonglong)DAT_0016fd1c;
    do {
      iVar6 = iVar9 + iVar7 * 0x3c;
      bVar10 = *(char *)(iVar6 + 0x38) != '\0';
      cVar1 = '\0';
      if (bVar10) {
        cVar1 = *(char *)(iVar6 + 0x34);
      }
      if (bVar10 && cVar1 != '\x02') {
        param_3 = 0;
        func_0016F954(param_1,iVar6,0);
      }
      bVar10 = *(char *)(iVar6 + 0x39) != '\0';
      cVar1 = '\0';
      if (bVar10) {
        cVar1 = *(char *)(iVar6 + 0x34);
      }
      if (bVar10 && cVar1 != '\x02') {
        param_3 = 1;
        func_0016F954(param_1,iVar6,1);
      }
      if ((*(char *)(iVar6 + 0x3a) != '\0') && (*(char *)(iVar6 + 0x34) == '\x01')) {
        *(undefined1 *)(iVar6 + 0x34) = 0;
        *(undefined1 *)(iVar6 + 0x35) = 0x3c;
        iVar4 = *(int *)(*(int *)(iVar6 + 0x28) + 0x14);
        if (*(float *)(iVar4 + 8) != ALBW_AS_F32(uVar12)) {
          *(float *)(iVar4 + 8) = ALBW_AS_F32(uVar12);
          *(undefined1 *)(iVar4 + 0x26) = 1;
        }
        param_3 = 0;
        func_00168E9C(*(int **)(iVar6 + 0x28),*(int *)(iVar6 + 0x20),(int *)0x0);
      }
      bVar10 = *(char *)(iVar6 + 0x37) != '\0';
      cVar1 = '\0';
      if (bVar10) {
        cVar1 = *(char *)(iVar6 + 0x34);
      }
      if ((bVar10 && cVar1 != '\x02') &&
         (iVar2 < (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x189]) - *(float *)(iVar6 + 0x30))))) {
        param_3 = 1;
        func_0016F954(param_1,iVar6,1);
      }
      cVar1 = *(char *)(iVar6 + 0x34);
      if (cVar1 == '\0') {
        func_0016F56C(param_1,iVar6);
      }
      else if (cVar1 == '\x01') {
        func_0016F6A4(param_1,iVar6,param_3,param_4);
      }
      else if (cVar1 == '\x02') {
        func_0016F43C(param_1,iVar6);
      }
      else if (((cVar1 == '\x03') &&
               (fVar11 = *(float *)(*(int *)(*DAT_0016fd24 + 0x1c) + 4) - *(float *)(iVar6 + 0x30),
               (int)ALBW_AS_U32(fVar11) <= iVar2)) && ((uint)ALBW_AS_U32(fVar11) <= (uint)ALBW_AS_U32(DAT_0016fd28))) {
        *(undefined1 *)(iVar6 + 0x34) = 0;
        *(undefined1 *)(iVar6 + 0x35) = 0x3c;
        func_004CF478(*(int *)(iVar6 + 0x20),1);
        param_3 = 2;
        func_004A879C(*piRam0016fd2c,*(int *)(iVar6 + 0x24),2);
      }
      *(undefined1 *)(iVar6 + 0x39) = 0;
      *(undefined1 *)(iVar6 + 0x3a) = 0;
      if (*(byte *)(iVar6 + 0x34) < 2) {
        param_3 = iVar6 + 0x10;
        param_4 = DAT_0016fd30;
        func_0014E2A0((int)param_1,*(undefined4 *)(iVar6 + 0x2c),param_3,(uint)DAT_0016fd30,0,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar8);
  }
  piVar3 = DAT_0016fd24;
  uVar5 = func_005568F4(*DAT_0016fd24);
  if (uVar5 != 0) {
    param_1[0x189] = *(int *)(*(int *)(*piVar3 + 0x1c) + 4);
  }
  return;
}

