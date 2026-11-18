#include "ghidra_types.h"

extern int func_00448700(int param_1);
extern int func_0044D9D4(int param_1,float *param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined DAT_0044e0ac;
extern int DAT_0044e0c4;
extern char s_ASE_S_MAP_PIN_RETURN_0044e0af[];
extern undefined4 _DAT_0044e0ac;

// USA 0044E054 <- EU 0044E02C (Ghidra, non-matching)
// GLOBAL DAT_0044e0ac undefined
// GLOBAL DAT_0044e0c4 int
// GLOBAL s_ASE_S_MAP_PIN_RETURN_0044e0af string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0044E054(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe4);
  func_0044D9D4(param_1,(float *)(param_1 + 0xe0));
  local_10 = DAT_0044e0c4;
  uVar1 = _DAT_0044e0ac;
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  local_c = s_ASE_S_MAP_PIN_RETURN_0044e0af + 1;
  func_00533078(param_1,&local_10,0);
  if (*(int *)(param_1 + 300) != 0) {
    func_00448700(*(int *)(param_1 + 300));
  }
  return;
}

