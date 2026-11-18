#include "ghidra_types.h"

extern int func_00537DB4(int param_1,int *param_2);
extern int DAT_00540754;
extern int DAT_00540758;

// USA 005406CC <- EU 005406A4 (Ghidra, non-matching)
// GLOBAL DAT_00540754 int
// GLOBAL DAT_00540758 int

undefined4 func_005406CC(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x18) - iVar1;
        iVar2 != (param_1 + 0x14) - *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(iVar2 + iVar1 + 4) - iVar1) {
      if ((*(uint *)(iVar2 + 0x38) & 4) != 0) {
        return 0;
      }
      if ((*(uint *)(iVar2 + 0x38) & 8) != 0) {
        local_c = *(undefined4 *)(DAT_00540754 + 0x10);
        local_10 = DAT_00540758;
        iVar1 = func_00537DB4(iVar2,&local_10);
        if (iVar1 == 0) {
          return 0;
        }
        if (0x77 < *(uint *)(iVar2 + 0x4c)) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 1;
}

