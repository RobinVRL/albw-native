#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0028FE00(int param_1,int param_2);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_00359F80(int param_1,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_00520FD4(void);
extern int func_00588BF0(int param_1,int param_2);
extern float DAT_00359c50;
extern float DAT_00359c54;
extern undefined4 DAT_00359c58;
extern int *DAT_00359d64;

// USA 00359978 <- EU 00359954 (Ghidra, non-matching)
// GLOBAL DAT_00359c50 float
// GLOBAL DAT_00359c54 float
// GLOBAL DAT_00359c58 undefined4
// GLOBAL DAT_00359d64 int *

/* WARNING: Variable defined which should be unmapped: objStack_40 */

void func_00359978(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  uint uVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define local_34 ((int *)(albw_frame + 0xc))
  fVar11 = DAT_00359c54;
  fVar9 = DAT_00359c50;
  cVar1 = *(char *)(param_1 + 0x638);
  uVar15 = (ulonglong)(uint)ALBW_AS_U32(DAT_00359c50);
  objStack_40[2] = param_1 + 0x600;
  if (cVar1 == '\0') {
    *(float *)(param_1 + 0x620) = DAT_00359c50;
    *(undefined4 *)(param_1 + 0x630) = 0;
    if (*(char *)(param_1 + 0x644) != '\0') {
      bVar2 = func_00588BF0(param_1,0);
      cVar1 = *(char *)(param_1 + 0x638);
      goto joined_r0x003599d8;
    }
    bVar2 = func_00588BF0(param_1,0);
    cVar1 = *(char *)(param_1 + 0x638);
    if (bVar2) goto joined_r0x003599ec;
  }
  else {
    if (cVar1 == '\x01') {
      fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x630),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x620) = -(fVar13 * *(float *)(param_1 + 0x628));
      iVar3 = *(int *)(param_1 + 0x630) + 1;
      *(int *)(param_1 + 0x630) = iVar3;
      if (iVar3 < 0xf) {
        fVar9 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar11 - fVar9 * *(float *)(param_1 + 0x62c);
      }
      else {
        *(undefined1 *)(param_1 + 0x638) = 2;
      }
      func_00359F80(param_1,fVar9);
      goto LAB_00359b58;
    }
    if (cVar1 != '\x02') {
      if (cVar1 == '\x03') {
        fVar9 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x630),
                                           (byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x620) = -(fVar9 * *(float *)(param_1 + 0x628));
        iVar3 = *(int *)(param_1 + 0x630) + -1;
        *(int *)(param_1 + 0x630) = iVar3;
        if (iVar3 < 0) {
          *(undefined1 *)(param_1 + 0x638) = 0;
        }
        else {
          fVar9 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = fVar11 - fVar9 * *(float *)(param_1 + 0x62c);
        }
        func_00359F80(param_1,fVar11);
      }
      goto LAB_00359b58;
    }
    *(undefined4 *)(param_1 + 0x620) = DAT_00359c58;
    *(undefined4 *)(param_1 + 0x630) = 0xf;
    if (*(char *)(param_1 + 0x644) == '\0') {
      bVar2 = func_00588BF0(param_1,0);
      cVar1 = *(char *)(param_1 + 0x638);
      if (bVar2) goto joined_r0x003599ec;
      goto joined_r0x003599e0;
    }
    bVar2 = func_00588BF0(param_1,0);
    cVar1 = *(char *)(param_1 + 0x638);
joined_r0x003599d8:
    if (!bVar2) {
joined_r0x003599ec:
      if (cVar1 == '\x02') {
        *(undefined1 *)(param_1 + 0x638) = 3;
      }
      goto LAB_00359b58;
    }
  }
joined_r0x003599e0:
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x638) = 1;
  }
LAB_00359b58:
  uVar14 = (uint)uVar15;
  if (*(float *)(param_1 + 0x624) != *(float *)(param_1 + 0x620)) {
    iVar3 = 0;
    iVar7 = *(int *)(param_1 + 0x63c);
    iVar8 = *(int *)(param_1 + 0x640);
    if (iVar7 != 0) {
      do {
        fVar13 = *(float *)(param_1 + 0x620);
        fVar9 = *(float *)(param_1 + 0x61c);
        piVar5 = (int *)(iVar8 + iVar3 * 0x18);
        piVar6 = (int *)piVar5[1];
        iVar4 = piVar5[5];
        fVar11 = ALBW_AS_F32(piVar5[4]);
        piVar6[1] = piVar5[3];
        piVar6[2] = (int)ALBW_AS_U32((fVar13 + fVar9 + fVar11));
        piVar6[3] = iVar4;
        func_004356B4(piVar6);
        if (*(char *)(param_1 + 0x638) == '\0') {
          objStack_40[0] = 3;
          *(undefined2 *)(piVar6 + 10) = 3;
        }
        else {
          objStack_40[0] = 4;
          *(undefined2 *)(piVar6 + 10) = 4;
        }
        iVar4 = *piVar5;
        if (*(char *)(param_1 + 0x638) == '\x02') {
          *(undefined1 *)(piVar5[2] + 0x44) = 0;
        }
        else {
          *(undefined1 *)(piVar5[2] + 0x44) = 1;
        }
        fVar11 = *(float *)(param_1 + 0x620);
        iVar10 = piVar5[5];
        iVar12 = piVar5[3];
        fVar9 = ALBW_AS_F32(piVar5[4]);
        *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
        *(int *)(iVar4 + 0x8c) = iVar12;
        *(float *)(iVar4 + 0x9c) = fVar9 + fVar11;
        *(int *)(iVar4 + 0xac) = iVar10;
        func_004CEAF0(iVar4);
        func_004ED9C8(piVar5[2]);
        if (*(char *)(param_1 + 0x638) == '\x01') {
          objStack_40[0] = 0;
          objStack_40[1] = 0;
          iVar4 = func_0014E2A0(param_1,piVar6,0,0x100,0,0);
          if ((iVar4 != 0) && (bVar2 = func_00520FD4(), bVar2)) {
            func_0028FE00(*DAT_00359d64,1);
          }
        }
        else if (*(char *)(param_1 + 0x638) == '\x03') {
          objStack_40[0] = 0;
          objStack_40[1] = 0;
          iVar4 = func_0014E2A0(param_1,piVar6,0,0x100,0,0);
          if ((iVar4 != 0) && (bVar2 = func_00520FD4(), !bVar2)) {
            *(undefined1 *)(param_1 + 0x645) = 1;
          }
        }
        uVar14 = (uint)uVar15;
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar7);
    }
    *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_1 + 0x620);
  }
  if (*(char *)(objStack_40[2] + 0x45) != '\0') {
    objStack_40[1] = *(uint *)(param_1 + 0x628);
    local_34[0] = 0;
    objStack_40[0] = uVar14;
    objStack_40[2] = uVar14;
    func_003413DC(*DAT_00359d64,(float *)objStack_40,local_34);
    *(undefined1 *)(param_1 + 0x645) = 0;
  }
  return;
}

