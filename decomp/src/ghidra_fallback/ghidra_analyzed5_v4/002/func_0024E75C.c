#include "ghidra_types.h"

extern int func_0065F92C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0024e814;
extern undefined4 *DAT_0024e818;
extern undefined4 DAT_0024e81c;
extern undefined4 DAT_0024e820;
extern undefined4 DAT_0024e824;
extern undefined4 *DAT_0024e828;

// USA 0024E75C <- EU 0024E75C (Ghidra, non-matching)
// GLOBAL DAT_0024e814 undefined4
// GLOBAL DAT_0024e818 undefined4 *
// GLOBAL DAT_0024e81c undefined4
// GLOBAL DAT_0024e820 undefined4
// GLOBAL DAT_0024e824 undefined4
// GLOBAL DAT_0024e828 undefined4 *

void func_0024E75C(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_10 (*(undefined2 *)(albw_frame + 0x30))
  if (param_2 != 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x420) == '\0') && (*(char *)(param_1 + 0x708) != '\0')) {
    local_38 = DAT_0024e814;
    local_34 = *DAT_0024e818;
    local_30 = DAT_0024e818[1];
    local_2c = DAT_0024e81c;
    uStack_28 = DAT_0024e820;
    uStack_24 = DAT_0024e824;
    local_20 = 0;
    local_1c = *DAT_0024e828;
    uStack_18 = DAT_0024e828[1];
    uStack_14 = DAT_0024e828[2];
    local_10 = 0x3c;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x418) + 0x34))
                      (*(int **)(param_1 + 0x418),param_1 + 0x3d0,&local_38,0);
    if (iVar1 != 0) {
      func_0065F92C((undefined4 *)(param_1 + 0x41c),1);
    }
  }
  return;
}

