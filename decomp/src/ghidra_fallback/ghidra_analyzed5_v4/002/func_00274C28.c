#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int DAT_00274d30;

// USA 00274C28 <- EU 00274C50 (Ghidra, non-matching)
// GLOBAL DAT_00274d30 int

void func_00274C28(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  iVar1 = DAT_00274d30;
  iVar2 = *(int *)(*param_1 + 0xac);
  piVar3 = *(int **)(iVar2 + 0x28);
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  if (piVar3 != (int *)0x0 && iVar2 != 0) {
    iVar2 = *piVar3;
  }
  else {
    iVar2 = 0;
  }
  param_1[2] = iVar2;
  if (*(int *)(iVar2 + 0x94) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(iVar2 + 0x9c);
  }
  param_1[3] = iVar4;
  param_1[9] = iVar2;
  param_1[10] = iVar4;
  param_1[0xb] = iVar1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (param_1[0x15] != 0) {
    func_003521F0(param_1[0x15] + 4,(int)(char)param_1[0x1a]);
    piVar3 = param_1 + 0x17;
    iVar2 = param_1[0x15];
    puVar5 = (uint *)param_1[0x16];
    if (*(int *)(iVar2 + 0x24) == 0) {
      *piVar3 = 0;
      param_1[0x18] = 0;
      return;
    }
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x18])) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_18,*(int *)(iVar2 + 0x24),puVar5);
    *piVar3 = local_18;
    param_1[0x18] = iStack_14;
  }
  return;
}

