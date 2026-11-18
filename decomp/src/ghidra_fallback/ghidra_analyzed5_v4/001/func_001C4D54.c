#include "ghidra_types.h"

extern int func_0014A9C8(int param_1);
extern int func_00519B8C(int param_1);
extern int func_0051B494(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0065BCBC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001c4e6c;
extern int *DAT_001c4e70;
extern int *DAT_001c4e74;

// USA 001C4D54 <- EU 001C4D54 (Ghidra, non-matching)
// GLOBAL DAT_001c4e6c int *
// GLOBAL DAT_001c4e70 int *
// GLOBAL DAT_001c4e74 int *

undefined4 func_001C4D54(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *DAT_001c4e6c;
  switch(param_2) {
  case 0:
    if (*(char *)(param_1 + 0x78c) == '\0') {
      func_00588C14(param_1,0,1);
      func_0065BCBC((undefined4 *)(param_1 + 0x788),1);
      return 0;
    }
    if (*(char *)(param_1 + 0x78c) != '\x03') {
      return 0;
    }
    return 1;
  case 1:
    if (*(char *)(param_1 + 0x7e3) == '\0') {
      *(undefined1 *)(param_1 + 0x7e3) = 1;
      func_0065BCBC((undefined4 *)(param_1 + 0x788),2);
      return 0;
    }
    if (*(char *)(param_1 + 0x78c) != '\x03') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x7e3) = 0;
    return 1;
  case 2:
    func_0014A9C8(*DAT_001c4e70);
    break;
  case 3:
    if (*DAT_001c4e74 != 0) {
      *(undefined4 *)(*DAT_001c4e74 + 0x84) = 0;
    }
    break;
  case 4:
    func_0051B494(iVar1,(uint)*(ushort *)(param_1 + 0x36),param_1 + 0x700,iVar1);
    break;
  case 5:
    func_00519B8C(iVar1);
    break;
  default:
    return 0;
  }
  return 1;
}

