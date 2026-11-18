#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern float DAT_002425d8;
extern int *DAT_002425dc;
extern int DAT_002425ec;
extern undefined4 DAT_002425f0;
extern char s_WaterFall2_002425e0[];

// USA 002424EC <- EU 002424EC (Ghidra, non-matching)
// GLOBAL DAT_002425d8 float
// GLOBAL DAT_002425dc int *
// GLOBAL DAT_002425ec int
// GLOBAL DAT_002425f0 undefined4
// GLOBAL s_WaterFall2_002425e0 string

void func_002424EC(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  fVar1 = DAT_002425d8;
  if (*(int *)(param_1 + 0x418) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x418) + 0x14);
    if (*(float *)(iVar2 + 8) != DAT_002425d8) {
      *(float *)(iVar2 + 8) = DAT_002425d8;
      *(undefined1 *)(iVar2 + 0x26) = 1;
    }
    *(float *)(*(int *)(*(int *)(param_1 + 0x418) + 0x14) + 0x10) = fVar1;
  }
  iVar2 = func_00588BE4(param_1);
  if ((iVar2 == *DAT_002425dc) && (*(int *)(param_1 + 0x40c) != 0)) {
    local_1c = s_WaterFall2_002425e0;
    local_20 = DAT_002425ec;
    uVar3 = func_00584C14(*(int *)(param_1 + 0x40c),&local_20);
    func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar3);
  }
  if (*(int *)(param_1 + 0x41c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x41c) + 0x44) = 1;
  }
  if (*(int *)(param_1 + 0x420) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x420) + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x414) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x414) + 0x14) + 0x10) = DAT_002425f0;
  }
  return;
}

