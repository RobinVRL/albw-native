#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0012FC20(int param_1,int param_2,uint param_3);
extern int func_00130334(int param_1,uint param_2);
extern int func_001309A4(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00131244(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_001329B4(int param_1);
extern int func_002C32C8(int param_1,int param_2);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_0057D5C4(int *param_1);
extern int *DAT_003c1e6c;
extern int DAT_003c1e70;
extern int DAT_003c1e74;
extern int *DAT_003c1e78;

// USA 003C1D1C <- EU 003C1CF8 (Ghidra, non-matching)
// GLOBAL DAT_003c1e6c int *
// GLOBAL DAT_003c1e70 int
// GLOBAL DAT_003c1e74 int
// GLOBAL DAT_003c1e78 int *

undefined4 func_003C1D1C(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_r3;
  int iVar5;
  uint *puVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  piVar3 = DAT_003c1e6c;
  if (*(char *)(param_1 + 0x18e) == '\0') {
    return 0;
  }
  local_28 = in_r3;
  uVar1 = func_001329B4(*DAT_003c1e6c);
  iVar5 = *piVar3;
  func_0012FC20(iVar5,(uint)(*(char *)(param_1 + 0x18c) == '\0'),0);
  iVar2 = *(int *)(DAT_003c1e70 + iVar5);
  piVar3 = func_0057D5C4(*(int **)(DAT_003c1e74 + iVar5));
  puVar6 = (uint *)*param_2;
  func_0010E3C4(puVar6,*(uint **)(param_1 + 0x34),*(int *)(param_1 + 0x2c) << 2);
  puVar6 = puVar6 + *(int *)(param_1 + 0x2c);
  *param_2 = (int)puVar6;
  iVar7 = *(int *)(*(int *)(param_1 + 0x98) + 0x18);
  iVar4 = *(int *)(*(int *)(param_1 + 0x98) + 0x1c);
  if (iVar7 != 0) {
    puVar6 = func_003CC1E4(puVar6,((int)puVar6 - param_2[2] & 0xfffffffcU) + 0x18);
    *param_2 = (int)puVar6;
    puVar6 = func_003CC230(puVar6,&local_28,iVar7,iVar4 << 2);
    *param_2 = (int)puVar6;
    if ((uint *)param_2[3] != (uint *)0x0) {
      *(uint *)param_2[3] = (uint)((int)puVar6 - param_2[2]) >> 3;
    }
    param_2[2] = *param_2;
    param_2[3] = local_28;
    if (param_2[4] == 0) {
      param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
    }
  }
  puVar6 = func_00131244(iVar5,(uint *)*param_2,(undefined4 *)(iVar2 + 4),piVar3);
  *param_2 = (int)puVar6;
  func_00130334(iVar5,0);
  func_001309A4(iVar5,param_2,uVar1,2);
  *(undefined1 *)(param_1 + 0x18e) = 0;
  return func_002C32C8(*DAT_003c1e78,param_1);
}

