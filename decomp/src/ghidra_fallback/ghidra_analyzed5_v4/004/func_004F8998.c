#include "ghidra_types.h"

extern int func_002AD0E4(undefined4 *param_1,int param_2,float *param_3,undefined1 param_4,int param_5);
extern int func_004F8DF4(int *param_1,uint param_2);
extern int func_004F8EA8(int *param_1,uint param_2,float *param_3);
extern int func_004FB4FC(int *param_1,int *param_2);
extern int func_00542B24(int param_1);
extern int func_005568E8(int param_1);
extern int func_005569C8(int param_1);
extern int *DAT_004f8dc0;
extern int *DAT_004f8dc4;
extern int *DAT_004f8dc8;

// USA 004F8998 <- EU 004F8970 (Ghidra, non-matching)
// GLOBAL DAT_004f8dc0 int *
// GLOBAL DAT_004f8dc4 int *
// GLOBAL DAT_004f8dc8 int *

/* WARNING: Type propagation algorithm not settling */

undefined4 func_004F8998(int *param_1,int param_2,char *param_3)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 ((char *)(albw_frame + 0xc))
  uVar5 = param_1[0x168];
  if (param_2 == 0) {
    param_1[0x168] = uVar5 & 0xdfffffff;
  }
  uVar5 = (uVar5 & 0x20000000) >> 0x1d;
  if ((param_1[0x167] & 0x4000U) != 0) {
    return 0;
  }
  if (param_2 == 0) {
    if (*(char *)(param_1[0x144] + 4) != '\0') {
      return 1;
    }
  }
  else {
    uVar6 = func_00542B24(param_1[0x144]);
    if (uVar6 == 0) {
      return 0;
    }
  }
  if (param_3 == (char *)0x0) {
    param_3 = local_24;
  }
  local_24[0] = '\0';
  if (((param_2 == 0) && (uVar5 != 0)) &&
     (iVar7 = func_002AD0E4((undefined4 *)param_1[0x144],1,(float *)(param_1 + 0x1e3),0,0),
     iVar7 != 0)) goto LAB_004f8da4;
  puVar8 = (undefined4 *)param_1[0x144];
  if (*(char *)(puVar8 + 1) == '\0') {
    if ((char)param_1[0x212] != '\0') goto LAB_004f8b74;
    if ((char)param_1[0x1ff] == '\0' || (char)param_1[0x1ff] == '\x05') {
      uVar6 = param_1[0x168];
      if ((uVar6 & 0x20) == 0) {
        if ((uVar6 & 0x40) == 0) {
          if (((param_1[0x169] & 0x400U) == 0) || ((uVar6 & 0x400) != 0)) {
            if (*(char *)((int)param_1 + 0x89d) == '\0') {
              bVar4 = (param_1[0x167] & 0x80000000U) == 0;
              if (bVar4) {
                uVar5 = (uint)*(byte *)((int)param_1 + 0x8b5);
              }
              if (((bVar4 && uVar5 == 0) || ((param_1[0x167] & 0x10U) == 0)) ||
                 (((uVar6 & 0x400000) != 0 ||
                  ((*(char *)((int)param_1 + 0x8b5) != '\0' &&
                   ((*(uint *)(*DAT_004f8dc0 + 0x10) & 3) != 0)))))) goto LAB_004f8b74;
              iVar7 = func_002AD0E4(puVar8,1,(float *)0x0,0,0);
            }
            else if (((param_1[0x167] & 0x10U) == 0) || ((uVar6 & 0x400000) != 0)) {
LAB_004f8b74:
              if (((char)param_1[0x1ff] != '\x05') ||
                 (((((*(uint *)(*DAT_004f8dc0 + 0x10) & 1) == 0 ||
                    (iVar7 = *DAT_004f8dc4, iVar7 == 0)) || (*(char *)(iVar7 + 0x18) != '\a')) ||
                  (*(int *)(iVar7 + 0x1c) != 3 && *(int *)(iVar7 + 0x1c) != 2)))) goto LAB_004f8c04;
              iVar7 = func_002AD0E4(puVar8,1,(float *)0x0,0,0);
            }
            else {
              iVar7 = func_002AD0E4(puVar8,1,(float *)0x0,0,1);
            }
          }
          else {
            iVar7 = func_002AD0E4(puVar8,1,(float *)0x0,0,0);
          }
        }
        else {
          iVar7 = func_002AD0E4(puVar8,1,(float *)0x0,1,0);
        }
      }
      else {
        iVar7 = func_002AD0E4(puVar8,1,(float *)0x0,0,0);
      }
      if (iVar7 != 0) goto LAB_004f8da4;
    }
  }
LAB_004f8c04:
  piVar3 = DAT_004f8dc8;
  if (*param_3 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x1db);
    if ((*(short *)(param_1[0x10f] + 0x30) == 0) && (*(int *)param_1[0x10e] != 0)) {
      iVar7 = param_1[0x108];
      sVar2 = 0;
      if (iVar7 != 0) {
        sVar2 = *(short *)(iVar7 + 0x30);
      }
      if (((iVar7 == 0 || sVar2 == 0) || (bVar4 = func_005569C8(*DAT_004f8dc8), bVar4)) ||
         (piVar9 = (int *)param_1[0x10e], iVar7 = func_005568E8(*piVar3), *piVar9 != iVar7))
      goto LAB_004f8c98;
      if ((param_2 == 0) && (bVar4 = func_004F8DF4(param_1,3), bVar4)) {
        *param_3 = '\x01';
      }
    }
    else {
LAB_004f8c98:
      uVar5 = func_004FB4FC(param_1,(int *)param_1[0x10f]);
      if (((uVar5 != 0) && (bVar4 = func_004F8DF4(param_1,uVar5), bVar4)) &&
         (*param_3 = '\x01', param_2 != 0)) {
        return 1;
      }
    }
    if (*param_3 != '\0') goto LAB_004f8d7c;
    if (((bVar1 - 4 < 3) && ((char)param_1[0x1ff] == '\0' || (char)param_1[0x1ff] == '\x05')) &&
       ((param_1[0x168] & 0x200U) != 0)) {
      if (param_2 != 0) {
        return 0;
      }
      bVar4 = func_004F8DF4(param_1,1);
      if (bVar4) {
        *param_3 = '\x01';
      }
    }
    else {
      if (((param_1[0x168] & 2U) == 0) ||
         (bVar4 = func_004F8EA8(param_1,4,(float *)(param_1 + 0x20b)), !bVar4)) goto LAB_004f8d7c;
      param_1[0x168] = param_1[0x168] & 0xfffffffd;
      *param_3 = '\x01';
      if (param_2 != 0) {
        return 1;
      }
    }
  }
  else {
LAB_004f8d7c:
    if (param_2 != 0) {
      return 0;
    }
  }
  if ((param_1[0x168] & 2U) != 0) {
    param_1[0x168] = param_1[0x168] & 0xfffffffd;
  }
  if (*(char *)(param_1[0x144] + 4) == '\0') {
    return 0;
  }
LAB_004f8da4:
  *param_3 = '\x01';
  return 1;
}

