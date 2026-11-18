#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_001E0C5C(int param_1,int param_2);
extern int func_001E0F00(int param_1,uint param_2);
extern undefined4 DAT_001e1a80;
extern int DAT_001e1a84;
extern char s_Res_Temp_001e1a74[];
extern char s_cf_001e1a74[];

// USA 001E18A8 <- EU 001E18A8 (Ghidra, non-matching)
// GLOBAL DAT_001e1a80 undefined4
// GLOBAL DAT_001e1a84 int
// GLOBAL s_cf_001e1a74 string

void func_001E18A8(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  func_001E0F00(param_1,3);
  func_001E0C5C(param_1,3);
  uVar5 = DAT_001e1a80;
  puVar8 = (uint *)(param_1 + 0x1fa4);
  puVar7 = (undefined4 *)(param_1 + 0x1fa8);
  if (param_2 == 0) {
    iVar3 = 0;
    do {
      puVar6 = (undefined4 *)(param_1 + 0x10);
      if (iVar3 + 4U < 7) {
        puVar6 = puVar6 + (iVar3 + 4U) * 0xca;
      }
      puVar4 = (undefined4 *)(param_1 + 0x10);
      if (*puVar8 < 7) {
        puVar4 = puVar4 + *puVar8 * 0xca;
      }
      uVar5 = *puVar4;
      iVar3 = iVar3 + 1;
      *puVar6 = uVar5;
      puVar6[1] = uVar5;
      puVar6[2] = 0;
      puVar6[3] = 0;
    } while (iVar3 < 2);
  }
  else {
    local_2c = s_Res_Temp_001e1a74;
    local_30 = DAT_001e1a80;
    piVar1 = func_0010B954(0x50000,(int)&local_30,(int *)*puVar7,1,0);
    *(int **)(param_1 + 0x1300) = piVar1;
    *(undefined4 *)(param_1 + 0x130c) = 0;
    uVar2 = (**(code **)(*(int *)*puVar7 + 0x3c))((int *)*puVar7,0x80);
    iVar3 = 0;
    do {
      puVar6 = (undefined4 *)(param_1 + 0x10);
      if (iVar3 + 4U < 7) {
        puVar6 = puVar6 + (iVar3 + 4U) * 0xca;
      }
      local_2c = *(char **)(DAT_001e1a84 + iVar3 * 4);
      local_30 = uVar5;
      piVar1 = func_0010B954((uVar2 >> 1) - 0x80,(int)&local_30,(int *)*puVar7,1,0);
      *puVar6 = piVar1;
      puVar6[1] = piVar1;
      puVar6[2] = 0;
      iVar3 = iVar3 + 1;
      puVar6[3] = 0;
    } while (iVar3 < 2);
  }
  iVar3 = -*(int *)(param_1 + 0x1fa0);
  uVar2 = iVar3 + 5;
  *(int *)(param_1 + 0x1fa0) = iVar3 + 1;
  puVar6 = (undefined4 *)(param_1 + 0x10);
  *puVar8 = uVar2;
  if (uVar2 < 7) {
    puVar6 = puVar6 + uVar2 * 0xca;
  }
  *puVar7 = *puVar6;
  iVar3 = param_1 + 0x10;
  if (*puVar8 < 7) {
    iVar3 = iVar3 + *puVar8 * 0x328;
  }
  *(undefined4 **)(param_1 + 0x1fac) = (undefined4 *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  return;
}

