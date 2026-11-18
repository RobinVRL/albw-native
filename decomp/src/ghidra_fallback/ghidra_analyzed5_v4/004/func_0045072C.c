#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00450794;
extern int *DAT_00450798;
extern int *DAT_0045079c;

// USA 0045072C <- EU 00450704 (Ghidra, non-matching)
// GLOBAL DAT_00450794 int
// GLOBAL DAT_00450798 int *
// GLOBAL DAT_0045079c int *

void func_0045072C(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((int *)(albw_frame + 0x8))
  if ((param_2 + 1U < 4) && (*(int *)(param_1 + 0x148) != 0)) {
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0xffffffff;
    func_005826A4(*DAT_0045079c,local_18,DAT_00450798,(int *)(DAT_00450794 + (param_2 + 1U) * 8));
    if (local_18[0] != 0) {
      (**(code **)(**(int **)(param_1 + 0x148) + 0x60))
                (*(int **)(param_1 + 0x148),local_18[0],0,(uint)(local_18[2] << 0xf) >> 0x10);
    }
  }
  return;
}

