#include "ghidra_types.h"

extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0045FDF0(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_0047a110;
extern int DAT_0047a134;
extern char s_SE_S_ITEM_SHORT_CUT_DISAPPEAR_0047a114[];

// USA 0047A098 <- EU 0047A070 (Ghidra, non-matching)
// GLOBAL DAT_0047a110 int *
// GLOBAL DAT_0047a134 int
// GLOBAL s_SE_S_ITEM_SHORT_CUT_DISAPPEAR_0047a114 string

void func_0047A098(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  uVar1 = (int)*(char *)(*(int *)(param_1 + 500) + 0x3c) - 1;
  if (uVar1 < 5) {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 500) + 0x38),'\x06');
    uVar1 = extraout_r1;
  }
  func_001B6C2C(*(int **)(param_1 + 500),uVar1,param_3,param_4);
  uVar1 = (int)*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) - 1;
  if (uVar1 < 5) {
    func_0066BFFC((undefined4 *)(*(int *)(param_1 + 0x1f8) + 0x38),'\x06');
    uVar1 = extraout_r1_00;
  }
  func_001B6C2C(*(int **)(param_1 + 0x1f8),uVar1,param_3,param_4);
  iVar2 = *(int *)(*DAT_0047a110 + 0xe8);
  if (iVar2 != 0) {
    func_0045FDF0(iVar2);
    local_c = s_SE_S_ITEM_SHORT_CUT_DISAPPEAR_0047a114;
    local_10 = DAT_0047a134;
    func_00533078(iVar2,&local_10,0);
  }
  return;
}

