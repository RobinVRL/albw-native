#include "ghidra_types.h"

extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_00160398(float fparam_0);
extern int func_004BC7BC(int param_1);
extern void func_00583BC8(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00639328(int param_1);
extern int *DAT_0050e58c;

// USA 0050E4E8 <- EU 0050E4C0 (Ghidra, non-matching)
// GLOBAL DAT_0050e58c int *

undefined4 func_0050E4E8(int param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  func_00639328(param_1);
  if (*(short *)(param_1 + 0x2e) == 1) {
    bVar1 = func_00588BF0(param_1,0);
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0xa10) = 3;
      func_00583BC8(param_1);
      iVar2 = func_00160398(fVar3);
      if (iVar2 != 0) {
        func_004BC7BC(param_1);
        *(undefined4 *)(param_1 + 0xa10) = 4;
      }
    }
  }
  else if ((*(short *)(param_1 + 0x2e) == 2) && (bVar1 = func_00588BF0(param_1,0), !bVar1)) {
    func_00583BC8(param_1);
    iVar2 = func_00160398(fVar3);
    if (iVar2 != 0) {
      func_004BC7BC(param_1);
    }
    if (*(int *)(*DAT_0050e58c + 0x18) != 0) {
      return func_001212EC(*(int *)(*DAT_0050e58c + 0x18),(int *)(param_1 + 0x98c),0x3c,0);
    }
  }
  return 0;
}

