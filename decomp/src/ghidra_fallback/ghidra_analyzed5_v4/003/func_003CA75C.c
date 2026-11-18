#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern uint DAT_003cb0c8;
extern undefined4 DAT_003cb0cc;
extern undefined4 DAT_003cb0d0;
extern undefined4 DAT_003cb0d4;
extern int DAT_003cb0d8;
extern int DAT_003cb0dc;
extern undefined4 DAT_003cb0e0;
extern undefined4 DAT_003cb0e4;
extern undefined4 DAT_003cb0e8;
extern uint DAT_003cb0ec;
extern int DAT_003cb0f0;
extern uint DAT_003cb0f4;
extern uint DAT_003cb0f8;
extern uint DAT_003cb0fc;
extern undefined4 DAT_003cb100;
extern undefined4 DAT_003cb104;
extern uint DAT_003cb108;
extern uint DAT_003cb10c;

// USA 003CA75C <- EU 003CA738 (Ghidra, non-matching)
// GLOBAL DAT_003cb0c8 uint
// GLOBAL DAT_003cb0cc undefined4
// GLOBAL DAT_003cb0d0 undefined4
// GLOBAL DAT_003cb0d4 undefined4
// GLOBAL DAT_003cb0d8 int
// GLOBAL DAT_003cb0dc int
// GLOBAL DAT_003cb0e0 undefined4
// GLOBAL DAT_003cb0e4 undefined4
// GLOBAL DAT_003cb0e8 undefined4
// GLOBAL DAT_003cb0ec uint
// GLOBAL DAT_003cb0f0 int
// GLOBAL DAT_003cb0f4 uint
// GLOBAL DAT_003cb0f8 uint
// GLOBAL DAT_003cb0fc uint
// GLOBAL DAT_003cb100 undefined4
// GLOBAL DAT_003cb104 undefined4
// GLOBAL DAT_003cb108 uint
// GLOBAL DAT_003cb10c uint

uint * func_003CA75C(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  undefined2 *puVar22;
  ushort *puVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  _Alignas(8) unsigned char albw_frame[0x2b0];
  #define auStack_2b0 ((undefined4 *)(albw_frame + 0x0))
  #define local_2a8 ((ushort *)(albw_frame + 0x8))
  #define local_298 (*(int *)(albw_frame + 0x18))
  #define local_294 (*(uint *)(albw_frame + 0x1c))
  #define local_290 ((uint *)(albw_frame + 0x20))
  #define local_244 (*(uint *)(albw_frame + 0x6c))
  #define local_a8 ((uint *)(albw_frame + 0x208))
  #define local_88 (*(ushort * *)(albw_frame + 0x228))
  #define local_80 (*(int *)(albw_frame + 0x230))
  #define local_7c (*(int *)(albw_frame + 0x234))
  #define local_74 (*(ushort * *)(albw_frame + 0x23c))
  #define local_70 (*(uint *)(albw_frame + 0x240))
  #define local_68 (*(int *)(albw_frame + 0x248))
  #define local_60 (*(uint *)(albw_frame + 0x250))
  #define local_5c (*(uint *)(albw_frame + 0x254))
  #define local_58 (*(uint *)(albw_frame + 0x258))
  #define local_54 (*(int *)(albw_frame + 0x25c))
  #define local_34 (*(int *)(albw_frame + 0x27c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x280))
  #define iStack_2c (*(int *)(albw_frame + 0x284))
  #define local_28 (*(int *)(albw_frame + 0x288))
  local_28 = param_4;
  iStack_2c = param_3;
  local_30 = param_2;
  local_34 = param_1;
  bVar26 = -1 < *(int *)(param_1 + 4);
  local_5c = 0;
  iVar15 = param_3;
  if (bVar26) {
    local_5c = 1;
    iVar15 = param_4;
  }
  local_5c = (uint)bVar26;
  local_a8[0] = 0;
  uVar20 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  local_54 = param_1 + param_3 * 4;
  local_7c = *(int *)(param_1 + iVar15 * 4 + 0x10);
  if ((local_5c == 0) || (*(char *)(local_7c + 7) == '\0')) {
    puVar13 = (undefined4 *)(*(int *)(local_7c + 0x28) + local_7c);
    if (*(uint *)(local_7c + 0x2c) != 0) {
      puVar21 = puVar13 + -2;
      puVar9 = (ushort *)auStack_2b0;
      if ((*(uint *)(local_7c + 0x2c) & 1) != 0) {
        func_0010BB00((undefined4 *)local_2a8,puVar13);
        puVar21 = puVar13;
        puVar9 = local_2a8;
      }
      for (uVar12 = *(uint *)(local_7c + 0x2c) >> 1; uVar12 != 0; uVar12 = uVar12 - 1) {
        func_0010BB00((undefined4 *)((int)puVar9 + 8),puVar21 + 2);
        puVar9 = (ushort *)((int)puVar9 + 0x10);
        puVar21 = puVar21 + 4;
        func_0010BB00((undefined4 *)puVar9,puVar21);
      }
    }
    local_80 = *(int *)(local_7c + 0x2c);
  }
  else {
    uVar24 = 0;
    uVar25 = 0;
    local_68 = *(int *)(local_54 + 0x10);
    local_74 = (ushort *)(local_7c + *(int *)(local_7c + 0x28));
    local_88 = (ushort *)(local_68 + *(int *)(local_68 + 0x28));
    uVar12 = 0;
    if (*(int *)(local_7c + 0x2c) != 0) {
      do {
        puVar9 = local_74 + uVar12 * 4;
        if (((*puVar9 < 9) && (*puVar9 != 7)) && (iVar15 = *(int *)(local_68 + 0x2c), iVar15 != 0))
        {
          uVar17 = 0;
          puVar23 = local_88 + uVar12 * 4;
          local_70 = 1 << (uVar12 & 0xff);
          puVar8 = local_88;
          do {
            iVar14 = local_80;
            if (((*puVar23 < 9) && (*puVar23 != 7)) && (*puVar9 == *puVar8)) {
              uVar25 = uVar25 | 1 << (uVar17 & 0xff);
              local_2a8[local_80 * 4] = *puVar9;
              local_2a8[iVar14 * 4 + 1] = (ushort)iVar14;
              uVar24 = uVar24 | local_70;
              local_80 = local_80 + 1;
              local_2a8[iVar14 * 4 + 2] = puVar9[2];
            }
            iVar15 = iVar15 + -1;
            puVar8 = puVar8 + 4;
            uVar17 = uVar17 + 1;
          } while (iVar15 != 0);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(local_7c + 0x2c));
    }
    iVar15 = *(int *)(local_7c + 0x2c);
    if (iVar15 != 0) {
      uVar12 = 0;
      puVar8 = local_74 + 2;
      puVar9 = local_74;
      do {
        iVar14 = local_80;
        if ((((uVar24 & 1 << (uVar12 & 0xff)) == 0) && (uVar1 = *puVar9, uVar1 < 9)) && (uVar1 != 7)
           ) {
          iVar4 = local_80 * 4;
          local_80 = local_80 + 1;
          local_2a8[iVar4] = uVar1;
          local_2a8[iVar14 * 4 + 1] = (ushort)iVar14;
          local_2a8[iVar14 * 4 + 2] = *puVar8;
        }
        iVar15 = iVar15 + -1;
        puVar9 = puVar9 + 4;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 + 1;
      } while (iVar15 != 0);
    }
    iVar15 = *(int *)(local_68 + 0x2c);
    if (iVar15 != 0) {
      uVar12 = 0;
      puVar8 = local_88 + 2;
      puVar9 = local_88;
      do {
        iVar14 = local_80;
        if ((((uVar25 & 1 << (uVar12 & 0xff)) == 0) && (uVar1 = *puVar9, uVar1 < 9)) && (uVar1 != 7)
           ) {
          iVar4 = local_80 * 4;
          local_80 = local_80 + 1;
          local_2a8[iVar4] = uVar1;
          local_2a8[iVar14 * 4 + 1] = (ushort)iVar14;
          local_2a8[iVar14 * 4 + 2] = *puVar8;
        }
        iVar15 = iVar15 + -1;
        puVar9 = puVar9 + 4;
        puVar8 = puVar8 + 4;
        uVar12 = uVar12 + 1;
      } while (iVar15 != 0);
    }
  }
  uVar7 = DAT_003cb104;
  uVar5 = DAT_003cb100;
  uVar12 = 0;
  do {
    iVar15 = 0;
    local_a8[uVar12 + 1] = DAT_003cb0c8;
    if (0 < local_80) {
      do {
        uVar1 = local_2a8[iVar15 * 4 + 2];
        uVar2 = local_2a8[iVar15 * 4];
        uVar3 = local_2a8[iVar15 * 4 + 1];
        uVar24 = 0;
        for (uVar25 = 0; (uVar3 == uVar12 && ((int)uVar25 < 4)); uVar25 = uVar25 + 1) {
          uVar17 = uVar24;
          if (((uint)uVar1 & 1 << (uVar25 & 0xff)) == 0) goto LAB_003cab68;
          uVar18 = 0x1f;
          switch(uVar2) {
          case 0:
            uVar17 = uVar24 + 1;
            uVar18 = uVar24;
            if (uVar17 == 2) {
              uVar20 = uVar20 | 1;
            }
            break;
          case 1:
            uVar20 = uVar20 | 0x1000000;
            uVar18 = uVar24 + 4;
            goto LAB_003caacc;
          case 2:
            uVar20 = uVar20 | 2;
            uVar18 = uVar24 + 8;
LAB_003caacc:
            uVar17 = uVar24 + 1;
            break;
          case 3:
            if (uVar24 < 2) {
              uVar18 = uVar24 + 0xc;
              uVar17 = uVar24 + 1;
            }
            uVar20 = uVar20 | 0x100;
            local_60 = 1;
            break;
          case 4:
            uVar20 = uVar20 | 0x10000;
            local_60 = 1;
            uVar18 = 0x10;
            break;
          case 5:
            if (uVar24 < 2) {
              uVar18 = uVar24 + 0xe;
              uVar24 = uVar24 + 1;
            }
            uVar20 = uVar20 | 0x200;
            local_60 = 1;
            uVar17 = uVar24;
            break;
          case 6:
            if (uVar24 < 2) {
              uVar18 = uVar24 + 0x16;
              uVar24 = uVar24 + 1;
            }
            uVar20 = uVar20 | 0x400;
            local_60 = 1;
            uVar17 = uVar24;
            break;
          case 8:
            if (uVar24 < 3) {
              uVar18 = uVar24 + 0x12;
              uVar24 = uVar24 + 1;
            }
            uVar20 = uVar20 | 0x1000000;
            uVar17 = uVar24;
          }
          local_a8[uVar12 + 1] =
               uVar18 << (uVar25 << 3 & 0xff) |
               local_a8[uVar12 + 1] & ~(0xff << (uVar25 << 3 & 0xff));
LAB_003cab68:
          uVar24 = uVar17;
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < local_80);
      if (local_a8[uVar12 + 1] != DAT_003cb0c8) {
        local_a8[0] = local_a8[0] + 1;
        local_58 = local_58 | 1 << (uVar12 & 0xff);
      }
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 7);
  if (local_5c == 0) {
    *local_30 = 0;
    iVar15 = DAT_003cb0dc;
    uVar6 = DAT_003cb0d4;
    local_30[1] = uVar5;
    local_30[2] = 0;
    local_30[3] = uVar7;
    local_30[4] = 0xa0000000;
    local_30[5] = uVar6;
    local_30[6] = *(uint *)(*(int *)(local_54 + 0x10) + 8) | 0x7fff0000;
    local_30[7] = iVar15;
    local_30[8] = local_58;
    local_30[9] = iVar15 + 3;
    local_30[10] = local_a8[0] - 1;
    local_30[0xb] = iVar15 + -0x69;
    local_30[0xc] = 0;
    local_30[0xd] = iVar15 + -0x68;
    local_30[0xe] = local_a8[0] - 1;
    local_30[0xf] = iVar15 + -0x70;
    puVar10 = local_30 + 0xf;
  }
  else {
    uVar12 = 0;
    iVar15 = *(int *)(local_54 + 0x10);
    local_298 = 0;
    local_244 = 0;
    iVar14 = *(int *)(iVar15 + 0x28);
    local_294 = *(uint *)(iVar15 + 0x2c);
    do {
      uVar24 = 0;
      local_290[uVar12] = DAT_003cb0c8;
      if (local_294 != 0) {
        do {
          puVar22 = (undefined2 *)(iVar14 + iVar15 + uVar24 * 8);
          uVar1 = puVar22[1];
          uVar25 = 0;
          for (uVar17 = 0; (uVar1 == uVar12 && ((int)uVar17 < 4)); uVar17 = uVar17 + 1) {
            uVar18 = uVar25;
            if (((uint)(ushort)puVar22[2] & 1 << (uVar17 & 0xff)) == 0) goto LAB_003cacf4;
            uVar16 = 0x1f;
            switch(*puVar22) {
            case 0:
              uVar18 = uVar25 + 1;
              uVar16 = uVar25;
              break;
            case 1:
              uVar16 = uVar25 + 4;
              goto LAB_003cac84;
            case 2:
              uVar16 = uVar25 + 8;
LAB_003cac84:
              uVar18 = uVar25 + 1;
              break;
            case 3:
              if (uVar25 < 2) {
                uVar16 = uVar25 + 0xc;
                goto LAB_003cac84;
              }
              break;
            case 4:
              uVar16 = 0x10;
              break;
            case 5:
              if (uVar25 < 2) {
                uVar16 = uVar25 + 0xe;
                goto LAB_003cac84;
              }
              break;
            case 6:
              if (uVar25 < 2) {
                uVar16 = uVar25 + 0x16;
                goto LAB_003cac84;
              }
              break;
            case 8:
              if (uVar25 < 3) {
                uVar16 = uVar25 + 0x12;
                goto LAB_003cac84;
              }
              break;
            case 9:
              uVar16 = 0xff;
            }
            local_290[uVar12] =
                 uVar16 << (uVar17 << 3 & 0xff) |
                 local_290[uVar12] & ~(0xff << (uVar17 << 3 & 0xff));
LAB_003cacf4:
            uVar25 = uVar18;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < local_294);
        if (local_290[uVar12] != DAT_003cb0c8) {
          local_298 = local_298 + 1;
          local_244 = local_244 | 1 << (uVar12 & 0xff);
        }
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x10);
    local_34 = local_34 + local_28 * 4;
    uVar12 = (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x14);
    if (uVar12 == 1) {
      *local_30 = 0x80000000;
    }
    else {
      *local_30 = 0;
    }
    local_30[1] = DAT_003cb0cc;
    uVar5 = DAT_003cb0d0;
    local_30[2] = 0;
    local_30[3] = uVar5;
    uVar5 = DAT_003cb0d4;
    if (uVar12 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0x100;
    }
    uVar25 = local_298 - 1;
    local_30[4] = uVar24 | uVar25 | 0x8000000;
    local_30[5] = uVar5;
    iVar15 = DAT_003cb0d8;
    local_30[6] = *(uint *)(*(int *)(local_34 + 0x10) + 8) | 0x7fff0000;
    local_30[7] = iVar15;
    local_30[8] = local_58;
    local_30[9] = iVar15 + 3;
    iVar15 = DAT_003cb0dc;
    local_30[10] = *(uint *)(*(int *)(local_54 + 0x10) + 8) | 0x7fff0000;
    local_30[0xb] = iVar15;
    local_30[0xc] = local_244;
    uVar5 = DAT_003cb0e0;
    local_30[0xd] = iVar15 + 3;
    local_30[0xe] = uVar25;
    local_30[0xf] = iVar15 + -0x69;
    local_30[0x10] = uVar5;
    uVar5 = DAT_003cb0e4;
    local_30[0x11] = iVar15 + -0x2f;
    local_30[0x12] = uVar5;
    puVar10 = local_30 + 0x14;
    local_30[0x13] = iVar15 + -0x2e;
    uVar5 = DAT_003cb0e8;
    if (uVar12 == 1) {
      uVar24 = (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x16);
      if (uVar24 != 0) {
        *puVar10 = uVar24 - 1;
        puVar10 = local_30 + 0x16;
        local_30[0x15] = uVar5;
      }
    }
    else if (uVar12 == 2) {
      uVar12 = DAT_003cb0ec | (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x15) << 0x10 |
               DAT_003cb0f0 + local_298 * 0x1000 |
               (uint)*(byte *)(*(int *)(local_34 + 0x10) + 0x17) * 0x100 - 0x100;
    }
    *puVar10 = uVar12;
    uVar12 = DAT_003cb0f4;
    puVar10[1] = DAT_003cb0f4;
    puVar10[2] = uVar25;
    puVar10[3] = uVar12 - 8;
    puVar10 = puVar10 + 3;
  }
  uVar24 = DAT_003cb0fc;
  uVar12 = DAT_003cb0f8;
  puVar10[1] = local_a8[0] - 1;
  iVar15 = 0;
  puVar10[2] = uVar12;
  iVar14 = 3;
  puVar10[3] = local_a8[0];
  puVar10[4] = uVar24;
  uVar12 = DAT_003cb0c8;
  puVar10 = puVar10 + 5;
  puVar11 = local_a8;
  do {
    uVar24 = puVar11[2];
    if (local_a8[1] != uVar12) {
      uVar25 = iVar15 + 0x50;
      puVar19 = puVar10 + 1;
      *puVar10 = local_a8[1];
      iVar15 = iVar15 + 1;
      puVar10 = puVar10 + 2;
      *puVar19 = uVar25 | 0xf0000;
    }
    local_a8[1] = puVar11[3];
    if (uVar24 != uVar12) {
      uVar25 = iVar15 + 0x50;
      puVar19 = puVar10 + 1;
      *puVar10 = uVar24;
      iVar15 = iVar15 + 1;
      puVar10 = puVar10 + 2;
      *puVar19 = uVar25 | 0xf0000;
    }
    iVar14 = iVar14 + -1;
    puVar11 = puVar11 + 2;
  } while (iVar14 != 0);
  if (local_a8[7] != uVar12) {
    uVar12 = iVar15 + 0x50;
    puVar11 = puVar10 + 1;
    *puVar10 = local_a8[7];
    iVar15 = iVar15 + 1;
    puVar10 = puVar10 + 2;
    *puVar11 = uVar12 | 0xf0000;
  }
  uVar12 = 7 - iVar15;
  if (0 < (int)uVar12) {
    bVar26 = (uVar12 & 1) != 0;
    puVar11 = puVar10 + -2;
    puVar19 = local_a8 + iVar15;
    if (bVar26) {
      *puVar10 = local_a8[iVar15 + 1];
      puVar10[1] = iVar15 + 0x50U | 0xf0000;
      puVar11 = puVar10;
      puVar19 = local_a8 + iVar15 + 1;
    }
    uVar24 = (uint)bVar26;
    for (iVar14 = (int)uVar12 >> 1; iVar14 != 0; iVar14 = iVar14 + -1) {
      puVar11[2] = puVar19[1];
      puVar11[3] = iVar15 + uVar24 + 0x50 | 0xf0000;
      puVar19 = puVar19 + 2;
      puVar11[4] = *puVar19;
      puVar11[5] = iVar15 + uVar24 + 0x51 | 0xf0000;
      uVar24 = uVar24 + 2;
      puVar11 = puVar11 + 4;
    }
    puVar10 = puVar10 + iVar15 * -2 + 0xe;
  }
  uVar12 = DAT_003cb108;
  *puVar10 = local_60;
  puVar10[1] = uVar12;
  puVar10[2] = uVar20;
  puVar11 = puVar10 + 4;
  puVar10[3] = uVar12 | (int)uVar12 >> 0x10;
  uVar20 = DAT_003cb10c;
  if (local_5c != 0) {
    *puVar11 = 0;
    puVar10[5] = uVar20;
    puVar11 = puVar10 + 6;
  }
  return puVar11;
}

