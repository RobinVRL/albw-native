#include "ghidra_types.h"

extern int func_00457510(int param_1);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0054D224(int *param_1);
extern int func_0054D240(short *param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_004589c0;
extern int DAT_004589c4;
extern int *DAT_004589d4;
extern int *DAT_004589f0;
extern int DAT_004589f4;
extern int DAT_00458a10;
extern char s_SE_S_BACK_004589c8[];
extern char s_SE_S_FILE_COPY_DECIDE_004589d8[];
extern char s_SE_S_FILE_DELETE_DECIDE_004589f8[];

// GLOBAL DAT_004589c0 int *
// GLOBAL DAT_004589c4 int
// GLOBAL DAT_004589d4 int *
// GLOBAL DAT_004589f0 int *
// GLOBAL DAT_004589f4 int
// GLOBAL DAT_00458a10 int
// GLOBAL s_SE_S_BACK_004589c8 string
// GLOBAL s_SE_S_FILE_COPY_DECIDE_004589d8 string
// GLOBAL s_SE_S_FILE_DELETE_DECIDE_004589f8 string
// USA 00458690 <- EU 0045866C (Ghidra, function missing from the decomp table)

undefined4 func_00458690(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  func_0045918C(param_1);
  iVar6 = DAT_00458a10;
  piVar2 = DAT_004589d4;
  iVar5 = DAT_004589c4;
  piVar1 = DAT_004589c0;
  if (*(char *)(param_1 + 0x224) != '\0') {
    param_4 = (uint)*(byte *)(param_1 + 0x70) * 0x19;
    uVar4 = *(uint *)(*DAT_004589c0 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar4 & 1) != 0) {
      return func_00459388(param_1);
    }
    if ((uVar4 & 2) != 0) {
      func_004576CC(param_1,7,0,param_4);
      return func_00459388(param_1);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x1dc) + 0x8c) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x1e0) + 0x8c) != '\0') {
      func_00457510(param_1);
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\a');
      pcStack_1c = s_SE_S_BACK_004589c8;
      iStack_20 = iVar5;
      return func_00533078(*(undefined4 *)(param_1 + 0x1e0),&iStack_20,0);
    }
    if (*(char *)(*(int *)(param_1 + 0x1c8) + 0x8c) != '\0') {
      pcStack_1c = s_SE_S_FILE_COPY_DECIDE_004589d8;
      iStack_20 = DAT_004589c4;
      func_00587F74(*DAT_004589d4,&iStack_20,0);
      piVar1 = DAT_004589f0;
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x22c) = 0;
      do {
        if (*(int *)(param_1 + 0x214) != iVar5) {
          iVar6 = iVar5 * DAT_004589f4;
          bVar3 = func_0054D224((int *)(*piVar1 + 0x9cc + iVar6 * 4));
          if ((bVar3) && (bVar3 = func_0054D240((short *)(*piVar1 + iVar6 * 4 + 0x172c)), bVar3)) {
            *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
            *(int *)(param_1 + 0x230) = iVar5;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      if (*(int *)(param_1 + 0x22c) != 2) {
        if (*(int *)(param_1 + 0x22c) != 1) {
          return func_0066D544((undefined4 *)(param_1 + 0x17c),'\x11');
        }
        return func_0066D544((undefined4 *)(param_1 + 0x17c),'\x17');
      }
      return func_0066D544((undefined4 *)(param_1 + 0x17c),'\x14');
    }
    if (*(char *)(*(int *)(param_1 + 0x1cc) + 0x8c) != '\0') {
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\t');
      pcStack_1c = s_SE_S_FILE_DELETE_DECIDE_004589f8;
      iStack_20 = iVar5;
      return func_00587F74(*piVar2,&iStack_20,0);
    }
    if (*(char *)(param_1 + 0x224) != '\0') {
      if (((*(uint *)(*DAT_004589c0 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x220000) != 0
          ) && (uVar4 = *(uint *)(DAT_00458a10 + *(uint *)(param_1 + 0x210) * 0x10 + 4),
               *(uint *)(param_1 + 0x210) != uVar4)) {
        func_004576CC(param_1,uVar4,1,param_4);
      }
      if (((*(uint *)(*piVar1 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x110000) != 0) &&
         (uVar4 = *(uint *)(iVar6 + *(uint *)(param_1 + 0x210) * 0x10),
         *(uint *)(param_1 + 0x210) != uVar4)) {
        func_004576CC(param_1,uVar4,1,param_4);
      }
      if (((*(uint *)(*piVar1 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x880000) != 0) &&
         (uVar4 = *(uint *)(iVar6 + *(uint *)(param_1 + 0x210) * 0x10 + 0xc),
         *(uint *)(param_1 + 0x210) != uVar4)) {
        func_004576CC(param_1,uVar4,1,param_4);
      }
      if (((*(uint *)(*piVar1 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x440000) != 0) &&
         (uVar4 = *(uint *)(iVar6 + *(uint *)(param_1 + 0x210) * 0x10 + 8),
         *(uint *)(param_1 + 0x210) != uVar4)) {
        return func_004576CC(param_1,uVar4,1,param_4);
      }
    }
  }
  else {
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\b');
  }
  return 0;
}

