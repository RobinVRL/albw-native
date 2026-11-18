#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_0058A8F0(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int DAT_00328af8;

// USA 00328A88 <- EU 00328A64 (Ghidra, non-matching)
// GLOBAL DAT_00328af8 int

undefined4 func_00328A88(int param_1)

{
  uint in_fpscr;
  int iVar1;
  
  iVar1 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0xba8),(byte)(in_fpscr >> 0x15) & 3));
  if (DAT_00328af8 < iVar1) {
    iVar1 = func_0058A8F0(param_1);
    if (iVar1 != 0) {
      func_00665670((undefined4 *)(param_1 + 0xba8),2);
    }
  }
  else if (iVar1 == DAT_00328af8) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 1;
    func_004FCD5C(param_1 + 0x5a8,1);
    func_004FC07C(param_1,0x10,0,0);
  }
  return func_0036BE78(param_1 + 0xaa0);
}

