#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int DAT_0020793c;
extern char s_SE_EN_FAINT_00207930[];

// USA 002078D0 <- EU 002078D0 (Ghidra, non-matching)
// GLOBAL DAT_0020793c int
// GLOBAL s_SE_EN_FAINT_00207930 string

void func_002078D0(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_0020793c;
  local_c = s_SE_EN_FAINT_00207930;
  func_001507D8(param_1,&local_10,0);
  uVar1 = *(uint *)(param_1 + 0xc6c);
  if (uVar1 < *(uint *)(param_1 + 0xc70)) {
    uVar1 = uVar1 + 1;
    *(uint *)(param_1 + 0xc6c) = uVar1;
  }
  if (*(uint *)(param_1 + 0xc70) <= uVar1) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),0x2a);
  }
  return;
}

