#include "ghidra_types.h"

extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0055696C(int param_1,int param_2);
extern int func_00584B94(int param_1,int param_2);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern float DAT_00479bd0;
extern float DAT_00479bd4;
extern int DAT_00479bd8;
extern int *DAT_00479c10;
extern int *DAT_00479c14;
extern char s_SE_S_ITEM_SET_BUTTON_00479bf8[];
extern char s_SE_S_ITEM_SET_BUTTON_SAME_00479bdc[];

// USA 00479A74 <- EU 00479A4C (Ghidra, non-matching)
// GLOBAL DAT_00479bd0 float
// GLOBAL DAT_00479bd4 float
// GLOBAL DAT_00479bd8 int
// GLOBAL DAT_00479c10 int *
// GLOBAL DAT_00479c14 int *
// GLOBAL s_SE_S_ITEM_SET_BUTTON_00479bf8 string
// GLOBAL s_SE_S_ITEM_SET_BUTTON_SAME_00479bdc string

undefined4 func_00479A74(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar3 = DAT_00479bd8;
  iVar2 = *(int *)(param_1 + 0x200);
  if (*(char *)(param_1 + 0x308) == '\x14') {
    iVar4 = *(int *)(**(int **)(*(int *)(param_1 + 500) + 0x1c) + 0x10);
    fVar5 = *(float *)(iVar4 + 100) + DAT_00479bd4;
    *(float *)(iVar2 + 0xac) = *(float *)(iVar4 + 0x54) - DAT_00479bd0;
    *(float *)(iVar2 + 0xb0) = fVar5;
    func_0066BF2C((undefined4 *)(iVar2 + 0x20),'\x03');
    local_18 = iVar3;
    if (*(char *)(*(int *)(param_1 + 500) + 0xe4) != *(char *)(*(int *)(param_1 + 0x200) + 0xb4)) {
      local_14 = s_SE_S_ITEM_SET_BUTTON_00479bf8;
      return func_00533078(*(undefined4 *)(param_1 + 500),&local_18,0);
    }
    local_14 = s_SE_S_ITEM_SET_BUTTON_SAME_00479bdc;
    func_00533078(*(undefined4 *)(param_1 + 500),&local_18,0);
  }
  else {
    iVar4 = *(int *)(**(int **)(*(int *)(param_1 + 0x1f8) + 0x1c) + 0x10);
    fVar5 = *(float *)(iVar4 + 100) + DAT_00479bd4;
    *(float *)(iVar2 + 0xac) = *(float *)(iVar4 + 0x54) - DAT_00479bd0;
    *(float *)(iVar2 + 0xb0) = fVar5;
    func_0066BF2C((undefined4 *)(iVar2 + 0x20),'\x03');
    local_18 = iVar3;
    if (*(char *)(*(int *)(param_1 + 0x1f8) + 0xe4) == *(char *)(*(int *)(param_1 + 0x200) + 0xb4))
    {
      local_14 = s_SE_S_ITEM_SET_BUTTON_SAME_00479bdc;
      func_00533078(*(undefined4 *)(param_1 + 0x1f8),&local_18,0);
    }
    else {
      local_14 = s_SE_S_ITEM_SET_BUTTON_00479bf8;
      func_00533078(*(undefined4 *)(param_1 + 0x1f8),&local_18,0);
    }
    bVar1 = func_00584B94(*DAT_00479c10,0x6d);
    if ((!bVar1) && (*DAT_00479c14 != 0)) {
      iVar3 = func_0055696C(*DAT_00479c14,0xc);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x311) = 1;
      }
      return 0;
    }
  }
  return 0;
}

