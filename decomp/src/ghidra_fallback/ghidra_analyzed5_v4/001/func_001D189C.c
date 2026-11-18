#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001CFEF4(int param_1,undefined4 param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern float DAT_001d1a10;
extern float DAT_001d1a14;
extern undefined4 *DAT_001d1a18;
extern float DAT_001d1a1c;
extern float DAT_001d1a20;
extern float DAT_001d1a24;
extern float DAT_001d1a28;
extern float DAT_001d1a2c;
extern undefined4 DAT_001d1a30;
extern undefined4 DAT_001d1a34;

// USA 001D189C <- EU 001D189C (Ghidra, non-matching)
// GLOBAL DAT_001d1a10 float
// GLOBAL DAT_001d1a14 float
// GLOBAL DAT_001d1a18 undefined4 *
// GLOBAL DAT_001d1a1c float
// GLOBAL DAT_001d1a20 float
// GLOBAL DAT_001d1a24 float
// GLOBAL DAT_001d1a28 float
// GLOBAL DAT_001d1a2c float
// GLOBAL DAT_001d1a30 undefined4
// GLOBAL DAT_001d1a34 undefined4

void func_001D189C(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_30 ((float *)(albw_frame + 0x0))
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(afStack_30,pfVar2,(float *)(param_1 + 0x3d0));
  iVar3 = func_0068C690(afStack_30);
  puVar1 = DAT_001d1a18;
  *(int *)(param_1 + 1000) = iVar3;
  puVar4 = (uint *)*puVar1;
  piVar6 = (int *)(param_1 + 1000);
  if (*(char *)(param_1 + 0x5d7) == '\0') {
    fVar9 = DAT_001d1a10;
    fVar11 = DAT_001d1a14;
    fVar12 = DAT_001d1a24;
    uVar5 = func_00111A64(puVar4);
    fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    *piVar6 = (int)((fVar7 * fVar9 * fVar12 + DAT_001d1a28) * fVar11) + *piVar6;
  }
  else {
    fVar9 = DAT_001d1a1c;
    fVar11 = DAT_001d1a10;
    fVar12 = DAT_001d1a14;
    uVar5 = func_00111A64(puVar4);
    fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    *piVar6 = (int)((fVar7 * fVar11 * fVar9 + DAT_001d1a20) * fVar12) + *piVar6;
  }
  fVar9 = DAT_001d1a2c;
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_1 + 1000);
  func_001CFEF4(param_1,7,fVar9);
  uVar10 = DAT_001d1a34;
  if (*(char *)(param_1 + 0x5d7) == '\0') {
    *(undefined4 *)(param_1 + 0x5a0) = 0x96;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x4f8);
    uVar8 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x14)),3);
    uVar5 = func_00111A64((uint *)*puVar1);
    iVar3 = *(int *)(iVar3 + 0x14);
    fVar9 = (float)VectorUnsignedToFloat
                             ((int)((ulonglong)uVar8 * (ulonglong)uVar5 >> 0x20),
                              (byte)(in_fpscr >> 0x15) & 3);
    if (*(float *)(iVar3 + 8) != fVar9) {
      *(float *)(iVar3 + 8) = fVar9;
      *(undefined1 *)(iVar3 + 0x26) = 1;
    }
    uVar10 = DAT_001d1a30;
    *(undefined4 *)(param_1 + 0x5a0) = 0x78;
  }
  *(undefined4 *)(param_1 + 0x5a4) = uVar10;
  *(undefined4 *)(param_1 + 0x59c) = 0;
  return;
}

