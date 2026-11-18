#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_002d2a24;
extern int *DAT_002d2a28;
extern int *DAT_002d2a2c;
extern int *DAT_002d2a30;
extern int *DAT_002d2a34;
extern int *DAT_002d2a38;
extern float DAT_002d2a3c;
extern float DAT_002d2a40;
extern float DAT_002d2a44;
extern float DAT_002d2a48;
extern float DAT_002d2a4c;

// USA 002D28D0 <- EU 002D28AC (Ghidra, non-matching)
// GLOBAL DAT_002d2a24 int *
// GLOBAL DAT_002d2a28 int *
// GLOBAL DAT_002d2a2c int *
// GLOBAL DAT_002d2a30 int *
// GLOBAL DAT_002d2a34 int *
// GLOBAL DAT_002d2a38 int *
// GLOBAL DAT_002d2a3c float
// GLOBAL DAT_002d2a40 float
// GLOBAL DAT_002d2a44 float
// GLOBAL DAT_002d2a48 float
// GLOBAL DAT_002d2a4c float

float func_002D28D0(undefined4 param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  iVar1 = *DAT_002d2a24;
  iVar2 = func_0052FBA0(*DAT_002d2a28 + 0x3dbbc,*param_2);
  if (iVar2 != 0) {
    iVar2 = func_00588BE4(iVar2);
    if (*DAT_002d2a2c == iVar2) {
      return DAT_002d2a3c;
    }
    if (*DAT_002d2a30 == iVar2) {
      return DAT_002d2a3c;
    }
    if (*DAT_002d2a34 == iVar2) {
      return DAT_002d2a3c;
    }
    if (*DAT_002d2a38 == iVar2) {
      return DAT_002d2a3c;
    }
  }
  uVar3 = param_3 & 0x7e0;
  if (uVar3 >> 5 == 5 || uVar3 >> 5 == 0x17) {
    return DAT_002d2a40;
  }
  iVar1 = (int)*(char *)(iVar1 + 0x18);
  if (iVar1 != 10) {
    if (iVar1 < 10) {
      if ((iVar1 != 0 && iVar1 != 2) && (iVar1 != 4 && iVar1 != 9)) goto LAB_002d2994;
    }
    else if ((iVar1 != 0xb && iVar1 != 0xc) && (iVar1 != 0x12 && iVar1 != 0x16)) goto LAB_002d2994;
  }
  if (uVar3 == 0x20) {
    return DAT_002d2a44;
  }
LAB_002d2994:
  fVar4 = DAT_002d2a44;
  switch(iVar1) {
  case 0:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x12:
  case 0x16:
    goto switchD_002d2998_caseD_0;
  case 1:
  case 3:
  case 5:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    fVar4 = DAT_002d2a48;
    if (uVar3 != 0x20) {
      fVar4 = DAT_002d2a44;
      if (uVar3 == 0x40) {
        fVar4 = DAT_002d2a4c;
      }
      return fVar4;
    }
switchD_002d2998_caseD_0:
    return fVar4;
  default:
    return DAT_002d2a44;
  }
}

