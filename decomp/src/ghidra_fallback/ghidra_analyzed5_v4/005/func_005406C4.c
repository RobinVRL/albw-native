#include "ghidra_types.h"

extern int func_00537DB4(int param_1,int *param_2);
extern int DAT_00540754;
extern int DAT_00540758;

// USA 005406C4 <- EU 0054069C (Ghidra, non-matching)
// GLOBAL DAT_00540754 int
// GLOBAL DAT_00540758 int

undefined4 func_005406C4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar2 = *(int *)(iVar1 + 0x20);
    for (iVar3 = *(int *)(iVar1 + 0x18) - iVar2; iVar3 != (iVar1 + 0x14) - *(int *)(iVar1 + 0x20);
        iVar3 = *(int *)(iVar3 + iVar2 + 4) - iVar2) {
      if ((*(uint *)(iVar3 + 0x38) & 4) != 0) {
        return 0;
      }
      if ((*(uint *)(iVar3 + 0x38) & 8) != 0) {
        uStack_c = *(undefined4 *)(DAT_00540754 + 0x10);
        iStack_10 = DAT_00540758;
        iVar1 = func_00537DB4(iVar3,&iStack_10);
        if (iVar1 == 0) {
          return 0;
        }
        if (0x77 < *(uint *)(iVar3 + 0x4c)) {
          return 1;
        }
        return 0;
      }
    }
  }
  return 1;
}

