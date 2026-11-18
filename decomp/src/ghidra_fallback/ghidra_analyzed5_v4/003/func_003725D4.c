#include "ghidra_types.h"

extern int func_00171888(int param_1,uint param_2,undefined4 param_3);
extern int func_005236EC(int param_1,uint param_2);
extern int func_00523774(int param_1,uint param_2);
extern float DAT_0037274c;
extern float DAT_00372750;
extern int *DAT_00372754;
extern int *DAT_00372758;

// USA 003725D4 <- EU 003725B0 (Ghidra, non-matching)
// GLOBAL DAT_0037274c float
// GLOBAL DAT_00372750 float
// GLOBAL DAT_00372754 int *
// GLOBAL DAT_00372758 int *

void func_003725D4(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  
  piVar3 = DAT_00372758;
  piVar2 = DAT_00372754;
  uVar6 = 0;
  if (*(char *)(param_1 + 0x9d1) == '\x01') {
    fVar7 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    param_2 = VectorFloatToUnsigned(fVar7 * DAT_0037274c,3);
  }
  else if (*(char *)(param_1 + 0x9d1) == '\x02') {
    fVar7 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    param_2 = VectorFloatToUnsigned(fVar7 * DAT_00372750,3);
  }
  cVar1 = *(char *)(*DAT_00372754 + 0x18);
  if (cVar1 == '\n') {
LAB_00372704:
    uVar5 = 1;
  }
  else {
    if (cVar1 < '\v') {
      if ((cVar1 == '\0' || cVar1 == '\x02') || (cVar1 == '\x04' || cVar1 == '\t'))
      goto LAB_00372704;
    }
    else if ((cVar1 == '\v' || cVar1 == '\f') || (cVar1 == '\x12' || cVar1 == '\x16'))
    goto LAB_00372704;
    uVar5 = 2;
  }
  bVar4 = func_00523774(*DAT_00372758,uVar5);
  if (bVar4) {
    cVar1 = *(char *)(*piVar2 + 0x18);
    if (cVar1 == '\n') {
LAB_00372724:
      uVar6 = 1;
    }
    else {
      if (cVar1 < '\v') {
        if ((cVar1 == '\0' || cVar1 == '\x02') || (cVar1 == '\x04' || cVar1 == '\t'))
        goto LAB_00372724;
      }
      else if ((cVar1 == '\v' || cVar1 == '\f') || (cVar1 == '\x12' || cVar1 == '\x16'))
      goto LAB_00372724;
      uVar6 = 2;
    }
    uVar6 = func_005236EC(*piVar3,uVar6);
  }
  if (param_2 <= uVar6) goto LAB_003726e4;
  *(undefined1 *)(param_1 + 0x9d0) = 1;
  cVar1 = *(char *)(*piVar2 + 0x18);
  if (cVar1 == '\n') {
LAB_00372744:
    uVar6 = 1;
  }
  else {
    if (cVar1 < '\v') {
      if ((cVar1 == '\0' || cVar1 == '\x02') || (cVar1 == '\x04' || cVar1 == '\t'))
      goto LAB_00372744;
    }
    else if ((cVar1 == '\v' || cVar1 == '\f') || (cVar1 == '\x12' || cVar1 == '\x16'))
    goto LAB_00372744;
    uVar6 = 2;
  }
  func_00171888(*piVar3,uVar6,param_2);
  uVar6 = param_2;
LAB_003726e4:
  *(uint *)(param_1 + 0x9cc) = uVar6;
  return;
}

