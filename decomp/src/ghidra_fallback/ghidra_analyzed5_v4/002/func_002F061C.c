#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0068A3EC(float *param_1,float fparam_0);
extern int DAT_002f07ec;
extern float DAT_002f07f0;
extern float DAT_002f07f4;
extern undefined4 DAT_002f07f8;
extern float DAT_002f07fc;
extern undefined4 DAT_002f0800;
extern int *DAT_002f0804;
extern uint DAT_002f0808;

// USA 002F061C <- EU 002F05F8 (Ghidra, non-matching)
// GLOBAL DAT_002f07ec int
// GLOBAL DAT_002f07f0 float
// GLOBAL DAT_002f07f4 float
// GLOBAL DAT_002f07f8 undefined4
// GLOBAL DAT_002f07fc float
// GLOBAL DAT_002f0800 undefined4
// GLOBAL DAT_002f0804 int *
// GLOBAL DAT_002f0808 uint

undefined4 func_002F061C(int param_1,float *param_2)

{
  byte bVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  longlong lVar11;
  float fVar13;
  float fparam_0;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 ((float *)(albw_frame + 0x18))
  local_78[0] = *(float *)(DAT_002f07ec + 1000);
  local_78[1] = *(float *)(DAT_002f07ec + 0x3ec);
  local_78[2] = *(float *)(DAT_002f07ec + 0x3f0);
  local_78[3] = *(float *)(DAT_002f07ec + 0x3f4);
  local_78[7] = *(float *)(DAT_002f07ec + 0x404);
  local_78[4] = *(float *)(DAT_002f07ec + 0x3f8);
  local_78[5] = *(float *)(DAT_002f07ec + 0x3fc);
  local_78[6] = *(float *)(DAT_002f07ec + 0x400);
  pfVar3 = (float *)func_00520FC0();
  piVar2 = DAT_002f0804;
  pfVar6 = (float *)(param_1 + 0xe30);
  iVar7 = 0;
  fVar12 = *pfVar6;
  fVar15 = *(float *)(param_1 + 0xe34);
  fVar13 = *(float *)(param_1 + 0xe38);
  uVar17 = CONCAT44(DAT_002f0800,DAT_002f07f8);
  uVar18 = (ulonglong)DAT_002f0808;
  iVar5 = 0;
  fVar16 = DAT_002f07f4;
  fparam_0 = DAT_002f07fc;
  fVar14 = DAT_002f07f0;
  fVar9 = DAT_002f07f0;
  do {
    local_90 = *pfVar3 + local_78[iVar5 * 2] * fVar16;
    local_88 = pfVar3[2] + local_78[iVar5 * 2 + 1] * ALBW_AS_F32(uVar17);
    local_8c = fVar14;
    func_00115C70(&local_84,&local_90,pfVar6);
    fVar10 = SQRT(local_84 * local_84 + local_7c * local_7c);
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar10 < fparam_0) << 0x1f |
            (uint)(fVar10 == fparam_0) << 0x1e;
    uVar8 = uVar4 | (uint)(NAN(fVar10) || NAN(fparam_0)) << 0x1c;
    bVar1 = (byte)(uVar4 >> 0x18);
    local_80 = fVar14;
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) {
      func_0068A3EC(&local_84,fparam_0);
      func_00115C54(&local_90,&local_84,pfVar6);
    }
    fVar10 = SQRT((local_90 - *pfVar3) * (local_90 - *pfVar3) +
                  (local_88 - pfVar3[2]) * (local_88 - pfVar3[2]));
    uVar4 = uVar8 & 0xfffffff | (uint)(fVar10 < fVar9) << 0x1f;
    in_fpscr = uVar4 | (uint)(NAN(fVar10) || NAN(fVar9)) << 0x1c;
    if ((byte)(uVar4 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      in_fpscr = uVar8 & 0xfffffff | (uint)(fVar10 == fVar9) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        iVar7 = iVar7 + 1;
        if (iVar7 == 1) {
          lVar11 = (ulonglong)(uint)ALBW_AS_U32(local_90) << 0x20;
          fVar15 = local_8c;
          fVar13 = local_88;
        }
        else {
          fVar9 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
          lVar11 = CONCAT44(fVar12,ALBW_AS_F32(((ulonglong)uVar17 >> 0x20)) / fVar9);
          uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
          fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
          fVar9 = fVar9 * ALBW_AS_F32(uVar18) * ALBW_AS_F32(((ulonglong)uVar17 >> 0x20));
          fVar12 = ALBW_AS_F32(lVar11);
          uVar4 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar9) << 0x1f |
                  (uint)(fVar12 == fVar9) << 0x1e;
          in_fpscr = uVar4 | (uint)(NAN(fVar12) || NAN(fVar9)) << 0x1c;
          bVar1 = (byte)(uVar4 >> 0x18);
          if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            lVar11 = (ulonglong)(uint)ALBW_AS_U32(local_90) << 0x20;
            fVar15 = local_8c;
            fVar13 = local_88;
          }
        }
      }
      else {
        lVar11 = (ulonglong)(uint)ALBW_AS_U32(local_90) << 0x20;
        iVar7 = 1;
        fVar15 = local_8c;
        fVar13 = local_88;
      }
      fVar12 = ALBW_AS_F32(((ulonglong)lVar11 >> 0x20));
      fVar9 = fVar10;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  *param_2 = fVar12;
  param_2[1] = fVar15;
  param_2[2] = fVar13;
  return 1;
}

