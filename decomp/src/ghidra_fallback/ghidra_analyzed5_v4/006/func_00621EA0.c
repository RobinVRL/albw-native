#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004BFF60(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4, undefined1 param_5,undefined4 param_6,undefined4 *param_7,float fparam_0);
extern int *DAT_00621f3c;

// USA 00621EA0 <- EU 00621E78 (Ghidra, non-matching)
// GLOBAL DAT_00621f3c int *

undefined4 func_00621EA0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float fparam_0;
  
  if ((*(char *)((int)param_1 + 0x857) != '\x02') || (iVar2 = (int)(char)param_1[0x217], iVar2 < 4))
  {
    iVar2 = 3;
  }
  (**(code **)(*param_1 + 0xac))(param_1,iVar2);
  uVar1 = func_00111A64((uint *)(*DAT_00621f3c + 0x660));
  *(short *)(param_1 + 0x212) = (short)((ulonglong)uVar1 * 0x96 >> 0x20) + 0x96;
  if ((uint)*(byte *)((int)param_1 + 0x852) == (int)(char)param_1[0x217]) {
    fparam_0 = ALBW_AS_F32(param_1[0x22e]);
  }
  else {
    fparam_0 = ALBW_AS_F32(param_1[0x22d]);
  }
  func_004BFF60((int)param_1,0,0,*(char *)((int)param_1 + 0x857) == '\x03',0,param_1[0xfa],
                param_1 + 0xf4,fparam_0);
                    /* WARNING: Could not recover jumptable at 0x00621f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x98))(param_1);
}

