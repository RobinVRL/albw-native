#include "ghidra_types.h"

extern int func_0026F748(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int *DAT_0025d86c;

// USA 0025D7DC <- EU 0025D804 (Ghidra, non-matching)
// GLOBAL DAT_0025d86c int *

undefined4 func_0025D7DC(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0x418) == '\0') {
    return 0;
  }
  local_18 = *(int *)(param_1 + 0x2cc);
  iVar1 = *(int *)(*DAT_0025d86c + 4000);
  func_0026FC20(iVar1,0xc,&local_18,(undefined4 *)(param_1 + 0x40c));
  local_18 = *(int *)(param_1 + 0x2cc);
  return func_0026F748(iVar1,0xc,&local_18,(undefined4 *)(param_1 + 0x40c));
}

