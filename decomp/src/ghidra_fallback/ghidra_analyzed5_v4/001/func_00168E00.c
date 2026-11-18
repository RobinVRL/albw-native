#include "ghidra_types.h"

extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0051E940(int *param_1,int param_2);
extern int func_00567588(int param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5);
extern int func_00567F30(int param_1,int *param_2,int *param_3,float fparam_0);
extern int func_00678674(int *param_1,int param_2);
extern int func_006905DC(int param_1,int param_2,int *param_3,uint *param_4);
extern int func_0069077C(int param_1,int param_2,int *param_3,int *param_4,float *param_5,float fparam_0);
extern float DAT_0016919c;
extern int *DAT_001691a0;
extern float DAT_001691a4;

// USA 00168E00 <- EU 00168E00 (Ghidra, non-matching)
// GLOBAL DAT_0016919c float
// GLOBAL DAT_001691a0 int *
// GLOBAL DAT_001691a4 float

void func_00168E00(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc0 (*(undefined4 *)(albw_frame + 0x0))
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar9;
  uint uVar10;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  piVar13 = *(int **)(param_1 + 0x420);
  iVar16 = *(char *)(param_1 + 0x410) * 8 + 4;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x428) + iVar16);
  pcVar8 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar3 & 1) != 0) {
    pcVar8 = *(code **)(pcVar8 + *(int *)((int)piVar13 + ((int)uVar3 >> 1)));
  }
  (*pcVar8)((int)((int)piVar13) + ((int)uVar3 >> 1));
  iVar11 = *(int *)(param_1 + 0x41c);
  iVar4 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar4;
  uVar9 = extraout_r1;
  if (iVar11 != 0) {
    fVar17 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar11,1,fVar17);
    uVar9 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x438),uVar9,iVar11,piVar13);
  piVar12 = DAT_001691a0;
  fVar17 = DAT_0016919c;
  iVar4 = *(int *)(param_1 + 0x434);
  piVar5 = *(int **)(param_1 + 0x438);
  uVar19 = (ulonglong)(uint)ALBW_AS_U32(DAT_0016919c);
  piVar13 = (int *)0x0;
  if ((*piVar5 == 0) && (DAT_0016919c < ALBW_AS_F32(piVar5[0x22]))) {
    fVar18 = ALBW_AS_F32(piVar5[0x22]) - ALBW_AS_F32(piVar5[0x23]);
    piVar5[0x22] = (int)ALBW_AS_U32(fVar18);
    piVar13 = piVar12;
    if ((int)ALBW_AS_U32(fVar18) <= (int)piVar12) {
      piVar5[0x22] = (int)ALBW_AS_U32(fVar17);
    }
  }
  if ((ALBW_AS_F32(piVar5[0x22]) <= fVar17) || (*piVar5 != 0)) {
    uVar3 = 0;
    if (0 < piVar5[3]) {
      do {
        if (uVar3 < (uint)piVar5[3]) {
          iVar11 = piVar5[5] + uVar3 * 0x28;
        }
        else {
          iVar11 = piVar5[5];
        }
        bVar1 = *(float *)(iVar11 + 0xc) != *(float *)(iVar11 + 8);
        if (*(char *)(iVar11 + 0x26) == '\0') {
          *(bool *)(iVar11 + 0x26) = bVar1;
        }
        if (*(char *)(iVar11 + 0x26) != '\0') {
          uVar6 = (uint)*(char *)(iVar11 + 0x24);
          uVar10 = piVar5[0x24];
          piVar13 = (int *)piVar5[0x25];
          if (uVar6 < uVar10) {
            iVar16 = uVar6 * 5;
          }
          iVar14 = **(int **)(iVar11 + 4);
          if (uVar6 < uVar10) {
            piVar13 = piVar13 + iVar16;
            iVar16 = piVar5[0x25] + uVar6 * 0x14;
          }
          else {
            iVar16 = piVar5[0x25];
          }
          cVar2 = *(char *)(iVar14 + 5);
          puVar15 = (undefined4 *)(iVar16 + 8);
          if (cVar2 == '\0') {
            fStack_38 = *(float *)(iVar11 + 8);
            uStack_34 = *puVar15;
            func_006905DC(iVar14,*(int *)(iVar4 + 0x24),piVar13,(uint *)&fStack_38);
          }
          else if (cVar2 == '\x01') {
            if (uVar6 < uVar10) {
              iVar7 = piVar5[0x25] + uVar6 * 0x14;
            }
            else {
              iVar7 = piVar5[0x25];
            }
            if (*(char *)(iVar7 + 0x11) != '\0') {
              func_0051E940(*(int **)(iVar11 + 4),iVar4);
              if ((uint)(int)*(char *)(iVar11 + 0x24) < (uint)piVar5[0x24]) {
                iVar7 = piVar5[0x25] + *(char *)(iVar11 + 0x24) * 0x14;
              }
              else {
                iVar7 = piVar5[0x25];
              }
              *(undefined1 *)(iVar7 + 0x11) = 0;
            }
            func_00567588(iVar14,*(int **)(iVar4 + 0x20),piVar13,
                          (int *)(*(int *)(iVar11 + 4) + 0x10),puVar15);
          }
          else if (cVar2 == '\x02') {
            func_00567F30(iVar14,(int *)(iVar4 + 0x28),piVar13,*(float *)(iVar11 + 8));
          }
          *(bool *)(iVar11 + 0x26) = bVar1;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < piVar5[3]);
      return;
    }
  }
  else {
    uVar3 = piVar5[6];
    uVar6 = 0;
    iVar16 = 0;
    if (0 < (int)uVar3) {
      do {
        uVar10 = uVar3;
        if (uVar6 < uVar3) {
          iVar16 = piVar5[8];
          uVar10 = uVar6 * 5;
        }
        if (uVar6 < uVar3) {
          iVar11 = iVar16 + uVar10 * 8;
          iVar16 = piVar5[8] + uVar6 * 0x28;
        }
        else {
          iVar11 = piVar5[8];
          iVar16 = piVar5[8];
        }
        iVar14 = **(int **)(iVar16 + 4);
        uVar3 = (uint)*(char *)(iVar16 + 0x24);
        if (uVar3 < (uint)piVar5[0x24]) {
          piVar13 = (int *)(piVar5[0x25] + uVar3 * 0x14);
          iVar7 = piVar5[0x25] + uVar3 * 0x14;
        }
        else {
          piVar13 = (int *)piVar5[0x25];
          iVar7 = piVar5[0x25];
        }
        if (*(char *)(iVar14 + 5) == '\0') {
          if (*(short *)(**(int **)(iVar14 + 0xc) + 6) == 9) {
            func_006905DC(iVar14,*(int *)(iVar4 + 0x24),piVar13,(uint *)&stack0xffffffc0);
            iVar16 = extraout_r1_02;
          }
          else {
            fStack_38 = *(float *)(iVar16 + 8);
            uStack_34 = *(undefined4 *)(iVar7 + 8);
            piVar12 = (int *)(iVar4 + 0x34);
            func_0069077C(iVar14,*(int *)(iVar4 + 0x24),piVar12,piVar13,&fStack_38,
                          *(float *)(iVar11 + 0x20) * ALBW_AS_F32(piVar5[0x22]));
            iVar16 = extraout_r1_01;
            piVar13 = piVar12;
          }
        }
        fVar17 = ALBW_AS_F32(uVar19);
        uVar3 = piVar5[6];
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar3);
    }
    uVar3 = piVar5[3];
    uVar6 = 0;
    fVar18 = DAT_001691a4 - ALBW_AS_F32(piVar5[0x22]);
    if (0 < (int)uVar3) {
      do {
        iVar16 = piVar5[5];
        if (uVar6 < uVar3) {
          piVar13 = (int *)(uVar6 * 5);
          iVar16 = iVar16 + uVar6 * 0x28;
        }
        iVar11 = piVar5[5];
        if (uVar6 < uVar3) {
          iVar11 = iVar11 + (int)piVar13 * 8;
        }
        iVar14 = **(int **)(iVar11 + 4);
        uVar3 = (uint)*(char *)(iVar11 + 0x24);
        if (uVar3 < (uint)piVar5[0x24]) {
          piVar13 = (int *)(piVar5[0x25] + uVar3 * 0x14);
          iVar7 = piVar5[0x25] + uVar3 * 0x14;
        }
        else {
          piVar13 = (int *)piVar5[0x25];
          iVar7 = piVar5[0x25];
        }
        if (*(char *)(iVar14 + 5) == '\0') {
          if (*(short *)(**(int **)(iVar14 + 0xc) + 6) == 9) {
            func_006905DC(iVar14,*(int *)(iVar4 + 0x24),piVar13,(uint *)&stack0xffffffc0);
          }
          else {
            fStack_38 = *(float *)(iVar11 + 8);
            uStack_34 = *(undefined4 *)(iVar7 + 8);
            piVar12 = (int *)(iVar4 + 0x34);
            func_0069077C(iVar14,*(int *)(iVar4 + 0x24),piVar12,piVar13,&fStack_38,
                          *(float *)(iVar16 + 0x20) * fVar18);
            piVar13 = piVar12;
          }
        }
        uVar3 = piVar5[3];
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar3);
    }
    func_00678674(iVar4 + 0x34,*(int *)(iVar4 + 0x24));
    iVar16 = *(int *)(iVar4 + 0x38);
    uVar3 = 0;
    do {
      uVar6 = uVar3 + 1;
      *(float *)(*(int *)(iVar4 + 0x34) + uVar3 * 4) = fVar17;
      uVar3 = uVar6;
    } while (uVar6 <= iVar16 - 1U);
  }
  return;
}

