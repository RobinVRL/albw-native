#include "ghidra_types.h"

extern int func_0051C304(int param_1);
extern int func_00523774(int param_1,uint param_2);
extern float func_00523848(int param_1);
extern int func_0058DCB8(int param_1);
extern int *DAT_003724e8;
extern int *DAT_003724ec;
extern int *DAT_003724f0;
extern int DAT_003724f4;
extern int DAT_003724f8;
extern int DAT_003724fc;
extern int DAT_00372500;
extern int DAT_00372504;

// USA 003722B8 <- EU 00372294 (Ghidra, non-matching)
// GLOBAL DAT_003724e8 int *
// GLOBAL DAT_003724ec int *
// GLOBAL DAT_003724f0 int *
// GLOBAL DAT_003724f4 int
// GLOBAL DAT_003724f8 int
// GLOBAL DAT_003724fc int
// GLOBAL DAT_00372500 int
// GLOBAL DAT_00372504 int

uint func_003722B8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  switch(param_4) {
  case 0:
    if (*(byte *)(param_1 + 0x98c) != 3) {
      return (uint)*(byte *)(param_1 + 0x98c);
    }
    iVar3 = func_0058DCB8(*DAT_003724e8);
    if (iVar3 != 0) {
      return 3;
    }
    return 0xffffffff;
  case 1:
    cVar1 = *(char *)(*DAT_003724ec + 0x18);
    if (cVar1 != '\n') {
      if (cVar1 < '\v') {
        if ((cVar1 != '\0' && cVar1 != '\x02') && (cVar1 != '\x04' && cVar1 != '\t')) {
LAB_00372330:
          uVar4 = 2;
          goto LAB_00372334;
        }
      }
      else if ((cVar1 != '\v' && cVar1 != '\f') && (cVar1 != '\x12' && cVar1 != '\x16'))
      goto LAB_00372330;
    }
    uVar4 = 1;
LAB_00372334:
    bVar2 = func_00523774(*DAT_003724f0,uVar4);
    return (uint)bVar2;
  case 2:
    if (*(char *)(param_1 + 0x9d0) == '\0') {
      return 0;
    }
    return 1;
  case 3:
    if (*(char *)(*DAT_003724f0 + 0x2ee) == '\0') {
      return 1;
    }
    break;
  case 4:
    fVar5 = func_00523848(*DAT_003724f0);
    if (DAT_003724f4 < (int)ALBW_AS_U32(fVar5)) {
      if ((int)ALBW_AS_U32(fVar5) <= DAT_003724f4) {
        return 1;
      }
      if (DAT_003724f8 < (int)ALBW_AS_U32(fVar5)) {
        return 3;
      }
      return 2;
    }
    break;
  case 5:
    fVar5 = func_00523848(*DAT_003724f0);
    if (DAT_003724fc < (int)ALBW_AS_U32(fVar5)) {
      if ((int)ALBW_AS_U32(fVar5) <= DAT_00372500) {
        return 1;
      }
      if (DAT_00372504 < (int)ALBW_AS_U32(fVar5)) {
        return 3;
      }
      return 2;
    }
    break;
  case 6:
    fVar5 = func_00523848(*DAT_003724f0);
    if (DAT_003724f8 < (int)ALBW_AS_U32(fVar5)) {
      if ((int)ALBW_AS_U32(fVar5) <= DAT_003724f8 + 0x500000) {
        return 1;
      }
      if (DAT_003724f8 + 0x500000 < (int)ALBW_AS_U32(fVar5)) {
        return 3;
      }
      return 2;
    }
    break;
  case 7:
    iVar3 = *(int *)(param_1 + 0x994);
    if (0 < iVar3) {
      if (iVar3 < 100) {
        return 1;
      }
      if (0x95 < iVar3) {
        return 3;
      }
      return 2;
    }
    break;
  case 8:
    iVar3 = *(int *)(param_1 + 0x994);
    if (0x1e < iVar3) {
      if (iVar3 < 0x33) {
        return 1;
      }
      if (0x50 < iVar3) {
        return 3;
      }
      return 2;
    }
    break;
  case 9:
    iVar3 = *(int *)(param_1 + 0x994);
    if (200 < iVar3) {
      if (iVar3 < 0xfb) {
        return 1;
      }
      if (300 < iVar3) {
        return 3;
      }
      return 2;
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x9d1) != '\0') {
      func_0051C304(*DAT_003724e8);
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x9d1);
    if (uVar4 == 1 || uVar4 == 2) {
      return uVar4;
    }
  }
  return 0;
}

