#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00290208(int param_1);
extern int func_005137BC(int param_1);
extern int func_0051434C(int param_1);
extern int *DAT_003105b0;
extern uint *DAT_003105b4;
extern int DAT_003105b8;
extern undefined4 DAT_003105bc;
extern int *DAT_003105c0;
extern undefined4 *DAT_003105c4;
extern char s_SE_ShopManKinSta_VACUUM_003105e8[];
extern char s_SE_ShopManKinSta_VACUUM_PLAYER_003105c8[];

// USA 003103B4 <- EU 00310390 (Ghidra, non-matching)
// GLOBAL DAT_003105b0 int *
// GLOBAL DAT_003105b4 uint *
// GLOBAL DAT_003105b8 int
// GLOBAL DAT_003105bc undefined4
// GLOBAL DAT_003105c0 int *
// GLOBAL DAT_003105c4 undefined4 *
// GLOBAL s_SE_ShopManKinSta_VACUUM_003105e8 string
// GLOBAL s_SE_ShopManKinSta_VACUUM_PLAYER_003105c8 string

/* WARNING: Removing unreachable block (ram,0x0031048c) */

undefined4 func_003103B4(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  uVar4 = DAT_003105bc;
  iVar3 = DAT_003105b8;
  puVar2 = DAT_003105b4;
  piVar1 = DAT_003105b0;
  if ((char)param_1[0x2ba] != '\0') {
    (**(code **)(*param_1 + 0xac))(param_1,5,0);
    piVar5 = DAT_003105c0;
    param_1[0x2b1] = 0;
    func_00290208(*piVar5);
    iVar6 = *piVar1;
    puVar9 = *(undefined4 **)(iVar6 + 0x3dbc8);
    for (puVar7 = *(undefined4 **)(iVar6 + 0x3dbc0); puVar7 != puVar9; puVar7 = puVar7 + 1) {
      puVar8 = (undefined4 *)*puVar7;
      if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_003105b4), iVar6 != 0)) {
        *DAT_003105c4 = uVar4;
      }
      if ((puVar8 == (undefined4 *)0x0) ||
         (iVar6 = (**(code **)*puVar8)(puVar8,DAT_003105c4), iVar6 == 0)) {
        puVar8 = (undefined4 *)0x0;
      }
      if (puVar8 != (undefined4 *)0x0) {
        func_0051434C((int)puVar8);
      }
    }
    local_2c = s_SE_ShopManKinSta_VACUUM_PLAYER_003105c8;
    local_30 = iVar3;
    return func_00150A84(param_1,&local_30,0);
  }
  if (param_1[0x2b6] == 2) {
    (**(code **)(*param_1 + 0xac))(param_1,6,0);
  }
  else {
    (**(code **)(*param_1 + 0xac))(param_1,4);
  }
  iVar6 = *piVar1;
  puVar9 = *(undefined4 **)(iVar6 + 0x3dbc8);
  for (puVar7 = *(undefined4 **)(iVar6 + 0x3dbc0); puVar7 != puVar9; puVar7 = puVar7 + 1) {
    puVar8 = (undefined4 *)*puVar7;
    if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_003105b4), iVar6 != 0)) {
      *DAT_003105c4 = uVar4;
    }
    if ((puVar8 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar8)(puVar8,DAT_003105c4), iVar6 == 0)) {
      puVar8 = (undefined4 *)0x0;
    }
    if (puVar8 != (undefined4 *)0x0) {
      func_005137BC((int)puVar8);
    }
  }
  local_2c = s_SE_ShopManKinSta_VACUUM_003105e8;
  local_30 = iVar3;
  return func_00150A84(param_1,&local_30,0);
}

