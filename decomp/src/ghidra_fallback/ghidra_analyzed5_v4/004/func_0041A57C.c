#include "ghidra_types.h"

extern int func_003DE244(undefined4 *param_1);
extern int func_00413F10(uint param_1,int param_2);
extern int func_00417DA0(int param_1,int param_2,int param_3);

// USA 0041A57C <- EU 0041A55C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 int
// PARAM param_9 Stack[0x10]:4 int

undefined1
func_0041A57C(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,int param_7,
             int param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  if ((char)param_1[0x14] != '\0') {
    if (param_2 != 0) {
      if ((param_4 != 0) && (uVar3 = 0, param_1[0x3f] != 0)) {
        do {
          iVar5 = param_1[0x28] * param_3 + param_1[uVar3 * 0xd0 + 0x41];
          iVar2 = param_4;
          if (param_6 != 0) {
            uVar1 = func_00413F10(param_6,(uint)*(byte *)(param_1 + 0x20));
            iVar5 = iVar5 + uVar1;
            iVar2 = param_4 - param_6;
          }
          piVar4 = param_1 + uVar3 * 0xd0 + param_3 * 6 + 0x4e;
          func_003DE244(piVar4);
          *piVar4 = iVar5;
          param_1[uVar3 * 0xd0 + param_3 * 6 + 0x4f] = iVar2;
          param_1[uVar3 * 0xd0 + param_3 * 6 + 0x50] = *(int *)(param_7 + uVar3 * 4);
          func_00417DA0((int)(param_1 + uVar3 * 0xd0 + 0x41),(int)piVar4,param_9);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_1[0x3f]);
      }
      param_1[param_3 * 2 + 0x6e5] = param_5;
      param_1[param_3 * 2 + 0x6e6] = param_8;
      if (param_9 != 0) {
        *(undefined1 *)((int)param_1 + 0x55) = 1;
      }
      if ((*(char *)((int)param_1 + 0x51) == '\0') &&
         ((iVar2 = param_1[0x17], param_1[0x17] = iVar2 + -1, iVar2 + -1 == 0 ||
          (*(char *)((int)param_1 + 0x55) != '\0')))) {
        *(undefined1 *)((int)param_1 + 0x51) = 1;
      }
      return 1;
    }
    *(undefined1 *)((int)param_1 + 0xf) = 1;
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  return 0;
}

