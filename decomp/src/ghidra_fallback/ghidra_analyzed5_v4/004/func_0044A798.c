#include "ghidra_types.h"

extern int func_00446668(int param_1);
extern int func_00446828(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_00449FD0(int param_1,int *param_2);
extern int func_0051B7D8(int param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0058DEA4(int param_1);
extern int *DAT_0044a998;
extern int *DAT_0044a99c;
extern int DAT_0044a9a0;
extern char s_SE_S_MAP_CHANGE_END_0044a9a4[];
extern char s_SE_S_MAP_CHANGE_START_0044a9b8[];

// USA 0044A798 <- EU 0044A770 (Ghidra, non-matching)
// GLOBAL DAT_0044a998 int *
// GLOBAL DAT_0044a99c int *
// GLOBAL DAT_0044a9a0 int
// GLOBAL s_SE_S_MAP_CHANGE_END_0044a9a4 string
// GLOBAL s_SE_S_MAP_CHANGE_START_0044a9b8 string

undefined4 func_0044A798(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar4 = DAT_0044a9a0;
  piVar3 = DAT_0044a99c;
  piVar2 = DAT_0044a998;
  if (*(char *)(*(int *)(param_1 + 0x214) + 0x54) == '\x01') {
    if (*(char *)(param_1 + 0x244) != '\0') {
      return 1;
    }
    func_00446828(param_1);
    func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),1);
    iVar6 = 1;
    func_00447E28(param_1,0,*(int **)(param_1 + 0x240),1);
    *(undefined1 *)(param_1 + 0x294) = 1;
    local_24 = s_SE_S_MAP_CHANGE_START_0044a9b8;
    uVar5 = 0;
    local_28 = iVar4;
    func_00533078(param_1,&local_28,0);
    *(undefined1 *)(param_1 + 0x244) = 1;
    func_00446668(param_1);
    func_00449FD0(param_1,(int *)0x0);
    iVar4 = func_0058DEA4(*piVar3);
    if (iVar4 == 0) {
      return 1;
    }
    cVar1 = *(char *)(*piVar2 + 0x18);
    if (cVar1 != '\n') {
      if (cVar1 < '\v') {
        if ((cVar1 != '\0' && cVar1 != '\x02') && (cVar1 != '\x04' && cVar1 != '\t')) {
LAB_0044a920:
          func_0051B7D8(*piVar3,1,uVar5,iVar6);
          return 1;
        }
      }
      else if ((cVar1 != '\v' && cVar1 != '\f') && (cVar1 != '\x12' && cVar1 != '\x16'))
      goto LAB_0044a920;
    }
    func_0051B7D8(*piVar3,0,uVar5,iVar6);
    return 1;
  }
  if (*(char *)(param_1 + 0x244) == '\0') {
    return 0;
  }
  func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
  iVar6 = 0;
  func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
  *(undefined1 *)(param_1 + 0x294) = 1;
  local_24 = s_SE_S_MAP_CHANGE_END_0044a9a4;
  uVar5 = 0;
  local_28 = iVar4;
  func_00533078(param_1,&local_28,0);
  *(undefined1 *)(param_1 + 0x244) = 0;
  func_00446668(param_1);
  func_00449FD0(param_1,(int *)0x0);
  iVar4 = func_0058DEA4(*piVar3);
  if (iVar4 == 0) {
    return 0;
  }
  cVar1 = *(char *)(*piVar2 + 0x18);
  if (cVar1 != '\n') {
    if (cVar1 < '\v') {
      if ((cVar1 != '\0' && cVar1 != '\x02') && (cVar1 != '\x04' && cVar1 != '\t')) {
LAB_0044a850:
        func_0051B7D8(*piVar3,0,uVar5,iVar6);
        return 0;
      }
    }
    else if ((cVar1 != '\v' && cVar1 != '\f') && (cVar1 != '\x12' && cVar1 != '\x16'))
    goto LAB_0044a850;
  }
  func_0051B7D8(*piVar3,1,uVar5,iVar6);
  return 0;
}

