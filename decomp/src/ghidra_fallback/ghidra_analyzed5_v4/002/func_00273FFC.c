#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);

// USA 00273FFC <- EU 00274024 (Ghidra, non-matching)

void func_00273FFC(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  *(int *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  if (param_2 != 0) {
    func_003521F0(param_2 + 4,(int)*(char *)(param_1 + 0x68));
    piVar2 = (int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x54);
    puVar4 = *(uint **)(param_1 + 0x58);
    if (*(int *)(iVar3 + 0x24) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      return;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x60))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(iVar3 + 0x24),puVar4);
    *piVar2 = local_18;
    *(undefined4 *)(param_1 + 0x60) = uStack_14;
  }
  return;
}

