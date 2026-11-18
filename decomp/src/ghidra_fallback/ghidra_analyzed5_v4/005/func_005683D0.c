#include "ghidra_types.h"

extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern uint DAT_00568768;
extern undefined4 DAT_0056876c;

// USA 005683D0 <- EU 005683A8 (Ghidra, non-matching)
// GLOBAL DAT_00568768 uint
// GLOBAL DAT_0056876c undefined4

undefined4 func_005683D0(int param_1,int *param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  byte *pbVar11;
  uint *unaff_r11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  _Alignas(8) unsigned char albw_frame[0x7e0];
  #define local_7d8 (*(uint *)(albw_frame + 0x8))
  #define local_7d4 (*(uint *)(albw_frame + 0xc))
  #define local_7d0 (*(uint *)(albw_frame + 0x10))
  #define local_7cc (*(uint *)(albw_frame + 0x14))
  #define local_418 ((uint *)(albw_frame + 0x3c8))
  #define local_408 ((uint *)(albw_frame + 0x3d8))
  #define local_4c (*(int *)(albw_frame + 0x794))
  #define local_48 (*(byte * *)(albw_frame + 0x798))
  #define iStack_38 (*(int *)(albw_frame + 0x7a8))
  #define piStack_34 (*(int * *)(albw_frame + 0x7ac))
  #define iStack_30 (*(int *)(albw_frame + 0x7b0))
  #define local_2c (*(uint *)(albw_frame + 0x7b4))
  iStack_38 = param_1;
  piStack_34 = param_2;
  iStack_30 = param_3;
  local_2c = param_4;
  func_003CC090(param_2,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  pbVar11 = *(byte **)(param_1 + 0x10);
  local_48 = pbVar11 + *(int *)(param_1 + 0x14) * 0x34;
  if (local_48 != pbVar11) {
    unaff_r11 = &local_7d8;
  }
  if (local_48 != pbVar11) {
    do {
      uVar2 = DAT_00568768;
      if ((*pbVar11 & 1) == 0) {
        if ((*pbVar11 & 2) == 0) {
          puVar3 = (uint *)*param_2;
          iVar8 = *(int *)(param_3 + 0x14);
          uVar1 = *(ushort *)(pbVar11 + 4);
          *puVar3 = *(byte *)(local_2c + 2) | 0x80000000;
          puVar3[1] = uVar2;
          func_001150CC(puVar3 + 2,(undefined4 *)(iVar8 + (uint)uVar1 * 0x30),DAT_0056876c);
          puVar3 = puVar3 + 0x10;
          goto LAB_005686a8;
        }
        iVar8 = 0;
        if (*(short *)(pbVar11 + 2) != 0) {
          do {
            iVar10 = iVar8 + 1;
            puVar3 = (uint *)(*(int *)(param_3 + 0x14) +
                             (uint)*(ushort *)(pbVar11 + iVar8 * 2 + 4) * 0x30);
            uVar13 = puVar3[1];
            uVar5 = puVar3[2];
            uVar14 = puVar3[3];
            uVar15 = puVar3[4];
            uVar16 = puVar3[5];
            uVar17 = puVar3[6];
            uVar18 = puVar3[7];
            local_418[iVar8 * 0xc] = *puVar3;
            local_418[iVar8 * 0xc + 1] = uVar13;
            local_418[iVar8 * 0xc + 2] = uVar5;
            local_418[iVar8 * 0xc + 3] = uVar14;
            local_418[iVar8 * 0xc + 4] = uVar15;
            local_418[iVar8 * 0xc + 5] = uVar16;
            local_418[iVar8 * 0xc + 6] = uVar17;
            local_418[iVar8 * 0xc + 7] = uVar18;
            uVar5 = puVar3[9];
            uVar14 = puVar3[10];
            uVar13 = puVar3[0xb];
            local_418[iVar8 * 0xc + 8] = puVar3[8];
            local_418[iVar8 * 0xc + 0xb] = uVar13;
            local_418[iVar8 * 0xc + 9] = uVar5;
            local_418[iVar8 * 0xc + 10] = uVar14;
            iVar8 = iVar10;
          } while (iVar10 < (int)(uint)*(ushort *)(pbVar11 + 2));
        }
        uVar13 = (uint)*(ushort *)(pbVar11 + 2);
        puVar3 = (uint *)*param_2;
        *puVar3 = *(byte *)(local_2c + 2) | 0x80000000;
        puVar3[1] = uVar2;
        iVar8 = uVar13 * 3 + -1;
        puVar3[2] = local_418[3];
        puVar3[3] = uVar2 | (int)uVar2 >> 0x13 | uVar13 * 0xc00000 - 0x100000;
        puVar3[4] = local_418[2];
        puVar3[5] = local_418[1];
        puVar4 = puVar3 + 7;
        puVar3[6] = local_418[0];
        if (0 < iVar8) {
          puVar7 = local_418 + 7;
          puVar12 = local_418 + 6;
          puVar9 = local_418 + 5;
          puVar3 = local_418;
          puVar6 = puVar4;
          do {
            puVar3 = puVar3 + 4;
            iVar8 = iVar8 + -1;
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 4;
            puVar6[1] = *puVar12;
            puVar12 = puVar12 + 4;
            puVar6[2] = *puVar9;
            puVar9 = puVar9 + 4;
            puVar6[3] = *puVar3;
            puVar6 = puVar6 + 4;
          } while (iVar8 != 0);
          puVar4 = puVar4 + uVar13 * 0xc + -4;
        }
        *puVar4 = 0;
        *param_2 = (int)(puVar4 + 1);
      }
      else {
        iVar8 = 0;
        uVar2 = 0;
        if (*(short *)(pbVar11 + 2) != 0) {
          do {
            func_00114E74((float *)(unaff_r11 + iVar8 * 0xc),
                          (float *)(*(int *)(param_3 + 0x14) +
                                   (uint)*(ushort *)(pbVar11 + iVar8 * 2 + 4) * 0x30),
                          (float *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x70) +
                                    (uint)*(ushort *)(pbVar11 + iVar8 * 2 + 4) * 100 + 0x2c));
            uVar2 = (uint)*(ushort *)(pbVar11 + 2);
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)uVar2);
        }
        uVar13 = DAT_00568768;
        puVar3 = (uint *)*param_2;
        uVar5 = DAT_00568768 | (int)DAT_00568768 >> 0x13;
        *puVar3 = *(byte *)(local_2c + 2) | 0x80000000;
        iVar8 = uVar2 * 3 + -1;
        puVar3[1] = uVar13;
        puVar3[2] = local_7cc;
        puVar3[3] = uVar5 | uVar2 * 0xc00000 - 0x100000;
        puVar3[4] = local_7d0;
        puVar3[5] = local_7d4;
        puVar4 = puVar3 + 7;
        puVar3[6] = local_7d8;
        if (0 < iVar8) {
          puVar7 = unaff_r11 + 7;
          puVar12 = unaff_r11 + 6;
          puVar9 = unaff_r11 + 5;
          puVar6 = puVar4;
          puVar3 = unaff_r11;
          do {
            puVar3 = puVar3 + 4;
            iVar8 = iVar8 + -1;
            *puVar6 = *puVar7;
            puVar7 = puVar7 + 4;
            puVar6[1] = *puVar12;
            puVar12 = puVar12 + 4;
            puVar6[2] = *puVar9;
            puVar9 = puVar9 + 4;
            puVar6[3] = *puVar3;
            puVar6 = puVar6 + 4;
          } while (iVar8 != 0);
          puVar4 = puVar4 + uVar2 * 0xc + -4;
        }
        puVar3 = puVar4 + 1;
        *puVar4 = 0;
LAB_005686a8:
        *param_2 = (int)puVar3;
      }
      iVar8 = *(int *)(pbVar11 + 0x30);
      iVar10 = *(int *)(pbVar11 + 0x2c);
      if (iVar10 != 0) {
        puVar3 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
        *param_2 = (int)puVar3;
        puVar3 = func_003CC230(puVar3,&local_4c,iVar10,iVar8 << 2);
        *param_2 = (int)puVar3;
        if ((uint *)param_2[3] != (uint *)0x0) {
          *(uint *)param_2[3] = (uint)((int)puVar3 - param_2[2]) >> 3;
        }
        param_2[2] = *param_2;
        param_2[3] = local_4c;
        if (param_2[4] == 0) {
          param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
        }
      }
      pbVar11 = pbVar11 + 0x34;
    } while (local_48 != pbVar11);
  }
  return func_003CC090(param_2,*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
}

