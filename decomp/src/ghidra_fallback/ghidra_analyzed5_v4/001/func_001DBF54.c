#include "ghidra_types.h"

extern int func_0028DFA4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_0028F7B0(int param_1,uint param_2);
extern int func_00291FCC(int param_1,undefined2 param_2,undefined2 param_3);
extern undefined DAT_00000040;
extern undefined1 DAT_001dc28c;
extern int DAT_001dc290;
extern int DAT_001dc294;
extern undefined1 *DAT_001dc298;

// USA 001DBF54 <- EU 001DBF54 (Ghidra, non-matching)
// GLOBAL DAT_00000040 undefined
// GLOBAL DAT_001dc28c undefined1
// GLOBAL DAT_001dc290 int
// GLOBAL DAT_001dc294 int
// GLOBAL DAT_001dc298 undefined1 *

void func_001DBF54(int param_1,int *param_2,uint param_3,undefined1 *param_4)

{
  byte *pbVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 extraout_r1;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 (*(int *)(albw_frame + 0x8))
  #define local_d4 (*(undefined1 * *)(albw_frame + 0xc))
  #define local_d0 (*(int *)(albw_frame + 0x10))
  #define local_cc ((undefined1 *)(albw_frame + 0x14))
  #define uStack_8d (*(undefined1 *)(albw_frame + 0x53))
  #define local_8c (*(int *)(albw_frame + 0x54))
  #define local_88 (*(undefined1 * *)(albw_frame + 0x58))
  #define local_84 (*(int *)(albw_frame + 0x5c))
  #define local_80 ((undefined1 *)(albw_frame + 0x60))
  #define uStack_41 (*(undefined1 *)(albw_frame + 0x9f))
  #define local_40 (*(int *)(albw_frame + 0xa0))
  #define local_38 (*(int *)(albw_frame + 0xa8))
  #define local_34 (*(undefined1 * *)(albw_frame + 0xac))
  #define local_2c (*(int *)(albw_frame + 0xb4))
  #define piStack_28 (*(int * *)(albw_frame + 0xb8))
  iVar10 = DAT_001dc290;
  local_40 = -1;
  local_34 = &DAT_001dc28c;
  local_38 = DAT_001dc290;
  local_2c = param_1;
  piStack_28 = param_2;
  (**(code **)(*param_2 + 8))(param_2);
  iVar9 = 0;
  do {
    if (*(char *)(param_2[1] + iVar9) == '\0') {
      if (iVar9 < 0x40001) goto LAB_001dbfbc;
      break;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x40001);
  iVar9 = 0;
LAB_001dbfbc:
  (**(code **)(local_38 + 8))(&local_38);
  iVar12 = 0;
  do {
    pbVar1 = local_34 + iVar12;
    if ((undefined1 *)(uint)*pbVar1 == (undefined1 *)0x0) {
      if (iVar12 < 0x40001) goto LAB_001dbffc;
      break;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x40001);
  iVar12 = 0;
LAB_001dbffc:
  iVar11 = 0;
  puVar7 = (undefined1 *)(uint)*pbVar1;
  if (-1 < iVar9 - iVar12) {
    do {
      local_d8 = iVar10;
      local_d4 = (undefined1 *)(param_2[1] + iVar11);
      (**(code **)(iVar10 + 8))(&local_d8);
      (**(code **)(local_d8 + 8))(&local_d8);
      puVar7 = local_d4;
      (**(code **)(local_38 + 8))(&local_38);
      if (puVar7 != local_34) {
        if (iVar12 < 0x40001) {
          iVar4 = iVar12;
          if (iVar12 < 1) goto LAB_001dc0b8;
        }
        else {
          iVar4 = 0x40000;
        }
        iVar5 = 0;
        do {
          param_3 = (uint)(char)local_d4[iVar5];
          if (param_3 == 0) {
            in_r12 = (uint)(byte)local_34[iVar5];
          }
          param_4 = local_d4;
          if (param_3 == 0 && in_r12 == 0) break;
          if (((param_3 == 0) || (in_r12 = (uint)(char)local_34[iVar5], in_r12 == 0)) ||
             (param_3 != in_r12)) {
            bVar3 = false;
            goto LAB_001dc0c4;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
LAB_001dc0b8:
      bVar3 = true;
LAB_001dc0c4:
      puVar7 = local_34;
      if (bVar3) goto LAB_001dc0dc;
      iVar11 = iVar11 + 1;
    } while (iVar11 <= iVar9 - iVar12);
  }
  iVar11 = -1;
LAB_001dc0dc:
  if (iVar11 == -1) {
    iVar10 = func_0028DFA4(param_2,puVar7,param_3,(uint)param_4);
    iVar9 = iVar10;
  }
  else {
    local_d4 = local_cc;
    local_d0 = 0x40;
    ppuVar8 = &local_88;
    uStack_8d = 0;
    puVar7 = &DAT_00000040;
    local_88 = local_80;
    local_cc[0] = 0;
    local_d8 = DAT_001dc294;
    local_84 = 0x40;
    uStack_41 = 0;
    iVar10 = 0;
    local_80[0] = 0;
    local_8c = DAT_001dc294;
    if (0 < iVar11) {
      do {
        (**(code **)(*param_2 + 8))(param_2);
        iVar9 = 0;
        do {
          if (*(char *)(param_2[1] + iVar9) == '\0') {
            if (iVar9 < 0x40001) goto LAB_001dc188;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x40001);
        iVar9 = 0;
LAB_001dc188:
        puVar7 = DAT_001dc298;
        if (-1 < iVar10 && iVar10 <= iVar9) {
          puVar7 = (undefined1 *)(param_2[1] + iVar10);
        }
        uVar2 = *puVar7;
        (**(code **)(local_d8 + 8))(&local_d8);
        iVar9 = 0;
        do {
          puVar7 = (undefined1 *)(uint)(byte)local_d4[iVar9];
          if (puVar7 == (undefined1 *)0x0) {
            if (iVar9 < 0x40001) goto LAB_001dc1e0;
            break;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < 0x40001);
        iVar9 = 0;
LAB_001dc1e0:
        if (iVar9 < local_d0 + -1) {
          puVar7 = local_d4 + iVar9;
          local_d4[iVar9] = uVar2;
          puVar7[1] = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar11);
    }
    (**(code **)(*param_2 + 8))(param_2);
    iVar10 = 0;
    do {
      puVar6 = (undefined1 *)(uint)*(byte *)(param_2[1] + iVar10);
      if (puVar6 == (undefined1 *)0x0) {
        if (iVar10 < 0x40001) goto joined_r0x001dc254;
        break;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x40001);
    iVar10 = 0;
joined_r0x001dc254:
    while (iVar11 = iVar11 + 1, iVar11 < iVar10) {
      (**(code **)(*param_2 + 8))(param_2);
      iVar9 = 0;
      do {
        if (*(char *)(param_2[1] + iVar9) == '\0') {
          if (iVar9 < 0x40001) goto LAB_001dc2a8;
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x40001);
      iVar9 = 0;
LAB_001dc2a8:
      puVar7 = DAT_001dc298;
      if (-1 < iVar11 && iVar11 <= iVar9) {
        puVar7 = (undefined1 *)(param_2[1] + iVar11);
      }
      uVar2 = *puVar7;
      (**(code **)(local_8c + 8))(&local_8c);
      iVar9 = 0;
      do {
        puVar7 = (undefined1 *)(uint)(byte)local_88[iVar9];
        if (puVar7 == (undefined1 *)0x0) {
          if (iVar9 < 0x40001) goto LAB_001dc300;
          break;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x40001);
      iVar9 = 0;
LAB_001dc300:
      puVar6 = (undefined1 *)(local_84 - 1U);
      if (iVar9 < (int)(local_84 - 1U)) {
        puVar7 = local_88 + iVar9;
        local_88[iVar9] = uVar2;
        puVar7[1] = 0;
        puVar6 = local_88;
      }
    }
    iVar9 = func_0028DFA4(&local_d8,puVar6,puVar7,(uint)ppuVar8);
    iVar10 = func_0028DFA4(&local_8c,extraout_r1,puVar7,(uint)ppuVar8);
    local_40 = iVar10;
  }
  if (iVar9 != -1) {
    if (iVar9 != 10) {
      iVar10 = local_40;
    }
    if (iVar9 == 10 || iVar10 == 10) {
      *(undefined1 *)(*(int *)(local_2c + 0x614) + 0xcc) = 1;
    }
    iVar10 = *(int *)(local_2c + 0x614);
    if ((*(short *)(iVar10 + 0x42) == 0x97) && (iVar9 != 0xac)) {
      func_00291FCC(iVar10,(short)iVar9,(short)local_40);
    }
    else {
      iVar10 = func_0028F7B0(iVar10,0x96);
      if (iVar10 != 0) {
        *(short *)(iVar10 + 8) = (short)iVar9;
        *(short *)(iVar10 + 10) = (short)local_40;
        return;
      }
    }
  }
  return;
}

