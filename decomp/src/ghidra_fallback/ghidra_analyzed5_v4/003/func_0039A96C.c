// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002FEC08(int param_1,int param_2,int param_3,float fparam_0);
extern int func_0039A8C8(int param_1,float fparam_0);
extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0053AD7C(int param_1,uint param_2);
extern int func_00556A44();
extern int *DAT_0039ab7c;
extern float DAT_0039ab80;
extern float DAT_0039ab84;
extern int *DAT_0039ab88;
extern int *DAT_0039ab8c;
extern float DAT_0039ab90;

// USA 0039A96C <- EU 0039A948 (Ghidra, non-matching)
// GLOBAL DAT_0039ab7c int *
// GLOBAL DAT_0039ab80 float
// GLOBAL DAT_0039ab84 float
// GLOBAL DAT_0039ab88 int *
// GLOBAL DAT_0039ab8c int *
// GLOBAL DAT_0039ab90 float

void func_0039A96C(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  iVar3 = 0;
  if (*DAT_0039ab7c != 0) {
    iVar3 = func_00556A44(*DAT_0039ab7c,0xc);
  }
  fVar1 = DAT_0039ab84;
  fVar11 = DAT_0039ab80;
  if (*(int *)(param_1 + 0x164) < 2) {
    iVar5 = iVar3;
    if (0 < *(int *)(param_1 + 0x164)) {
      if (iVar3 == 0) {
        iVar5 = 2;
      }
      else {
        iVar5 = 3;
      }
    }
  }
  else {
    iVar5 = 4;
  }
  if ((*(ushort *)(param_1 + 0xa0) & 1) == 0) {
    iVar8 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x154) == iVar5) goto LAB_0039a9ec;
    iVar8 = 0x78;
  }
  *(int *)(param_1 + 0x15c) = iVar8;
  if (iVar8 == 0) {
    *(float *)(param_1 + 0x160) = fVar11;
  }
  else {
    fVar12 = (float)VectorUnsignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x160) = fVar1 / fVar12;
  }
  *(int *)(param_1 + 0x154) = iVar5;
  *(undefined4 *)(param_1 + 0x158) = 0;
LAB_0039a9ec:
  piVar2 = DAT_0039ab88;
  if (iVar3 != 0) {
    iVar3 = *DAT_0039ab88;
    *(undefined1 *)(iVar3 + 0xfa9) = 0;
    *(undefined1 *)(iVar3 + 0xfaa) = 0;
  }
  uVar9 = *(uint *)(param_1 + 0x15c);
  if (*(uint *)(param_1 + 0x158) < uVar9) {
    uVar4 = *(uint *)(param_1 + 0x158) + 1;
    if (uVar9 != 0 && uVar4 != 0) {
      fVar11 = fVar1;
    }
    *(uint *)(param_1 + 0x158) = uVar4;
    if ((uVar9 != 0 && uVar4 != 0) && uVar4 < uVar9) {
      fVar11 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * *(float *)(param_1 + 0x160);
    }
    uVar13 = (ulonglong)(uint)ALBW_AS_U32(fVar11);
    pcVar10 = (char *)(param_1 + 0x14c);
    if (*(uint *)(param_1 + 0x154) < 5) {
      pcVar10 = pcVar10 + *(uint *)(param_1 + 0x154);
    }
    if ((uint)(int)*pcVar10 < *(uint *)(param_1 + 0xa4)) {
      iVar3 = *(int *)(*(int *)(param_1 + 0xac) + *pcVar10 * 4);
    }
    else {
      iVar3 = 0;
    }
    if (*(int *)(param_1 + 0xf8) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(param_1 + 0x100);
    }
    func_002FEC08(iVar5,*(int *)(iVar3 + 0x6c),0,fVar11);
    func_0039A8C8(param_1,ALBW_AS_F32(uVar13));
    pbVar6 = (byte *)func_0053AD7C(*DAT_0039ab8c,*(uint *)(param_1 + 0x154));
    uVar9 = 0;
    local_38 = (float)VectorUnsignedToFloat((uint)*pbVar6,(byte)(in_fpscr >> 0x15) & 3);
    fStack_34 = (float)VectorUnsignedToFloat((uint)pbVar6[1],(byte)(in_fpscr >> 0x15) & 3);
    fStack_30 = (float)VectorUnsignedToFloat((uint)pbVar6[2],(byte)(in_fpscr >> 0x15) & 3);
    local_2c = (float)VectorUnsignedToFloat((uint)pbVar6[3],(byte)(in_fpscr >> 0x15) & 3);
    local_38 = local_38 * DAT_0039ab90;
    fStack_34 = fStack_34 * DAT_0039ab90;
    fStack_30 = fStack_30 * DAT_0039ab90;
    local_2c = local_2c * DAT_0039ab90;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar3 = *piVar2;
        if (uVar9 < *(uint *)(param_1 + 4)) {
          puVar7 = (ushort *)(*(int *)(param_1 + 0xc) + uVar9 * 4);
        }
        else {
          puVar7 = *(ushort **)(param_1 + 0xc);
        }
        iVar5 = iVar3 + 0x284;
        if (*puVar7 < 0x33) {
          iVar5 = iVar5 + (uint)*puVar7 * 0x38;
        }
        func_0049C154((float *)(iVar5 + 0x18),(float *)(iVar5 + 0x18),&local_38,ALBW_AS_F32(uVar13));
        *(undefined1 *)(iVar3 + 0xfa4) = 1;
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < *(int *)(param_1 + 4));
    }
    *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 2;
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  return;
}

