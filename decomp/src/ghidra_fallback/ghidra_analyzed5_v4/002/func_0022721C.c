#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern int DAT_002272dc;
extern float DAT_002272e0;
extern char s_SE_Togegoma_PARTS_BOUND_002272c4[];

// USA 0022721C <- EU 0022721C (Ghidra, non-matching)
// GLOBAL DAT_002272dc int
// GLOBAL DAT_002272e0 float
// GLOBAL s_SE_Togegoma_PARTS_BOUND_002272c4 string

void func_0022721C(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (param_1[0x11a] == 0x14) {
    local_14 = s_SE_Togegoma_PARTS_BOUND_002272c4;
    local_18 = DAT_002272dc;
    func_00150A84(param_1,&local_18,0);
  }
  iVar1 = *(int *)(param_1[0x1a3] + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_002272e0) {
      if (DAT_002272e0 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_0065E774(param_1 + 0x11a,4);
  }
  return;
}

