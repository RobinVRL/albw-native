// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00537B38(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556A2C(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_0042656c;
extern int DAT_00426570;
extern int *DAT_00426574;
extern int DAT_00426578;
extern int DAT_0042657c;
extern int DAT_00426580;
extern int DAT_00426584;
extern int DAT_00426588;
extern int DAT_0042658c;
extern int DAT_00426590;
extern int DAT_00426594;
extern int DAT_00426598;

// USA 004262AC <- EU 0042628C (Ghidra, non-matching)
// GLOBAL DAT_0042656c int *
// GLOBAL DAT_00426570 int
// GLOBAL DAT_00426574 int *
// GLOBAL DAT_00426578 int
// GLOBAL DAT_0042657c int
// GLOBAL DAT_00426580 int
// GLOBAL DAT_00426584 int
// GLOBAL DAT_00426588 int
// GLOBAL DAT_0042658c int
// GLOBAL DAT_00426590 int
// GLOBAL DAT_00426594 int
// GLOBAL DAT_00426598 int

/* WARNING: Type propagation algorithm not settling */

bool func_004262AC(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *DAT_0042656c;
  switch(param_1) {
  case 0:
    iVar4 = func_00537B38(iVar4);
    if (iVar4 != 4) {
      return true;
    }
    return false;
  default:
    goto switchD_0042629c_caseD_1;
  case 2:
    iVar4 = func_0055696C(iVar4,1);
    break;
  case 3:
    iVar4 = func_0055696C(iVar4,0x17);
    goto joined_r0x00426370;
  case 4:
    iVar4 = func_0055696C(iVar4,0x1e);
joined_r0x00426370:
    if (iVar4 == 0) {
      return false;
    }
    return true;
  case 5:
    iVar4 = func_0055696C(iVar4,0x20);
    break;
  case 6:
    iVar3 = func_0055696C(iVar4,0x1c);
    if (iVar3 != 0) {
      return true;
    }
    iVar4 = func_0055696C(iVar4,0x1d);
    break;
  case 7:
    iVar4 = func_0055696C(iVar4,0x21);
    break;
  case 8:
    iVar4 = func_0055696C(iVar4,0x26);
    break;
  case 9:
    iVar4 = func_0055696C(iVar4,0x19);
    break;
  case 10:
    iVar4 = func_0055696C(iVar4,0x18);
    break;
  case 0xb:
    iVar3 = func_0055696C(iVar4,0x1a);
    if (iVar3 != 0) {
      return true;
    }
    iVar4 = func_0055696C(iVar4,0x1b);
    if (iVar4 != 0) {
      return true;
    }
    return false;
  case 0xe:
    cVar1 = func_00556A2C(iVar4);
    if (cVar1 != '\0') {
      return true;
    }
    return false;
  case 0xf:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426570);
    return bVar2;
  case 0x10:
    bVar2 = func_00584B94(*DAT_00426574,0x38c);
    return bVar2;
  case 0x11:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426578);
    return bVar2;
  case 0x12:
    bVar2 = func_00584B94(*DAT_00426574,DAT_0042657c);
    return bVar2;
  case 0x13:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426584);
    return bVar2;
  case 0x14:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426594);
    return bVar2;
  case 0x15:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426598);
    return bVar2;
  case 0x16:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426580);
    return bVar2;
  case 0x17:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426588);
    return bVar2;
  case 0x18:
    bVar2 = func_00584B94(*DAT_00426574,DAT_0042658c);
    return bVar2;
  case 0x19:
    bVar2 = func_00584B94(*DAT_00426574,DAT_00426590);
    return bVar2;
  }
  if (iVar4 == 0) {
    return false;
  }
switchD_0042629c_caseD_1:
  return true;
}

