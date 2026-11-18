#include "ghidra_types.h"

extern int func_00129EE4(int param_1);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int DAT_0012a96c;
extern int DAT_0012a970;
extern float DAT_0012a974;

// USA 0012A924 <- EU 0012A924 (Ghidra, non-matching)
// GLOBAL DAT_0012a96c int
// GLOBAL DAT_0012a970 int
// GLOBAL DAT_0012a974 float

undefined4 func_0012A924(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = func_0051D2F4((int *)(param_1 + 0x904),*(int *)(param_1 + 0x930),DAT_0012a970,DAT_0012a96c
                        ,DAT_0012a974);
  uVar2 = func_0058A8F0(param_1);
  if ((uVar2 & uVar1) != 0) {
    return func_00129EE4(param_1);
  }
  return 0;
}

