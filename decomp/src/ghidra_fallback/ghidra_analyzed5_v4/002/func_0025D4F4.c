#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern ulonglong func_0011624C(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_001E26CC(int param_1,int param_2);
extern int func_0049BCF4(uint param_1,uint param_2);
extern int *DAT_0025d5b8;
extern uint *DAT_0025d5bc;

// USA 0025D4F4 <- EU 0025D51C (Ghidra, non-matching)
// GLOBAL DAT_0025d5b8 int *
// GLOBAL DAT_0025d5bc uint *

void func_0025D4F4(int param_1)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x8d) == '\0') {
    *(undefined1 *)(param_1 + 0x8d) = 1;
    func_001E26CC(*DAT_0025d5b8,param_1);
    uVar1 = func_0011624C((uint)((ulonglong)*DAT_0025d5bc * 100),
                          DAT_0025d5bc[1] * 100 + (int)((ulonglong)*DAT_0025d5bc * 100 >> 0x20),1000
                          ,0);
    while (*(int *)(param_1 + 0x78) != 3 && *(int *)(param_1 + 0x78) != 4) {
      func_001080D4((int *)(param_1 + 0xa8));
      func_001080D4((int *)(param_1 + 0xa0));
      func_0049BCF4((uint)uVar1,(uint)(uVar1 >> 0x20));
    }
  }
  return;
}

