#include "ghidra_types.h"

extern float DAT_0034c668;
extern float DAT_0034c66c;
extern int DAT_0034c670;

// USA 0034C57C <- EU 0034C558 (Ghidra, non-matching)
// GLOBAL DAT_0034c668 float
// GLOBAL DAT_0034c66c float
// GLOBAL DAT_0034c670 int

void func_0034C57C(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  
  iVar3 = DAT_0034c670;
  fVar2 = DAT_0034c66c;
  fVar1 = DAT_0034c668;
  uVar11 = 0;
  if (*(int *)(param_1 + 0x30) <= param_2) {
    param_2 = *(int *)(param_1 + 0x30);
  }
  iVar9 = param_2;
  if (0 < *(int *)(param_1 + 0x2c)) {
    do {
      iVar5 = (int)((ulonglong)((longlong)iVar3 * (longlong)iVar9) >> 0x20);
      iVar5 = (iVar5 >> 2) - (iVar5 >> 0x1f);
      iVar9 = iVar9 + iVar5 * -10;
      if ((int)uVar11 < (int)*(uint *)(param_1 + 0x20)) {
        if (uVar11 < *(uint *)(param_1 + 0x20)) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x28) + uVar11 * 4);
        }
        else {
          iVar7 = 0;
        }
        fVar12 = fVar1;
        if (iVar9 < 9) {
          if (iVar9 < -1) {
            iVar9 = -1;
          }
          fVar12 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
          fVar12 = fVar2 + (fVar12 + fVar1) * fVar2;
        }
        *(float *)(*(int *)(iVar7 + 0x7c) + ((uint)(*(int *)(iVar7 + 0x74) << 0x1e) >> 0x19) + 4) =
             fVar12;
        *(byte *)(iVar7 + 0x9e) = *(byte *)(iVar7 + 0x9e) & 0xfb;
      }
      uVar11 = uVar11 + 1;
      iVar9 = iVar5;
    } while ((int)uVar11 < *(int *)(param_1 + 0x2c));
  }
  piVar4 = *(int **)(param_1 + 0x28);
  if (param_2 < *(int *)(param_1 + 0x30)) {
    uVar8 = 0x4c;
    uVar10 = 0x23;
  }
  else {
    uVar8 = 0xfe;
    uVar10 = 0;
  }
  piVar6 = piVar4 + *(int *)(param_1 + 0x20);
  for (; piVar4 != piVar6; piVar4 = piVar4 + 1) {
    *(undefined1 *)(*piVar4 + 0x6c) = uVar8;
    *(undefined1 *)(*piVar4 + 0x6d) = uVar10;
  }
  return;
}

