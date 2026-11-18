#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0053914c;
extern uint *DAT_00539150;
extern int DAT_00539154;
extern int DAT_00539158;
extern undefined4 DAT_0053915c;
extern undefined4 DAT_00539160;

// USA 00539024 <- EU 00538FFC (Ghidra, non-matching)
// GLOBAL DAT_0053914c int *
// GLOBAL DAT_00539150 uint *
// GLOBAL DAT_00539154 int
// GLOBAL DAT_00539158 int
// GLOBAL DAT_0053915c undefined4
// GLOBAL DAT_00539160 undefined4

undefined4 func_00539024(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (*(char *)(*DAT_0053914c + 0x18) != -1)) {
    uVar2 = *DAT_00539150;
    switch(*(char *)(*DAT_0053914c + 0x18)) {
    default:
      func_004994B0(param_2,*(undefined4 *)(DAT_00539154 + 0x3c),uVar2,param_4);
      break;
    case '\x01':
    case '\r':
    case '\x0e':
    case '\x0f':
    case '\x10':
    case '\x11':
    case '\x13':
    case '\x14':
      func_004994B0(param_2,*(undefined4 *)(DAT_00539154 + 0x44),uVar2,param_4);
      break;
    case '\t':
      func_004994B0(param_2,DAT_0053915c,uVar2,param_4);
      break;
    case '\f':
      func_004994B0(param_2,DAT_00539160,uVar2,param_4);
      break;
    case '\x15':
      if ((uVar2 == 0) || (bVar1 = func_00584B94(uVar2,DAT_00539158), !bVar1)) {
        func_004994B0(param_2,*(undefined4 *)(DAT_00539154 + 0x48),uVar2,param_4);
      }
      else {
        func_004994B0(param_2,*(undefined4 *)(DAT_00539154 + 0x4c),uVar2,param_4);
      }
    }
    return 1;
  }
  return 0;
}

