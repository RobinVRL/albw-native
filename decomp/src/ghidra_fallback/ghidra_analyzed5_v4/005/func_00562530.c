#include "ghidra_types.h"

extern int func_00562280(int *param_1,undefined4 *param_2,int param_3);
extern uint DAT_00562678;
extern uint DAT_0056267c;
extern uint DAT_00562680;
extern float DAT_00562684;
extern float DAT_00562688;
extern int DAT_0056268c;
extern uint DAT_00562690;
extern uint DAT_00562694;

// USA 00562530 <- EU 00562508 (Ghidra, non-matching)
// GLOBAL DAT_00562678 uint
// GLOBAL DAT_0056267c uint
// GLOBAL DAT_00562680 uint
// GLOBAL DAT_00562684 float
// GLOBAL DAT_00562688 float
// GLOBAL DAT_0056268c int
// GLOBAL DAT_00562690 uint
// GLOBAL DAT_00562694 uint

uint * func_00562530(char *param_1,uint *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  float fVar6;
  
  uVar1 = DAT_0056267c;
  if (*param_1 != '\0') {
    *param_2 = DAT_00562678;
    puVar4 = param_2 + 2;
    param_2[1] = uVar1;
    uVar1 = DAT_00562680;
    uVar2 = 0;
    if (param_4 != 0) {
      *puVar4 = 0;
      param_2[3] = uVar1;
      param_2[4] = 0;
      puVar4 = param_2 + 6;
      param_2[5] = 0;
    }
    uVar1 = DAT_00562690;
    fVar6 = *(float *)(param_1 + 4);
    if ((DAT_00562684 < fVar6) && ((uint)((int)ALBW_AS_U32(fVar6) << 1) >> 0x18 != 0xff)) {
      if ((int)ALBW_AS_U32((fVar6 * DAT_00562688)) < DAT_0056268c) {
        uVar2 = VectorFloatToUnsigned(fVar6 * DAT_00562688,3);
      }
      else {
        uVar2 = 0xffffff;
      }
    }
    *puVar4 = (uint)(param_1[1] == '\0') | uVar2 & 0xfffffffe;
    puVar4[1] = uVar1;
    uVar1 = DAT_00562694;
    fVar6 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0x10);
    iVar5 = 0;
    if ((ABS(fVar6) == 0.0) || (iVar5 = ((uint)((int)ALBW_AS_U32(fVar6) << 1) >> 0x18) - 0x70, -1 < iVar5)) {
      uVar2 = (((uint)ALBW_AS_U32(fVar6) & 0xe07fffff) >> 0xd | iVar5 << 10) & 0xffff |
              ((uint)ALBW_AS_U32(fVar6) >> 0x1f) << 0xf;
    }
    else {
      uVar2 = ((uint)ALBW_AS_U32(fVar6) >> 0x1f) << 0xf;
    }
    fVar6 = -*(float *)(param_1 + 0xc);
    iVar5 = 0;
    if ((ABS(fVar6) == 0.0) || (iVar5 = ((uint)((int)ALBW_AS_U32(fVar6) << 1) >> 0x18) - 0x70, -1 < iVar5)) {
      uVar3 = (((uint)ALBW_AS_U32(fVar6) & 0xe07fffff) >> 0xd | iVar5 << 10) & 0xffff |
              ((uint)ALBW_AS_U32(fVar6) >> 0x1f) << 0xf;
    }
    else {
      uVar3 = ((uint)ALBW_AS_U32(fVar6) >> 0x1f) << 0xf;
    }
    puVar4[2] = uVar2 | uVar3 << 0x10;
    param_2 = puVar4 + 4;
    puVar4[3] = uVar1;
  }
  if (param_3 != 0) {
    puVar4 = func_00562280((int *)(*(int *)(param_1 + 0x14) + 0x7c),param_2,1);
    return puVar4;
  }
  return param_2;
}

