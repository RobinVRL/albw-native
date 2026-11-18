#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003413DC(int param_1,float *param_2,int *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004ED9C8(int param_1);
extern float *DAT_002c5e00;
extern int *DAT_002c5e04;
extern float DAT_002c5e08;

// USA 002C5B68 <- EU 002C5B44 (Ghidra, non-matching)
// GLOBAL DAT_002c5e00 float *
// GLOBAL DAT_002c5e04 int *
// GLOBAL DAT_002c5e08 float

void func_002C5B68(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define aiStack_1c ((int *)(albw_frame + 0x14))
  piVar6 = (int *)(*(char *)(param_1 + 0x42c) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x444) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x444) + *(char *)(param_1 + 0x42c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x43c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x43c)) + ((int)uVar1 >> 1));
  iVar4 = *(int *)(param_1 + 0x438);
  iVar2 = *(int *)(param_1 + 0x428) + 1;
  *(int *)(param_1 + 0x428) = iVar2;
  uVar5 = extraout_r1;
  if (iVar4 != 0) {
    fVar7 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar4,1,fVar7);
    uVar5 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x44c),uVar5,iVar4,piVar6);
  uVar1 = 0;
  iVar2 = extraout_r1_01;
  if (0 < *(int *)(param_1 + 0x40c)) {
    do {
      if (uVar1 < *(uint *)(param_1 + 0x40c)) {
        iVar2 = *(int *)(param_1 + 0x414);
      }
      if (uVar1 < *(uint *)(param_1 + 0x40c)) {
        iVar2 = *(int *)(iVar2 + uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      func_00168E9C(*(int **)(param_1 + 0x44c),iVar2,(int *)0x1);
      uVar1 = uVar1 + 1;
      iVar2 = extraout_r1_02;
    } while ((int)uVar1 < *(int *)(param_1 + 0x40c));
  }
  piVar6 = (int *)(param_1 + 0x450);
  iVar2 = *(int *)(param_1 + 0x450);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0x47c) == '\0') {
      if (*(char *)(param_1 + 0x47d) == '\x01') {
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x458);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x45c);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x460);
        uVar5 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0x464),(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(*piVar6 + 0x60) = uVar5;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        func_004356B4((int *)*piVar6);
        func_004ED9C8(*(int *)(param_1 + 0x454));
      }
    }
    else {
      aiStack_1c[0] = 0;
      fStack_28 = *DAT_002c5e00;
      fStack_24 = DAT_002c5e00[1];
      fStack_20 = DAT_002c5e00[2];
      if (*(char *)(param_1 + 0x47e) != '\0') {
        fStack_20 = *(float *)(param_1 + 0x474);
        if (*(char *)(param_1 + 0x42c) == '\x01') {
          fStack_28 = -(fStack_20 * *(float *)(param_1 + 0x470));
          fStack_20 = -(fStack_20 * *(float *)(param_1 + 0x46c));
        }
        else {
          fStack_28 = fStack_20 * *(float *)(param_1 + 0x470);
          fStack_20 = fStack_20 * *(float *)(param_1 + 0x46c);
        }
      }
      func_003413DC(*DAT_002c5e04,&fStack_28,aiStack_1c);
      if (*(char *)(param_1 + 0x47d) == '\x01') {
        iVar2 = *(int *)(param_1 + 0x450);
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x458);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x45c);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x460);
        uVar5 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0x464),(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(*piVar6 + 0x60) = uVar5;
        *(undefined1 *)(param_1 + 0x47d) = 0;
        func_004356B4((int *)*piVar6);
        func_004ED9C8(*(int *)(param_1 + 0x454));
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x45c);
        iVar2 = *(int *)(param_1 + 0x450);
        if (*(char *)(param_1 + 0x42c) == '\x01') {
          fVar7 = *(float *)(param_1 + 0x458) - *(float *)(param_1 + 0x470) * DAT_002c5e08;
          fVar8 = *(float *)(param_1 + 0x460) - *(float *)(param_1 + 0x46c) * DAT_002c5e08;
        }
        else {
          fVar7 = *(float *)(param_1 + 0x458) + *(float *)(param_1 + 0x470) * DAT_002c5e08;
          fVar8 = *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x46c) * DAT_002c5e08;
        }
        *(float *)(iVar2 + 4) = fVar7;
        *(undefined4 *)(iVar2 + 8) = uVar5;
        *(float *)(iVar2 + 0xc) = fVar8;
        uVar5 = ALBW_AS_U32(VectorSignedToFloat(*(int *)(param_1 + 0x464) + 1,(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(*piVar6 + 0x60) = uVar5;
        *(undefined1 *)(param_1 + 0x47d) = 1;
        func_004356B4((int *)*piVar6);
        func_004ED9C8(*(int *)(param_1 + 0x454));
      }
    }
    *(undefined1 *)(param_1 + 0x47c) = 0;
  }
  return;
}

