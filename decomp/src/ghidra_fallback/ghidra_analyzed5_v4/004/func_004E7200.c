#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_004e7418;
extern float DAT_004e741c;
extern float DAT_004e7420;
extern uint DAT_004e7424;
extern float DAT_004e7428;
extern float DAT_004e742c;
extern float DAT_004e7430;
extern float DAT_004e7434;

// USA 004E7200 <- EU 004E71D8 (Ghidra, non-matching)
// GLOBAL DAT_004e7418 int *
// GLOBAL DAT_004e741c float
// GLOBAL DAT_004e7420 float
// GLOBAL DAT_004e7424 uint
// GLOBAL DAT_004e7428 float
// GLOBAL DAT_004e742c float
// GLOBAL DAT_004e7430 float
// GLOBAL DAT_004e7434 float

void func_004E7200(int param_1)

{
  short sVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  float *pfVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  piVar2 = DAT_004e7418;
  pfVar7 = (float *)(param_1 + 0x528);
  sVar1 = *(short *)(param_1 + 0x2e);
  fVar10 = DAT_004e741c;
  if (sVar1 != 0) {
    if ((*(char *)(param_1 + 0x55c) == '\0') || (*(char *)(param_1 + 0x55d) != '\0')) {
      if (sVar1 == 2 || sVar1 == 4) {
        fVar8 = DAT_004e7420;
        uVar5 = func_00111A64((uint *)(*DAT_004e7418 + 0x660));
        func_004D80A4(&fStack_38,
                      *(int *)(param_1 + 1000) +
                      (int)((ulonglong)uVar5 * 0x40000000 >> 0x20) + -0x20000000,fVar8);
        *pfVar7 = fVar10;
        *(float *)(param_1 + 0x52c) = fVar10;
        *(float *)(param_1 + 0x530) = fVar10;
        local_34 = fVar10;
        func_00115C54(pfVar7,(float *)(param_1 + 0x3d0),&fStack_38);
      }
    }
    else {
      fVar8 = DAT_004e7420;
      iVar6 = func_0068C690((float *)(param_1 + 0x534));
      uVar5 = DAT_004e7424;
      uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
      func_004D80A4(&fStack_38,
                    (((int)uVar5 >> 1) - uVar5) + (int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20)
                    + iVar6,fVar8);
      *pfVar7 = fVar10;
      *(float *)(param_1 + 0x52c) = fVar10;
      *(float *)(param_1 + 0x530) = fVar10;
      local_34 = fVar10;
      func_00115C54(pfVar7,(float *)(param_1 + 0x3d0),&fStack_38);
    }
    goto LAB_004e73c8;
  }
  fVar12 = *(float *)(param_1 + 0x54c);
  uVar5 = func_00111A64((uint *)(*DAT_004e7418 + 0x660));
  fVar8 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar8 * DAT_004e7428 * fVar12;
  fVar8 = DAT_004e742c;
  fVar11 = DAT_004e7428;
  uVar5 = func_00111A64((uint *)(*piVar2 + 0x660));
  fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar13 = func_00114608((uint)ALBW_AS_U32((fVar9 * fVar11 * fVar8 * DAT_004e7430)),extraout_r1);
  func_004D80A4(&fStack_38,(uint)uVar13,fVar12);
  local_34 = fVar10;
  func_00115C54(pfVar7,(float *)(param_1 + 8),&fStack_38);
  *(bool *)(param_1 + 0x55f) = *(char *)(param_1 + 0x55f) == '\0';
  if (*(short *)(param_1 + 0x2e) == 0) {
    fVar8 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 8);
    fVar11 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10);
    fVar8 = fVar8 * fVar8 + fVar11 * fVar11;
    fVar11 = *(float *)(param_1 + 0x550) * *(float *)(param_1 + 0x550);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar11) << 0x1f | (uint)(fVar8 == fVar11) << 0x1e;
    in_fpscr = uVar5 | (uint)(NAN(fVar8) || NAN(fVar11)) << 0x1c;
    bVar3 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_004e7370;
    bVar3 = 1;
  }
  else {
LAB_004e7370:
    bVar3 = 0;
  }
  *(byte *)(param_1 + 0x560) = bVar3 ^ 1;
LAB_004e73c8:
  if (*(short *)(param_1 + 0x2e) == 0) {
    iVar6 = 0xb4;
  }
  else {
    iVar6 = 0x3c;
  }
  *(int *)(param_1 + 0x51c) = iVar6;
  if (iVar6 == 0) {
    *(float *)(param_1 + 0x520) = fVar10;
  }
  else {
    fVar10 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x520) = DAT_004e7434 / fVar10;
  }
  *(undefined4 *)(param_1 + 0x518) = 0;
  return;
}

