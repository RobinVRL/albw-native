#include "ghidra_types.h"

extern int func_00549C1C(int param_1,undefined4 *param_2);
extern undefined4 DAT_00522c44;

// USA 00522BE4 <- EU 00522BBC (Ghidra, non-matching)
// GLOBAL DAT_00522c44 undefined4

undefined4 func_00522BE4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int unaff_r4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  iVar2 = *(int *)(param_1 + 0xf74);
  if (iVar2 != 0) {
    unaff_r4 = *(int *)(iVar2 + 0x20);
  }
  if ((iVar2 != 0 && unaff_r4 != 0) && (*(int *)(unaff_r4 + 0x154) == 1)) {
    if (*(int *)(unaff_r4 + 0xf8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(unaff_r4 + 0x100);
    }
    local_10 = DAT_00522c44;
    bVar1 = func_00549C1C(iVar2,&local_10);
    if (bVar1) {
      *(undefined4 *)(param_2 + 0x58) = local_10;
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(unaff_r4 + 0x58);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(unaff_r4 + 0x5c);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(unaff_r4 + 0x60);
      return 1;
    }
  }
  return 0;
}

