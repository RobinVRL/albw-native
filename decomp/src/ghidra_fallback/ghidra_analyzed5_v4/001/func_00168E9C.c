#include "ghidra_types.h"

extern int func_0051E940(int *param_1,int param_2);
extern int func_00567588(int param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5);
extern int func_00567F30(int param_1,int *param_2,int *param_3,float fparam_0);
extern int func_00678674(int *param_1,int param_2);
extern int func_006905DC(int param_1,int param_2,int *param_3,uint *param_4);
extern int func_0069077C(int param_1,int param_2,int *param_3,int *param_4,float *param_5,float fparam_0);
extern float DAT_0016919c;
extern int *DAT_001691a0;
extern float DAT_001691a4;

// USA 00168E9C <- EU 00168E9C (Ghidra, non-matching)
// GLOBAL DAT_0016919c float
// GLOBAL DAT_001691a0 int *
// GLOBAL DAT_001691a4 float

/* WARNING: Variable defined which should be unmapped: objStack_40 */

void func_00168E9C(int *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int in_r12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(uint *)(albw_frame + 0xc))
  piVar8 = DAT_001691a0;
  fVar14 = DAT_0016919c;
  uVar15 = (ulonglong)(uint)ALBW_AS_U32(DAT_0016919c);
  piVar7 = param_3;
  if ((*param_1 == 0) && (DAT_0016919c < ALBW_AS_F32(param_1[0x22]))) {
    fVar13 = ALBW_AS_F32(param_1[0x22]) - ALBW_AS_F32(param_1[0x23]);
    param_1[0x22] = (int)ALBW_AS_U32(fVar13);
    piVar7 = piVar8;
    if ((int)ALBW_AS_U32(fVar13) <= (int)piVar8) {
      param_1[0x22] = (int)ALBW_AS_U32(fVar14);
    }
  }
  if ((ALBW_AS_F32(param_1[0x22]) <= fVar14) || (*param_1 != 0)) {
    uVar10 = 0;
    if (0 < param_1[3]) {
      do {
        if (uVar10 < (uint)param_1[3]) {
          iVar9 = param_1[5] + uVar10 * 0x28;
        }
        else {
          iVar9 = param_1[5];
        }
        bVar1 = *(float *)(iVar9 + 0xc) != *(float *)(iVar9 + 8);
        if (*(char *)(iVar9 + 0x26) == '\0') {
          *(bool *)(iVar9 + 0x26) = bVar1;
        }
        if (*(char *)(iVar9 + 0x26) != '\0' || param_3 != (int *)0x0) {
          uVar3 = (uint)*(char *)(iVar9 + 0x24);
          uVar6 = param_1[0x24];
          objStack_40[1] = param_1[0x25];
          if (uVar3 < uVar6) {
            in_r12 = uVar3 * 5;
          }
          iVar11 = **(int **)(iVar9 + 4);
          if (uVar3 < uVar6) {
            objStack_40[1] = objStack_40[1] + in_r12 * 4;
            in_r12 = param_1[0x25] + uVar3 * 0x14;
          }
          else {
            in_r12 = param_1[0x25];
          }
          cVar2 = *(char *)(iVar11 + 5);
          puVar12 = (uint *)(in_r12 + 8);
          if (cVar2 == '\0') {
            local_38 = *(float *)(iVar9 + 8);
            local_34 = *puVar12;
            func_006905DC(iVar11,*(int *)(param_2 + 0x24),(int *)objStack_40[1],(uint *)&local_38);
          }
          else if (cVar2 == '\x01') {
            if (uVar3 < uVar6) {
              iVar5 = param_1[0x25] + uVar3 * 0x14;
            }
            else {
              iVar5 = param_1[0x25];
            }
            if (*(char *)(iVar5 + 0x11) != '\0') {
              func_0051E940(*(int **)(iVar9 + 4),param_2);
              if ((uint)(int)*(char *)(iVar9 + 0x24) < (uint)param_1[0x24]) {
                iVar5 = param_1[0x25] + *(char *)(iVar9 + 0x24) * 0x14;
              }
              else {
                iVar5 = param_1[0x25];
              }
              *(undefined1 *)(iVar5 + 0x11) = 0;
            }
            objStack_40[0] = (uint)puVar12;
            func_00567588(iVar11,*(int **)(param_2 + 0x20),(int *)objStack_40[1],
                          (int *)(*(int *)(iVar9 + 4) + 0x10),puVar12);
          }
          else if (cVar2 == '\x02') {
            func_00567F30(iVar11,(int *)(param_2 + 0x28),(int *)objStack_40[1],*(float *)(iVar9 + 8)
                         );
          }
          *(bool *)(iVar9 + 0x26) = bVar1;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < param_1[3]);
      return;
    }
  }
  else {
    uVar10 = param_1[6];
    uVar3 = 0;
    iVar9 = 0;
    if (0 < (int)uVar10) {
      do {
        uVar6 = uVar10;
        if (uVar3 < uVar10) {
          iVar9 = param_1[8];
          uVar6 = uVar3 * 5;
        }
        if (uVar3 < uVar10) {
          iVar11 = iVar9 + uVar6 * 8;
          iVar9 = param_1[8] + uVar3 * 0x28;
        }
        else {
          iVar11 = param_1[8];
          iVar9 = param_1[8];
        }
        iVar5 = **(int **)(iVar9 + 4);
        uVar10 = (uint)*(char *)(iVar9 + 0x24);
        if (uVar10 < (uint)param_1[0x24]) {
          piVar7 = (int *)(param_1[0x25] + uVar10 * 0x14);
          iVar4 = param_1[0x25] + uVar10 * 0x14;
        }
        else {
          piVar7 = (int *)param_1[0x25];
          iVar4 = param_1[0x25];
        }
        if (*(char *)(iVar5 + 5) == '\0') {
          if (*(short *)(**(int **)(iVar5 + 0xc) + 6) == 9) {
            objStack_40[0] = *(uint *)(iVar9 + 8);
            objStack_40[1] = *(uint *)(iVar4 + 8);
            func_006905DC(iVar5,*(int *)(param_2 + 0x24),piVar7,objStack_40);
            iVar9 = extraout_r1_00;
          }
          else {
            local_38 = *(float *)(iVar9 + 8);
            local_34 = *(uint *)(iVar4 + 8);
            objStack_40[0] = (uint)&local_38;
            piVar8 = (int *)(param_2 + 0x34);
            func_0069077C(iVar5,*(int *)(param_2 + 0x24),piVar8,piVar7,(float *)objStack_40[0],
                          *(float *)(iVar11 + 0x20) * ALBW_AS_F32(param_1[0x22]));
            iVar9 = extraout_r1;
            piVar7 = piVar8;
          }
        }
        fVar14 = ALBW_AS_F32(uVar15);
        uVar10 = param_1[6];
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar10);
    }
    uVar10 = param_1[3];
    uVar3 = 0;
    fVar13 = DAT_001691a4 - ALBW_AS_F32(param_1[0x22]);
    if (0 < (int)uVar10) {
      do {
        iVar9 = param_1[5];
        if (uVar3 < uVar10) {
          piVar7 = (int *)(uVar3 * 5);
          iVar9 = iVar9 + uVar3 * 0x28;
        }
        iVar11 = param_1[5];
        if (uVar3 < uVar10) {
          iVar11 = iVar11 + (int)piVar7 * 8;
        }
        iVar5 = **(int **)(iVar11 + 4);
        uVar10 = (uint)*(char *)(iVar11 + 0x24);
        if (uVar10 < (uint)param_1[0x24]) {
          piVar7 = (int *)(param_1[0x25] + uVar10 * 0x14);
          iVar4 = param_1[0x25] + uVar10 * 0x14;
        }
        else {
          piVar7 = (int *)param_1[0x25];
          iVar4 = param_1[0x25];
        }
        if (*(char *)(iVar5 + 5) == '\0') {
          if (*(short *)(**(int **)(iVar5 + 0xc) + 6) == 9) {
            objStack_40[0] = *(uint *)(iVar11 + 8);
            objStack_40[1] = *(uint *)(iVar4 + 8);
            func_006905DC(iVar5,*(int *)(param_2 + 0x24),piVar7,objStack_40);
          }
          else {
            local_38 = *(float *)(iVar11 + 8);
            local_34 = *(uint *)(iVar4 + 8);
            objStack_40[0] = (uint)&local_38;
            piVar8 = (int *)(param_2 + 0x34);
            func_0069077C(iVar5,*(int *)(param_2 + 0x24),piVar8,piVar7,(float *)objStack_40[0],
                          *(float *)(iVar9 + 0x20) * fVar13);
            piVar7 = piVar8;
          }
        }
        uVar10 = param_1[3];
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar10);
    }
    func_00678674(param_2 + 0x34,*(int *)(param_2 + 0x24));
    iVar9 = *(int *)(param_2 + 0x38);
    uVar10 = 0;
    do {
      uVar3 = uVar10 + 1;
      *(float *)(*(int *)(param_2 + 0x34) + uVar10 * 4) = fVar14;
      uVar10 = uVar3;
    } while (uVar3 <= iVar9 - 1U);
  }
  return;
}

