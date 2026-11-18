#include "ghidra_types.h"

extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern int func_0049AFD0(undefined4 *param_1);

// USA 00493EE0 <- EU 00493EB8 (Ghidra, non-matching)

void func_00493EE0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  
  func_00115224((undefined4 *)(param_1 + 0x94),param_2);
  pfVar1 = (float *)(param_1 + 0xa4);
  pfVar2 = (float *)(param_1 + 0xa0);
  pfVar3 = (float *)(param_1 + 0x9c);
  pfVar5 = (float *)(param_1 + 0xa8);
  pfVar4 = (float *)(param_1 + 0x98);
  pfVar6 = (float *)(param_1 + 0xac);
  pfVar7 = (float *)(param_1 + 0xb0);
  switch(param_3) {
  case 1:
    func_0049AFD0((undefined4 *)(param_1 + 0x94));
  case 4:
    *(float *)(param_1 + 0x94) = -*(float *)(param_1 + 0x94);
    *pfVar4 = -*pfVar4;
    *pfVar3 = -*pfVar3;
    *pfVar2 = -*pfVar2;
    break;
  case 2:
    func_0049AFD0((undefined4 *)(param_1 + 0x94));
    *pfVar1 = -*pfVar1;
    *pfVar5 = -*pfVar5;
    *pfVar6 = -*pfVar6;
    *pfVar7 = -*pfVar7;
    break;
  case 3:
    *(float *)(param_1 + 0x94) = -*(float *)(param_1 + 0x94);
    *pfVar4 = -*pfVar4;
    *pfVar3 = -*pfVar3;
    *pfVar2 = -*pfVar2;
    *pfVar1 = -*pfVar1;
    *pfVar5 = -*pfVar5;
    *pfVar6 = -*pfVar6;
    *pfVar7 = -*pfVar7;
    break;
  case 5:
    *pfVar1 = -*pfVar1;
    *pfVar5 = -*pfVar5;
    *pfVar6 = -*pfVar6;
    *pfVar7 = -*pfVar7;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

