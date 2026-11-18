#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern undefined4 DAT_002424d0;
extern int *DAT_002424d4;
extern int DAT_002424e4;
extern undefined4 DAT_002424e8;
extern char s_WaterFall2_002424d8[];

// USA 002423F4 <- EU 002423F4 (Ghidra, non-matching)
// GLOBAL DAT_002424d0 undefined4
// GLOBAL DAT_002424d4 int *
// GLOBAL DAT_002424e4 int
// GLOBAL DAT_002424e8 undefined4
// GLOBAL s_WaterFall2_002424d8 string

void func_002423F4(int param_1)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x418) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x418) + 0x14);
    if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
      *(float *)(iVar2 + 8) = *(float *)(iVar2 + 0x14);
      *(undefined1 *)(iVar2 + 0x26) = 1;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x418) + 0x14) + 0x10) = DAT_002424d0;
  }
  iVar2 = func_00588BE4(param_1);
  if (iVar2 == *DAT_002424d4) {
    local_1c = s_WaterFall2_002424d8;
    local_20 = DAT_002424e4;
    uVar1 = func_00584C14(*(int *)(param_1 + 0x40c),&local_20);
    func_004CEA18(*(int *)(param_1 + 0x40c),1,uVar1);
  }
  if (*(int *)(param_1 + 0x41c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x41c) + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x420) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x44) = 1;
  }
  if (*(int *)(param_1 + 0x414) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x414) + 0x14) + 0x10) = DAT_002424e8;
  }
  return;
}

