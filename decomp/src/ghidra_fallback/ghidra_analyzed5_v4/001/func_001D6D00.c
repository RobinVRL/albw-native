#include "ghidra_types.h"

extern int func_0058DA04(int param_1);
extern int *DAT_0037cd04;
extern int *DAT_0037cd08;
extern float DAT_0037cd0c;
extern undefined4 DAT_0037cd10;

// USA 001D6D00 <- EU 001D6D00 (Ghidra, non-matching)
// GLOBAL DAT_0037cd04 int *
// GLOBAL DAT_0037cd08 int *
// GLOBAL DAT_0037cd0c float
// GLOBAL DAT_0037cd10 undefined4

void func_0037CC2C(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  piVar1 = DAT_0037cd04;
  if (((*(uint *)(*DAT_0037cd04 + 0x2b4) & 8) == 0) ||
     (bVar4 = func_0058DA04(*DAT_0037cd08), !bVar4)) {
    uVar3 = DAT_0037cd10;
    fVar2 = DAT_0037cd0c;
    if (*(char *)(param_1 + 0x4b8) == '\0') {
      if (*(uint *)(param_1 + 0x4a8) < *(uint *)(param_1 + 0x4ac)) {
        *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x4ac) = 0x78;
        *(undefined4 *)(param_1 + 0x4b0) = uVar3;
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        *(undefined1 *)(param_1 + 0x4b8) = 1;
      }
      iVar5 = *(int *)(param_1 + 0x4ac) - *(int *)(param_1 + 0x4a8);
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x3d4) =
           *(float *)(param_1 + 0x3d4) +
           (*(float *)(param_1 + 0x4b4) - *(float *)(param_1 + 0x3d4)) * (fVar2 / fVar6);
      return;
    }
    if (*(char *)(param_1 + 0x4b8) != '\x01') {
      return;
    }
    if (*(uint *)(param_1 + 0x4a8) < *(uint *)(param_1 + 0x4ac)) {
      *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) + 1;
      return;
    }
    if ((*(uint *)(*piVar1 + 0x2b4) & 8) != 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}

