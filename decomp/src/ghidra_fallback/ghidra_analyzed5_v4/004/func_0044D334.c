#include "ghidra_types.h"

extern int func_0044A198(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0044d3b0;
extern char s_SE_S_MAP_PIN_BACK_BACE_0044d398[];

// USA 0044D334 <- EU 0044D30C (Ghidra, non-matching)
// GLOBAL DAT_0044d3b0 int
// GLOBAL s_SE_S_MAP_PIN_BACK_BACE_0044d398 string

undefined4 func_0044D334(int param_1)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  uVar1 = (uint)*(short *)(param_1 + 0x76);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (-1 < (int)uVar1) {
    if (uVar1 < *(uint *)(iVar2 + 8)) {
      iVar2 = *(int *)(iVar2 + 0xc) + uVar1 * 0x38;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    if ((*(char *)(iVar2 + 0x35) != '\0') && (*(int *)(param_1 + 0xb0) < 0x23)) {
      return 0;
    }
  }
  local_c = s_SE_S_MAP_PIN_BACK_BACE_0044d398;
  local_10 = DAT_0044d3b0;
  func_00533078(param_1,&local_10,0);
  if (*(int *)(param_1 + 300) != 0) {
    func_0044A198(*(int *)(param_1 + 300));
  }
  return func_0066CD9C((undefined4 *)(param_1 + 0xb0),0);
}

