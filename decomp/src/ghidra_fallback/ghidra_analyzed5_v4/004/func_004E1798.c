#include "ghidra_types.h"

extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004E23AC(int *param_1,undefined1 *param_2,int param_3,int param_4);

// USA 004E1798 <- EU 004E1770 (Ghidra, non-matching)

int func_004E1798(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint in_r3;
  uint uVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  uVar3 = *(uint *)(param_2 + 0x20);
  uVar1 = (uVar3 & 0x7e0) >> 5;
  local_20 = in_r3;
  func_0035227C((int)(param_1 + 0xc9),uVar1);
  bVar4 = (1 << (uVar3 & 0x1f) & 2U) != 0;
  switch(uVar1) {
  case 0:
    iVar2 = 4;
    break;
  case 1:
  case 2:
  case 3:
  case 6:
  case 8:
  case 10:
  case 0xf:
  case 0x18:
    if (bVar4) {
LAB_004e1840:
      iVar2 = 5;
      break;
    }
  default:
    iVar2 = 0;
    break;
  case 4:
    if (bVar4) goto LAB_004e1840;
  case 0xc:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
    iVar2 = 1;
    break;
  case 5:
  case 7:
  case 9:
  case 0x15:
  case 0x17:
    iVar2 = 3;
    break;
  case 0xb:
  case 0xd:
    iVar2 = 2;
  }
  local_20 = local_20 & 0xffffff00;
  func_004E23AC(param_1,(undefined1 *)&local_20,iVar2,param_2);
  return (int)(char)local_20;
}

