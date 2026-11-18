#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_001512B4(int param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_006576C4(undefined4 *param_1,undefined1 param_2);
extern float DAT_0014413c;
extern int DAT_00144140;
extern float DAT_00144144;
extern float DAT_00144148;
extern int *DAT_0014414c;

// USA 00144058 <- EU 00144058 (Ghidra, non-matching)
// GLOBAL DAT_0014413c float
// GLOBAL DAT_00144140 int
// GLOBAL DAT_00144144 float
// GLOBAL DAT_00144148 float
// GLOBAL DAT_0014414c int *

undefined4 func_00144058(int param_1)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  fVar1 = DAT_00144144;
  iVar5 = DAT_00144140;
  fVar7 = *(float *)(param_1 + 0x41c) + DAT_0014413c;
  *(float *)(param_1 + 0x3d4) = fVar7;
  piVar2 = DAT_0014414c;
  uVar4 = *(uint *)(param_1 + 0x420);
  pfVar6 = (float *)(iVar5 + (uVar4 >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3d4) = fVar7 + (*pfVar6 + pfVar6[1] * fVar8 * fVar1) * DAT_00144148;
  *(uint *)(param_1 + 0x420) = uVar4 + *piVar2;
  iVar5 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x40c),0,0x100,0,0);
  if (iVar5 != 0) {
    cVar3 = *(char *)(param_1 + 0x4c4);
  }
  else {
    cVar3 = '\x01';
    *(undefined1 *)(param_1 + 0x4c4) = 1;
  }
  if (iVar5 == 0 || cVar3 == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x414) = 2;
  func_006576C4((undefined4 *)(param_1 + 0x424),5);
  func_004CF478(*(int *)(param_1 + 0x46c),0);
  iVar5 = *(int *)(param_1 + 0x46c);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar5 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  iVar5 = *(int *)(param_1 + 0x46c);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(param_1 + 0x448);
  *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(param_1 + 0x44c);
  *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(param_1 + 0x450);
  func_004CEAF0(*(int *)(param_1 + 0x46c));
  if (*(int *)(param_1 + 0x48c) == 0) {
    return 0;
  }
  return func_001512B4(*(int *)(param_1 + 0x48c),(float *)(param_1 + 0x3d0));
}

