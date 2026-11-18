#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CF5B0(int param_1,int param_2,int param_3,int param_4);
extern int func_004D01E0(int param_1,int param_2,int param_3);
extern int func_00657A90(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00151ac8;
extern uint *DAT_00151acc;
extern undefined4 *DAT_00151ad0;
extern undefined4 DAT_00151ad4;
extern float DAT_00151ad8;
extern float DAT_00151adc;
extern float DAT_00151ae0;
extern float DAT_00151ae4;
extern float DAT_00151ae8;

// USA 00151870 <- EU 00151870 (Ghidra, non-matching)
// GLOBAL DAT_00151ac8 int *
// GLOBAL DAT_00151acc uint *
// GLOBAL DAT_00151ad0 undefined4 *
// GLOBAL DAT_00151ad4 undefined4
// GLOBAL DAT_00151ad8 float
// GLOBAL DAT_00151adc float
// GLOBAL DAT_00151ae0 float
// GLOBAL DAT_00151ae4 float
// GLOBAL DAT_00151ae8 float

undefined4 func_00151870(int param_1,undefined4 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  piVar8 = *(int **)(*DAT_00151ac8 + 0x44);
  if (((*DAT_00151acc & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00151acc), iVar3 != 0)) {
    *DAT_00151ad0 = DAT_00151ad4;
  }
  if ((piVar8 == (int *)0x0) ||
     (iVar3 = (**(code **)(*piVar8 + 8))(piVar8,DAT_00151ad0), iVar3 == 0)) {
    piVar8 = (int *)0x0;
  }
  piVar7 = (int *)(param_1 + 0x40c);
  if ((piVar8 != (int *)0x0) && ((char)piVar8[0x1f] == '\x05')) {
    if (*(char *)(param_1 + 0x410) == '\x01') {
      func_00657A90(piVar7,0);
    }
    if (*(int *)(param_1 + 0x430) == 1) {
      *(undefined4 *)(param_1 + 0x430) = 2;
    }
  }
  piVar8 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar6 = (int *)(*(int *)(param_1 + 0x420) + ((int)uVar5 >> 1));
  if ((uVar5 & 1) != 0) {
    piVar8 = (int *)(*piVar8 + *piVar6);
  }
  (*(code *)*piVar8)(piVar6);
  iVar3 = *piVar7;
  *piVar7 = iVar3 + 1;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fVar10);
  }
  fVar10 = DAT_00151ae4;
  if ((*(int *)(param_1 + 0x434) == 0) || (*(int *)(param_1 + 0x438) < 0)) {
    return 0;
  }
  pfVar4 = (float *)(param_1 + 0x440);
  fVar13 = *(float *)(param_1 + 0x444);
  fVar14 = *pfVar4;
  fVar11 = (fVar13 - fVar14) * DAT_00151ae0;
  if (fVar11 <= DAT_00151ae4) {
    fVar11 = -fVar11;
  }
  uVar5 = in_fpscr & 0xfffffff | (uint)(DAT_00151ad8 <= fVar11) << 0x1d;
  fVar12 = DAT_00151ad8;
  if ((SUB41(uVar5 >> 0x1d,0)) &&
     (uVar5 = in_fpscr & 0xfffffff | (uint)(fVar11 < DAT_00151adc) << 0x1f |
              (uint)(fVar11 == DAT_00151adc) << 0x1e, bVar2 = (byte)(uVar5 >> 0x18), fVar12 = fVar11
     , !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar11) || NAN(DAT_00151adc)))) {
    fVar12 = DAT_00151adc;
  }
  uVar5 = uVar5 & 0xfffffff;
  uVar1 = uVar5 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e |
          (uint)(fVar13 <= fVar14) << 0x1d;
  uVar9 = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if ((bool)(bVar2 >> 5 & 1)) {
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar9 >> 0x1c) & 1)) goto LAB_00151a5c;
    fVar12 = fVar14 - fVar12;
    uVar9 = uVar5 | (uint)(fVar12 == fVar13) << 0x1e | (uint)(fVar13 <= fVar12) << 0x1d;
    bVar2 = (byte)(uVar9 >> 0x18);
    if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
       (uVar5 = uVar5 | (uint)(fVar12 < fVar14) << 0x1f | (uint)(fVar12 == fVar14) << 0x1e,
       uVar9 = uVar5 | (uint)(NAN(fVar12) || NAN(fVar14)) << 0x1c, bVar2 = (byte)(uVar5 >> 0x18),
       (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar9 >> 0x1c) & 1))) goto LAB_00151a58;
  }
  else {
    fVar12 = fVar14 + fVar12;
    uVar9 = uVar5 | (uint)(fVar13 == fVar12) << 0x1e | (uint)(fVar12 <= fVar13) << 0x1d;
    bVar2 = (byte)(uVar9 >> 0x18);
    if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
       (uVar5 = uVar5 | (uint)(fVar14 < fVar12) << 0x1f | (uint)(fVar14 == fVar12) << 0x1e,
       uVar9 = uVar5 | (uint)(NAN(fVar14) || NAN(fVar12)) << 0x1c, bVar2 = (byte)(uVar5 >> 0x18),
       (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar9 >> 0x1c) & 1))) {
LAB_00151a58:
      *pfVar4 = fVar12;
      goto LAB_00151a5c;
    }
  }
  *pfVar4 = fVar13;
LAB_00151a5c:
  func_004D01E0(*(int *)(param_1 + 0x434),1,*(int *)(param_1 + 0x438));
  fVar13 = *(float *)(param_1 + 0x440) * DAT_00151ae8;
  uVar5 = (uint)fVar13;
  fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(uVar9 >> 0x15) & 3);
  fVar11 = fVar14;
  if (fVar14 != fVar13) {
    fVar11 = fVar10;
  }
  if (fVar13 <= fVar11 && (fVar14 != fVar13 && fVar10 != fVar13)) {
    uVar5 = uVar5 - 1;
  }
  return func_004CF5B0(*(int *)(param_1 + 0x434),*(int *)(param_1 + 0x438),0,uVar5 & 0xff);
}

