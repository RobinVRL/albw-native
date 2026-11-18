#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00110848(int param_1);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_003529C0(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00539A74(int param_1,int param_2);
extern undefined4 DAT_004d3cdc;
extern int DAT_004d3ce0;
extern undefined DAT_004d3ce4;

// USA 004D3AF4 <- EU 004D3ACC (Ghidra, non-matching)
// GLOBAL DAT_004d3cdc undefined4
// GLOBAL DAT_004d3ce0 int
// GLOBAL DAT_004d3ce4 undefined

void func_004D3AF4(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x4))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(uint * *)(albw_frame + 0x10))
  #define auStack_58 ((undefined4 *)(albw_frame + 0x18))
  #define local_4c (*(int *)(albw_frame + 0x24))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define local_2c (*(int * *)(albw_frame + 0x44))
  iVar1 = DAT_004d3ce0;
  iVar7 = 0;
  uVar6 = 0;
  iVar10 = *(int *)(param_1 + 0x624);
  local_2c = (int *)(*(int *)(param_1 + 0x2d0) + 0xc);
  if (0 < *(int *)(param_1 + 0x620)) {
    local_64 = DAT_004d3cdc;
    do {
      puVar3 = (undefined4 *)func_0010BAB4(0x48);
      piVar9 = (int *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        func_00110490(puVar3,0x48);
        *puVar3 = local_64;
        puVar3 = func_003529C0(puVar3 + 1);
        piVar9 = puVar3 + -1;
        puVar3[0x10] = 0;
        *piVar9 = iVar1;
      }
      piVar8 = local_2c;
      (**(code **)(*local_2c + 8))(local_2c);
      func_003529A0(auStack_58,piVar8[1],piVar9);
      if (uVar6 < *(uint *)(param_1 + 0x478)) {
        local_4c = *(int *)(*(int *)(param_1 + 0x480) + uVar6 * 4);
      }
      else {
        local_4c = 0;
      }
      local_4c = local_4c + 4;
      if (uVar6 < *(uint *)(param_1 + 0x478)) {
        local_48 = *(int *)(*(int *)(param_1 + 0x480) + uVar6 * 4);
      }
      else {
        local_48 = 0;
      }
      local_48 = local_48 + 0x10;
      func_002C41BC(piVar9,auStack_58,0);
      if (uVar6 < *(uint *)(param_1 + 0x478)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x480) + uVar6 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (*(short *)(iVar4 + 0x32) == 0) {
LAB_004d3c04:
        iVar4 = iVar10 + iVar7 * 0x20;
        piVar8 = (int *)(iVar4 + 0x18);
        local_60 = (uint *)&DAT_004d3ce4;
        if (piVar9[9] == 0) {
          *piVar8 = 0;
          *(undefined4 *)(iVar4 + 0x1c) = 0;
        }
        else {
          iVar5 = *piVar8;
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) == *(int *)(iVar4 + 0x1c))) {
            func_00110848(iVar5);
          }
          func_004A1B9C(&local_70,piVar9[9],local_60);
          *piVar8 = local_70;
          *(undefined4 *)(iVar4 + 0x1c) = uStack_6c;
        }
        *(undefined1 *)(iVar10 + iVar7 * 0x20) = 0;
      }
      else {
        if (uVar6 < *(uint *)(param_1 + 0x478)) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x480) + uVar6 * 4);
        }
        else {
          iVar4 = 0;
        }
        bVar2 = func_00539A74(iVar4,0);
        if (bVar2) goto LAB_004d3c04;
        *(undefined1 *)(iVar10 + iVar7 * 0x20) = 1;
        *(undefined1 *)(*(int *)(iVar10 + iVar7 * 0x20 + 4) + 0x61) = 0;
        *(undefined1 *)(*(int *)(iVar10 + iVar7 * 0x20 + 0x10) + 0x44) = 0;
      }
      piVar8 = (int *)(param_1 + 0x610);
      if (*piVar8 < *(int *)(param_1 + 0x614)) {
        *(int **)(*(int *)(param_1 + 0x618) + *piVar8 * 4) = piVar9;
        *piVar8 = *piVar8 + 1;
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x620));
  }
  return;
}

