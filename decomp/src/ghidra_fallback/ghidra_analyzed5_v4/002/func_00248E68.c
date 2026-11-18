#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00143DB0(int param_1,int param_2,int param_3,float fparam_0);
extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_00255484(int param_1,int param_2,undefined4 param_3);
extern int func_00259CBC(int param_1,uint param_2);
extern int func_002919E8(int param_1,int param_2);
extern int func_002923F0(int param_1,undefined1 param_2);
extern int func_00292508(int param_1);
extern int func_002944C4(int param_1,int *param_2);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004B9AF4(undefined4 *param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EA120(int param_1,int *param_2);
extern int func_004EBB28(int param_1,int *param_2,int param_3);
extern int func_0051B480(int param_1);
extern int func_0051B874(int param_1,int param_2);
extern int func_0051B89C(int param_1);
extern int func_0051BB74(int param_1,int *param_2,int param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547514(int param_1);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0058DFB0(int param_1);
extern int *DAT_00249200;
extern undefined4 DAT_00249204;
extern float DAT_00249208;
extern undefined4 DAT_0024920c;
extern int *DAT_00249210;
extern float DAT_00249214;
extern float DAT_00249218;
extern int *DAT_0024921c;
extern uint DAT_00249220;
extern undefined4 DAT_00249224;
extern uint *DAT_00249228;
extern undefined4 *DAT_0024922c;
extern undefined4 *DAT_00249230;
extern int *DAT_00249234;
extern int *DAT_00249238;
extern undefined4 DAT_0024923c;
extern float DAT_00249240;
extern int DAT_00249584;
extern float DAT_00249588;
extern float DAT_0024958c;
extern int DAT_00249590;
extern undefined4 DAT_00249594;
extern int *DAT_00249598;

// USA 00248E68 <- EU 00248E68 (Ghidra, non-matching)
// GLOBAL DAT_00249200 int *
// GLOBAL DAT_00249204 undefined4
// GLOBAL DAT_00249208 float
// GLOBAL DAT_0024920c undefined4
// GLOBAL DAT_00249210 int *
// GLOBAL DAT_00249214 float
// GLOBAL DAT_00249218 float
// GLOBAL DAT_0024921c int *
// GLOBAL DAT_00249220 uint
// GLOBAL DAT_00249224 undefined4
// GLOBAL DAT_00249228 uint *
// GLOBAL DAT_0024922c undefined4 *
// GLOBAL DAT_00249230 undefined4 *
// GLOBAL DAT_00249234 int *
// GLOBAL DAT_00249238 int *
// GLOBAL DAT_0024923c undefined4
// GLOBAL DAT_00249240 float
// GLOBAL DAT_00249584 int
// GLOBAL DAT_00249588 float
// GLOBAL DAT_0024958c float
// GLOBAL DAT_00249590 int
// GLOBAL DAT_00249594 undefined4
// GLOBAL DAT_00249598 int *

void func_00248E68(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(float *)(albw_frame + 0x0))
  #define local_9c (*(undefined4 *)(albw_frame + 0x4))
  #define local_98 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_94 (*(undefined4 *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(uint *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(undefined1 *)(albw_frame + 0x58))
  #define local_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  fVar11 = DAT_00249214;
  uVar15 = DAT_0024920c;
  fVar13 = DAT_00249208;
  uVar5 = DAT_00249204;
  piVar1 = DAT_00249200;
  piVar10 = (int *)(param_1 + 0x4d4);
  puVar8 = (undefined4 *)(param_1 + 0x4bc);
  *(ushort *)(*DAT_00249200 + 0x33e) = *(ushort *)(*DAT_00249200 + 0x33e) | 4;
  fVar12 = DAT_00249218;
  iVar9 = *DAT_00249210;
  switch(*(undefined4 *)(param_1 + 0x4d4)) {
  case 0:
    uVar7 = *(uint *)(param_1 + 0x4bc);
    if (*(uint *)(param_1 + 0x4c0) <= uVar7) {
      *(undefined4 *)(param_1 + 0x4c0) = 300;
      *(float *)(param_1 + 0x4c4) = fVar12;
      *puVar8 = 0;
      piVar1 = DAT_0024921c;
      iVar9 = 0;
      uVar14 = (ulonglong)DAT_00249220;
      local_98 = (undefined4 *)DAT_00249224;
      do {
        puVar8 = (undefined4 *)
                 func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0x4e4 + iVar9 * 4));
        if (puVar8 != (undefined4 *)0x0) {
          if (((*DAT_00249228 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00249228), iVar6 != 0)
             ) {
            *DAT_0024922c = local_98;
          }
          iVar6 = (**(code **)*puVar8)(puVar8,DAT_0024922c);
          puVar3 = (undefined4 *)0x0;
          if (iVar6 != 0) {
            puVar3 = puVar8;
          }
          if (puVar3 != (undefined4 *)0x0) {
            fVar12 = ALBW_AS_F32(uVar14);
            func_00143DB0((int)puVar3,0,0xb4,fVar12);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 3);
      local_9c = DAT_00249230[1];
      local_a0 = fVar11;
      func_004EA120(*DAT_00249234,(int *)&local_a0);
      func_004AD9E8(*DAT_00249238,2,0,1,fVar12);
      iVar9 = *(int *)(param_1 + 0x4d4) + 1;
      goto LAB_002494fc;
    }
    break;
  case 1:
    uVar7 = *(uint *)(param_1 + 0x4bc);
    if (*(uint *)(param_1 + 0x4c0) <= uVar7) {
      if (iVar9 == 0) {
        return;
      }
      iVar9 = func_002923F0(iVar9,0);
      uVar2 = DAT_0024923c;
      if (iVar9 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x4c0) = 0x1b8;
      *(undefined4 *)(param_1 + 0x4c4) = uVar2;
      *puVar8 = 0;
      local_98 = &local_94;
      local_9c = 3;
      local_4c = 0;
      local_48 = 0;
      local_a0 = 1.4013e-45;
      local_94 = 0;
      local_80 = (uint)puVar8 | 0xff;
      local_90 = uVar15;
      local_8c = fVar13;
      local_88 = uVar5;
      local_84 = fVar13;
      func_0016898C(*(int *)(param_1 + 0x47c),(uint *)&local_a0);
      local_3c = DAT_00249230[1];
      local_40 = fVar11;
      func_002944C4(*DAT_00249234,&local_40);
      func_004AD9E8(*DAT_00249238,3,0,1,fVar13);
      goto LAB_00249458;
    }
    break;
  case 2:
    iVar6 = *(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8);
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    fVar12 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = *(float *)(param_1 + 0x4d8);
    *(float *)(param_1 + 0x4d8) = fVar11 + (fVar13 - fVar11) * (fVar13 / fVar12);
    if (*(uint *)(param_1 + 0x4c8) < *(uint *)(param_1 + 0x4cc)) {
      *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) + 1;
    }
    if (*(uint *)(param_1 + 0x4bc) < *(uint *)(param_1 + 0x4c0)) {
      *(uint *)(param_1 + 0x4bc) = *(uint *)(param_1 + 0x4bc) + 1;
    }
    else {
      func_004AD9E8(*DAT_00249238,4,0,1,fVar13 / fVar12);
      func_004B9AF4(&local_a0,0x1c);
      func_0051BB74(*piVar1,(int *)&local_a0,0,0);
      *piVar10 = *(int *)(param_1 + 0x4d4) + 1;
    }
    iVar6 = DAT_00249584;
    iVar4 = *(int *)(*(int *)(param_1 + 0x47c) + 0x14);
    fVar13 = *(float *)(iVar4 + 0xc);
    if (*(float *)(iVar4 + 8) < fVar13) {
      if (((*(float *)(iVar4 + 0x14) <= fVar13) || (DAT_00249240 <= fVar13)) ||
         (*(float *)(iVar4 + 0x14) < DAT_00249240)) goto joined_r0x00249280;
LAB_00249284:
      local_a0 = *(float *)(param_1 + 0x3d0);
      local_9c = *(undefined4 *)(param_1 + 0x3d4);
      local_98 = *(undefined4 **)(param_1 + 0x3d8);
      func_00115C54(&local_a0,&local_a0,(float *)(DAT_00249584 + 0x1c));
      local_94 = uVar5;
      local_90 = uVar15;
      local_8c = ALBW_AS_F32(uVar5);
      (**(code **)(**(int **)(param_1 + 0x4dc) + 0x3c))(*(int **)(param_1 + 0x4dc),&local_a0,iVar6);
    }
    else if (fVar13 < DAT_00249240) {
joined_r0x00249280:
      if (DAT_00249240 <= *(float *)(iVar4 + 8)) goto LAB_00249284;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x47c) + 0x14);
    fVar11 = *(float *)(iVar6 + 8);
    fVar13 = *(float *)(iVar6 + 0xc);
    if (fVar11 < fVar13) {
      if (fVar13 < *(float *)(iVar6 + 0x14)) {
        if ((DAT_00249588 <= fVar13) || (*(float *)(iVar6 + 0x14) < DAT_00249588))
        goto joined_r0x00249350;
      }
      else if (fVar11 < DAT_00249588) goto LAB_00249388;
LAB_00249354:
      func_00255484(iVar9,0,3);
      func_0051B89C(*piVar1);
      func_002919E8(iVar9,1);
      *(undefined1 *)(param_1 + 0x4b9) = 1;
    }
    else {
      if (fVar13 < DAT_00249588) {
joined_r0x00249350:
        if (DAT_00249588 <= fVar11) goto LAB_00249354;
      }
LAB_00249388:
      if (*(char *)(param_1 + 0x4b9) != '\0') {
        func_004CF478(*(int *)(param_1 + 0x478),0);
        *(undefined1 *)(param_1 + 0x4b9) = 0;
      }
    }
    uVar5 = *(undefined4 *)(param_1 + 0x4d8);
    *(undefined4 *)(param_1 + 0x4ac) = uVar5;
    *(undefined4 *)(param_1 + 0x4b0) = uVar5;
    *(undefined4 *)(param_1 + 0x4b4) = uVar5;
    return;
  case 3:
    iVar6 = func_0058DFB0(*piVar1);
    fVar13 = DAT_0024958c;
    if (iVar6 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4c0) = 0x1e;
    *(float *)(param_1 + 0x4c4) = fVar13;
    *puVar8 = 0;
    func_002919E8(iVar9,0);
    func_00292508(iVar9);
    func_0051B874(*piVar1,0);
    func_0051B480(*piVar1);
    iVar9 = func_001DD484(*DAT_00249210,0x50,1);
    if (iVar9 != 0) {
      func_004AD9E8(*DAT_00249238,5,0,1,fVar13);
    }
LAB_00249458:
    *piVar10 = *(int *)(param_1 + 0x4d4) + 1;
    return;
  case 4:
    uVar7 = *(uint *)(param_1 + 0x4bc);
    if (*(uint *)(param_1 + 0x4c0) <= uVar7) {
      iVar9 = func_00165E28(*(int *)(param_1 + 0x4dc),*(undefined2 *)(DAT_00249590 + 0x2a));
      if (iVar9 == 0) {
        return;
      }
      func_004AD9E8(*DAT_00249238,6,0,1,in_s0);
      uVar5 = DAT_00249594;
      *(undefined4 *)(param_1 + 0x4c0) = 0x3c;
      *(undefined4 *)(param_1 + 0x4c4) = uVar5;
      *puVar8 = 0;
      goto LAB_00249458;
    }
    break;
  case 5:
    if ((*(int *)(*DAT_00249598 + 0x18) != 0) &&
       (-1 < *(int *)(*(int *)(*DAT_00249598 + 0x18) + 0x10c))) {
      return;
    }
    iVar9 = 6;
    *(undefined1 *)(param_1 + 0x4ba) = 1;
LAB_002494fc:
    *piVar10 = iVar9;
    return;
  case 6:
    uVar7 = *(uint *)(param_1 + 0x4bc);
    if (*(uint *)(param_1 + 0x4c0) <= uVar7) {
      func_00588C14(param_1,0,1);
      piVar1 = DAT_00249234;
      local_9c = *DAT_00249230;
      local_a0 = fVar11;
      func_004EBB28(*DAT_00249234,(int *)&local_a0,5);
      func_00259CBC(*piVar1,0);
      *piVar10 = *(int *)(param_1 + 0x4d4) + 1;
      func_00547514(param_1 + 4);
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      return;
    }
    break;
  default:
    goto switchD_00248ecc_default;
  }
  *(uint *)(param_1 + 0x4bc) = uVar7 + 1;
switchD_00248ecc_default:
  return;
}

