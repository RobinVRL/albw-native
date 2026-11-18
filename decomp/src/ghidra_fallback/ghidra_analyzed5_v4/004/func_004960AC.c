#include "ghidra_types.h"

extern int func_00104914(undefined4 param_1);
extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_005808BC(int *param_1,undefined4 *param_2);
extern int func_00601390(void);
extern undefined4 *DAT_00496134;

// USA 004960AC <- EU 00496084 (Ghidra, non-matching)
// GLOBAL DAT_00496134 undefined4 *

void func_004960AC(int *param_1)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  puVar1 = DAT_00496134;
  func_0010E0E0((int *)*DAT_00496134);
  func_00601390();
  (**(code **)(*param_1 + 0x68))(param_1);
  (**(code **)(*param_1 + 0x6c))(param_1);
  (**(code **)(*param_1 + 0x34))(param_1);
  (**(code **)(*param_1 + 0x78))(param_1);
  func_0010E15C((int *)*puVar1);
  func_005808BC(&local_18,param_1 + 0x2c);
  param_1[0x2a] = local_18;
  param_1[0x2b] = iStack_14;
  software_interrupt(0x28);
  param_1[0x2c] = local_18;
  param_1[0x2d] = iStack_14;
  (**(code **)(*param_1 + 0x7c))(param_1);
  if ((char)param_1[10] == '\x01') {
    func_00104914(1);
    *(undefined1 *)(param_1 + 10) = 2;
  }
  return;
}

