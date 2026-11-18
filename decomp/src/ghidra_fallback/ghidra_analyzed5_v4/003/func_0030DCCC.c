#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0030BCC8(int param_1,undefined4 *param_2);
extern int func_0030D120(int *param_1,int param_2);
extern int func_0030DF20(int param_1);
extern int func_0030DFA0(int *param_1,int param_2);
extern int func_00556068(int param_1);
extern int *DAT_0030de00;

// USA 0030DCCC <- EU 0030DCA8 (Ghidra, non-matching)
// GLOBAL DAT_0030de00 int *

void func_0030DCCC(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  func_0030DF20((int)param_1);
  if ((param_2 == (int *)0x0) || (*(char *)((int)param_1 + 0x147) != '\0')) {
    func_0030DFA0(param_1,100);
    func_0030D120(param_1,100);
    param_1[8] = param_1[7];
    param_1[9] = param_1[7];
  }
  else {
    param_1[9] = (int)param_2;
    if (param_1[8] == 0) {
      param_1[8] = (int)param_2;
    }
    param_1[7] = (int)param_2;
    param_1[8] = (int)param_2;
    func_0010F1DC(param_1 + 0x52,(int *)(param_1[0x55] + (int)param_2));
    param_1[0x54] = param_1[0x54] + 1;
    (**(code **)(*param_2 + 0xc))(param_2);
    param_1[9] = (int)param_2;
    func_0030DFA0(param_1,100);
    iVar2 = *(int *)(*DAT_0030de00 + 0x18);
    local_18 = *(undefined4 *)(iVar2 + 0x1c4);
    local_20 = *(undefined4 *)(iVar2 + 0x1bc);
    uStack_1c = *(undefined4 *)(iVar2 + 0x1c0);
    puVar3 = func_00556068((int)param_2);
    local_18 = puVar3[0xf6];
    puVar3 = func_00556068((int)param_2);
    local_20 = puVar3[0xf4];
    func_0030BCC8((int)param_1,&local_20);
  }
  if (param_1[0x54] < 1) {
    piVar1 = (int *)0x0;
  }
  else {
    if (param_1[0x53] == 0) {
      return;
    }
    piVar1 = (int *)(param_1[0x53] - param_1[0x55]);
  }
  if (piVar1 != (int *)0x0) {
    do {
      piVar1[6] = param_1[7];
      piVar1 = *(int **)((int)piVar1 + param_1[0x55] + 4);
      bVar4 = piVar1 == param_1 + 0x52;
      if (!bVar4) {
        piVar1 = (int *)((int)piVar1 - param_1[0x55]);
        bVar4 = piVar1 == (int *)0x0;
      }
    } while (!bVar4);
  }
  return;
}

