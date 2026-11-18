#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5FC4(uint *param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0);
extern int func_0028C920(int param_1,int param_2,undefined4 *param_3,float fparam_0,float fparam_1);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002DD4B0(int param_1,int param_2);
extern int func_002DD8F8(int param_1);
extern int func_002DDBA0(int param_1);
extern int func_002DDCE0(int param_1,float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053EDD8(int param_1);
extern int func_0053F7CC(int param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int *DAT_002de1e0;
extern uint *DAT_002de1e4;
extern float DAT_002de1e8;
extern float DAT_002de1ec;
extern undefined4 DAT_002de1f0;
extern float DAT_002de1f4;
extern float DAT_002de1f8;
extern undefined4 *DAT_002de1fc;
extern undefined4 *DAT_002de200;
extern float DAT_002de8a4;
extern float DAT_002de8a8;
extern float DAT_002de8ac;
extern float DAT_002de8b0;
extern float DAT_002de8b4;
extern float DAT_002de8b8;
extern float DAT_002de8bc;

// USA 002DDEFC <- EU 002DDED8 (Ghidra, non-matching)
// GLOBAL DAT_002de1e0 int *
// GLOBAL DAT_002de1e4 uint *
// GLOBAL DAT_002de1e8 float
// GLOBAL DAT_002de1ec float
// GLOBAL DAT_002de1f0 undefined4
// GLOBAL DAT_002de1f4 float
// GLOBAL DAT_002de1f8 float
// GLOBAL DAT_002de1fc undefined4 *
// GLOBAL DAT_002de200 undefined4 *
// GLOBAL DAT_002de8a4 float
// GLOBAL DAT_002de8a8 float
// GLOBAL DAT_002de8ac float
// GLOBAL DAT_002de8b0 float
// GLOBAL DAT_002de8b4 float
// GLOBAL DAT_002de8b8 float
// GLOBAL DAT_002de8bc float

undefined4 func_002DDEFC(int param_1,undefined4 param_2)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc0 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = DAT_002de1f0;
  fVar9 = DAT_002de1e8;
  puVar2 = DAT_002de1e4;
  piVar3 = DAT_002de1e0;
  switch(param_2) {
  case 0x91:
    fVar10 = DAT_002de1ec;
    func_002DDBA0(param_1);
    if (*(short *)(*(int *)(param_1 + 0x4c) + 0x52) == 99) {
      func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,DAT_002de1f4);
    }
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar10);
    func_002DD8F8(param_1);
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(uint *)(param_1 + 0x74) == 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x89) != '\0') {
        return 0;
      }
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 10) {
        return 0;
      }
      piVar3 = (int *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x74));
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002de1e4), iVar6 != 0)) {
        *DAT_002de200 = uVar4;
      }
      if ((piVar3 == (int *)0x0) || (iVar6 = (**(code **)*piVar3)(piVar3,DAT_002de200), iVar6 == 0))
      {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar3 + 0x50))(piVar3,&stack0xffffffc0);
        if (iVar6 != 0) {
LAB_002de07c:
          **(undefined4 **)(param_1 + 0x44) = 0;
          return 0;
        }
        if (fVar9 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) {
LAB_002de558:
          uVar7 = 1;
          goto LAB_002de0a8;
        }
LAB_002de560:
        uVar7 = 0;
LAB_002de0a8:
        return func_002D55D0(param_1,uVar7);
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    }
    else {
      func_0028C920(*(int *)(param_1 + 0x4c),0,DAT_002de1fc,fVar10,DAT_002de1f8);
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) {
LAB_002ddfb4:
        uVar7 = 0;
        goto LAB_002de688;
      }
    }
    break;
  case 0x92:
    fVar10 = DAT_002de1ec;
    func_002DDBA0(param_1);
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar10);
    func_002DD8F8(param_1);
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 10) {
        return 0;
      }
      piVar3 = (int *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x74));
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002de1e4), iVar6 != 0)) {
        *DAT_002de200 = uVar4;
      }
      if ((piVar3 == (int *)0x0) || (iVar6 = (**(code **)*piVar3)(piVar3,DAT_002de200), iVar6 == 0))
      {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar3 + 0x50))(piVar3,&stack0xffffffc0);
        if (iVar6 != 0) goto LAB_002de07c;
        if (fVar9 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_002de558;
        goto LAB_002de560;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    }
    else if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    break;
  case 0x93:
    fVar10 = DAT_002de1ec;
    func_002DDBA0(param_1);
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar10);
    func_002DD8F8(param_1);
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 10) {
        return 0;
      }
      piVar3 = (int *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x74));
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002de1e4), iVar6 != 0)) {
        *DAT_002de200 = uVar4;
      }
      if ((piVar3 == (int *)0x0) || (iVar6 = (**(code **)*piVar3)(piVar3,DAT_002de200), iVar6 == 0))
      {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar3 + 0x50))(piVar3,&stack0xffffffc0);
        if (iVar6 != 0) goto LAB_002de07c;
        if (fVar9 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_002de558;
        goto LAB_002de560;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    }
    else if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    break;
  case 0x94:
    fVar10 = DAT_002de1ec;
    func_002DDBA0(param_1);
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),fVar10);
    func_002DD8F8(param_1);
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 10) {
        return 0;
      }
      piVar3 = (int *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x74));
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002de1e4), iVar6 != 0)) {
        *DAT_002de200 = uVar4;
      }
      if ((piVar3 == (int *)0x0) || (iVar6 = (**(code **)*piVar3)(piVar3,DAT_002de200), iVar6 == 0))
      {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar3 + 0x50))(piVar3,&stack0xffffffc0);
        if (iVar6 != 0) goto LAB_002de07c;
        if (fVar9 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_002de558;
        goto LAB_002de560;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    }
    else if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    break;
  case 0x95:
    func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_002de1ec);
    if (*(char *)(param_1 + 0x88) == '\0') {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) != 10) {
        return 0;
      }
      piVar3 = (int *)func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_1 + 0x74));
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002de1e4), iVar6 != 0)) {
        *DAT_002de200 = uVar4;
      }
      if ((piVar3 == (int *)0x0) || (iVar6 = (**(code **)*piVar3)(piVar3,DAT_002de200), iVar6 == 0))
      {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        iVar6 = (**(code **)(*piVar3 + 0x50))(piVar3,&stack0xffffffc0);
        if (iVar6 != 0) goto LAB_002de07c;
        if (fVar9 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_002de558;
        goto LAB_002de560;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    }
    else if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    break;
  case 0x96:
    pfVar5 = *(float **)(param_1 + 0x34);
    *pfVar5 = DAT_002de1e8;
    pfVar5[1] = fVar9;
    pfVar5[2] = fVar9;
    if (*(char *)(param_1 + 0x88) == '\0') {
      func_0051D2CC(*(int **)(param_1 + 0x3c),*(int *)(param_1 + 0x58),DAT_002de8a4);
      func_002DD8F8(param_1);
      iVar6 = *(int *)(param_1 + 0x4c) + 0x3c;
      if (*(char *)(param_1 + 0x8a) == '\0') {
        iVar6 = func_0053EDD8(iVar6);
        if (iVar6 == 0) {
          return 0;
        }
        if (*(short *)(param_1 + 0x8c) != -1) {
          func_002DD4B0(param_1,(int)*(short *)(param_1 + 0x8c));
          *(undefined1 *)(param_1 + 0x8a) = 1;
          return 0;
        }
        uVar7 = (uint)*(short *)(param_1 + 0x90);
        if (uVar7 == 0xffffffff) {
          return 0;
        }
      }
      else {
        iVar6 = func_0053EDD8(iVar6);
        if (iVar6 == 0) {
          return 0;
        }
        if (*(short *)(param_1 + 0x8e) != -1) {
          func_002DD4B0(param_1,(int)*(short *)(param_1 + 0x8e));
          *(undefined1 *)(param_1 + 0x8a) = 0;
          return 0;
        }
        uVar7 = (uint)*(short *)(param_1 + 0x90);
        if (uVar7 == 0xffffffff) {
          uVar7 = func_0053F7CC(*(int *)(param_1 + 0x2c));
          return func_002DD4B0(param_1,uVar7);
        }
      }
      goto LAB_002de688;
    }
    if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar9) goto LAB_002ddfb4;
    break;
  case 0x97:
    fVar10 = DAT_002de1ec;
    uVar4 = func_001E5FC4(*(uint **)(param_1 + 0x70),*(float **)(param_1 + 0x30),
                          *(int **)(param_1 + 0x3c),(uint *)0x0,0,*(float *)(param_1 + 0x94));
    if (*(char *)(param_1 + 0xa8) != '\0') {
      pfVar5 = (float *)(*(int *)(param_1 + 0x30) + 4);
      fVar8 = *pfVar5;
      *pfVar5 = fVar8 + (*(float *)(param_1 + 0xa4) - fVar8) * fVar10;
    }
    iVar6 = *(int *)(param_1 + 0x9c);
    if (iVar6 < 0) {
      func_002DDCE0(param_1,*(float *)(param_1 + 0x94));
    }
    else {
      if (iVar6 == 0) {
        func_002DD4B0(param_1,(int)*(short *)(param_1 + 0x8c));
        *(undefined4 *)(param_1 + 0x9c) = 1;
      }
      else if (iVar6 == 1) {
        iVar6 = func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
        if ((iVar6 != 0) && (*(short *)(param_1 + 0x8e) != -1)) {
          func_002DD4B0(param_1,(int)*(short *)(param_1 + 0x8e));
          *(undefined4 *)(param_1 + 0x9c) = 2;
        }
      }
      else if (iVar6 == 2) {
        func_0053EDD8(*(int *)(param_1 + 0x4c) + 0x3c);
      }
      if (**(int **)(param_1 + 0x44) != 0) {
        func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x3c),0x59,1,1,6);
      }
    }
    func_002DD8F8(param_1);
    switch(uVar4) {
    case 0:
    case 1:
    case 2:
      cVar1 = *(char *)(param_1 + 0x98);
      fVar9 = DAT_002de8b0;
      if (cVar1 == '\0') goto LAB_002de808;
      break;
    case 3:
      cVar1 = *(char *)(param_1 + 0x98);
      if (cVar1 == '\0') {
        func_0068C794((float *)(param_1 + 0x94),DAT_002de8bc,DAT_002de8b0,DAT_002de8b8,DAT_002de8a8)
        ;
        return 0;
      }
      break;
    case 4:
      *(float *)(param_1 + 0x94) = fVar9;
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x6c6) = 0;
      return func_002D55D0(param_1,(int)*(short *)(param_1 + 0x90));
    default:
      goto switchD_002ddf10_default;
    }
    if (cVar1 == '\x01') {
      return func_0068C794((float *)(param_1 + 0x94),DAT_002de8b4,fVar10,DAT_002de8ac,DAT_002de8a8);
    }
    if (cVar1 == '\x02') {
      fVar9 = *(float *)(param_1 + 0xa0);
LAB_002de808:
      return func_0068C794((float *)(param_1 + 0x94),fVar9,fVar10,DAT_002de8ac,DAT_002de8a8);
    }
  default:
switchD_002ddf10_default:
    return 0;
  }
  uVar7 = 1;
LAB_002de688:
  return func_002D55D0(param_1,uVar7);
}

