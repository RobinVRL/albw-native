#include "ghidra_types.h"

extern int func_0026F748(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_00669498(undefined4 *param_1,undefined1 param_2);
extern int *DAT_003afd88;
extern float DAT_003afd8c;

// USA 003AFCD8 <- EU 003AFCB4 (Ghidra, non-matching)
// GLOBAL DAT_003afd88 int *
// GLOBAL DAT_003afd8c float

void func_003AFCD8(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(int *)(albw_frame + 0x14))
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
          *(int *)(*(int *)(param_1 + 4) + 0x8f8) * 0x30;
  local_18 = *(undefined4 *)(iVar1 + 0xc);
  local_14 = *(undefined4 *)(iVar1 + 0x1c);
  local_10 = *(undefined4 *)(iVar1 + 0x2c);
  local_c = *(int *)(*(int *)(param_1 + 4) + 0x2cc);
  func_0026F748(*(int *)(*DAT_003afd88 + 0xf9c),9,&local_c,&local_18);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8dc) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_003afd8c) {
      if (DAT_003afd8c < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_00669498((undefined4 *)(param_1 + 0x1c),0);
  }
  return;
}

