#include "ghidra_types.h"

extern int func_00556068(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058DA24(int param_1);
extern int *DAT_003a5270;
extern int *DAT_003a5274;
extern int *DAT_003a5278;
extern int *DAT_003a527c;
extern int *DAT_003a5280;
extern int *DAT_003a5284;
extern int *DAT_003a5288;
extern int *DAT_003a528c;
extern int *DAT_003a5290;
extern int *DAT_003a5294;
extern int *DAT_003a5298;
extern int *DAT_003a529c;
extern int *DAT_003a52a0;
extern int *DAT_003a52a4;
extern int *DAT_003a52a8;
extern int *DAT_003a52ac;
extern int *DAT_003a52b0;
extern int *DAT_003a52b4;
extern int *DAT_003a52b8;
extern int *DAT_003a52bc;
extern int *DAT_003a52c0;
extern int *DAT_003a52c4;

// USA 003A4E00 <- EU 003A4DDC (Ghidra, non-matching)
// GLOBAL DAT_003a5270 int *
// GLOBAL DAT_003a5274 int *
// GLOBAL DAT_003a5278 int *
// GLOBAL DAT_003a527c int *
// GLOBAL DAT_003a5280 int *
// GLOBAL DAT_003a5284 int *
// GLOBAL DAT_003a5288 int *
// GLOBAL DAT_003a528c int *
// GLOBAL DAT_003a5290 int *
// GLOBAL DAT_003a5294 int *
// GLOBAL DAT_003a5298 int *
// GLOBAL DAT_003a529c int *
// GLOBAL DAT_003a52a0 int *
// GLOBAL DAT_003a52a4 int *
// GLOBAL DAT_003a52a8 int *
// GLOBAL DAT_003a52ac int *
// GLOBAL DAT_003a52b0 int *
// GLOBAL DAT_003a52b4 int *
// GLOBAL DAT_003a52b8 int *
// GLOBAL DAT_003a52bc int *
// GLOBAL DAT_003a52c0 int *
// GLOBAL DAT_003a52c4 int *

/* WARNING: Type propagation algorithm not settling */

undefined4 func_003A4E00(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  
  piVar1 = DAT_003a5270;
  if (*(char *)((int)param_1 + 0x145) != -1) {
    return 0;
  }
  if ((param_1[7] == 0) || (puVar2 = func_00556068(param_1[7]), puVar2 == (undefined4 *)0x0)) {
    uVar4 = 0;
    if (*piVar1 == 0) goto LAB_003a5234;
    iVar3 = func_0058DA24(*piVar1);
joined_r0x003a5258:
    uVar4 = 0;
  }
  else {
    puVar2 = func_00556068(param_1[7]);
    iVar3 = func_00588BE4((int)puVar2);
    if (iVar3 == *DAT_003a5274) {
      uVar4 = 1;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a5278) {
      uVar4 = 2;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a527c) {
      uVar4 = 3;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a5280) {
      uVar4 = 9;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a5284) {
      uVar4 = 0xd;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a5288) {
      uVar4 = 0xe;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a528c) {
      uVar4 = 0xf;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a5290) {
      uVar4 = 0x10;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if ((iVar3 == *DAT_003a5294) || (iVar3 == *DAT_003a5298)) {
      uVar4 = 0x11;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a529c) {
      uVar4 = 0x12;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52a0) {
      uVar4 = 4;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52a4) {
      uVar4 = 5;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52a8) {
      uVar4 = 0x13;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52ac) {
      uVar4 = 7;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52b0) {
      uVar4 = 8;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52b4) {
      uVar4 = 0x16;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52b8) {
      uVar4 = 6;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else if (iVar3 == *DAT_003a52bc) {
      uVar4 = 10;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
    else {
      if ((iVar3 != *DAT_003a52c0) && (iVar3 != *DAT_003a52c4)) {
        uVar4 = 0;
        if (*piVar1 == 0) goto LAB_003a5234;
        iVar3 = func_0058DA24(*piVar1);
        goto joined_r0x003a5258;
      }
      uVar4 = 0xb;
      if (*piVar1 == 0) goto LAB_003a5234;
      iVar3 = func_0058DA24(*piVar1);
    }
  }
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003a526c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0x30))(param_1);
  }
LAB_003a5234:
  *(undefined1 *)((int)param_1 + 0x145) = uVar4;
  return 0;
}

