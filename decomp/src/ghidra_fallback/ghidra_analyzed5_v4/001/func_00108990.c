#include "ghidra_types.h"

extern int func_00108250(int *param_1);
extern int func_0010A98C(uint param_1);
extern int func_0010AD90(undefined4 *param_1);
extern int func_0010AED0(uint *param_1);
extern int func_0010AF18(void);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0010C180(uint *param_1);

// USA 00108990 <- EU 00108990 (Ghidra, non-matching)

void func_00108990(int *param_1)

{
  uint *puVar1;
  
  *(undefined1 *)((int)param_1 + 0x77) = 1;
  software_interrupt(0x18);
  if (param_1[0xb] < 0) {
    func_0010A98C(param_1[0xb]);
  }
  software_interrupt(0x24);
  if (param_1[0x1b] < 0) {
    func_0010A98C(param_1[0x1b]);
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  func_0010C180((uint *)(param_1 + 0x1b));
  if (param_1[0x1b] != 0) {
    software_interrupt(0x23);
    param_1[0x1b] = 0;
  }
  func_0010C0C0(param_1);
  puVar1 = (uint *)func_0010AF18();
  func_0010AED0(puVar1);
  func_0010AD90(param_1 + 0x16);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  func_00108250(param_1 + 0xe);
  if (param_1[0xb] != 0) {
    software_interrupt(0x23);
    param_1[0xb] = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  func_0010C160(param_1);
  param_1[2] = -1;
  return;
}

