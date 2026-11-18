#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_001a700c;
extern float DAT_001a7010;
extern undefined4 DAT_001a7014;
extern undefined4 DAT_001a7018;

// USA 001A6F14 <- EU 001A6F14 (Ghidra, non-matching)
// GLOBAL DAT_001a700c int *
// GLOBAL DAT_001a7010 float
// GLOBAL DAT_001a7014 undefined4
// GLOBAL DAT_001a7018 undefined4

void func_001A6F14(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar7;
  float fVar8;
  
  uVar6 = 0xffffffff;
  piVar2 = DAT_001a700c;
  if (*(char *)(param_1 + 0x936) != '\0') {
    if ((uint)(int)*(char *)(param_1 + 0x924) < 4) {
      uVar6 = (int)*(char *)(param_1 + 0x924) + 2U & 3;
    }
    else {
      uVar6 = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 0x936) = 0;
    piVar2 = DAT_001a700c;
  }
  do {
    uVar4 = func_00111A64((uint *)(*piVar2 + 0x660));
    uVar3 = DAT_001a7014;
    fVar8 = DAT_001a7010;
    cVar1 = (char)((ulonglong)uVar4 * 4 >> 0x20);
    uVar4 = (uint)cVar1;
  } while ((int)*(char *)(param_1 + 0x924) == uVar4 || uVar4 == uVar6);
  if ((uint)(int)*(char *)(param_1 + 0x924) < 4) {
    uVar6 = (int)*(char *)(param_1 + 0x924) + 2U & 3;
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (uVar6 == uVar4) {
    *(undefined4 *)(param_1 + 0x904) = 0x14;
    *(undefined4 *)(param_1 + 0x908) = uVar3;
    *(undefined4 *)(param_1 + 0x900) = 0;
    in_s0 = uVar3;
  }
  *(char *)(param_1 + 0x924) = cVar1;
  uVar6 = func_00111A64((uint *)(*piVar2 + 0x660));
  iVar5 = (int)((ulonglong)uVar6 * 0x3c >> 0x20) + 0x3c;
  if (iVar5 == 0) {
    in_s0 = DAT_001a7018;
  }
  *(int *)(param_1 + 0x8f8) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = in_s0;
  }
  else {
    fVar7 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8fc) = fVar8 / fVar7;
  }
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  return;
}

