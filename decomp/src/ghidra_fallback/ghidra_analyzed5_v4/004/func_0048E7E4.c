#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_0049BCF4(uint param_1,uint param_2);
extern int func_0049D1E8(int param_1);
extern int func_0049D8E0(int param_1);
extern uint *DAT_0048e87c;
extern undefined4 *DAT_0048e880;

// USA 0048E7E4 <- EU 0048E7BC (Ghidra, non-matching)
// GLOBAL DAT_0048e87c uint *
// GLOBAL DAT_0048e880 undefined4 *

void func_0048E7E4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  
  puVar1 = DAT_0048e880;
  uVar3 = *DAT_0048e87c;
  uVar4 = DAT_0048e87c[1];
  while( true ) {
    func_0010E0E0((int *)*puVar1);
    func_0049D1E8(*(int *)(param_1 + 0x1c));
    func_0049D8E0(*(int *)(param_1 + 0x1c));
    func_0010E15C((int *)*puVar1);
    uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x94);
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = (uint)*(byte *)(param_1 + 0x28);
    }
    if (!bVar5 || uVar2 != 0) break;
    uVar6 = func_0011624C((uint)((ulonglong)uVar3 * 10),
                          uVar4 * 10 + (int)((ulonglong)uVar3 * 10 >> 0x20),1000,0);
    func_0049BCF4((uint)uVar6,(uint)(uVar6 >> 0x20));
  }
  (**(code **)(**(int **)(param_1 + 0x20) + 0x18))(*(int **)(param_1 + 0x20),0);
  if (*(char *)(param_1 + 0x28) == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}

