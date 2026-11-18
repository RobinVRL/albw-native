#include "ghidra_types.h"

extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern int func_0049AFD0(undefined4 *param_1);

// USA 0057D3E0 <- EU 0057D3B8 (Ghidra, non-matching)

void func_0057D3E0(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  
  func_00115224(param_2,param_3);
  pfVar1 = param_2 + 4;
  pfVar3 = param_2 + 1;
  pfVar4 = param_2 + 2;
  pfVar2 = param_2 + 5;
  pfVar6 = param_2 + 3;
  pfVar7 = param_2 + 6;
  pfVar5 = param_2 + 7;
  switch(param_4) {
  case 1:
    *param_2 = -*param_2;
    *pfVar3 = -*pfVar3;
    *pfVar4 = -*pfVar4;
    *pfVar6 = -*pfVar6;
    func_0049AFD0(param_2);
    break;
  case 2:
    *pfVar1 = -*pfVar1;
    *pfVar2 = -*pfVar2;
    *pfVar7 = -*pfVar7;
    *pfVar5 = -*pfVar5;
    func_0049AFD0(param_2);
    break;
  case 3:
    *param_2 = -*param_2;
    *pfVar3 = -*pfVar3;
    *pfVar4 = -*pfVar4;
    *pfVar6 = -*pfVar6;
  case 5:
    *pfVar1 = -*pfVar1;
    *pfVar2 = -*pfVar2;
    *pfVar7 = -*pfVar7;
    *pfVar5 = -*pfVar5;
    break;
  case 4:
    *param_2 = -*param_2;
    *pfVar3 = -*pfVar3;
    *pfVar4 = -*pfVar4;
    *pfVar6 = -*pfVar6;
  }
  param_2[8] = param_2[8] * *(float *)(param_1 + 0x8c);
  param_2[9] = param_2[9] * *(float *)(param_1 + 0x8c);
  param_2[10] = (param_2[10] + param_2[0xe] * *(float *)(param_1 + 0x90)) *
                *(float *)(param_1 + 0x8c);
  param_2[0xb] = param_2[0xb] * *(float *)(param_1 + 0x8c) +
                 param_2[0xf] * *(float *)(param_1 + 0x90);
  return;
}

