#include "ghidra_types.h"

extern int func_00352198(int param_1,int *param_2);
extern int func_00478A6C(int param_1,uint param_2,uint param_3);
extern int func_00588A88(int param_1,int *param_2,int param_3);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern undefined4 *DAT_004791c0;
extern undefined4 *DAT_004791c4;
extern int DAT_004791c8;
extern int *DAT_004791e4;
extern int *DAT_004791e8;
extern char s_SE_S_ITEM_GET_FX_START_004791cc[];

// USA 00478EB0 <- EU 00478E88 (Ghidra, non-matching)
// GLOBAL DAT_004791c0 undefined4 *
// GLOBAL DAT_004791c4 undefined4 *
// GLOBAL DAT_004791c8 int
// GLOBAL DAT_004791e4 int *
// GLOBAL DAT_004791e8 int *
// GLOBAL s_SE_S_ITEM_GET_FX_START_004791cc string

uint func_00478EB0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  switch(param_2) {
  case 0:
    uVar4 = 0x16;
    break;
  default:
    uVar4 = 0xff;
    break;
  case 2:
    uVar4 = 2;
    break;
  case 3:
    uVar4 = 5;
    break;
  case 4:
    uVar4 = 3;
    break;
  case 5:
    uVar4 = 0x13;
    break;
  case 6:
    uVar4 = 1;
    break;
  case 7:
    uVar4 = 7;
    break;
  case 8:
    uVar4 = 10;
    break;
  case 9:
    uVar4 = 0xb;
    break;
  case 10:
    uVar4 = 6;
    break;
  case 0xb:
    uVar4 = 4;
    break;
  case 0xc:
    uVar4 = 0;
    break;
  case 0xd:
    uVar4 = 8;
    break;
  case 0xe:
    uVar4 = 9;
    break;
  case 0xf:
    uVar4 = 0x17;
    break;
  case 0x10:
    uVar4 = 0x12;
    break;
  case 0x11:
    uVar4 = 0x11;
    break;
  case 0x12:
    uVar4 = 0xc;
    break;
  case 0x13:
    uVar4 = 0xd;
    break;
  case 0x14:
    uVar4 = 0xe;
    break;
  case 0x15:
    uVar4 = 0xf;
    break;
  case 0x16:
    uVar4 = 0x10;
    break;
  case 0x27:
    uVar4 = 0x14;
  }
  *(undefined1 *)(param_1 + 0x30b) = uVar4;
  iVar3 = DAT_004791c8;
  puVar2 = DAT_004791c4;
  puVar1 = DAT_004791c0;
  if (*(char *)(param_1 + 0x30b) < '\0') goto LAB_00479154;
  *(undefined4 *)(param_1 + 0x318) = *DAT_004791c0;
  *(undefined4 *)(param_1 + 0x31c) = puVar1[1];
  *(undefined4 *)(param_1 + 800) = puVar1[2];
  local_14 = (char *)*puVar2;
  local_18 = iVar3;
  func_00352198(*(int *)(param_1 + 0x314),&local_18);
  local_14 = s_SE_S_ITEM_GET_FX_START_004791cc;
  local_18 = iVar3;
  func_00588A88(*DAT_004791e4,&local_18,0);
  uVar5 = (uint)*(char *)(param_1 + 0x30b);
  if ((int)uVar5 < 0x14) {
    piVar6 = (int *)(param_1 + 0x118);
    if (uVar5 < 0x14) {
      piVar6 = piVar6 + uVar5;
    }
    uVar7 = 0;
    if (*(char *)(*piVar6 + 0xe1) == '\0') {
      do {
        piVar6 = (int *)(param_1 + 0x168);
        if (uVar7 < 0x14) {
          piVar6 = piVar6 + uVar7;
        }
        piVar8 = (int *)(param_1 + 0x118);
        if (uVar5 < 0x14) {
          piVar8 = piVar8 + uVar5;
        }
        if (*piVar6 == *piVar8) break;
        piVar6 = (int *)(param_1 + 0x168);
        if (uVar7 < 0x14) {
          piVar6 = piVar6 + uVar7;
        }
        if (*(char *)(*piVar6 + 0xe1) == '\0') {
          piVar6 = (int *)(param_1 + 0x118);
          if (uVar5 < 0x14) {
            piVar6 = piVar6 + uVar5;
          }
          uVar5 = 0;
          goto LAB_00479194;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 0x14);
    }
    else {
      piVar6 = (int *)(param_1 + 0x118);
      if (uVar5 < 0x14) {
        piVar6 = piVar6 + uVar5;
      }
      if (*(char *)(*(int *)(param_1 + 500) + 0xe4) == *(char *)(*piVar6 + 0xe0)) {
        uVar4 = 0x14;
      }
      else {
        piVar6 = (int *)(param_1 + 0x118);
        if (uVar5 < 0x14) {
          piVar6 = piVar6 + uVar5;
        }
        if (*(char *)(*(int *)(param_1 + 0x1f8) + 0xe4) != *(char *)(*piVar6 + 0xe0))
        goto LAB_00479138;
        uVar4 = 0x15;
      }
      *(undefined1 *)(param_1 + 0x30b) = uVar4;
    }
  }
  goto LAB_00479138;
  while (uVar5 = uVar5 + 1, uVar5 != 0x14) {
LAB_00479194:
    if (*(int *)(param_1 + 0x168 + uVar5 * 4) == *piVar6) {
      func_00478A6C(param_1,uVar7,uVar5);
      break;
    }
  }
LAB_00479138:
  *(ushort *)(*DAT_004791e8 + 0x33e) = *(ushort *)(*DAT_004791e8 + 0x33e) & 64999;
LAB_00479154:
  uVar5 = (uint)*(byte *)(param_1 + 0xf4);
  if (uVar5 == 0xc) {
    uVar5 = func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\r');
  }
  return uVar5;
}

