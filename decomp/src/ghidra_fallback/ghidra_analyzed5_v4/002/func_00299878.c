#include "ghidra_types.h"

extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);

// USA 00299878 <- EU 0029991C (Ghidra, function missing from the decomp table)

undefined4 func_00299878(int param_1)

{
  bool bVar1;
  
  if (((*(short *)(param_1 + 0x36) != 0) && (bVar1 = func_00588BF0(param_1,0), bVar1)) &&
     (*(char *)(param_1 + 0x32c) == '\0')) {
    *(undefined1 *)(param_1 + 0x32c) = 1;
    if ((*(short *)(param_1 + 0x38) != 0) && (bVar1 = func_00588BF0(param_1,1), !bVar1)) {
      func_00588C14(param_1,1,1);
      return func_001D6FD0((undefined4 *)(param_1 + 800),4,7,(int *)(param_1 + 8),-1);
    }
    func_001D6FD0((undefined4 *)(param_1 + 800),2,7,(int *)(param_1 + 8),-1);
  }
  return 0;
}

