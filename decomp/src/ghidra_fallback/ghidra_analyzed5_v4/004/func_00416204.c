#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003D2908(undefined4 param_1,undefined4 param_2);
extern int func_00413250(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5);
extern int func_00413B34(uint param_1,int param_2);
extern int func_004144B8(ushort *param_1,int param_2,uint param_3,byte *param_4);
extern uint DAT_004169a4;
extern int DAT_004169a8;

// USA 00416204 <- EU 004161E4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004169a4 uint
// GLOBAL DAT_004169a8 int

undefined4
func_00416204(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_9c (*(uint *)(albw_frame + 0x4))
  #define local_98 ((undefined4 *)(albw_frame + 0x8))
  #define local_90 (*(int *)(albw_frame + 0x10))
  #define local_88 (*(uint * *)(albw_frame + 0x18))
  #define local_80 (*(uint *)(albw_frame + 0x20))
  #define local_78 (*(int *)(albw_frame + 0x28))
  #define local_74 (*(uint *)(albw_frame + 0x2c))
  #define local_6c (*(uint *)(albw_frame + 0x34))
  #define local_64 (*(int *)(albw_frame + 0x3c))
  #define local_60 (*(int *)(albw_frame + 0x40))
  #define local_5c (*(int *)(albw_frame + 0x44))
  #define auStack_58 ((undefined2 *)(albw_frame + 0x48))
  #define auStack_48 ((undefined2 *)(albw_frame + 0x58))
  #define puStack_34 (*(undefined4 * *)(albw_frame + 0x6c))
  #define local_30 (*(int *)(albw_frame + 0x70))
  #define local_2c (*(int *)(albw_frame + 0x74))
  #define local_28 (*(undefined4 *)(albw_frame + 0x78))
  local_5c = 0;
  local_6c = 0;
  local_64 = 0;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (param_5 != 0) {
    if (*(char *)(param_1 + 0x2a6) == '\x03') {
      param_5 = (uint)((ulonglong)DAT_004169a4 * (ulonglong)param_5 + (ulonglong)DAT_004169a4 >>
                      0x22) * 0xe;
    }
    uVar4 = param_1[0x19];
    uVar8 = param_5;
    if (uVar4 <= param_1[0x17] + param_5) {
      do {
        uVar8 = uVar8 - (uVar4 - param_1[0x17]);
        if (*(char *)(param_1[6] + 8) == '\0') {
          if ((code *)param_1[0x30b] == (code *)0x0) {
            param_1[0x17] = param_1[0x19];
LAB_004164cc:
            *(undefined1 *)((int)param_1 + 0x55) = 1;
            *(undefined4 *)(local_30 + 0x20) = 0;
            return 1;
          }
          local_98[0] = param_1[0x16];
          iVar1 = (*(code *)param_1[0x30b])(local_98,param_1[0x30c]);
          if (iVar1 == 0) {
            param_1[0x17] = param_1[0x19];
            goto LAB_004164cc;
          }
          param_1[0x16] = local_98[0];
          param_1[0x19] = *(undefined4 *)(param_1[6] + 0x18);
          param_1[0x18] = 0;
          param_1[0x17] = 0;
        }
        else {
          param_1[0x18] = *(undefined4 *)(param_1[6] + 0xc);
          param_1[0x19] = *(undefined4 *)(param_1[6] + 0x18);
          param_1[0x17] = param_1[0x18];
        }
        local_64 = local_64 + 1;
        uVar4 = param_1[0x19];
      } while (uVar4 <= param_1[0x17] + uVar8);
    }
    iVar1 = param_1[0x17];
    param_1[0x17] = iVar1 + uVar8;
    iVar9 = param_1[6];
    uVar16 = func_00110710(iVar1 + uVar8,*(uint *)(iVar9 + 0x1c));
    param_1[0xf] = (int)uVar16;
    (**(code **)(*(int *)param_1[5] + 0x40))
              ((int *)param_1[5],*(int *)(iVar9 + 0x20) * param_1[8] * (int)uVar16 + param_1[0x12],0
              );
    if (*(char *)(param_1 + 0x2a6) == '\x03') {
      local_6c = 1;
    }
  }
  iVar1 = 0;
  local_78 = 0;
  local_74 = 1;
  local_60 = param_1[0x17];
  while( true ) {
    iVar9 = param_1[6];
    if (param_1[0xf] == param_1[0x10]) {
      iVar10 = *(int *)(iVar9 + 0x28);
      iVar14 = *(int *)(iVar9 + 0x24);
    }
    else {
      iVar10 = *(int *)(iVar9 + 0x1c);
      iVar14 = *(int *)(iVar9 + 0x20);
    }
    uVar16 = func_00110710(param_1[0x17],*(uint *)(iVar9 + 0x1c));
    local_9c = (uint)((ulonglong)uVar16 >> 0x20);
    uVar8 = local_9c;
    if (*(char *)(param_1 + 0x2a6) == '\x03') {
      uVar8 = (uint)((ulonglong)DAT_004169a4 * (ulonglong)local_9c + (ulonglong)DAT_004169a4 >> 0x22
                    ) * 0xe;
    }
    if ((local_74 != 0) && (local_5c = local_9c - uVar8, local_6c != 0)) {
      uVar2 = (**(code **)(*(int *)param_1[5] + 0x54))((int *)param_1[5]);
      iVar9 = func_00413250(param_1,auStack_58,auStack_48,param_1[0xf],param_1[8]);
      if (iVar9 == 0) {
        return 0;
      }
      (**(code **)(*(int *)param_1[5] + 0x40))((int *)param_1[5],uVar2,0);
      iVar9 = param_1[8];
      if (iVar9 != 0) {
        puVar5 = auStack_58;
        puVar6 = auStack_48;
        iVar7 = 0;
        do {
          iVar9 = iVar9 + -1;
          *(undefined2 *)((int)param_1 + iVar7 * 6 + 0xbfc) = *puVar5;
          *(undefined2 *)((int)param_1 + iVar7 * 6 + 0xbfe) = *puVar6;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar9 != 0);
      }
    }
    local_80 = func_00413B34(uVar8,(uint)*(byte *)(param_1 + 0x2a6));
    uVar8 = iVar14 - local_80;
    local_90 = iVar10 - local_9c;
    uVar4 = 0;
    if (param_1[8] != 0) {
      do {
        if (*(char *)(param_1[4] + 0x52) != '\0') {
          return 0;
        }
        uVar13 = 2;
        if ((uint)param_1[8] < uVar4 + 2) {
          uVar13 = param_1[8] - uVar4;
        }
        iVar9 = (**(code **)(*(int *)param_1[5] + 0x24))
                          ((int *)param_1[5],DAT_004169a8,iVar14 * uVar13);
        if (iVar9 != iVar14 * uVar13) {
          return 0;
        }
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar15 = local_74 & local_6c;
          do {
            pbVar12 = (byte *)(iVar14 * uVar11 + DAT_004169a8);
            local_88 = (uint *)(*(int *)(local_2c + uVar4 * 4) + iVar1);
            func_001163A0(local_88,(uint *)(pbVar12 + local_80),uVar8);
            func_003D2908(local_88,uVar8);
            if (uVar15 != 0) {
              puVar3 = (ushort *)((int)param_1 + uVar4 * 6 + 0xbfa);
              *puVar3 = (ushort)*pbVar12;
              func_004144B8(puVar3,(int)param_1 + uVar4 * 0x2c + 0xa9a,local_9c,pbVar12);
            }
            uVar11 = uVar11 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar11 < uVar13);
        }
      } while (uVar4 < (uint)param_1[8]);
    }
    iVar9 = param_1[0x17];
    local_78 = local_78 + local_90;
    param_1[0x17] = iVar9 + local_90;
    iVar1 = iVar1 + uVar8;
    param_1[0xf] = param_1[0xf] + 1;
    if (iVar9 + local_90 == param_1[0x19]) break;
    local_74 = 0;
    if (local_78 != 0) {
LAB_00416714:
      if (*(char *)(param_1 + 0x2a6) == '\x03') {
        if (local_60 == 0) {
          if (param_1[8] != 0) {
            uVar8 = param_1[8] & 1;
            if (uVar8 == 1) {
              *(int *)(local_30 + 0x24) = (int)param_1 + 0xaba;
            }
            if (uVar8 < (uint)param_1[8]) {
              do {
                iVar1 = local_30 + uVar8 * 4;
                *(uint *)(iVar1 + 0x24) = (int)param_1 + uVar8 * 0x2c + 0xaba;
                *(uint *)(iVar1 + 0x28) = (int)param_1 + uVar8 * 0x2c + 0xae6;
                uVar8 = uVar8 + 2;
              } while (uVar8 < (uint)param_1[8]);
            }
          }
        }
        else if ((*(char *)(param_1[6] + 8) == '\0') || (*(int *)(param_1[6] + 0xc) != local_60)) {
          uVar8 = param_1[8];
          if (param_5 == 0) {
            if (uVar8 != 0) {
              uVar8 = uVar8 & 1;
              if (uVar8 == 1) {
                *(undefined4 *)(local_30 + 0x24) = 0;
              }
              if (uVar8 < (uint)param_1[8]) {
                do {
                  iVar1 = local_30 + uVar8 * 4;
                  uVar8 = uVar8 + 2;
                  *(undefined4 *)(iVar1 + 0x24) = 0;
                  *(undefined4 *)(iVar1 + 0x28) = 0;
                } while (uVar8 < (uint)param_1[8]);
              }
            }
          }
          else if (uVar8 != 0) {
            uVar8 = uVar8 & 1;
            if (uVar8 == 1) {
              *(int *)(local_30 + 0x24) = (int)param_1 + 0xbfa;
            }
            if (uVar8 < (uint)param_1[8]) {
              do {
                iVar1 = local_30 + uVar8 * 4;
                *(uint *)(iVar1 + 0x24) = (int)param_1 + uVar8 * 6 + 0xbfa;
                *(uint *)(iVar1 + 0x28) = (int)param_1 + uVar8 * 6 + 0xc00;
                uVar8 = uVar8 + 2;
              } while (uVar8 < (uint)param_1[8]);
            }
          }
        }
        else if (param_1[8] != 0) {
          uVar8 = param_1[8] & 1;
          if (uVar8 == 1) {
            *(undefined4 **)(local_30 + 0x24) = param_1 + 0x2b0;
          }
          if (uVar8 < (uint)param_1[8]) {
            do {
              iVar1 = local_30 + uVar8 * 4;
              uVar4 = uVar8 + 2;
              *(undefined4 **)(iVar1 + 0x24) = param_1 + uVar8 * 0xb + 0x2b0;
              *(undefined4 **)(iVar1 + 0x28) = param_1 + uVar8 * 0xb + 699;
              uVar8 = uVar4;
            } while (uVar4 < (uint)param_1[8]);
          }
        }
      }
      else if (param_1[8] != 0) {
        uVar8 = param_1[8] & 1;
        if (uVar8 == 1) {
          *(undefined4 *)(local_30 + 0x24) = 0;
        }
        if (uVar8 < (uint)param_1[8]) {
          do {
            iVar1 = local_30 + uVar8 * 4;
            uVar8 = uVar8 + 2;
            *(undefined4 *)(iVar1 + 0x24) = 0;
            *(undefined4 *)(iVar1 + 0x28) = 0;
          } while (uVar8 < (uint)param_1[8]);
        }
      }
      *(undefined4 *)(local_30 + 0x18) = local_28;
      *(int *)(local_30 + 0x20) = local_78;
      *(int *)(local_30 + 0x1c) = local_60;
      *(int *)(local_30 + 0x44) = local_5c;
      *(int *)(local_30 + 0x48) = local_64;
      *(undefined1 *)(local_30 + 0x4c) = *(undefined1 *)((int)param_1 + 0x55);
      return 1;
    }
  }
  if (*(char *)(param_1[6] + 8) == '\0') {
    if ((code *)param_1[0x30b] != (code *)0x0) {
      local_9c = param_1[0x16];
      iVar1 = (*(code *)param_1[0x30b])(&local_9c,param_1[0x30c]);
      if (iVar1 != 0) {
        param_1[0x16] = local_9c;
        uVar2 = *(undefined4 *)(param_1[6] + 0x18);
        param_1[0x18] = 0;
        param_1[0x19] = uVar2;
        param_1[0x17] = 0;
        goto LAB_004166a0;
      }
    }
    param_1[0x17] = param_1[0x19];
    *(undefined1 *)((int)param_1 + 0x55) = 1;
  }
  else {
    param_1[0x18] = *(undefined4 *)(param_1[6] + 0xc);
    param_1[0x19] = *(undefined4 *)(param_1[6] + 0x18);
    param_1[0x17] = param_1[0x18];
LAB_004166a0:
    local_64 = local_64 + 1;
    iVar1 = param_1[6];
    uVar16 = func_00110710(param_1[0x17],*(uint *)(iVar1 + 0x1c));
    param_1[0xf] = (int)uVar16;
    (**(code **)(*(int *)param_1[5] + 0x40))
              ((int *)param_1[5],*(int *)(iVar1 + 0x20) * param_1[8] * (int)uVar16 + param_1[0x12],0
              );
  }
  goto LAB_00416714;
}

