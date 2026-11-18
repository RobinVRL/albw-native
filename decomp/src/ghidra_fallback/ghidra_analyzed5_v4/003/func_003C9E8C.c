#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003CA35C(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_003ca320;
extern undefined4 DAT_003ca324;
extern undefined4 *DAT_003ca328;
extern undefined4 DAT_003ca32c;
extern uint DAT_003ca330;
extern undefined4 *DAT_003ca334;

// USA 003C9E8C <- EU 003C9E68 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint *
// PARAM param_6 Stack[0x4]:4 undefined4 *
// GLOBAL DAT_003ca320 undefined4
// GLOBAL DAT_003ca324 undefined4
// GLOBAL DAT_003ca328 undefined4 *
// GLOBAL DAT_003ca32c undefined4
// GLOBAL DAT_003ca330 uint
// GLOBAL DAT_003ca334 undefined4 *

undefined4
func_003C9E8C(uint *param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,
             undefined4 *param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort *puVar7;
  byte bVar8;
  uint uVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint *local_60;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint local_4c;
  
  puVar18 = param_1;
  if (param_4 != (uint *)0x0) {
    puVar18 = param_5;
  }
  if (param_4 == (uint *)0x0 || puVar18 == (uint *)0x0) {
    uVar5 = func_003CA35C(DAT_003ca320,0);
    return uVar5;
  }
  if (param_2 != 0) {
    puVar18 = param_3;
  }
  if (((param_2 == 0 || puVar18 == (uint *)0x0) || ((param_2 & 7) != 0)) ||
     (((uint)param_3 & 7) != 0)) {
    uVar5 = func_003CA35C(DAT_003ca324,0);
    return uVar5;
  }
  bVar2 = false;
  switch((int)(uintptr_t)(param_1)) {
  case 0x64:
    uVar5 = 0;
    uVar15 = 0x20;
    goto LAB_003c9f34;
  case 0x65:
    uVar5 = 1;
    uVar15 = 0x18;
LAB_003c9f34:
    bVar2 = true;
    break;
  case 0x66:
    uVar5 = 2;
    goto LAB_003c9f68;
  case 0x67:
    uVar5 = 3;
    goto LAB_003c9f68;
  case 0x68:
    uVar5 = 4;
    goto LAB_003c9f68;
  case 0x69:
    uVar5 = 5;
    uVar15 = 0x10;
    bVar2 = true;
    break;
  case 0x6a:
    uVar5 = 7;
    goto LAB_003c9f7c;
  case 0x6b:
    uVar5 = 8;
LAB_003c9f7c:
    uVar15 = 8;
    break;
  case 0x6c:
    uVar5 = 9;
    uVar15 = 8;
    break;
  case 0x6d:
    uVar5 = 10;
    goto LAB_003c9f9c;
  case 0x6e:
    uVar5 = 0xb;
LAB_003c9f9c:
    uVar15 = 4;
    break;
  case 0x6f:
    uVar5 = 6;
LAB_003c9f68:
    uVar15 = 0x10;
    break;
  default:
    uVar5 = func_003CA35C(DAT_003ca32c,0);
    return uVar5;
  }
  local_4c = 0x13000;
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = uVar5;
  }
  uVar1 = uVar15 >> 3;
  uVar16 = param_2 * (int)param_3;
  local_60 = param_5;
  local_54 = (uint *)0x0;
  local_50 = (uint *)0x0;
  uVar6 = uVar16 * uVar1;
  if (param_4 == param_5) {
    bVar4 = true;
    if (((code *)*DAT_003ca328 == (code *)0x0) ||
       (local_60 = (uint *)(*(code *)*DAT_003ca328)(0x10000,0x100,0,uVar6), local_50 = local_60,
       local_60 == (uint *)0x0)) {
      local_4c = DAT_003ca330;
      goto LAB_003ca2c0;
    }
  }
  else {
    bVar4 = false;
  }
  local_58 = param_4;
  if (bVar2) {
    if (((code *)*DAT_003ca328 != (code *)0x0) &&
       (local_58 = (uint *)(*(code *)*DAT_003ca328)(0x10000,0x100,0,uVar6), local_54 = local_58,
       local_58 != (uint *)0x0)) {
      if (param_1 == (uint *)0x64) {
        uVar17 = 0;
        puVar18 = local_58;
        if (uVar16 != 0) {
          do {
            uVar12 = *param_4;
            uVar17 = uVar17 + 1;
            *puVar18 = uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8
                       | uVar12 >> 0x18;
            puVar18 = puVar18 + 1;
            param_4 = param_4 + 1;
          } while (uVar17 <= uVar16 && uVar16 - uVar17 != 0);
        }
      }
      else if (param_1 == (uint *)0x65) {
        uVar17 = 0;
        puVar18 = local_58;
        if (uVar16 != 0) {
          do {
            iVar3 = uVar17 * 3;
            uVar17 = uVar17 + 1;
            *(undefined1 *)puVar18 = *(undefined1 *)((int)param_4 + iVar3 + 2);
            puVar7 = (ushort *)((int)puVar18 + 2);
            *(undefined1 *)((int)puVar18 + 1) = *(undefined1 *)((int)param_4 + iVar3 + 1);
            puVar18 = (uint *)((int)puVar18 + 3);
            *(undefined1 *)puVar7 = *(undefined1 *)((int)param_4 + iVar3);
          } while (uVar17 <= uVar16 && uVar16 - uVar17 != 0);
        }
      }
      else if ((param_1 == (uint *)0x69) && (uVar17 = 0, puVar18 = local_58, uVar16 != 0)) {
        do {
          uVar17 = uVar17 + 1;
          *(ushort *)puVar18 = (ushort)*param_4 << 8 | (ushort)*param_4 >> 8;
          puVar18 = (uint *)((int)puVar18 + 2);
          param_4 = (uint *)((int)param_4 + 2);
        } while (uVar17 <= uVar16 && uVar16 - uVar17 != 0);
      }
      goto LAB_003ca144;
    }
    local_4c = DAT_003ca330;
  }
  else {
LAB_003ca144:
    puVar18 = (uint *)0x0;
    if (param_3 != (uint *)0x0) {
      do {
        uVar17 = (int)param_3 + (-1 - (int)puVar18);
        uVar16 = 0;
        if (param_2 != 0) {
          do {
            uVar19 = (int)puVar18 * param_2 + uVar16;
            uVar20 = 0;
            uVar12 = ((uVar17 >> 3) * (param_2 >> 3) + (uVar16 >> 3)) * 0x40;
            uVar9 = 1;
            do {
              uVar20 = uVar20 + 1;
              uVar12 = ((uVar16 & uVar9) + (uVar17 & uVar9) * 2) * uVar9 + uVar12;
              uVar9 = 1 << (uVar20 & 0xff);
            } while (uVar9 < 8);
            if (uVar15 == 4) {
              pbVar14 = (byte *)((int)local_60 + (uVar12 >> 1));
              pbVar11 = (byte *)((int)local_58 + (uVar19 >> 1));
              if ((uVar16 & 1) == 0) {
                bVar8 = *pbVar11 & 0xf;
              }
              else {
                bVar8 = *pbVar11 & 0xf0 | *pbVar14 & 0xf;
              }
              *pbVar14 = bVar8;
            }
            else if (uVar1 != 0) {
              puVar10 = (undefined1 *)((int)local_58 + uVar19 * uVar1 + -1);
              puVar13 = (undefined1 *)((int)local_60 + uVar12 * uVar1 + -1);
              uVar12 = uVar15 >> 4;
              if ((uVar1 & 1) != 0) {
                puVar10 = puVar10 + 1;
                puVar13 = puVar13 + 1;
                *puVar13 = *puVar10;
              }
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                puVar13[1] = puVar10[1];
                puVar10 = puVar10 + 2;
                puVar13 = puVar13 + 2;
                *puVar13 = *puVar10;
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < param_2);
        }
        puVar18 = (uint *)((int)puVar18 + 1);
      } while (puVar18 < param_3);
    }
    if (bVar4) {
      func_001163A0(param_5,local_60,uVar6);
    }
  }
  if ((local_50 != (uint *)0x0) && ((code *)*DAT_003ca334 != (code *)0x0)) {
    (*(code *)*DAT_003ca334)(0x10000,0x100,0,local_50);
  }
  if ((local_54 != (uint *)0x0) && ((code *)*DAT_003ca334 != (code *)0x0)) {
    (*(code *)*DAT_003ca334)(0x10000,0x100,0,local_54);
  }
LAB_003ca2c0:
  if ((local_4c & 0x80000000) == 0) {
    return local_4c;
  }
  uVar5 = func_003CA35C(local_4c,0);
  return uVar5;
}

