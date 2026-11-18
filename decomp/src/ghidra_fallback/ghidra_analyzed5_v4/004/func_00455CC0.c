#include "ghidra_types.h"

extern uint DAT_00455f80;
extern int DAT_00455f84;
extern uint DAT_00455f88;
extern uint DAT_00455f8c;
extern uint DAT_00455f90;
extern float DAT_00455f94;
extern float DAT_00455f98;
extern float DAT_00455f9c;
extern float DAT_00455fa0;
extern float DAT_00455fa4;
extern float DAT_00455fa8;
extern float DAT_00455fac;
extern double DAT_00455fb0;
extern double DAT_00455fb8;

// USA 00455CC0 <- EU 00455C98 (Ghidra, non-matching)
// GLOBAL DAT_00455f80 uint
// GLOBAL DAT_00455f84 int
// GLOBAL DAT_00455f88 uint
// GLOBAL DAT_00455f8c uint
// GLOBAL DAT_00455f90 uint
// GLOBAL DAT_00455f94 float
// GLOBAL DAT_00455f98 float
// GLOBAL DAT_00455f9c float
// GLOBAL DAT_00455fa0 float
// GLOBAL DAT_00455fa4 float
// GLOBAL DAT_00455fa8 float
// GLOBAL DAT_00455fac float
// GLOBAL DAT_00455fb0 double
// GLOBAL DAT_00455fb8 double

void func_00455CC0(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint in_r2;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = DAT_00455f8c;
  if (*(char *)(*(int *)(param_1 + 0xbc) + 0x15c) == '\0') {
    if (*(char *)(param_1 + 0x8c) == '\0') {
      in_r2 = *(uint *)(param_1 + 0xb0);
      iVar4 = *(int *)(param_1 + 0x1c);
      if (*(char *)(in_r2 + 0x45) != -1) {
        *(undefined1 *)(in_r2 + 0x45) = 0xff;
        in_r2 = *(byte *)(iVar4 + 0x70) | 2;
        *(char *)(iVar4 + 0x70) = (char)in_r2;
      }
    }
    if (((((*(uint *)(param_1 + 0x18) & 4) != 0) &&
         (in_r2 = (uint)*(byte *)(param_1 + 0xd), in_r2 == 3)) &&
        (in_r2 = (uint)*(byte *)(param_1 + 0xe), in_r2 == 3)) &&
       ((in_r2 = (uint)*(char *)(param_1 + 0x6c), in_r2 != 0 && (in_r2 != 1)))) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
    }
    iVar4 = *(int *)(param_1 + 0x14);
    bVar7 = (*(ushort *)(iVar4 + 0x16) & 0x40) != 0;
    if (bVar7) {
      in_r2 = *(uint *)(iVar4 + 4);
    }
    if (!bVar7 || in_r2 == 0) {
      uVar2 = *(ushort *)(iVar4 + 0x16) | 0x40;
LAB_00455f6c:
      *(ushort *)(iVar4 + 0x16) = uVar2;
      return;
    }
  }
  else {
    uVar3 = *(uint *)(*(int *)(param_1 + 0xa4) + 0x1c);
    uVar5 = *(uint *)(*(int *)(param_1 + 0xa4) + 0x20);
    if (((DAT_00455f80 < uVar3) || (DAT_00455f84 < (int)uVar3)) ||
       ((DAT_00455f84 + 0x3e0000 < (int)uVar5 || (DAT_00455f80 - 0x340000 < uVar5)))) {
      if (uVar3 <= DAT_00455f88) {
        bVar8 = SBORROW4(uVar3,DAT_00455f8c);
        iVar4 = uVar3 - DAT_00455f8c;
        bVar7 = uVar3 == DAT_00455f8c;
        if ((int)uVar3 <= (int)DAT_00455f8c) {
          uVar3 = DAT_00455f8c + 0x3e0000;
          bVar8 = SBORROW4(uVar5,uVar3);
          iVar4 = uVar5 - uVar3;
          bVar7 = uVar5 == uVar3;
        }
        if ((bVar7 || iVar4 < 0 != bVar8) && (uVar5 <= DAT_00455f90)) {
          if ((*(uint *)(param_1 + 0x18) & 4) != 0) {
            cVar1 = *(char *)(param_1 + 0xd);
            bVar7 = cVar1 == '\x03';
            if (bVar7) {
              cVar1 = *(char *)(param_1 + 0xe);
            }
            if (bVar7 && cVar1 == '\x03') {
              *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
            }
          }
          iVar4 = *(int *)(param_1 + 0x14);
          bVar7 = (*(ushort *)(iVar4 + 0x16) & 0x40) == 0;
          if (!bVar7) {
            uVar6 = *(uint *)(iVar4 + 4);
          }
          if (bVar7 || uVar6 == 0) {
            *(ushort *)(iVar4 + 0x16) = *(ushort *)(iVar4 + 0x16) | 0x40;
          }
          fVar10 = *(float *)(*(int *)(param_1 + 0xa4) + 0x1c);
          fVar9 = *(float *)(*(int *)(param_1 + 0xa4) + 0x20);
          if (fVar10 < DAT_00455f94) {
            fVar10 = fVar10 - DAT_00455f98;
          }
          else {
            fVar10 = DAT_00455f9c - fVar10;
          }
          if (fVar9 < DAT_00455f94) {
            fVar9 = fVar9 - DAT_00455fa0;
          }
          else {
            fVar9 = DAT_00455fa4 - fVar9;
          }
          if (fVar9 <= fVar10) {
            fVar10 = fVar9;
          }
          fVar10 = fVar10 * DAT_00455fa8;
          fVar9 = DAT_00455f94;
          if ((DAT_00455f94 <= fVar10) && (fVar9 = fVar10, DAT_00455fac < fVar10)) {
            fVar9 = DAT_00455fac;
          }
          if (*(char *)(param_1 + 0x8c) != '\0') {
            return;
          }
          iVar4 = *(int *)(param_1 + 0x1c);
          uVar6 = VectorFloatToUnsigned(DAT_00455fb8 + DAT_00455fb0 * (double)fVar9,3);
          if ((uint)*(byte *)(*(int *)(param_1 + 0xb0) + 0x45) == (uVar6 & 0xff)) {
            return;
          }
          *(char *)(*(int *)(param_1 + 0xb0) + 0x45) = (char)uVar6;
          *(byte *)(iVar4 + 0x70) = *(byte *)(iVar4 + 0x70) | 2;
          return;
        }
      }
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
      iVar4 = *(int *)(param_1 + 0x14);
      bVar7 = (*(ushort *)(iVar4 + 0x16) & 0x40) != 0;
      if (bVar7) {
        uVar5 = *(uint *)(iVar4 + 4);
      }
      if (bVar7 && uVar5 != 0) {
        uVar2 = *(ushort *)(iVar4 + 0x16) & 0xffbf;
        goto LAB_00455f6c;
      }
    }
    else {
      uVar6 = DAT_00455f80;
      if (*(char *)(param_1 + 0x8c) == '\0') {
        iVar4 = *(int *)(param_1 + 0x1c);
        uVar6 = 0xff;
        if (*(char *)(*(int *)(param_1 + 0xb0) + 0x45) != -1) {
          *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x45) = 0xff;
          *(byte *)(iVar4 + 0x70) = *(byte *)(iVar4 + 0x70) | 2;
        }
      }
      iVar4 = *(int *)(param_1 + 0x14);
      bVar7 = (*(ushort *)(iVar4 + 0x16) & 0x40) == 0;
      if (!bVar7) {
        uVar6 = *(uint *)(iVar4 + 4);
      }
      if (bVar7 || uVar6 == 0) {
        *(ushort *)(iVar4 + 0x16) = *(ushort *)(iVar4 + 0x16) | 0x40;
      }
      if (((((*(uint *)(param_1 + 0x18) & 4) != 0) && (*(char *)(param_1 + 0xd) == '\x03')) &&
          (*(char *)(param_1 + 0xe) == '\x03')) && (*(char *)(param_1 + 0x6c) != '\0')) {
        if (*(char *)(param_1 + 0x6c) != '\x01') {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffb;
        }
        return;
      }
    }
  }
  return;
}

