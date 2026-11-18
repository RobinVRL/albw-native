#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001D1BC4(int param_1,int param_2,int param_3);
extern float func_00523700(int param_1);
extern int func_0065C598(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001d0af0;
extern float DAT_001d0af4;
extern float DAT_001d0af8;
extern float DAT_001d0afc;
extern float DAT_001d0b00;
extern undefined4 DAT_001d0b04;
extern int DAT_001d0b08;
extern int *DAT_001d0b0c;
extern undefined4 DAT_001d0b10;

// USA 001D085C <- EU 001D085C (Ghidra, non-matching)
// GLOBAL DAT_001d0af0 int *
// GLOBAL DAT_001d0af4 float
// GLOBAL DAT_001d0af8 float
// GLOBAL DAT_001d0afc float
// GLOBAL DAT_001d0b00 float
// GLOBAL DAT_001d0b04 undefined4
// GLOBAL DAT_001d0b08 int
// GLOBAL DAT_001d0b0c int *
// GLOBAL DAT_001d0b10 undefined4

undefined4 func_001D085C(int param_1)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar7 = *DAT_001d0af0;
  if (*(char *)(iVar7 + 0x70) != '\0') {
    if (*(char *)(param_1 + 0x63d) == '\x01') {
      uVar10 = 9;
    }
    else {
      uVar10 = 0xb;
    }
    return func_0065C598((undefined4 *)(param_1 + 0x4fc),uVar10);
  }
  if ((*(uint *)(iVar7 + 0x2b4) & 4) == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x5a8) < *(uint *)(param_1 + 0x5ac)) {
    *(uint *)(param_1 + 0x5a8) = *(uint *)(param_1 + 0x5a8) + 1;
    return 0;
  }
  iVar12 = 0;
  fVar15 = DAT_001d0af4;
  fVar14 = func_00523700(iVar7);
  uVar6 = DAT_001d0b10;
  piVar5 = DAT_001d0b0c;
  iVar7 = DAT_001d0b08;
  uVar4 = DAT_001d0b04;
  fVar3 = DAT_001d0b00;
  fVar14 = fVar14 * DAT_001d0af8;
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar15 <= fVar14) << 0x1d;
  fVar16 = fVar15;
  if ((SUB41(uVar9 >> 0x1d,0)) &&
     (uVar9 = in_fpscr & 0xfffffff | (uint)(fVar14 < DAT_001d0afc) << 0x1f |
              (uint)(fVar14 == DAT_001d0afc) << 0x1e, bVar2 = (byte)(uVar9 >> 0x18), fVar16 = fVar14
     , !(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar14) || NAN(DAT_001d0afc)))) {
    fVar16 = DAT_001d0afc;
  }
  cVar1 = *(char *)(param_1 + 0x5d7);
  puVar8 = (undefined4 *)(param_1 + 0x5a8);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x5ac) = 0x1e;
    *(undefined4 *)(param_1 + 0x5b0) = uVar4;
    *puVar8 = 0;
    uVar9 = func_00111A64((uint *)(*piVar5 + 0x660));
    if (0xe < (uint)((ulonglong)uVar9 * 100 >> 0x20)) goto LAB_001d0958;
  }
  else if (cVar1 == '\x02') {
    *(undefined4 *)(param_1 + 0x5ac) = 0x19;
    *(undefined4 *)(param_1 + 0x5b0) = uVar6;
    *puVar8 = 0;
    uVar9 = func_00111A64((uint *)(*piVar5 + 0x660));
    if (0x27 < (uint)((ulonglong)uVar9 * 100 >> 0x20)) goto LAB_001d0958;
  }
  else {
    if (cVar1 != '\x03') {
      *(undefined4 *)(param_1 + 0x5ac) = 0x1e;
      *(undefined4 *)(param_1 + 0x5b0) = uVar4;
      *puVar8 = 0;
      func_00111A64((uint *)(*piVar5 + 0x660));
      goto LAB_001d0958;
    }
    puVar13 = (ushort *)(DAT_001d0b08 + (int)fVar16 * 0x14);
    uVar11 = (uint)*puVar13;
    *(uint *)(param_1 + 0x5ac) = uVar11;
    if (uVar11 == 0) {
      *(float *)(param_1 + 0x5b0) = fVar15;
    }
    else {
      fVar15 = (float)VectorUnsignedToFloat(uVar11,(byte)(uVar9 >> 0x15) & 3);
      *(float *)(param_1 + 0x5b0) = fVar3 / fVar15;
    }
    *puVar8 = 0;
    uVar9 = func_00111A64((uint *)(*piVar5 + 0x660));
    if ((uint)puVar13[1] <= (uint)((ulonglong)uVar9 * 100 >> 0x20)) goto LAB_001d0958;
  }
  iVar12 = 3;
LAB_001d0958:
  func_001D1BC4(param_1,iVar12,0);
  cVar1 = *(char *)(param_1 + 0x5d7);
  if (cVar1 == '\x01') {
    uVar9 = func_00111A64((uint *)(*piVar5 + 0x660));
    if (0x22 < (uint)((ulonglong)uVar9 * 100 >> 0x20)) {
      return 0;
    }
  }
  else if (cVar1 == '\x02') {
    uVar9 = func_00111A64((uint *)(*piVar5 + 0x660));
    if (0x13 < (uint)((ulonglong)uVar9 * 100 >> 0x20)) {
      return 0;
    }
  }
  else if (cVar1 == '\x03') {
    uVar9 = func_00111A64((uint *)(*piVar5 + 0x660));
    if ((uint)*(ushort *)(iVar7 + (int)fVar16 * 0x14 + 4) <= (uint)((ulonglong)uVar9 * 100 >> 0x20))
    {
      return 0;
    }
  }
  else {
    uVar9 = func_00111A64((uint *)(*piVar5 + 0x660));
    if (0x1d < (uint)((ulonglong)uVar9 * 100 >> 0x20)) {
      return 0;
    }
  }
  return func_001D1BC4(param_1,0,1);
}

