#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0066B580(undefined4 *param_1,undefined1 param_2);
extern int DAT_00509f74;
extern char s_SE_LavaUp_PRE_00509f64[];

// USA 00509F30 <- EU 00509F08 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00509f74 int
// GLOBAL s_SE_LavaUp_PRE_00509f64 string

undefined4 func_00509F30(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0x468) == '\0') {
    iVar1 = 0x50;
  }
  else {
    iVar1 = 0x28;
  }
  if (iVar1 <= *(int *)(param_1 + 0x418)) {
    func_0066B580((undefined4 *)(param_1 + 0x418),2);
  }
  local_c = s_SE_LavaUp_PRE_00509f64;
  local_10 = DAT_00509f74;
  return func_001507D8(param_1,&local_10,0);
}

