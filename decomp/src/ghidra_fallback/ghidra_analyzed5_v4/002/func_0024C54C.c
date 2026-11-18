#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern uint DAT_0024c728;
extern float DAT_0024c72c;
extern float DAT_0024c730;
extern int DAT_0024c734;
extern int DAT_0024c738;
extern int DAT_0024c73c;

// USA 0024C54C <- EU 0024C54C (Ghidra, non-matching)
// GLOBAL DAT_0024c728 uint
// GLOBAL DAT_0024c72c float
// GLOBAL DAT_0024c730 float
// GLOBAL DAT_0024c734 int
// GLOBAL DAT_0024c738 int
// GLOBAL DAT_0024c73c int

void func_0024C54C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  code *pcVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define fStack_48 (*(float *)(albw_frame + 0x18))
  #define iStack_44 (*(int *)(albw_frame + 0x1c))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  pcVar5 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*pcVar5)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fVar10);
  }
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0xa88)) {
    uVar12 = (ulonglong)DAT_0024c728;
    pfVar8 = (float *)(param_1 + 0x9bc);
    fVar10 = DAT_0024c72c;
    fVar11 = DAT_0024c730;
    do {
      puVar3 = (undefined4 *)(param_1 + 0x430);
      if (uVar1 < 0x20) {
        puVar3 = puVar3 + uVar1;
      }
      piVar7 = (int *)*puVar3;
      piVar4 = (int *)(param_1 + 0x7b0);
      if (uVar1 < 0x20) {
        piVar4 = piVar4 + uVar1;
      }
      func_00115154(&fStack_54,&fStack_50,*piVar4 + 0x80000000);
      piVar7[0x1d] = (int)uVar12;
      piVar7[0x20] = (int)ALBW_AS_U32(fVar10);
      piVar7[0x1c] = (int)ALBW_AS_U32(fVar10);
      piVar7[0x1e] = (int)ALBW_AS_U32(fVar10);
      piVar7[0x1a] = (int)ALBW_AS_U32(fVar10);
      bVar9 = uVar1 < 0x20;
      piVar7[0x19] = (int)ALBW_AS_U32(fStack_50);
      piVar7[0x1b] = (int)ALBW_AS_U32(fStack_54);
      piVar7[0x1f] = (int)ALBW_AS_U32(-fStack_54);
      pfVar6 = pfVar8;
      if (bVar9) {
        pfVar6 = pfVar8 + uVar1;
      }
      piVar7[0x21] = (int)ALBW_AS_U32(fStack_50);
      piVar7[0x18] = (int)ALBW_AS_U32(*pfVar6);
      piVar4 = (int *)(param_1 + 0x7b0);
      if (bVar9) {
        piVar4 = piVar4 + uVar1;
      }
      pfVar6 = pfVar8;
      if (bVar9) {
        pfVar6 = pfVar8 + uVar1;
      }
      func_004D80A4(&fStack_4c,*piVar4 + 0x80000000,*pfVar6 * fVar11);
      pfVar6 = (float *)(param_1 + 0x630);
      if (uVar1 < 0x20) {
        pfVar6 = (float *)(param_1 + 0x630 + uVar1 * 0xc);
      }
      fStack_48 = fVar10;
      func_00115C70(&fStack_4c,pfVar6,&fStack_4c);
      iVar2 = DAT_0024c734;
      if ((*(short *)(param_1 + 0x2c) != 0) &&
         (iVar2 = DAT_0024c738, *(short *)(param_1 + 0x2c) != 2)) {
        iVar2 = DAT_0024c73c;
      }
      fStack_48 = fStack_48 + *(float *)(iVar2 + 4) * fVar11;
      piVar7[1] = (int)ALBW_AS_U32(fStack_4c);
      piVar7[2] = (int)ALBW_AS_U32(fStack_48);
      piVar7[3] = iStack_44;
      func_004356B4(piVar7);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(param_1 + 0xa88));
  }
  return;
}

