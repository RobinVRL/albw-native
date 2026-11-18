#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_0041497C(int param_1);
extern int func_00417E24(void);
extern int func_0041D5C0(int param_1);
extern int func_0041D830(undefined4 *param_1,undefined4 *param_2);

// USA 00417EC8 <- EU 00417EA8 (Ghidra, non-matching)

undefined4 func_00417EC8(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (param_2 == 0) {
    func_0041497C(param_1);
  }
  else if (param_2 == 1) {
    uVar2 = 3;
    func_0041497C(param_1);
  }
  else if (param_2 == 2 || param_2 == 3) {
    uVar2 = 1;
  }
  if ((code *)param_3[0x66] != (code *)0x0) {
    (*(code *)param_3[0x66])(param_3,uVar2,param_3[0x67]);
  }
  param_3[0x68] = 0;
  *(undefined1 *)(param_3 + 0x4c) = 0;
  *(undefined1 *)((int)param_3 + 0x131) = 0;
  *(undefined1 *)((int)param_3 + 0x132) = 0;
  puVar1 = func_00417E24();
  func_00111EF0(puVar1 + 1,param_3 + 0x6a);
  if (param_3 != (undefined4 *)0x0) {
    func_0041D5C0((int)param_3);
    return func_0041D830(puVar1,param_3);
  }
  return 0;
}

