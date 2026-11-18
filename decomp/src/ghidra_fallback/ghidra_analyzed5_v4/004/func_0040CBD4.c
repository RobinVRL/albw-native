#include "ghidra_types.h"


// USA 0040CBD4 <- EU 0040CBB4 (Ghidra, non-matching)

void func_0040CBD4(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((int *)(albw_frame + 0x8))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(int *)(albw_frame + 0x24))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define local_44 (*(int *)(albw_frame + 0x2c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define iStack_34 (*(int *)(albw_frame + 0x3c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x40))
  #define piStack_2c (*(int * *)(albw_frame + 0x44))
  #define local_28 (*(int *)(albw_frame + 0x48))
  local_28 = param_4;
  piStack_2c = param_3;
  uStack_30 = param_2;
  iStack_34 = param_1;
  if (*(char *)(param_1 + 0x10e) != '\0') {
    uVar14 = 0;
    uVar5 = 0;
    local_68[0] = *param_3;
    uVar6 = 0;
    uVar7 = 0;
    local_68[1] = param_3[1];
    uVar8 = 0;
    local_68[2] = param_3[2];
    local_68[3] = param_3[3];
    local_44 = 0;
    if (*(char *)(param_1 + 0x10d) != '\0') {
      do {
        local_4c = param_1 + local_44 * 4;
        local_50 = *(int *)(local_4c + 0x44);
        iVar9 = 0;
        iVar13 = *(int *)(local_4c + 0x54);
        uVar6 = *(uint *)(param_1 + 0xbc);
        uVar7 = *(uint *)(param_1 + 0xc0);
        uVar5 = *(uint *)(param_1 + 0xb0);
        uVar8 = *(uint *)(param_1 + 0xd0);
        uVar14 = *(uint *)(param_1 + 0xa8);
        iVar3 = *(int *)(local_4c + 0xd8);
        if (0 < param_4) {
          local_40 = param_1 + local_44 * 8;
          iVar1 = local_68[local_44];
          do {
            uVar12 = *(undefined4 *)(iVar1 + iVar9 * 4);
            iVar4 = *(int *)(param_1 + 0xe8);
            local_48 = *(int *)(local_50 + uVar14 * 4);
            *(undefined4 *)(local_50 + uVar14 * 4) = uVar12;
            iVar10 = *(int *)(iVar13 + uVar5 * 4);
            *(undefined4 *)(iVar13 + uVar5 * 4) = uVar12;
            local_48 = local_48 * iVar4;
            iVar2 = *(int *)(*(int *)(local_40 + 100) + uVar6 * 4);
            iVar4 = iVar2;
            if (iVar2 < 0) {
              iVar4 = -iVar2;
            }
            iVar4 = *(int *)(param_1 + 0xc4) * iVar4 >> 7;
            if (iVar2 < 0) {
              iVar4 = -iVar4;
            }
            *(int *)(*(int *)(local_40 + 100) + uVar6 * 4) = iVar4 + iVar10;
            iVar4 = *(int *)(*(int *)(local_40 + 0x68) + uVar7 * 4);
            if (iVar4 < 0) {
              iVar11 = -(*(int *)(param_1 + 200) * -iVar4 >> 7);
            }
            else {
              iVar11 = *(int *)(param_1 + 200) * iVar4 >> 7;
            }
            *(int *)(*(int *)(local_40 + 0x68) + uVar7 * 4) = iVar10 + iVar11;
            iVar15 = *(int *)(param_1 + 0xd4);
            uVar14 = uVar14 + 1;
            uVar5 = uVar5 + 1;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 1;
            iVar11 = *(int *)(*(int *)(local_4c + 0x84) + uVar8 * 4);
            iVar10 = iVar11;
            if (iVar11 < 0) {
              iVar10 = -iVar11;
            }
            iVar10 = iVar10 * iVar15 >> 7;
            if (iVar11 < 0) {
              iVar10 = -iVar10;
            }
            iVar10 = iVar10 + (iVar2 - iVar4);
            bVar16 = iVar10 < 0;
            *(int *)(*(int *)(local_4c + 0x84) + uVar8 * 4) = iVar10;
            if (bVar16) {
              iVar10 = -iVar10;
            }
            uVar8 = uVar8 + 1;
            iVar4 = iVar10 * iVar15 >> 7;
            if (bVar16) {
              iVar4 = -iVar4;
            }
            iVar3 = iVar3 * *(int *)(param_1 + 0xf4) + *(int *)(param_1 + 0xf0) * (iVar11 - iVar4)
                    >> 7;
            *(int *)(iVar1 + iVar9 * 4) = *(int *)(param_1 + 0xec) * iVar3 + local_48 >> 7;
            iVar9 = iVar9 + 1;
          } while (iVar9 < param_4);
        }
        *(int *)(local_4c + 0xd8) = iVar3;
        local_44 = local_44 + 1;
      } while (local_44 < (int)(uint)*(byte *)(param_1 + 0x10d));
    }
    if (uVar14 < *(uint *)(param_1 + 0xa4)) {
      *(uint *)(param_1 + 0xa8) = uVar14;
    }
    else {
      *(undefined4 *)(param_1 + 0xa8) = 0;
    }
    if (uVar5 < *(uint *)(param_1 + 0xac)) {
      *(uint *)(param_1 + 0xb0) = uVar5;
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (uVar6 < *(uint *)(param_1 + 0xb4)) {
      *(uint *)(param_1 + 0xbc) = uVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
    if (uVar7 < *(uint *)(param_1 + 0xb8)) {
      *(uint *)(param_1 + 0xc0) = uVar7;
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
    if (uVar8 < *(uint *)(param_1 + 0xcc)) {
      *(uint *)(param_1 + 0xd0) = uVar8;
    }
    else {
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
  return;
}

