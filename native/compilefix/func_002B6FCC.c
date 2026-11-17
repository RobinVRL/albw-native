/* USA 002B6FCC <- EU 002B6FA8 (stage-2 Ghidra text) with a dropped indirect-call argument restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129): vtable +0x138 (state change) takes (this, state, 1); at
 * the site Ghidra printed as (param_1,1) the ARM sets r2 = 1; mov r1, r2 (scratchpad vsite.py check). */
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002B5638(int param_1,uint *param_2);
extern float func_002B6294(int param_1);
extern int func_002B66B0(int param_1);
extern int func_002B7AD0(int param_1);
extern float func_002BA9A0(int param_1,float fparam_0);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058A7D4(void);
extern float DAT_002b7454;
extern float DAT_002b7458;
extern float DAT_002b745c;
extern int DAT_002b7460;
extern float DAT_002b7464;
extern float DAT_002b7468;
extern float DAT_002b746c;
extern float DAT_002b7470;
extern float DAT_002b7474;
extern int *DAT_002b7478;
extern uint *DAT_002b747c;
extern undefined4 *DAT_002b7480;
extern undefined4 DAT_002b7484;
extern undefined4 DAT_002b7488;
extern float DAT_002b74dc;
extern float DAT_002b74e0;

// USA 002B6FCC <- EU 002B6FA8 (Ghidra, non-matching)
// GLOBAL DAT_002b7454 float
// GLOBAL DAT_002b7458 float
// GLOBAL DAT_002b745c float
// GLOBAL DAT_002b7460 int
// GLOBAL DAT_002b7464 float
// GLOBAL DAT_002b7468 float
// GLOBAL DAT_002b746c float
// GLOBAL DAT_002b7470 float
// GLOBAL DAT_002b7474 float
// GLOBAL DAT_002b7478 int *
// GLOBAL DAT_002b747c uint *
// GLOBAL DAT_002b7480 undefined4 *
// GLOBAL DAT_002b7484 undefined4
// GLOBAL DAT_002b7488 undefined4
// GLOBAL DAT_002b74dc float
// GLOBAL DAT_002b74e0 float

undefined4 func_002B6FCC(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint in_r12;
  float fVar10;
  float fVar11;
  float fparam_0;
  float fparam_0_00;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define auStack_d0 ((uint *)(albw_frame + 0x0))
  #define pfStack_c8 (*(float * *)(albw_frame + 0x8))
  #define fStack_c4 (*(float *)(albw_frame + 0xc))
  #define fStack_c0 (*(float *)(albw_frame + 0x10))
  #define fStack_bc (*(float *)(albw_frame + 0x14))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_b4 (*(float *)(albw_frame + 0x1c))
  #define uStack_b0 (*(uint *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_78 (*(undefined1 *)(albw_frame + 0x58))
  #define auStack_5c ((uint *)(albw_frame + 0x74))
  if ((*(short *)(param_1[0x12] + 0xafe) == 0) &&
     (piVar4 = (int *)(**(code **)(*param_1 + 0xd4))(param_1), param_1[0x13] <= *piVar4)) {
    puVar5 = (uint *)func_0058A7D4();
    uVar6 = func_00111A64(puVar5);
    if (0x32 < (uint)((ulonglong)uVar6 * 0x65 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x002b7028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x138))(param_1,0,1);
    }
                    /* WARNING: Could not recover jumptable at 0x002b7018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0x138))(param_1,1,1);
  }
  iVar7 = param_1[0x12];
  func_002B7AD0(iVar7);
  func_002B66B0(iVar7);
  auStack_5c[0] =
       func_004D80EC((float *)(iVar7 + 0x3d0),(float *)(iVar7 + 0xa08),*(int *)(iVar7 + 1000));
  func_002B5638(iVar7,auStack_5c);
  pfVar9 = (float *)(iVar7 + 0xa2c);
  fVar13 = DAT_002b7454;
  fparam_0_00 = DAT_002b7454;
  func_004D80A4(&fStack_c4,auStack_5c[0],DAT_002b7458);
  fStack_c0 = fVar13;
  func_00115C54(pfVar9,pfVar9,&fStack_c4);
  fVar10 = SQRT(*pfVar9 * *pfVar9 + *(float *)(iVar7 + 0xa30) * *(float *)(iVar7 + 0xa30) +
                *(float *)(iVar7 + 0xa34) * *(float *)(iVar7 + 0xa34));
  fparam_0 = DAT_002b745c;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar10)) {
    fVar10 = DAT_002b745c;
    func_00115DC8(pfVar9);
    fparam_0 = fVar10;
  }
  fVar14 = DAT_002b7468;
  iVar8 = DAT_002b7460;
  cVar2 = *(char *)(iVar7 + 0x936);
  uVar6 = *(uint *)(iVar7 + 0xa1c);
  fVar12 = fparam_0;
  if (cVar2 == '\0') {
    *(float *)(*(int *)(*(int *)(iVar7 + 0x8dc) + 0x14) + 0x10) = fparam_0;
    *(float *)(*(int *)(*(int *)(iVar7 + 0x8e0) + 0x14) + 0x10) = fparam_0;
  }
  else {
    iVar1 = DAT_002b7460 >> 2;
    piVar4 = (int *)(iVar7 + 0xa1c);
    if (cVar2 == '\x02') {
      fparam_0_00 = fVar10 * DAT_002b7474;
      fparam_0 = DAT_002b7468;
      fVar14 = DAT_002b7464;
      fVar11 = func_002B6294(iVar7);
      fVar10 = fVar11 * fVar10;
      if (*(char *)(iVar7 + 0xb3f) != '\0') {
        fVar10 = fVar12;
      }
      *(float *)(*(int *)(*(int *)(iVar7 + 0x8e0) + 0x14) + 0x10) = fVar10;
      func_0051D2F4((int *)(iVar7 + 1000),*(int *)(iVar7 + 0xa20),iVar1,iVar8,fVar14);
      func_0051D2CC(piVar4,auStack_5c[0],fparam_0);
      uVar6 = *(uint *)(iVar7 + 0xa1c);
    }
    else if (cVar2 == '\x03') {
      fVar11 = DAT_002b7464;
      fparam_0_00 = func_002BA9A0(iVar7,fVar10);
      fVar12 = fparam_0;
      fparam_0 = fVar14;
      func_0051D2F4((int *)(iVar7 + 1000),*(int *)(iVar7 + 0xa20),iVar1,iVar8,fVar11);
      func_0051D2CC(piVar4,auStack_5c[0],fparam_0);
      uVar6 = *(uint *)(iVar7 + 0xa1c);
    }
    else {
      fparam_0_00 = fVar10 * DAT_002b746c;
      fVar10 = fparam_0_00 * DAT_002b7470;
      if (*(char *)(iVar7 + 0xb3f) != '\0') {
        fVar10 = fparam_0;
      }
      *(float *)(*(int *)(*(int *)(iVar7 + 0x8dc) + 0x14) + 0x10) = fVar10;
      *(float *)(*(int *)(*(int *)(iVar7 + 0x8e0) + 0x14) + 0x10) = fVar10;
      fparam_0 = fVar14;
      func_0051D2CC((int *)(iVar7 + 1000),auStack_5c[0],fVar14);
      func_0051D2CC(piVar4,auStack_5c[0],fparam_0);
      uVar6 = *(uint *)(iVar7 + 1000);
    }
  }
  if (*(char *)(iVar7 + 0xb3f) != '\0') {
    *pfVar9 = fVar13;
    *(float *)(iVar7 + 0xa30) = fVar13;
    *(float *)(iVar7 + 0xa34) = fVar13;
    fparam_0_00 = fVar13;
  }
  bVar3 = func_003840A0(iVar7 + 0x8c0,0x59);
  if ((bVar3) || (bVar3 = func_003840A0(iVar7 + 0x8c0,0x58), bVar3)) {
    piVar4 = (int *)func_0052FBA0(*DAT_002b7478 + 0x3dbbc,*(uint *)(*(int *)(iVar7 + 0x93c) + 0x5cc)
                                 );
    if (((*DAT_002b747c & 1) == 0) && (iVar8 = func_00100174((int *)DAT_002b747c), iVar8 != 0)) {
      *DAT_002b7480 = DAT_002b7484;
    }
    if ((piVar4 == (int *)0x0) || (iVar8 = (**(code **)*piVar4)(piVar4,DAT_002b7480), iVar8 == 0)) {
      piVar4 = (int *)0x0;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x60))(piVar4);
      fparam_0_00 = fparam_0 * fparam_0_00;
    }
    iVar8 = func_003838A8(iVar7 + 0x8c0,7);
    if (**(int **)(*(int *)(iVar7 + 0x8e0) + 0x14) != iVar8) {
      fVar10 = ALBW_AS_F32(func_003838A8(iVar7 + 0x8c0,7));
      iVar8 = func_003838A8(iVar7 + 0x8c0,(int)ALBW_AS_U32(fVar10));
      if (**(int **)(*(int *)(iVar7 + 0x8e0) + 0x14) != iVar8) {
        pfStack_c8 = &fStack_c4;
        auStack_d0[1] = 3;
        auStack_d0[0] = 1;
        uStack_7c = 10;
        uStack_78 = 0;
        uStack_b0 = in_r12 | 0xff;
        uStack_b8 = DAT_002b7488;
        fStack_c4 = fVar10;
        fStack_c0 = fVar13;
        fStack_bc = fVar12;
        fStack_b4 = fVar12;
        func_0016898C(*(int *)(iVar7 + 0x8e0),auStack_d0);
      }
    }
  }
  if ((*(char *)(iVar7 + 0xb34) != '\0') && (*(short *)(iVar7 + 0xaf0) == 0)) {
    pfVar9 = (float *)(iVar7 + 0x988);
    func_004D80A4(pfVar9,uVar6,fparam_0_00);
    *(float *)(iVar7 + 0x98c) = fVar13;
    if (*(char *)(iVar7 + 0x392) == '\t') {
      return func_00115DAC((float *)(iVar7 + 0x3dc),pfVar9,(float *)(iVar7 + 0x3dc),DAT_002b74e0);
    }
    func_00115DAC((float *)(iVar7 + 0x3dc),pfVar9,(float *)(iVar7 + 0x3dc),
                  *(float *)(iVar7 + 0xa58) + (fVar12 - *(float *)(iVar7 + 0xa58)) * DAT_002b74dc);
  }
  return 0;
}

