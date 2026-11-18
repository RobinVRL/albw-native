#include "ghidra_types.h"

extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004E1798(int *param_1,int param_2);
extern int func_004E23AC(int *param_1,undefined1 *param_2,int param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0066A794(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004e3374;
extern int *DAT_004e3378;
extern int *DAT_004e337c;
extern int *DAT_004e3380;
extern int *DAT_004e3384;
extern int *DAT_004e3388;
extern int *DAT_004e338c;

// USA 004E31DC <- EU 004E31B4 (Ghidra, non-matching)
// GLOBAL DAT_004e3374 int *
// GLOBAL DAT_004e3378 int *
// GLOBAL DAT_004e337c int *
// GLOBAL DAT_004e3380 int *
// GLOBAL DAT_004e3384 int *
// GLOBAL DAT_004e3388 int *
// GLOBAL DAT_004e338c int *

int func_004E31DC(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  cVar1 = (char)param_1[0x109];
  if ((cVar1 == '\x02' || cVar1 == '\x03') ||
     ((cVar1 == '\x04' || cVar1 == '\x05') || cVar1 == '\x06')) {
    return 0;
  }
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) != 0) {
    return 1;
  }
  local_18 = in_r3;
  iVar2 = func_0052FBA0(*DAT_004e3374 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((*(uint *)(param_2 + 0x24) & 0x20) != 0) {
    *(undefined1 *)(param_1 + 0x14b) = 0;
  }
  if ((char)param_1[0x14b] != '\0') {
    func_0035227C((int)(param_1 + 0xc9),(*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  }
  local_18 = local_18 & 0xffffff00;
  switch((*(uint *)(param_2 + 0x24) & 0x700) >> 8) {
  default:
    if (((short)param_1[0xb] == 1) && (*(int *)(param_2 + 0x28) == param_1[0x14])) {
      return 0;
    }
    if ((iVar2 != 0) &&
       ((((iVar2 = func_00588BE4(iVar2), iVar2 == *DAT_004e3378 || (iVar2 == *DAT_004e337c)) ||
         (iVar2 == *DAT_004e3380)) ||
        (((iVar2 == *DAT_004e3384 || (iVar2 == *DAT_004e3388)) || (iVar2 == *DAT_004e338c)))))) {
      func_0066A794(param_1 + 0x108,3);
      return 1;
    }
    iVar2 = func_004E1798(param_1,param_2);
    return iVar2;
  case 1:
    iVar2 = 0;
    break;
  case 2:
    iVar2 = 3;
    break;
  case 3:
    iVar2 = 1;
    break;
  case 4:
    iVar2 = 2;
    break;
  case 5:
    iVar2 = 5;
  }
  func_004E23AC(param_1,(undefined1 *)&local_18,iVar2,param_2);
  return (int)(char)local_18;
}

