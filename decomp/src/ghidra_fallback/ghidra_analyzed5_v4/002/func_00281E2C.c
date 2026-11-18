#include "ghidra_types.h"

extern int func_001E6A6C(int param_1,int *param_2);
extern int func_001E6AB4(int param_1);
extern int func_004C6D7C(int param_1,float *param_2,undefined4 param_3);
extern float DAT_00281ee0;
extern int *DAT_00281ee4;
extern int *DAT_00281ee8;

// USA 00281E2C <- EU 00281E54 (Ghidra, non-matching)
// GLOBAL DAT_00281ee0 float
// GLOBAL DAT_00281ee4 int *
// GLOBAL DAT_00281ee8 int *

void func_00281E2C(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_001E6AB4(param_1);
  if (*(char *)(param_1 + 0x990) != '\0') {
    local_20 = *(float *)(param_1 + 0x3d0);
    uStack_1c = *(undefined4 *)(param_1 + 0x3d4);
    local_18 = *(float *)(param_1 + 0x3d8) + DAT_00281ee0;
    if ((*DAT_00281ee4 != 0) &&
       (iVar1 = func_004C6D7C(*DAT_00281ee4,&local_20,0x80000000), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x990) = 0;
    }
  }
  if ((*(char *)(param_1 + 0x991) != '\0') &&
     (iVar1 = func_001E6A6C(param_1,DAT_00281ee8), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x991) = 0;
  }
  return;
}

