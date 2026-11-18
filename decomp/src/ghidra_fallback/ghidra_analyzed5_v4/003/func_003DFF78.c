#include "ghidra_types.h"

extern float DAT_003e0070;
extern uint DAT_003e0074;
extern float DAT_003e0078;
extern int DAT_003e007c;
extern float DAT_003e0080;
extern float DAT_003e0084;

// USA 003DFF78 <- EU 003DFF58 (Ghidra, non-matching)
// GLOBAL DAT_003e0070 float
// GLOBAL DAT_003e0074 uint
// GLOBAL DAT_003e0078 float
// GLOBAL DAT_003e007c int
// GLOBAL DAT_003e0080 float
// GLOBAL DAT_003e0084 float

undefined4 func_003DFF78(int param_1,uint *param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  
  fVar4 = DAT_003e0084;
  iVar3 = DAT_003e007c;
  fVar2 = DAT_003e0078;
  if ((((DAT_003e0070 <= (float)param_2[2]) && ((int)param_2[2] < 0x3f800001)) &&
      (DAT_003e0070 <= (float)param_2[1])) && ((int)param_2[1] < 0x3f800001)) {
    if (*(char *)(param_1 + 0x56) != '\x01') {
LAB_003dffc4:
      uVar6 = (uint)((ulonglong)(*param_2 * 1000) * (ulonglong)DAT_003e0074 >> 0x2c);
      *(uint *)(param_1 + 0x3c) = uVar6;
      if (uVar6 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 1;
      }
      if ((char)param_2[3] == '\0') {
        uVar5 = 2;
      }
      else {
        uVar5 = 4;
      }
      *(undefined1 *)(param_1 + 0x55) = uVar5;
      *(int *)(param_1 + 0x44) = (int)(ALBW_AS_F32(param_2[1]) * fVar2);
      fVar10 = (float)param_2[2];
      if (iVar3 < (int)param_2[2]) {
        fVar10 = DAT_003e0080;
      }
      *(int *)(param_1 + 0x48) = (int)((fVar4 - fVar10) * fVar2);
      *(int *)(param_1 + 0x4c) = (int)(fVar10 * fVar2);
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      *(uint *)(param_1 + 0x10) = param_2[3];
      *(uint *)(param_1 + 4) = uVar6;
      *(uint *)(param_1 + 8) = uVar7;
      *(uint *)(param_1 + 0xc) = uVar8;
      return 1;
    }
    if (*param_2 <= *(uint *)(param_1 + 0x50)) {
      cVar1 = *(char *)(param_1 + 0x54);
      bVar9 = cVar1 == '\0';
      if (bVar9) {
        cVar1 = (char)param_2[3];
      }
      if (!bVar9 || cVar1 != '\x01') goto LAB_003dffc4;
    }
  }
  return 0;
}

