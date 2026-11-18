#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00446B50(undefined4 param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0058DE90(int param_1);
extern int func_0066D2AC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00455a90;

// USA 00455A1C <- EU 004559F4 (Ghidra, non-matching)
// GLOBAL DAT_00455a90 int *

undefined4 func_00455A1C(int *param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  float *pfVar2;
  int in_r3;
  
  iVar1 = func_0058DE90(*DAT_00455a90);
  if ((((iVar1 != 0) && ((*(ushort *)(param_1[5] + 0x16) & 8) != 0)) &&
      (*(int *)(param_1[5] + 8) == 0)) && (*(char *)(param_1[0x2f] + 0x15c) == '\x02')) {
    pfVar2 = (float *)(param_1 + 0x24);
    func_00446B50(param_1[0x2f],(uint)*(byte *)(param_1 + 0x26),*pfVar2,ALBW_AS_F32(param_1[0x25]));
    func_0066D2AC(param_1 + 0x1a,0);
    if ((*(char *)((int)param_1 + 0xd) == '\x01') ||
       ((*(char *)((int)param_1 + 0xd) == '\x03' && (*(char *)((int)param_1 + 0xe) == '\x03')))) {
      func_0012C718((int)param_1);
      return func_001B6B38(param_1,extraout_r1,pfVar2,in_r3);
    }
  }
  return 0;
}

