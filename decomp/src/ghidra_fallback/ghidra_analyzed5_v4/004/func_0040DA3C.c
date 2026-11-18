#include "ghidra_types.h"

extern float func_00111EA8(int param_1);
extern undefined4 DAT_0040db1c;
extern float DAT_0040db20;

// USA 0040DA3C <- EU 0040DA1C (Ghidra, non-matching)
// GLOBAL DAT_0040db1c undefined4
// GLOBAL DAT_0040db20 float

void func_0040DA3C(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x9d);
  if (param_2 == 0) {
    if ((bVar1 != 0) && ((bVar1 == 1 || bVar1 == 2) || bVar1 == 3)) {
      fVar2 = func_00111EA8(param_1 + 0x74);
      fVar4 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      iVar3 = (int)((DAT_0040db20 - fVar2) * fVar4);
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      fVar2 = DAT_0040db20;
      fVar4 = func_00111EA8(param_1 + 0x74);
      *(float *)(param_1 + 0x74) = fVar4;
      *(float *)(param_1 + 0x78) = fVar2;
      *(int *)(param_1 + 0x7c) = iVar3;
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined1 *)(param_1 + 0x9d) = 3;
      *(undefined1 *)(param_1 + 0x9f) = 1;
      return;
    }
  }
  else if ((bVar1 < 2) || ((bVar1 != 2 && (bVar1 == 3)))) {
    fVar2 = func_00111EA8(param_1 + 0x74);
    fVar4 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    iVar3 = (int)(fVar2 * fVar4);
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    uVar5 = DAT_0040db1c;
    fVar2 = func_00111EA8(param_1 + 0x74);
    *(float *)(param_1 + 0x74) = fVar2;
    *(undefined4 *)(param_1 + 0x78) = uVar5;
    *(int *)(param_1 + 0x7c) = iVar3;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x9d) = 1;
    *(undefined1 *)(param_1 + 0x9f) = 0;
  }
  return;
}

