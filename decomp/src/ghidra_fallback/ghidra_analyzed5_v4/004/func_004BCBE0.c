#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004BF32C(int param_1,ushort *param_2,short *param_3,short *param_4);
extern int func_004C0550(int param_1,int param_2);
extern longlong func_004C0600(int param_1,uint param_2);
extern int func_004C0D70(int param_1,int param_2);
extern int func_00522A28(int param_1,int *param_2,int param_3);
extern undefined1 DAT_004bcecc;
extern int DAT_004bced0;
extern undefined4 DAT_004bced4;
extern int DAT_004bced8;
extern int DAT_004bcedc;
extern int DAT_004bd19c;

// USA 004BCBE0 <- EU 004BCBB8 (Ghidra, non-matching)
// GLOBAL DAT_004bcecc undefined1
// GLOBAL DAT_004bced0 int
// GLOBAL DAT_004bced4 undefined4
// GLOBAL DAT_004bced8 int
// GLOBAL DAT_004bcedc int
// GLOBAL DAT_004bd19c int

undefined4 func_004BCBE0(int param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_r12;
  longlong lVar9;
  _Alignas(8) unsigned char albw_frame[0x290];
  #define local_290 (*(int *)(albw_frame + 0x0))
  #define local_28c (*(uint * *)(albw_frame + 0x4))
  #define local_288 (*(int *)(albw_frame + 0x8))
  #define local_284 ((uint *)(albw_frame + 0xc))
  #define local_274 (*(undefined1 * *)(albw_frame + 0x1c))
  #define local_270 (*(int *)(albw_frame + 0x20))
  #define uStack_185 (*(undefined1 *)(albw_frame + 0x10b))
  #define local_184 (*(int *)(albw_frame + 0x10c))
  #define local_180 (*(uint * *)(albw_frame + 0x110))
  #define local_17c (*(int *)(albw_frame + 0x114))
  #define local_178 ((uint *)(albw_frame + 0x118))
  #define uStack_79 (*(undefined1 *)(albw_frame + 0x217))
  #define local_74 (*(int *)(albw_frame + 0x21c))
  #define local_6c (*(short * *)(albw_frame + 0x224))
  #define local_68 (*(short * *)(albw_frame + 0x228))
  #define local_64 (*(ushort * *)(albw_frame + 0x22c))
  #define local_60 (*(int *)(albw_frame + 0x230))
  #define local_5c (*(uint * *)(albw_frame + 0x234))
  #define local_44 (*(int *)(albw_frame + 0x24c))
  #define local_3c (*(int * *)(albw_frame + 0x254))
  #define local_38 (*(int *)(albw_frame + 0x258))
  #define local_34 (*(undefined1 * *)(albw_frame + 0x25c))
  #define local_30 (*(int * *)(albw_frame + 0x260))
  #define local_2c (*(int * *)(albw_frame + 0x264))
  #define local_28 (*(undefined4 *)(albw_frame + 0x268))
  iVar2 = DAT_004bced0;
  local_34 = &DAT_004bcecc;
  local_38 = DAT_004bced0;
  (**(code **)(*param_2 + 8))(param_2);
  local_270 = 0;
  do {
    if (*(char *)(param_2[1] + local_270) == '\0') {
      if (local_270 < 0x40001) goto LAB_004bcc1c;
      break;
    }
    local_270 = local_270 + 1;
  } while (local_270 < 0x40001);
  local_270 = 0;
LAB_004bcc1c:
  (**(code **)(local_38 + 8))(&local_38);
  iVar8 = 0;
  do {
    if (local_34[iVar8] == '\0') {
      if (iVar8 < 0x40001) goto LAB_004bcc5c;
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40001);
  iVar8 = 0;
LAB_004bcc5c:
  local_270 = local_270 - iVar8;
  iVar6 = 0;
  if (-1 < local_270) {
    do {
      local_284[3] = iVar2;
      local_274 = (undefined1 *)(param_2[1] + iVar6);
      (**(code **)(iVar2 + 8))(local_284 + 3);
      (**(code **)(local_284[3] + 8))(local_284 + 3);
      puVar3 = local_274;
      (**(code **)(local_38 + 8))(&local_38);
      if (puVar3 != local_34) {
        if (iVar8 < 0x40001) {
          iVar7 = iVar8;
          if (iVar8 < 1) goto LAB_004bcd1c;
        }
        else {
          iVar7 = 0x40000;
        }
        iVar4 = 0;
        do {
          uVar5 = (uint)(char)local_274[iVar4];
          if (uVar5 == 0) {
            in_r12 = (uint)(byte)local_34[iVar4];
          }
          if (uVar5 == 0 && in_r12 == 0) break;
          if (((uVar5 == 0) || (in_r12 = (uint)(char)local_34[iVar4], in_r12 == 0)) ||
             (uVar5 != in_r12)) {
            bVar1 = false;
            goto LAB_004bcd28;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
LAB_004bcd1c:
      bVar1 = true;
LAB_004bcd28:
      if (bVar1) goto LAB_004bcd44;
      iVar6 = iVar6 + 1;
    } while (iVar6 <= local_270);
  }
  iVar6 = -1;
LAB_004bcd44:
  local_6c = (short *)(param_1 + 0x908);
  local_68 = (short *)(param_1 + 0x906);
  local_64 = (ushort *)(param_1 + 0x904);
  local_3c = (int *)(param_1 + 0x7b8);
  local_30 = (int *)(param_1 + 0x7b0);
  local_2c = (int *)(param_1 + 0x7ac);
  if (iVar6 == -1) {
    uVar5 = func_00522A28(*(int *)(param_1 + 0x7ac),param_2,0);
    *(short *)(param_1 + 0x904) = (short)uVar5;
    if (*(int *)(param_1 + 0x7b0) != 0) {
      uVar5 = func_00522A28(*(int *)(param_1 + 0x7b0),param_2,0);
      *(short *)(param_1 + 0x906) = (short)uVar5;
    }
    if (*(int *)(param_1 + 0x7b8) != 0) {
      uVar5 = func_00522A28(*(int *)(param_1 + 0x7b8),param_2,0);
      *(short *)(param_1 + 0x908) = (short)uVar5;
    }
    *(undefined2 *)(param_1 + 0x90a) = 0xffff;
    *(undefined2 *)(param_1 + 0x90c) = 0xffff;
    *(undefined2 *)(param_1 + 0x90e) = 0xffff;
    func_004BF32C(param_1,local_64,local_68,local_6c);
  }
  else {
    (**(code **)(*param_2 + 8))(param_2);
    local_74 = 0;
    do {
      if (*(char *)(param_2[1] + local_74) == '\0') {
        if (local_74 < 0x40001) goto LAB_004bcdd8;
        break;
      }
      local_74 = local_74 + 1;
    } while (local_74 < 0x40001);
    local_74 = 0;
LAB_004bcdd8:
    local_288 = 0x100;
    local_28 = DAT_004bced4;
    uStack_185 = 0;
    local_44 = DAT_004bced8;
    local_290 = DAT_004bced8;
    local_28c = local_284;
    (**(code **)(*param_2 + 8))(param_2);
    uVar5 = 0;
    do {
      if (*(char *)(param_2[1] + uVar5) == '\0') {
        if ((int)uVar5 < 0x40001) goto LAB_004bce58;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x40001);
    uVar5 = 0;
LAB_004bce58:
    if (local_288 <= (int)uVar5) {
      uVar5 = local_288 - 1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4(local_284,(uint *)param_2[1],uVar5);
    iVar8 = DAT_004bcedc;
    *(undefined1 *)((int)local_284 + uVar5) = 0;
    local_290 = DAT_004bcedc;
    iVar7 = local_74 - iVar6;
    (**(code **)(DAT_004bcedc + 8))(&local_290);
    iVar4 = 0;
    do {
      if (*(char *)((int)local_28c + iVar4) == '\0') {
        if (iVar4 < 0x40001) goto LAB_004bceec;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40001);
    iVar4 = 0;
LAB_004bceec:
    if (-1 < iVar7) {
      if (iVar4 < iVar7) {
        iVar7 = iVar4;
      }
      *(undefined1 *)((int)local_28c + (iVar4 - iVar7)) = 0;
    }
    iVar6 = iVar6 + 1;
    (**(code **)(*param_2 + 8))(param_2);
    iVar7 = 0;
    do {
      if (*(char *)(param_2[1] + iVar7) == '\0') {
        if (iVar7 < 0x40001) goto LAB_004bcf4c;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x40001);
    iVar7 = 0;
LAB_004bcf4c:
    iVar4 = DAT_004bd19c;
    if (iVar6 >= 0 && iVar6 <= iVar7) {
      iVar4 = param_2[1];
    }
    local_60 = iVar2;
    if (iVar6 < 0 || iVar7 < iVar6) {
      local_5c = *(uint **)(iVar4 + 4);
    }
    else {
      local_5c = (uint *)(iVar4 + iVar6);
    }
    local_17c = 0x100;
    uStack_79 = 0;
    local_184 = local_44;
    local_180 = local_178;
    (**(code **)(iVar2 + 8))(&local_60);
    uVar5 = 0;
    do {
      if (*(char *)((int)local_5c + uVar5) == '\0') {
        if ((int)uVar5 < 0x40001) goto LAB_004bcfdc;
        break;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x40001);
    uVar5 = 0;
LAB_004bcfdc:
    if (local_17c <= (int)uVar5) {
      uVar5 = local_17c - 1;
    }
    (**(code **)(local_60 + 8))(&local_60);
    func_0010E3C4(local_178,local_5c,uVar5);
    *(undefined1 *)((int)local_178 + uVar5) = 0;
    local_184 = iVar8;
    uVar5 = func_00522A28(*(int *)(param_1 + 0x7ac),&local_290,0);
    *(short *)(param_1 + 0x904) = (short)uVar5;
    uVar5 = func_00522A28(*local_2c,&local_184,0);
    *(short *)(param_1 + 0x90a) = (short)uVar5;
    if (*(int *)(param_1 + 0x7b0) != 0) {
      uVar5 = func_00522A28(*(int *)(param_1 + 0x7b0),&local_290,0);
      *(short *)(param_1 + 0x906) = (short)uVar5;
      uVar5 = func_00522A28(*local_30,&local_184,0);
      *(short *)(param_1 + 0x90c) = (short)uVar5;
    }
    if (*(int *)(param_1 + 0x7b8) != 0) {
      uVar5 = func_00522A28(*(int *)(param_1 + 0x7b8),&local_290,0);
      *(short *)(param_1 + 0x908) = (short)uVar5;
      uVar5 = func_00522A28(*local_3c,&local_184,0);
      *(short *)(param_1 + 0x90e) = (short)uVar5;
    }
    func_004BF32C(param_1,local_64,local_68,local_6c);
    func_004BF32C(param_1,(ushort *)(param_1 + 0x90a),(short *)(param_1 + 0x90c),
                  (short *)(param_1 + 0x90e));
  }
  if ((*(char *)(param_1 + 0x85f) == '\0') &&
     (lVar9 = func_004C0600(param_1,(int)*(short *)(param_1 + 0x904)), (int)lVar9 != 0)) {
    func_004C0550(param_1,(int)*(short *)(param_1 + 0x906));
    func_004C0D70(param_1,(int)*(short *)(param_1 + 0x908));
  }
  return 1;
}

