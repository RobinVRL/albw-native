#include "ghidra_types.h"

extern int func_005568D4(int param_1);
extern int *DAT_0036aeb4;
extern float DAT_0036aeb8;
extern int DAT_0036aebc;
extern int DAT_0036aec0;
extern float DAT_0036aec4;

// USA 0036ADB8 <- EU 0036AD94 (Ghidra, non-matching)
// GLOBAL DAT_0036aeb4 int *
// GLOBAL DAT_0036aeb8 float
// GLOBAL DAT_0036aebc int
// GLOBAL DAT_0036aec0 int
// GLOBAL DAT_0036aec4 float

void func_0036ADB8(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  ushort uVar4;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  undefined4 uVar14;
  uint uVar5;
  
  uVar4 = func_005568D4(*DAT_0036aeb4);
  fVar3 = DAT_0036aec4;
  iVar2 = DAT_0036aec0;
  iVar8 = DAT_0036aebc;
  uVar5 = (uint)uVar4;
  uVar6 = *(int *)(param_1 + 0x68) - uVar5;
  uVar1 = (int)uVar6 >> 0x1f;
  uVar7 = 0;
  fVar13 = (float)VectorSignedToFloat(((uVar6 ^ uVar1) - uVar1) + -1,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = fVar13 * DAT_0036aeb8;
  iVar9 = *(int *)(param_1 + 0x68);
  do {
    if (iVar8 < (int)ALBW_AS_U32(fVar13)) {
      if ((int)ALBW_AS_U32(fVar13) < 0x3f000001) {
        puVar10 = (undefined1 *)(param_1 + 0x79);
        if (uVar7 < 4) {
          puVar10 = puVar10 + uVar7;
        }
        *puVar10 = 1;
      }
      else {
        puVar10 = (undefined1 *)(param_1 + 0x79);
        if (uVar7 < 4) {
          puVar10 = puVar10 + uVar7;
        }
        *puVar10 = 2;
      }
    }
    else {
      puVar10 = (undefined1 *)(param_1 + 0x79);
      if (uVar7 < 4) {
        puVar10 = puVar10 + uVar7;
      }
      *puVar10 = 0;
    }
    iVar12 = (int)((ulonglong)((longlong)iVar2 * (longlong)iVar9) >> 0x20);
    fVar13 = fVar13 * fVar3;
    puVar11 = (undefined4 *)(param_1 + 0x80);
    iVar12 = (iVar12 >> 2) - (iVar12 >> 0x1f);
    if (uVar7 < 4) {
      puVar11 = puVar11 + uVar7;
    }
    uVar7 = uVar7 + 1;
    uVar14 = ALBW_AS_U32(VectorSignedToFloat(iVar9 + iVar12 * -10,(byte)(in_fpscr >> 0x15) & 3));
    *puVar11 = uVar14;
    iVar9 = iVar12;
  } while ((int)uVar7 < 4);
  *(undefined4 *)(param_1 + 0x70) = 0x73;
  if (*(int *)(param_1 + 0x68) < (int)uVar5) {
    iVar8 = -1;
  }
  else {
    iVar8 = 1;
  }
  uVar14 = ALBW_AS_U32(VectorSignedToFloat(*(int *)(param_1 + 0x68),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x74) = uVar14;
  *(uint *)(param_1 + 0x68) = uVar5;
  *(uint *)(param_1 + 0x6c) = iVar8 + uVar5;
  return;
}

