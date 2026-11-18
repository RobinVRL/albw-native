#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_00556ED0(int param_1);
extern int func_0065CFDC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001e7894;
extern int *DAT_001e7898;
extern int *DAT_001e789c;

// USA 001E77E8 <- EU 001E77E8 (Ghidra, non-matching)
// GLOBAL DAT_001e7894 int *
// GLOBAL DAT_001e7898 int *
// GLOBAL DAT_001e789c int *

void func_001E77E8(int param_1)

{
  int iVar1;
  float in_s0;
  
  if (*(int *)(*DAT_001e7894 + 0x9c8) != 0) {
    func_004AD9E8(*DAT_001e7898,(uint)*(ushort *)(param_1 + 0x36),(uint)*(byte *)(param_1 + 0x34),0,
                  in_s0);
    func_0065CFDC((undefined4 *)(param_1 + 0x788),0);
  }
  if (*(char *)(param_1 + 0xadd) == '\0') {
    iVar1 = func_00556ED0(*DAT_001e789c);
    if (iVar1 == 0) {
      iVar1 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x7ac),0,0x100,0,0);
      if (iVar1 != 0) {
        return;
      }
    }
    *(undefined1 *)(param_1 + 0xadd) = 1;
  }
  return;
}

