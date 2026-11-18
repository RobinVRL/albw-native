// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00166C00(int param_1,int param_2);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_005228A4(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int *DAT_00437be4;
extern int DAT_00437be8;
extern int *DAT_00437c20;
extern char s_SE_S_COLLECT_CLOSE_DECIDE_00437bec[];
extern char s_SE_S_COLLECT_DISAPPEAR_00437c08[];

// USA 00437A78 <- EU 00437A58 (Ghidra, non-matching)
// GLOBAL DAT_00437be4 int *
// GLOBAL DAT_00437be8 int
// GLOBAL DAT_00437c20 int *
// GLOBAL s_SE_S_COLLECT_CLOSE_DECIDE_00437bec string
// GLOBAL s_SE_S_COLLECT_DISAPPEAR_00437c08 string

undefined4 func_00437A78(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  piVar1 = DAT_00437be4;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    iVar2 = *(int *)(param_1 + 0x78);
    uVar4 = *(uint *)(iVar2 + 0x14c);
    bVar5 = uVar4 == 2;
    if (bVar5) {
      uVar4 = (uint)*(byte *)(iVar2 + 0xd);
    }
    bVar6 = bVar5 && uVar4 == 0;
    if (bVar5 && uVar4 == 0) {
      bVar6 = *(char *)(iVar2 + 0xe) == '\0';
    }
    if (bVar6) {
      *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 2;
      func_00166C00(*piVar1,1);
      *(undefined1 *)(*(int *)(param_1 + 0x78) + 0xe) = 1;
    }
    iVar2 = DAT_00437be8;
    if (*(char *)(*(int *)(param_1 + 0x74) + 0x5e) == '\0') {
      if (*(char *)(*(int *)(param_1 + 0x74) + 0x5f) != '\0') {
        local_7c = s_SE_S_COLLECT_DISAPPEAR_00437c08;
        local_80 = DAT_00437be8;
        func_00533078(param_1,&local_80,0);
        *(undefined1 *)(param_1 + 0x7c) = 1;
        return 0;
      }
    }
    else {
      local_7c = s_SE_S_COLLECT_CLOSE_DECIDE_00437bec;
      local_80 = DAT_00437be8;
      func_00533078(*(undefined4 *)(param_1 + 0x74),&local_80,0);
    }
    uVar4 = *(uint *)(param_1 + 0x78);
    bVar5 = *(char *)(uVar4 + 0xd) == '\x03';
    if (bVar5) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if (((bVar5 && uVar4 == 3) && (iVar3 = func_005228A4(*piVar1,param_1), iVar3 != 0)) &&
       ((*(uint *)(*DAT_00437c20 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 2) != 0)) {
      local_1c = s_SE_S_COLLECT_CLOSE_DECIDE_00437bec;
      local_20 = iVar2;
      func_00533078(*(undefined4 *)(param_1 + 0x74),&local_20,0);
      func_0010A464(&local_80);
      local_1c = s_SE_S_COLLECT_DISAPPEAR_00437c08;
      local_20 = iVar2;
      func_00533078(param_1,&local_20,&local_80);
      func_0025B7B0((int)&local_80,10);
      *(undefined1 *)(param_1 + 0x7c) = 1;
      return func_0025B874(&local_80);
    }
  }
  return 0;
}

