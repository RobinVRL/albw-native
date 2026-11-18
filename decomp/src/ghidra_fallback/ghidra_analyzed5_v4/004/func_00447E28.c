#include "ghidra_types.h"

extern int func_00404F24(undefined4 *param_1,undefined4 *param_2);

// USA 00447E28 <- EU 00447E00 (Ghidra, non-matching)

void func_00447E28(int param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  uint unaff_r9;
  uint *in_r12;
  uint *puVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(undefined4 *)(albw_frame + 0x0))
  #define local_4c (*(uint *)(albw_frame + 0x4))
  #define local_48 (*(undefined1 *)(albw_frame + 0x8))
  #define local_47 (*(undefined1 *)(albw_frame + 0x9))
  #define local_44 (*(uint *)(albw_frame + 0xc))
  #define iStack_40 (*(int *)(albw_frame + 0x10))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define local_2c (*(int * *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  if (param_4 == 0) {
    iVar2 = *(int *)(param_1 + 0x234);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x238);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc4);
  }
  if ((iVar2 != 0 && iVar3 != 0) && (*(short *)(*(int *)(iVar3 + 0x30) + 0x28) != 0)) {
    local_4c = 0;
    uVar8 = 0;
    iStack_40 = 0;
    puVar6 = *(undefined4 **)(*(int *)(*(int *)(iVar3 + 0x30) + 0x24) + param_2 * 4);
    puVar7 = (uint *)*puVar6;
    puVar9 = puVar7 + puVar6[1];
    if (puVar7 == puVar9) {
      bVar1 = false;
      puVar4 = puVar7;
    }
    else {
      unaff_r9 = puVar7[1] & 0xffff;
      bVar1 = true;
      puVar4 = puVar7 + ((puVar7[1] << 4) >> 0x18) + 2;
      if (puVar9 <= puVar7 + ((puVar7[1] << 4) >> 0x18) + 2) {
        puVar4 = puVar9;
      }
      in_r12 = puVar7;
      if ((puVar4 != puVar9) && (((int)puVar4 - (int)puVar7) * 0x20000000 < 0)) {
        puVar4 = puVar4 + 1;
      }
    }
    if (bVar1) {
      do {
        if ((unaff_r9 & 0xffff) == 0x82) {
          uVar8 = *in_r12 & 0xffff;
          local_4c = *in_r12 >> 0x10;
        }
        else if ((unaff_r9 & 0xffff) == 0x85) {
          iStack_40 = *in_r12 << 3;
        }
        if (puVar4 == puVar9) {
          bVar1 = false;
          puVar5 = puVar4;
        }
        else {
          unaff_r9 = puVar4[1] & 0xffff;
          bVar1 = true;
          puVar5 = puVar4 + ((puVar4[1] << 4) >> 0x18) + 2;
          if (puVar9 <= puVar4 + ((puVar4[1] << 4) >> 0x18) + 2) {
            puVar5 = puVar9;
          }
          in_r12 = puVar4;
          if ((puVar5 != puVar9) && (((int)puVar5 - (int)puVar7) * 0x20000000 < 0)) {
            puVar5 = puVar5 + 1;
          }
        }
        puVar4 = puVar5;
      } while (bVar1);
      if (iStack_40 != 0) {
        switch(*(undefined1 *)(puVar6 + 6)) {
        case 0:
          local_48 = 9;
          break;
        case 1:
          local_48 = 6;
          break;
        case 2:
          local_48 = 7;
          break;
        case 3:
          local_48 = 5;
          break;
        case 4:
          local_48 = 8;
          break;
        case 5:
          local_48 = 3;
          break;
        case 6:
          local_48 = 4;
          break;
        case 7:
          local_48 = 0;
          break;
        case 8:
          local_48 = 1;
          break;
        case 9:
          local_48 = 2;
          break;
        case 10:
          local_48 = 0x12;
          break;
        default:
          local_48 = 0x13;
          break;
        case 0xc:
          local_48 = 10;
          break;
        case 0xd:
          local_48 = 0xb;
        }
        local_44 = local_4c | uVar8 << 0x10;
        local_4c = local_4c | uVar8 << 0x10;
        local_50 = 1;
        local_47 = 0;
        iStack_34 = param_1;
        iStack_30 = param_2;
        local_2c = param_3;
        iStack_28 = param_4;
        iVar2 = (**(code **)(*param_3 + 0x28))(param_3,0);
        func_00404F24(*(undefined4 **)(iVar2 + 0x7c),&local_50);
        *(byte *)(iVar2 + 0x9e) = *(byte *)(iVar2 + 0x9e) & 0xfb;
      }
    }
  }
  return;
}

