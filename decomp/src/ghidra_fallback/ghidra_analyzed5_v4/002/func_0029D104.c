#include "ghidra_types.h"

extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_006600C4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0029d134;
extern int DAT_0029d138;
extern int *DAT_0029d13c;

// USA 0029D104 <- EU 0029D0E0 (Ghidra, non-matching)
// GLOBAL DAT_0029d134 int
// GLOBAL DAT_0029d138 int
// GLOBAL DAT_0029d13c int *

undefined8 func_0029D104(int param_1)

{
  undefined8 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (*(char *)(*(int *)(param_1 + 0xec) + 0x4c) == '\0') {
    func_006600C4((undefined4 *)(*(int *)(param_1 + 0xec) + 0x48),1);
  }
  local_c = *(undefined4 *)(DAT_0029d134 + 4);
  local_10 = DAT_0029d138;
  uVar1 = func_00259354(*DAT_0029d13c,&local_10,0x3c);
  return uVar1;
}

