#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001515F8(undefined4 *param_1,uint *param_2);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_0052138C(int param_1,char *param_2);
extern int DAT_0060a64c;
extern undefined4 *DAT_0060a650;

// USA 0060A600 <- EU 0060A5D8 (Ghidra, non-matching)
// GLOBAL DAT_0060a64c int
// GLOBAL DAT_0060a650 undefined4 *

int * func_0060A600(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x430);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_001515F8(puVar2,param_1);
    iVar1 = DAT_0060a64c;
    piVar3[200] = DAT_0060a64c + 0x58;
    *piVar3 = iVar1;
    *(undefined1 *)(piVar3 + 0x109) = 0;
    puVar2 = DAT_0060a650;
    piVar3[0x10a] = 0;
    *(undefined2 *)(piVar3 + 0x10b) = 0;
    *(undefined1 *)((int)piVar3 + 0x42e) = 0;
    func_004A8304(*puVar2,piVar3[0x103]);
    func_0052138C((int)piVar3,(char *)(piVar3 + 0x109));
  }
  return piVar3;
}

