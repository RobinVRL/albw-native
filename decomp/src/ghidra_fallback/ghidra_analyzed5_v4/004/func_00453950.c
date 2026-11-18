#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_004539f0;

// USA 00453950 <- EU 00453928 (Ghidra, non-matching)
// GLOBAL DAT_004539f0 float

void func_00453950(int *param_1,uint param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  func_00231448((int)(param_1 + 0x1d));
  iVar3 = param_1[7];
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
  param_1[0x1f] = iVar3;
  *(short *)((int)param_1 + 0x76) = (short)param_2;
  *(undefined2 *)(param_1 + 0x1d) = uVar1;
  func_002317C0((undefined2 *)(param_1 + 0x1d),DAT_004539f0);
  if ((((uint)param_1[0x29] < 6) &&
      (iVar3 = *(int *)(param_1[0x22] + param_1[0x29] * 4), iVar3 != 0)) &&
     ((*(byte *)(iVar3 + 0x44) & 1) != 0)) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  if (param_2 < 6) {
    iVar2 = param_1[7];
    iVar3 = *(int *)(param_1[0x22] + param_2 * 4);
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x44) & 1) == 0)) {
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
      *(byte *)(iVar2 + 0x70) = *(byte *)(iVar2 + 0x70) | 2;
    }
  }
  param_1[0x29] = param_2;
  return;
}

