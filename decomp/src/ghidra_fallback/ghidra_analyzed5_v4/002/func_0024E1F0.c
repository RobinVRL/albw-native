#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0024E5BC(int param_1,undefined4 param_2,undefined *param_3,undefined4 param_4);
extern int func_0048AC68(uint param_1);
extern int func_004ED46C(int param_1,int param_2);
extern int func_00520FC0(void);
extern uint DAT_0024e400;
extern float DAT_0024e404;
extern float DAT_0024e408;
extern uint DAT_0024e40c;
extern int *DAT_0024e410;
extern int *DAT_0024e414;

// USA 0024E1F0 <- EU 0024E1F0 (Ghidra, non-matching)
// GLOBAL DAT_0024e400 uint
// GLOBAL DAT_0024e404 float
// GLOBAL DAT_0024e408 float
// GLOBAL DAT_0024e40c uint
// GLOBAL DAT_0024e410 int *
// GLOBAL DAT_0024e414 int *

undefined4 func_0024E1F0(int param_1)

{
  int *piVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  undefined *puVar5;
  int in_r3;
  uint unaff_r4;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((float *)(albw_frame + 0x8))
  #define local_38 ((uint *)(albw_frame + 0x48))
  if (*(char *)(param_1 + 0x709) != '\0') {
    uVar2 = *(int *)(param_1 + 0x704) + 1;
    *(uint *)(param_1 + 0x704) = uVar2;
    if (uVar2 == 0xf0) {
      return func_004ED46C(*DAT_0024e414,8);
    }
    if ((299 < uVar2) && (uVar2 = func_0048AC68(*(uint *)(param_1 + 0x700)), 0 < (int)uVar2)) {
      uVar14 = (ulonglong)DAT_0024e400;
      pfVar3 = (float *)func_00520FC0();
      piVar1 = DAT_0024e410;
      uVar6 = 0;
      fVar11 = *pfVar3;
      fVar12 = pfVar3[2];
      uVar2 = 0;
      do {
        iVar4 = param_1 + 0x440;
        if (uVar2 < 0x10) {
          in_r3 = uVar2 * 3;
          iVar4 = iVar4 + uVar2 * 0x2c;
        }
        puVar5 = (undefined *)0x0;
        if ((*(int *)(iVar4 + 0x28) == 0) ||
           (puVar5 = *(undefined **)(iVar4 + 0x24), puVar5 != (undefined *)0x0)) {
          local_78[uVar2] = DAT_0024e404;
        }
        else {
          fVar10 = fVar11 - *(float *)(iVar4 + 0x18);
          fVar13 = fVar12 - *(float *)(iVar4 + 0x20);
          fVar10 = fVar10 * fVar10 + fVar13 * fVar13;
          local_78[uVar2] = fVar10;
          if (fVar10 < ALBW_AS_F32(uVar14)) {
            uVar14 = (ulonglong)(uint)ALBW_AS_U32(fVar10);
            uVar6 = 1;
            unaff_r4 = uVar2;
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x10);
      if (uVar6 != 0) {
        uVar14 = (ulonglong)DAT_0024e40c;
        local_38[0] = unaff_r4;
        uVar2 = 0;
        local_38[1] = 0xffffffff;
        fVar11 = DAT_0024e408;
        do {
          if (local_38[0] != uVar2) {
            fVar12 = local_78[uVar2];
            fVar10 = ALBW_AS_F32(uVar14);
            bVar7 = fVar12 < fVar10;
            bVar8 = fVar12 == fVar10;
            bVar9 = NAN(fVar12) || NAN(fVar10);
            if (!bVar8 && !bVar7) {
              bVar7 = fVar11 < fVar12;
              bVar8 = fVar11 == fVar12;
              bVar9 = NAN(fVar11) || NAN(fVar12);
            }
            if (!bVar8 && bVar7 == bVar9) {
              if (local_38[1] == 0xffffffff) {
                uVar6 = 2;
                local_38[1] = uVar2;
                fVar11 = fVar12;
              }
              else {
                if ((fVar11 <= fVar10) && (fVar11 == fVar10)) {
                  func_00111A64((uint *)(*piVar1 + 0x660));
                }
                local_38[1] = uVar2;
                fVar11 = fVar12;
              }
            }
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x10);
        if (uVar6 != 0) {
          uVar2 = local_38[0];
          if (1 < uVar6) {
            uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
            uVar2 = local_38[(int)((ulonglong)uVar6 * (ulonglong)uVar2 >> 0x20)];
          }
          iVar4 = param_1 + 0x440;
          if (uVar2 < 0x10) {
            puVar5 = (undefined *)(uVar2 * 3);
            iVar4 = iVar4 + uVar2 * 0x2c;
          }
          func_0024E5BC(iVar4,iVar4,puVar5,in_r3);
        }
        *(undefined4 *)(param_1 + 0x704) = 0;
      }
    }
  }
  return 0;
}

