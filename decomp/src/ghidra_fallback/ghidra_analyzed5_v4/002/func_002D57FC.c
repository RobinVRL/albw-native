#include "ghidra_types.h"

extern int func_004EB78C(int param_1,float fparam_0);
extern int func_0053EE40(int param_1,float fparam_0);
extern float DAT_002d59ec;
extern float DAT_002d59f0;
extern float DAT_002d59f4;
extern float DAT_002d59f8;
extern float DAT_002d59fc;
extern float DAT_002d5a00;
extern float DAT_002d5a04;
extern float DAT_002d5a08;
extern int *DAT_002d5a0c;

// USA 002D57FC <- EU 002D57D8 (Ghidra, non-matching)
// GLOBAL DAT_002d59ec float
// GLOBAL DAT_002d59f0 float
// GLOBAL DAT_002d59f4 float
// GLOBAL DAT_002d59f8 float
// GLOBAL DAT_002d59fc float
// GLOBAL DAT_002d5a00 float
// GLOBAL DAT_002d5a04 float
// GLOBAL DAT_002d5a08 float
// GLOBAL DAT_002d5a0c int *

undefined4 func_002D57FC(int param_1,int param_2,float fparam_0)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_2 == 10) {
    if (*(int *)(*(int *)(param_1 + 0x40) + 4) != 0x3f800000) {
      return 0;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) == 0 && (bVar1 & 8) == 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) {
      return 0;
    }
    iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d59f8);
    if ((iVar2 == 0) &&
       (iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d59fc), iVar2 == 0)) {
      return 0;
    }
    goto LAB_002d59d4;
  }
  if (param_2 < 10) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_2 != 5 && param_2 != 7) {
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x40) + 4) != 0x3f800000) {
      return 0;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) == 0 && (bVar1 & 8) == 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) {
      return 0;
    }
    iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d59f0);
    if (iVar2 != 0) goto LAB_002d59d4;
    iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d59f4);
  }
  else {
    if (param_2 == 0xd) {
      if (*(int *)(*(int *)(param_1 + 0x40) + 4) != 0x3f800000) {
        return 0;
      }
      bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
      if (((bVar1 & 1) == 0 && (bVar1 & 8) == 0) &&
         (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) {
        return 0;
      }
      iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d5a00);
      if ((iVar2 == 0) &&
         (iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d5a04), iVar2 == 0)) {
        return 0;
      }
      goto LAB_002d59d4;
    }
    if (param_2 != 0xe) {
      return 0;
    }
    if (*(int *)(*(int *)(param_1 + 0x40) + 4) != 0x3f800000) {
      return 0;
    }
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    bVar3 = (bVar1 & 1) == 0;
    bVar4 = (bVar1 & 8) == 0;
    bVar5 = bVar3 && bVar4;
    if (bVar3 && bVar4) {
      bVar5 = *(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0';
    }
    if (bVar5) {
      return 0;
    }
    iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d59ec);
    if (iVar2 != 0) goto LAB_002d59d4;
    iVar2 = func_0053EE40(*(int *)(param_1 + 0x4c) + 0x5c,DAT_002d5a08);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_002d59d4:
  return func_004EB78C(*DAT_002d5a0c,fparam_0);
}

