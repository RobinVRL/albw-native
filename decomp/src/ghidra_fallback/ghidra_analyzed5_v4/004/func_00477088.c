// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0010BEB4(int param_1,int *param_2);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_004778C8(int param_1);
extern int func_00477CE4(int param_1,int param_2);
extern int func_0047A260(int param_1,uint param_2,undefined4 param_3,int param_4);
extern int func_0051B670(int param_1);
extern int func_0051BF44(int param_1,undefined4 param_2,int param_3,int param_4);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00584B94(int param_1,int param_2);
extern int func_0058E0D4(int param_1);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int DAT_0047749c;
extern int *DAT_004774a0;
extern int *DAT_004774a4;
extern int DAT_004774a8;
extern char s_SE_S_ITEM_SELECT_CLOSE_DECIDE_004774ac[];
extern char s_SE_S_ITEM_SELECT_DISAPPEAR_004774cc[];

// USA 00477088 <- EU 00477060 (Ghidra, non-matching)
// GLOBAL DAT_0047749c int
// GLOBAL DAT_004774a0 int *
// GLOBAL DAT_004774a4 int *
// GLOBAL DAT_004774a8 int
// GLOBAL s_SE_S_ITEM_SELECT_CLOSE_DECIDE_004774ac string
// GLOBAL s_SE_S_ITEM_SELECT_DISAPPEAR_004774cc string

undefined4 func_00477088(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(char * *)(albw_frame + 0xc))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  if (*(char *)(param_1 + 0xd0) != '\x01' && *(char *)(param_1 + 0xd0) != '\x03') {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar5 = (uint)*(short *)(DAT_0047749c + param_1);
  if (-1 < (int)uVar5) {
    param_4 = *(uint *)(iVar7 + 8);
    if (uVar5 < param_4) {
      iVar10 = *(int *)(iVar7 + 0xc) + uVar5 * 0x38;
    }
    else {
      iVar10 = *(int *)(iVar7 + 0xc);
    }
    param_3 = (uint)*(byte *)(iVar10 + 0x35);
    if (param_3 != 0) {
      if (uVar5 < param_4) {
        iVar7 = *(int *)(iVar7 + 0xc) + uVar5 * 0x38;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0xc);
      }
      if (*(float *)(iVar7 + 0x18) != *(float *)(iVar7 + 0x14)) {
        return 0;
      }
    }
  }
  if (*(char *)(param_1 + 0x308) < '\0') {
    if ((*(char *)(param_1 + 0x309) < '\0') || (bVar2 = func_00584B94(*DAT_004774a0,0x6d), !bVar2))
    {
      uVar3 = 0x10;
    }
    else {
      uVar3 = *(undefined1 *)(param_1 + 0x309);
    }
    *(undefined1 *)(param_1 + 0x308) = uVar3;
    func_0047A260(param_1,(int)*(char *)(param_1 + 0x308),param_3,param_4);
    piVar8 = DAT_004774a4;
    if (((uint)(int)*(char *)(param_1 + 0x308) < 0x14) &&
       (iVar7 = *(int *)(param_1 + 0x168 + *(char *)(param_1 + 0x308) * 4),
       *(char *)(iVar7 + 0xe1) != '\0')) {
      cVar1 = *(char *)(iVar7 + 0xe0);
      *(undefined1 *)(param_1 + 0x114) = 1;
      *(char *)(param_1 + 0x115) = cVar1;
      *(undefined1 *)(param_1 + 0x116) = 0;
      sVar4 = func_0058E0D4(*piVar8);
      if (sVar4 == 0) {
        func_0051BF44(*piVar8,(int)cVar1,0,param_4);
      }
      else {
        func_0051B670(*piVar8);
      }
    }
  }
  iVar7 = DAT_004774a8;
  iVar10 = 0;
  if (*(char *)(*(int *)(param_1 + 0x208) + 0x24) == '\x03') {
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x06');
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x1fc);
    if (*(char *)(uVar5 + 0x5e) == '\0') {
      if (*(char *)(uVar5 + 0x5f) == '\0') {
        bVar2 = *(char *)(uVar5 + 0xd) != '\x03';
        if (!bVar2) {
          uVar5 = (uint)*(byte *)(uVar5 + 0xe);
        }
        if ((bVar2 || uVar5 != 3) ||
           ((*(char *)(param_1 + 0x30d) == '\0' &&
            ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 4) == 0)))) {
          if ((*(char *)(*(int *)(param_1 + 500) + 0x3c) == '\t') &&
             (-1 < *(int *)(*(int *)(param_1 + 500) + 0x38))) {
            *(undefined1 *)(param_1 + 0x30a) = 0x14;
            func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x01');
          }
          else if ((*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) == '\t') &&
                  (-1 < *(int *)(*(int *)(param_1 + 0x1f8) + 0x38))) {
            *(undefined1 *)(param_1 + 0x30a) = 0x15;
            func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x01');
          }
          else {
            uVar5 = 0;
            do {
              piVar8 = (int *)(param_1 + 0x168);
              if (uVar5 < 0x14) {
                piVar8 = piVar8 + uVar5;
              }
              if ((*(char *)(*piVar8 + 0x3c) == '\x01') && (-1 < *(int *)(*piVar8 + 0x38))) {
                *(char *)(param_1 + 0x30a) = (char)uVar5;
                *(char *)(param_1 + 0x309) = (char)uVar5;
                iVar6 = (int)*(char *)(param_1 + 0xf4);
                if (iVar6 != -1) {
                  iVar9 = *(int *)(param_1 + 0x110);
                  pcVar11 = *(code **)(iVar9 + iVar6 * 8);
                  if ((pcVar11 != (code *)0x0) ||
                     ((uVar5 = *(uint *)(iVar9 + iVar6 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0))))
                  {
                    uVar5 = *(uint *)(iVar9 + iVar6 * 8 + 4);
                    piVar8 = (int *)(*(int *)(param_1 + 0x104) + ((int)uVar5 >> 1));
                    if ((uVar5 & 1) != 0) {
                      pcVar11 = *(code **)(pcVar11 + *piVar8);
                    }
                    (*pcVar11)(piVar8,1);
                  }
                }
                uVar3 = *(undefined1 *)(param_1 + 0xf4);
                *(undefined1 *)(param_1 + 0xf4) = 1;
                *(undefined4 *)(param_1 + 0xf0) = 0;
                *(undefined1 *)(param_1 + 0xf5) = uVar3;
                if (*(int *)(param_1 + 0x100) != 0) {
                  if (*(uint *)(param_1 + 0xf8) < 2) {
                    piVar8 = *(int **)(param_1 + 0xfc);
                  }
                  else {
                    piVar8 = (int *)(*(int *)(param_1 + 0xfc) + 0x24);
                  }
                  (**(code **)(*piVar8 + 8))(piVar8);
                  local_84 = (char *)piVar8[1];
                  local_88 = iVar7;
                  func_0010BEB4(*(int *)(param_1 + 0x100),&local_88);
                }
                iVar6 = (int)*(char *)(param_1 + 0xf4);
                iVar7 = *(int *)(param_1 + 0x108);
                pcVar11 = *(code **)(iVar7 + iVar6 * 8);
                if ((pcVar11 != (code *)0x0) ||
                   ((uVar5 = *(uint *)(iVar7 + iVar6 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
                  uVar5 = *(uint *)(iVar7 + iVar6 * 8 + 4);
                  if ((uVar5 & 1) != 0) {
                    pcVar11 = *(code **)(pcVar11 +
                                        *(int *)(*(int *)(param_1 + 0x104) + ((int)uVar5 >> 1)));
                  }
                  (*pcVar11)();
                }
                break;
              }
              uVar5 = uVar5 + 1;
            } while ((int)uVar5 < 0x14);
          }
          if ((*(char *)(param_1 + 0xf4) == '\0') &&
             (uVar5 = func_004778C8(param_1), -1 < (int)uVar5)) {
            iVar10 = 1;
          }
        }
        else {
          local_24 = s_SE_S_ITEM_SELECT_CLOSE_DECIDE_004774ac;
          local_28 = DAT_004774a8;
          func_00533078(*(undefined4 *)(param_1 + 0x1fc),&local_28,0);
          func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\0');
          func_0010A464(&local_88);
          local_24 = s_SE_S_ITEM_SELECT_DISAPPEAR_004774cc;
          local_28 = iVar7;
          func_00533078(param_1,&local_28,&local_88);
          func_0025B7B0((int)&local_88,10);
          func_0025B874(&local_88);
        }
        goto LAB_00477510;
      }
      func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\0');
      local_84 = s_SE_S_ITEM_SELECT_DISAPPEAR_004774cc;
      iVar6 = param_1;
    }
    else {
      local_84 = s_SE_S_ITEM_SELECT_CLOSE_DECIDE_004774ac;
      iVar6 = *(int *)(param_1 + 0x1fc);
    }
    local_88 = iVar7;
    func_00533078(iVar6,&local_88,0);
  }
LAB_00477510:
  return func_00477CE4(param_1,iVar10);
}

