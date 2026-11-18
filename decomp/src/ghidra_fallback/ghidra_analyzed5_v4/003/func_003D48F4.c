#include "ghidra_types.h"

extern int func_00102AA8(void);
extern int func_0010939C(void);
extern int func_003E6100(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6);

// USA 003D48F4 <- EU 003D48D4 (Ghidra, non-matching)

bool func_003D48F4(int *param_1,undefined2 *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((int *)(albw_frame + 0x8))
  local_18[2] = 0xffffffff;
  local_18[3] = 0xffffffff;
  local_18[1] = 0xffffffff;
  func_003E6100(*(uint **)(*param_1 + 4),(int)param_2,1,local_18,(uint *)(local_18 + 2),
                (uint *)(local_18 + 1));
  iVar1 = func_00102AA8();
  if ((iVar1 != 0) && (iVar1 = func_0010939C(), iVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return 0 < local_18[0];
}

