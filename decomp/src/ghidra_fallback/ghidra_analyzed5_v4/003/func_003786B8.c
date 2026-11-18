#include "ghidra_types.h"

extern float func_00115C14(float *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_002D55E8(int param_1);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0052FE18(int param_1,undefined4 *param_2);
extern int func_0054E6B0(int *param_1,float *param_2,int *param_3);
extern int func_0068C58C(float *param_1);
extern float DAT_00378994;
extern float DAT_00378998;
extern float DAT_0037899c;
extern int DAT_003789a0;
extern float DAT_00378fdc;

// USA 003786B8 <- EU 00378694 (Ghidra, non-matching)
// GLOBAL DAT_00378994 float
// GLOBAL DAT_00378998 float
// GLOBAL DAT_0037899c float
// GLOBAL DAT_003789a0 int
// GLOBAL DAT_00378fdc float

void func_003786B8(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define fStack_60 (*(float *)(albw_frame + 0x20))
  #define fStack_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define fStack_50 (*(float *)(albw_frame + 0x30))
  #define fStack_4c (*(float *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define fStack_40 (*(float *)(albw_frame + 0x40))
  #define local_3c (*(float *)(albw_frame + 0x44))
  #define local_38 (*(float *)(albw_frame + 0x48))
  #define fStack_34 (*(float *)(albw_frame + 0x4c))
  #define local_30 ((float *)(albw_frame + 0x50))
  fVar10 = DAT_00378998;
  switch(param_2) {
  case 0x73:
    fVar8 = DAT_00378994;
    iVar3 = func_002D55E8(param_1);
    if (iVar3 != 0) goto switchD_003786b8_default;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) != 0 || (bVar1 & 8) != 0) ||
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) != '\0')) {
      if (*(int **)(param_1 + 0x74) != (int *)0x0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x6c))(*(int **)(param_1 + 0x74));
        if (iVar3 != 0) {
          if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar8) goto LAB_00378744;
          goto LAB_0037873c;
        }
        local_48 = 0.0;
        func_0054E6B0(*(int **)(param_1 + 0x74),&local_38,(int *)&local_48);
        fVar9 = DAT_0037899c;
        func_0051D2CC(*(int **)(param_1 + 0x3c),(int)ALBW_AS_U32(local_48),DAT_0037899c);
        pfVar5 = *(float **)(param_1 + 0x30);
        local_70 = local_38;
        local_6c = fStack_34;
        local_68 = local_30[0];
        func_00115C70(&local_44,&local_70,pfVar5);
        local_58 = local_44;
        local_54 = fStack_40;
        fStack_50 = local_3c;
        func_00115D70(&local_44,&local_58,fVar9);
        local_64 = local_44;
        fStack_60 = fStack_40;
        fStack_5c = local_3c;
        func_00115C54(pfVar5,pfVar5,&local_64);
      }
      iVar3 = *(int *)(param_1 + 0x48);
      if (*(float *)(iVar3 + 0x24) <= fVar8) {
        if ((*(uint *)(*(int *)(iVar3 + 0x14) + 0x10c) & 1) == 0) break;
      }
      else {
        piVar2 = *(int **)(param_1 + 0x74);
        if (piVar2 != (int *)0x0) {
          iVar7 = *(int *)(iVar3 + 0x14);
          iVar6 = 0;
          pfVar5 = (float *)(**(code **)(*piVar2 + 0x78))(piVar2);
          local_70 = *pfVar5 - **(float **)(param_1 + 0x30);
          iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x78))(*(int **)(param_1 + 0x74));
          local_6c = *(float *)(*(int *)(param_1 + 0x30) + 8) - *(float *)(iVar3 + 8);
          func_00115C14(&local_70);
          iVar3 = DAT_003789a0;
          fVar9 = *(float *)(iVar7 + 0x118) * local_70 + *(float *)(iVar7 + 0x11c) * local_6c;
          fVar8 = fVar9;
          if (DAT_003789a0 < (int)ALBW_AS_U32(fVar9)) {
            iVar6 = func_0068C58C(&local_70);
            iVar6 = iVar6 + 0x40000000;
          }
          if ((uint)ALBW_AS_U32(fVar10) < (uint)ALBW_AS_U32(fVar8)) {
            iVar6 = func_0068C58C(&local_70);
            iVar6 = iVar6 + -0x40000000;
          }
          if ((iVar3 < (int)ALBW_AS_U32(fVar9)) &&
             (piVar2 = *(int **)(param_1 + 0x74), (char)piVar2[0x13a] != '\0')) {
            iVar3 = (**(code **)(*piVar2 + 0x58))(piVar2,iVar6 + 0x20000000U >> 0x1e);
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_1 + 0x4c);
              *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
              func_0028D580((uint *)(iVar3 + 0x3c),0x60,1,1,6);
              func_0028D580((uint *)(iVar3 + 0x5c),0x60,1,1,6);
              iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x54))(*(int **)(param_1 + 0x74));
              if (iVar3 < *(int *)(param_1 + 0x7c)) {
                func_002D55D0(param_1,0x74);
              }
              goto switchD_003786b8_default;
            }
            iVar6 = *(int *)(param_1 + 0x4c);
            func_0028D580((uint *)(iVar6 + 0x3c),0x60,1,1,6);
            iVar3 = 0x60;
          }
          else {
            if (((uint)ALBW_AS_U32(fVar8) <= (uint)ALBW_AS_U32(fVar10)) ||
               (piVar2 = *(int **)(param_1 + 0x74), *(char *)((int)piVar2 + 0x4e9) == '\0'))
            goto LAB_00378a94;
            iVar3 = (**(code **)(*piVar2 + 0x58))(piVar2,iVar6 + 0x20000000U >> 0x1e);
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_1 + 0x4c);
              *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
              func_0028D580((uint *)(iVar3 + 0x3c),0x61,1,1,6);
              func_0028D580((uint *)(iVar3 + 0x5c),0x61,1,1,6);
              iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x54))(*(int **)(param_1 + 0x74));
              if (iVar3 < *(int *)(param_1 + 0x80)) {
                func_002D55D0(param_1,0x75);
              }
              goto switchD_003786b8_default;
            }
            iVar6 = *(int *)(param_1 + 0x4c);
            func_0028D580((uint *)(iVar6 + 0x3c),0x61,1,1,6);
            iVar3 = 0x61;
          }
LAB_00378e3c:
          func_0028D580((uint *)(iVar6 + 0x5c),iVar3,1,1,6);
          goto switchD_003786b8_default;
        }
      }
LAB_00378a94:
      iVar6 = *(int *)(param_1 + 0x4c);
      if (*(char *)(param_1 + 0x84) == '\0') {
        iVar3 = 0x5e;
      }
      else {
        iVar3 = 0x5f;
      }
      func_0028D580((uint *)(iVar6 + 0x3c),iVar3,1,1,6);
LAB_00378f0c:
      func_0028D580((uint *)(iVar6 + 0x5c),iVar3,1,1,6);
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x80) = 0;
      goto switchD_003786b8_default;
    }
    break;
  case 0x74:
    fVar10 = DAT_00378994;
    iVar3 = func_002D55E8(param_1);
    if (iVar3 != 0) goto switchD_003786b8_default;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) == 0 && (bVar1 & 8) == 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) == '\0')) break;
    if (*(int **)(param_1 + 0x74) == (int *)0x0) goto switchD_003786b8_default;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x6c))(*(int **)(param_1 + 0x74));
    if (iVar3 == 0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x68))(*(int **)(param_1 + 0x74));
      if (iVar3 == 0) {
        (**(code **)(**(int **)(param_1 + 0x74) + 0x70))(*(int **)(param_1 + 0x74),&local_74);
        **(undefined4 **)(param_1 + 0x34) = local_74;
        *(float *)(*(int *)(param_1 + 0x34) + 8) = local_6c;
        goto switchD_003786b8_default;
      }
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0x14) + 0x10c) & 1) != 0) {
LAB_00378c44:
        func_002D55D0(param_1,0x73);
        goto switchD_003786b8_default;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar10) goto LAB_00378744;
LAB_0037873c:
      uVar4 = 1;
    }
    else {
      if (fVar10 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)) goto LAB_0037873c;
LAB_00378744:
      uVar4 = 0;
    }
    func_002D55D0(param_1,uVar4);
    goto switchD_003786b8_default;
  case 0x75:
    fVar10 = DAT_00378994;
    iVar3 = func_002D55E8(param_1);
    if (iVar3 != 0) goto switchD_003786b8_default;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) != 0 || (bVar1 & 8) != 0) ||
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) != '\0')) {
      if (*(int **)(param_1 + 0x74) == (int *)0x0) goto switchD_003786b8_default;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x6c))(*(int **)(param_1 + 0x74));
      if (iVar3 == 0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x68))(*(int **)(param_1 + 0x74));
        if (iVar3 == 0) {
          (**(code **)(**(int **)(param_1 + 0x74) + 0x70))(*(int **)(param_1 + 0x74),&local_74);
          **(undefined4 **)(param_1 + 0x34) = local_74;
          iVar3 = *(int *)(param_1 + 0x34);
          local_68 = local_6c;
          goto LAB_00379010;
        }
        if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0x14) + 0x10c) & 1) != 0)
        goto LAB_00378c44;
        if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar10) goto LAB_00378744;
      }
      else if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar10) goto LAB_00378744;
      goto LAB_0037873c;
    }
    break;
  case 0x76:
    fVar8 = DAT_00378994;
    iVar3 = func_002D55E8(param_1);
    if (iVar3 != 0) goto switchD_003786b8_default;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) != 0 || (bVar1 & 8) != 0) ||
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) != '\0')) {
      piVar2 = *(int **)(param_1 + 0x78);
      if (piVar2 != (int *)0x0) {
        local_30[0] = 0.0;
        (**(code **)(*piVar2 + 0x5c))(piVar2,&local_48,local_30);
        fVar9 = DAT_00378fdc;
        func_0051D2CC(*(int **)(param_1 + 0x3c),(int)ALBW_AS_U32(local_30[0]),DAT_00378fdc);
        pfVar5 = *(float **)(param_1 + 0x30);
        local_70 = local_48;
        local_6c = local_44;
        local_68 = fStack_40;
        func_00115C70(&local_3c,&local_70,pfVar5);
        local_64 = local_3c;
        fStack_60 = local_38;
        fStack_5c = fStack_34;
        func_00115D70(&local_3c,&local_64,fVar9);
        local_54 = local_3c;
        fStack_50 = local_38;
        fStack_4c = fStack_34;
        func_00115C54(pfVar5,pfVar5,&local_54);
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar8) {
        if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0x14) + 0x10c) & 1) == 0) break;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x78);
        if (iVar3 != 0) {
          local_70 = *(float *)(iVar3 + 0x3d0) - **(float **)(param_1 + 0x30);
          local_6c = (*(float **)(param_1 + 0x30))[2] - *(float *)(iVar3 + 0x3d8);
          func_00115C14(&local_70);
          iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 0x14);
          if ((uint)ALBW_AS_U32(fVar10) <
              (uint)ALBW_AS_U32((*(float *)(iVar3 + 0x118) * local_70 + *(float *)(iVar3 + 0x11c) * local_6c))) {
            iVar3 = *(int *)(param_1 + 0x78);
            if ((*(float *)(iVar3 + 0x478) != *(float *)(iVar3 + 0x49c)) ||
               (*(float *)(iVar3 + 0x480) != *(float *)(iVar3 + 0x4a4))) {
              iVar3 = *(int *)(param_1 + 0x4c);
              *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
              func_0028D580((uint *)(iVar3 + 0x3c),0x61,1,1,6);
              func_0028D580((uint *)(iVar3 + 0x5c),0x61,1,1,6);
              iVar3 = (**(code **)(**(int **)(param_1 + 0x78) + 0x54))(*(int **)(param_1 + 0x78));
              if (iVar3 < *(int *)(param_1 + 0x80)) {
                func_002D55D0(param_1,0x77);
              }
              goto switchD_003786b8_default;
            }
            iVar6 = *(int *)(param_1 + 0x4c);
            func_0028D580((uint *)(iVar6 + 0x3c),0x61,1,1,6);
            iVar3 = 0x61;
            goto LAB_00378e3c;
          }
        }
      }
      iVar6 = *(int *)(param_1 + 0x4c);
      func_0028D580((uint *)(iVar6 + 0x3c),0x5e,1,1,6);
      iVar3 = 0x5e;
      goto LAB_00378f0c;
    }
    break;
  case 0x77:
    fVar10 = DAT_00378994;
    iVar3 = func_002D55E8(param_1);
    if (iVar3 != 0) goto switchD_003786b8_default;
    bVar1 = *(byte *)(*(int *)(param_1 + 0x50) + 0x324);
    if (((bVar1 & 1) != 0 || (bVar1 & 8) != 0) ||
       (*(char *)(*(int *)(param_1 + 0x50) + 0x168) != '\0')) {
      iVar3 = *(int *)(param_1 + 0x78);
      if (iVar3 == 0) goto switchD_003786b8_default;
      if ((*(float *)(iVar3 + 0x478) != *(float *)(iVar3 + 0x49c)) ||
         (*(float *)(iVar3 + 0x480) != *(float *)(iVar3 + 0x4a4))) {
        func_0052FE18(iVar3,&local_70);
        **(float **)(param_1 + 0x34) = local_70;
        iVar3 = *(int *)(param_1 + 0x34);
LAB_00379010:
        *(float *)(iVar3 + 8) = local_68;
        goto switchD_003786b8_default;
      }
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x48) + 0x14) + 0x10c) & 1) != 0) {
        func_002D55D0(param_1,0x76);
        goto switchD_003786b8_default;
      }
      if (*(float *)(*(int *)(param_1 + 0x48) + 0x24) <= fVar10) goto LAB_00378744;
      goto LAB_0037873c;
    }
    break;
  default:
    goto switchD_003786b8_default;
  }
  func_002D55D0(param_1,0);
switchD_003786b8_default:
  *(undefined1 *)(*(int *)(param_1 + 0x50) + 0x166) = 0;
  return;
}

