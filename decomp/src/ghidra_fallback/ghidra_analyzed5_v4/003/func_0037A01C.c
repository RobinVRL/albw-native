#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00379DF0(int param_1);
extern int func_0037A228(int param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern undefined4 DAT_0037a1f4;
extern int *DAT_0037a1f8;
extern uint *DAT_0037a1fc;
extern undefined4 *DAT_0037a200;

// USA 0037A01C <- EU 00379FF8 (Ghidra, non-matching)
// GLOBAL DAT_0037a1f4 undefined4
// GLOBAL DAT_0037a1f8 int *
// GLOBAL DAT_0037a1fc uint *
// GLOBAL DAT_0037a200 undefined4 *

undefined4 func_0037A01C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 0x4a0) == '\0') {
    *(undefined1 *)(param_1 + 0x4a0) = 1;
    *(undefined1 *)(param_1 + 0x4ec) = 1;
    *(undefined1 *)(param_1 + 0x4ed) = 0;
    uVar4 = DAT_0037a1f4;
    bVar1 = *(byte *)(param_1 + 0x5c);
    iVar9 = 0;
    if (bVar1 != 0) {
      do {
        iVar7 = (int)*(short *)(param_1 + iVar9 * 6 + 0x5e);
        if ((0 < iVar7) &&
           (piVar6 = (int *)func_0052FBDC(*DAT_0037a1f8 + 0x3dbbc,iVar7,0), piVar6 != (int *)0x0)) {
          if (((*DAT_0037a1fc & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0037a1fc), iVar7 != 0)
             ) {
            *DAT_0037a200 = uVar4;
          }
          iVar7 = (**(code **)*piVar6)(piVar6,DAT_0037a200);
          if (iVar7 == 0) {
            piVar6 = (int *)0x0;
          }
          (**(code **)(*piVar6 + 0x74))(piVar6);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(uint)bVar1);
    }
  }
  bVar1 = *(byte *)(param_1 + 0x4ec);
  bVar5 = func_00588BF0(param_1,0);
  *(bool *)(param_1 + 0x4ec) = bVar5;
  bVar3 = *(byte *)(param_1 + 0x4ed);
  bVar5 = func_00588BF0(param_1,1);
  *(bool *)(param_1 + 0x4ed) = bVar5;
  uVar8 = *(uint *)(param_1 + 0x14);
  bVar10 = uVar8 == 0x3f800000;
  if (!bVar10) {
    uVar8 = (uint)*(byte *)(param_1 + 0x4a4);
  }
  cVar2 = *(char *)(param_1 + 0x4a2);
  if (bVar10 || uVar8 == 0) {
    bVar10 = cVar2 == '\0';
    if (bVar10) {
      cVar2 = *(char *)(param_1 + 0x4a3);
    }
    if (!bVar10 || cVar2 != '\0') goto LAB_0037a19c;
  }
  else {
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x4a2) = 0;
      *(undefined1 *)(param_1 + 0x4a4) = 0;
    }
    if (*(char *)(param_1 + 0x4a3) != '\0') {
      *(undefined1 *)(param_1 + 0x4a3) = 0;
      *(undefined1 *)(param_1 + 0x4a4) = 0;
    }
  }
  if ((bVar1 == 0) && (*(char *)(param_1 + 0x4ec) != '\0')) {
    *(undefined1 *)(param_1 + 0x4a2) = 1;
  }
  if ((*(short *)(param_1 + 0x38) != 0 && bVar3 != 0) && (!bVar5)) {
    *(undefined1 *)(param_1 + 0x4a3) = 1;
  }
  cVar2 = *(char *)(param_1 + 0x4a2);
  bVar5 = cVar2 == '\0';
  if (bVar5) {
    cVar2 = *(char *)(param_1 + 0x4a3);
  }
  if (bVar5 && cVar2 == '\0') {
    return 0;
  }
LAB_0037a19c:
  *(undefined1 *)(param_1 + 0x4a4) = 0;
  if (*(int *)(param_1 + 0x4bc) == 0 && (bVar1 & ~bVar3) == 0) {
    iVar9 = func_00379DF0(param_1);
    if (iVar9 != 0) {
      *(undefined1 *)(param_1 + 0x4a1) = 1;
    }
  }
  else {
    iVar9 = func_0037A228(param_1);
    if ((iVar9 != 0) && (*(char *)(*(int *)(param_1 + 0x4a8) + 0xf8) == '\0')) {
      return func_00165E28(*(int *)(param_1 + 0x4a8),*(undefined2 *)(param_1 + 0x4ea));
    }
  }
  return 0;
}

