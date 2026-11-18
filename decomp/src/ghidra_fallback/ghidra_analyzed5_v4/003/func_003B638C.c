#include "ghidra_types.h"

extern int func_002C00A8(int param_1);
extern int func_0031B438(int param_1,uint param_2,int param_3,int param_4);
extern int func_00532F70(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_006695DC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_003b6614;
extern int DAT_003b6618;
extern char *DAT_003b663c;
extern char *DAT_003b6640;
extern char s_SE_S_CROSS_SETTING_CHANGE_ITEM_003b661c[];

// USA 003B638C <- EU 003B6368 (Ghidra, non-matching)
// GLOBAL DAT_003b6614 int *
// GLOBAL DAT_003b6618 int
// GLOBAL DAT_003b663c char *
// GLOBAL DAT_003b6640 char *
// GLOBAL s_SE_S_CROSS_SETTING_CHANGE_ITEM_003b661c string

undefined4 func_003B638C(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  char cVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = DAT_003b6618;
  if (*(char *)(param_1 + 0x145) != '\0') {
    uVar3 = *(uint *)(*DAT_003b6614 + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x70) * 400 + 0x20)
    ;
    if ((uVar3 & 0x440000) == 0) {
      if ((uVar3 & 0x880000) == 0) {
        if ((uVar3 & 1) == 0) {
          if ((uVar3 & 2) == 0) {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x142) = *(undefined1 *)(param_1 + 0x141);
          func_002C00A8(*(int *)(param_1 + 0x14));
          local_14 = DAT_003b6640;
          puVar4 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
          *puVar4 = *puVar4 | 2;
          local_18 = iVar2;
          func_00532F70(param_1,&local_18,0,1);
        }
        else {
          func_002C00A8(*(int *)(param_1 + 0x14));
          local_14 = DAT_003b663c;
          puVar4 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
          *puVar4 = *puVar4 | 2;
          local_18 = iVar2;
          func_00532F70(param_1,&local_18,0,1);
        }
      }
      else {
        uVar3 = (uint)*(char *)(param_1 + 0x143);
        uVar9 = (uint)*(char *)(param_1 + 0x140);
        do {
          cVar6 = *(char *)(param_1 + 0x142) + '\x01';
          *(char *)(param_1 + 0x142) = cVar6;
          if ((int)uVar9 <= (int)cVar6) {
            *(undefined1 *)(param_1 + 0x142) = 0;
          }
          if (uVar3 != (int)*(char *)(param_1 + 0x142)) break;
          bVar10 = uVar3 == 0;
          uVar1 = (int)*(char *)(param_1 + 0x142);
          if ((int)uVar3 >= 0) {
            bVar10 = uVar9 == uVar3;
            uVar1 = uVar3;
          }
          if (bVar10 || ((int)uVar3 < 0 || (int)uVar9 < (int)uVar3)) break;
          pcVar8 = (char *)(param_1 + 0x120);
          if (uVar1 < 0x20) {
            pcVar8 = pcVar8 + uVar3;
          }
        } while (*pcVar8 != ' ');
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined2 *)(param_1 + 0x62) = 5;
        *(undefined2 *)(param_1 + 0x60) = 0;
        func_006695DC((undefined4 *)(param_1 + 0x20),3);
        local_14 = s_SE_S_CROSS_SETTING_CHANGE_ITEM_003b661c;
        local_18 = iVar2;
        func_00533078(param_1,&local_18,0);
      }
    }
    else {
      uVar3 = (uint)*(char *)(param_1 + 0x143);
      do {
        cVar6 = *(char *)(param_1 + 0x142) + -1;
        *(char *)(param_1 + 0x142) = cVar6;
        if (cVar6 < '\0') {
          *(char *)(param_1 + 0x142) = *(char *)(param_1 + 0x140) + -1;
        }
        if (((uVar3 != (int)*(char *)(param_1 + 0x142)) || ((int)uVar3 < 0)) ||
           ((int)*(char *)(param_1 + 0x140) <= (int)uVar3)) break;
        pcVar8 = (char *)(param_1 + 0x120);
        if (uVar3 < 0x20) {
          pcVar8 = pcVar8 + uVar3;
        }
      } while (*pcVar8 != ' ');
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x62) = 6;
      *(undefined2 *)(param_1 + 0x60) = 0;
      func_006695DC((undefined4 *)(param_1 + 0x20),3);
      local_14 = s_SE_S_CROSS_SETTING_CHANGE_ITEM_003b661c;
      local_18 = iVar2;
      func_00533078(param_1,&local_18,0);
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      if ((*(char *)(param_1 + 0x142) < '\0') ||
         (*(char *)(param_1 + 0x140) <= *(char *)(param_1 + 0x142))) {
        *(char *)(param_1 + 0x142) = *(char *)(param_1 + 0x140) + -1;
      }
      pbVar7 = (byte *)(param_1 + 0x120);
      if ((uint)(int)*(char *)(param_1 + 0x142) < 0x20) {
        pbVar7 = pbVar7 + *(char *)(param_1 + 0x142);
      }
      piVar5 = (int *)(param_1 + 0x6c);
      uVar3 = (uint)*pbVar7;
      if (uVar3 < 0x2d) {
        piVar5 = piVar5 + uVar3;
      }
      return func_0031B438(*(int *)(param_1 + 0x44),uVar3,*piVar5,0);
    }
  }
  return 0;
}

