#include "ghidra_types.h"

extern int func_001696F8(int param_1,uint *param_2);
extern float DAT_0050c70c;
extern undefined4 DAT_0050c710;
extern undefined4 DAT_0050c714;

// USA 0050C678 <- EU 0050C650 (Ghidra, non-matching)
// GLOBAL DAT_0050c70c float
// GLOBAL DAT_0050c710 undefined4
// GLOBAL DAT_0050c714 undefined4

undefined4 func_0050C678(int param_1)

{
  int iVar1;
  uint in_lr;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(uint *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x60))
  iVar1 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    return 0;
  }
  if (*(float *)(iVar1 + 0x10) < DAT_0050c70c) {
    if (DAT_0050c70c < *(float *)(iVar1 + 8)) {
      return 0;
    }
  }
  else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
    return 0;
  }
  local_60 = &local_5c;
  local_68[1] = 3;
  local_14 = 10;
  local_10 = 0;
  local_5c = 0;
  local_68[0] = 1;
  local_58 = DAT_0050c70c;
  local_54 = DAT_0050c710;
  local_50 = DAT_0050c714;
  local_48 = in_lr | 0xff;
  local_4c = DAT_0050c710;
  return func_001696F8(*(int *)(param_1 + 0x410),local_68);
}

