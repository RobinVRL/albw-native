#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern undefined *DAT_004fcbe4;
extern int DAT_004fcbe8;
extern float DAT_004fcbec;
extern int DAT_004fcbf0;
extern int *DAT_004fcbf4;
extern undefined4 *DAT_004fcbf8;

// USA 004FC994 <- EU 004FC96C (Ghidra, non-matching)
// GLOBAL DAT_004fcbe4 undefined *
// GLOBAL DAT_004fcbe8 int
// GLOBAL DAT_004fcbec float
// GLOBAL DAT_004fcbf0 int
// GLOBAL DAT_004fcbf4 int *
// GLOBAL DAT_004fcbf8 undefined4 *

int func_004FC994(uint param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  int in_s0;
  float in_s1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 ((float *)(albw_frame + 0xc))
  uVar2 = param_1;
  if (param_2 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0xa8);
  }
  if (param_2 != 0 && uVar2 != 0) {
    func_00100118((int)&local_78,DAT_004fcbe4,0xc,7);
    uVar2 = (uint)*(byte *)(param_1 + 0xa8);
    if (uVar2 != 0) {
      in_s0 = DAT_004fcbe8;
    }
    uVar11 = 0;
    if (uVar2 != 0) {
      do {
        piVar8 = (int *)(param_1 + uVar11 * 0xc);
        fVar12 = ALBW_AS_F32(piVar8[1]);
        fVar13 = ALBW_AS_F32(piVar8[2]);
        uVar4 = uVar11 + 1;
        (&local_78)[uVar11 * 3] = *piVar8;
        local_74[uVar11 * 3] = fVar12;
        local_74[uVar11 * 3 + 1] = fVar13;
        *piVar8 = 0;
        *(undefined1 *)(piVar8 + 1) = 0xb;
        piVar8[2] = in_s0;
        uVar11 = uVar4;
      } while (uVar4 < uVar2);
    }
    iVar3 = 0;
    if (uVar2 != 0) {
      in_s1 = DAT_004fcbec;
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
    uVar11 = 0;
    if (uVar2 != 0) {
      do {
        iVar5 = (&local_78)[uVar11 * 3];
        if (iVar5 == 0 || iVar5 == param_2) {
          iVar3 = 1;
        }
        else {
          uVar4 = (uint)*(byte *)(param_1 + 0xa8);
          fVar12 = local_74[uVar11 * 3 + 1];
          if (uVar4 < 7) {
            if (uVar4 != 0) {
              uVar6 = uVar4 & 1;
              uVar9 = 0;
              if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
                do {
                  if (*(int *)(param_1 + uVar9 * 0xc) == iVar5) goto LAB_004fcb2c;
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar6);
              }
              for (; uVar6 < uVar4; uVar6 = uVar6 + 2) {
                if ((*(int *)(param_1 + uVar6 * 0xc) == iVar5) ||
                   (*(int *)(param_1 + uVar6 * 0xc + 0xc) == iVar5)) goto LAB_004fcb2c;
              }
            }
            if (in_s1 <= fVar12) {
              *(float *)(iVar5 + 0x134) = fVar12;
            }
            iVar7 = 0;
            if (0 < *(int *)(*(int *)(iVar5 + 0x20) + 4)) {
              do {
                puVar10 = (ushort *)(**(int **)(iVar5 + 0x20) + iVar7 * 0x154);
                if (puVar10 != (ushort *)0x0) {
                  *puVar10 = *puVar10 | 0x400;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(*(int *)(iVar5 + 0x20) + 4));
            }
            *(int *)(param_1 + (uint)*(byte *)(param_1 + 0xa8) * 0xc) = iVar5;
            *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xa8) * 0xc + 4) =
                 *(undefined1 *)(local_74 + uVar11 * 3);
            *(float *)(param_1 + (uint)*(byte *)(param_1 + 0xa8) * 0xc + 8) = fVar12;
            *(char *)(param_1 + 0xa8) = *(char *)(param_1 + 0xa8) + '\x01';
          }
        }
LAB_004fcb2c:
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar2);
      if (iVar3 != 0) {
        if (((*(uint *)(DAT_004fcbf0 + 0x1c) & 1) == 0) &&
           (iVar5 = func_00100174(DAT_004fcbf4), puVar1 = DAT_004fcbf8, iVar5 != 0)) {
          *(undefined1 *)DAT_004fcbf8 = 0xff;
          *(undefined1 *)((int)puVar1 + 1) = 0xff;
          *(undefined1 *)((int)puVar1 + 2) = 0xff;
          *(undefined1 *)((int)puVar1 + 3) = 0xff;
        }
        iVar5 = 0;
        *(uint *)(param_2 + 0x164) = *(uint *)(param_2 + 0x164) & 0xfff6ffff | 0x4000;
        if (0 < *(int *)(*(int *)(param_2 + 0x20) + 4)) {
          do {
            func_004CF5DC(param_2,iVar5,2,DAT_004fcbf8);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(*(int *)(param_2 + 0x20) + 4));
        }
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

