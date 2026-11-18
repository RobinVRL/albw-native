#include "ghidra_types.h"

extern int func_003DB770(int param_1);
extern int func_003DBCC4(int param_1);
extern int func_003DE188(int param_1,float fparam_0);
extern void func_00418498(int param_1,int param_2);
extern int func_00419924(void);
extern int func_00419AF4(int param_1,ushort param_2);
extern undefined4 DAT_00418824;
extern undefined4 DAT_00418828;

// USA 00418648 <- EU 00418628 (Ghidra, non-matching)
// GLOBAL DAT_00418824 undefined4
// GLOBAL DAT_00418828 undefined4

undefined4 func_00418648(int param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  
  uVar9 = 0;
  uVar16 = CONCAT44(DAT_00418824,DAT_00418828);
  do {
    iVar8 = param_1 + uVar9 * 0x10;
    iVar4 = *(int *)(iVar8 + 0x40);
    bVar1 = iVar4 < *(int *)(iVar8 + 0x3c);
    if (bVar1) {
      *(int *)(iVar8 + 0x40) = iVar4 + 1;
    }
    if (*(int *)(iVar8 + 0x20) < *(int *)(iVar8 + 0x1c)) {
      iVar4 = *(int *)(iVar8 + 0x20) + 1;
      *(int *)(iVar8 + 0x20) = iVar4;
      if (*(int *)(iVar8 + 0x1c) <= iVar4) {
        func_00418498(param_1,uVar9 & 0xff);
      }
LAB_004186a4:
      fVar12 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
      if (*(int *)(iVar8 + 0x40) < *(int *)(iVar8 + 0x3c)) {
        fVar13 = (float)VectorSignedToFloat(*(int *)(iVar8 + 0x40),(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = (float)VectorSignedToFloat(*(int *)(iVar8 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = ((*(float *)(iVar8 + 0x38) - *(float *)(iVar8 + 0x34)) * fVar13) / fVar11 +
                 *(float *)(iVar8 + 0x34);
      }
      else {
        fVar11 = *(float *)(iVar8 + 0x38);
      }
      fVar15 = ALBW_AS_F32(uVar16);
      uVar10 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar12) << 0x1f |
               (uint)(fVar11 == fVar12) << 0x1e;
      bVar3 = (byte)(uVar10 >> 0x18);
      fVar13 = fVar12;
      if (((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(fVar11) || NAN(fVar12))) &&
         (uVar10 = in_fpscr & 0xfffffff | (uint)(fVar15 <= fVar11) << 0x1d, fVar13 = fVar11,
         !SUB41(uVar10 >> 0x1d,0))) {
        fVar13 = fVar15;
      }
      fVar13 = fVar13 * fVar12;
      if (*(int *)(iVar8 + 0x20) < *(int *)(iVar8 + 0x1c)) {
        fVar14 = (float)VectorSignedToFloat(*(int *)(iVar8 + 0x20),(byte)(uVar10 >> 0x15) & 3);
        fVar11 = (float)VectorSignedToFloat(*(int *)(iVar8 + 0x1c),(byte)(uVar10 >> 0x15) & 3);
        fVar11 = ((*(float *)(iVar8 + 0x18) - *(float *)(iVar8 + 0x14)) * fVar14) / fVar11 +
                 *(float *)(iVar8 + 0x14);
      }
      else {
        fVar11 = *(float *)(iVar8 + 0x18);
      }
      uVar2 = uVar10 & 0xfffffff | (uint)(fVar11 < fVar12) << 0x1f |
              (uint)(fVar11 == fVar12) << 0x1e;
      in_fpscr = uVar2 | (uint)(NAN(fVar11) || NAN(fVar12)) << 0x1c;
      bVar3 = (byte)(uVar2 >> 0x18);
      if (((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) &&
         (in_fpscr = uVar10 & 0xfffffff | (uint)(fVar15 <= fVar11) << 0x1d, fVar12 = fVar11,
         !SUB41(in_fpscr >> 0x1d,0))) {
        fVar12 = fVar15;
      }
      func_003DE188((int)(char)uVar9,fVar12 * fVar13);
    }
    else if (bVar1) goto LAB_004186a4;
    iVar4 = 0;
    do {
      iVar7 = iVar8 + iVar4 * 8;
      iVar5 = *(int *)(iVar7 + 0x290);
      if ((iVar5 != 0) && (*(char *)(iVar7 + 0x294) == '\x02')) {
        if (iVar4 == 0) {
          iVar5 = func_003DB770(iVar5);
        }
        else {
          if (iVar4 != 1) goto LAB_004187d8;
          iVar5 = func_003DBCC4(iVar5);
        }
        if (iVar5 == 0) {
          *(int *)(iVar7 + 0x290) = 0;
          *(undefined1 *)(iVar7 + 0x294) = 0;
        }
      }
LAB_004187d8:
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    uVar9 = uVar9 + 1;
    if (1 < (int)uVar9) {
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        puVar6 = func_00419924();
        return func_00419AF4((int)puVar6,0x40);
      }
      return 0;
    }
  } while( true );
}

