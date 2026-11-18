#include "ghidra_types.h"

extern int func_003E3C88(undefined4 param_1,undefined4 param_2,int param_3);
extern int DAT_00600570;
extern int *DAT_00600574;
extern int DAT_00600578;
extern int DAT_0060057c;
extern int DAT_00600580;
extern undefined4 DAT_00600584;

// USA 006003D8 <- EU 006003B0 (Ghidra, non-matching)
// GLOBAL DAT_00600570 int
// GLOBAL DAT_00600574 int *
// GLOBAL DAT_00600578 int
// GLOBAL DAT_0060057c int
// GLOBAL DAT_00600580 int
// GLOBAL DAT_00600584 undefined4

int * func_006003D8(undefined4 param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(DAT_00600570 + 0x9c);
  switch(param_1) {
  case 0x200:
    iVar3 = piVar1[0xb];
    break;
  case 0x201:
    if ((*(int **)(DAT_00600570 + 0xa0) == piVar1) && (*(char *)(DAT_00600570 + 0x11) != '\0')) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
    break;
  case 0x202:
    iVar3 = *DAT_00600574;
    piVar1[3] = iVar3 - piVar1[1];
    *param_2 = iVar3 - piVar1[1];
    return piVar1;
  case 0x203:
    iVar3 = piVar1[8];
    break;
  case 0x204:
    iVar3 = piVar1[2];
    break;
  case 0x205:
    iVar3 = piVar1[7];
    break;
  case 0x206:
    iVar3 = piVar1[1];
    break;
  case 0x207:
    iVar3 = 0;
    if (piVar1 != (int *)0x0) {
      iVar3 = *piVar1;
    }
    break;
  case 0x208:
    iVar3 = *DAT_00600574;
    break;
  case 0x209:
    iVar3 = piVar1[4];
    break;
  case 0x20a:
    iVar3 = piVar1[10];
    break;
  case 0x20b:
    iVar3 = piVar1[6];
    break;
  case 0x20c:
    if (piVar1[8] <= piVar1[10]) {
      return piVar1;
    }
    uVar2 = (uint)*(byte *)(piVar1[6] + piVar1[10] * 0x1c);
    switch(uVar2) {
    case 0:
      iVar3 = 0x310;
      break;
    case 1:
      iVar3 = DAT_00600578;
      break;
    case 2:
      iVar3 = DAT_0060057c;
      break;
    case 3:
      iVar3 = DAT_00600580;
      break;
    case 4:
      iVar3 = 0x314;
      break;
    default:
      return (int *)uVar2;
    }
    break;
  case 0x20d:
    iVar3 = piVar1[10];
    if (piVar1[8] <= iVar3) {
      return piVar1;
    }
    if (*(char *)(piVar1[6] + iVar3 * 0x1c) != '\x01') {
      return piVar1;
    }
    *param_2 = *(int *)(piVar1[6] + iVar3 * 0x1c + 4);
    iVar3 = *(int *)(piVar1[6] + piVar1[10] * 0x1c + 8);
    param_2[1] = iVar3;
    return (int *)iVar3;
  case 0x20e:
    uVar2 = func_003E3C88(DAT_00600584,param_2,4);
    return (int *)uVar2;
  default:
    return piVar1;
  }
  *param_2 = iVar3;
  return (int *)iVar3;
}

