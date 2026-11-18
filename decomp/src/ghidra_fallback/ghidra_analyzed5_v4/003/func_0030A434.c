#include "ghidra_types.h"

extern int func_0030BCD4(int *param_1,uint param_2);
extern int func_0058DA24(int param_1);
extern int *DAT_0030a54c;
extern uint DAT_0030a550;

// USA 0030A434 <- EU 0030A410 (Ghidra, non-matching)
// GLOBAL DAT_0030a54c int *
// GLOBAL DAT_0030a550 uint

undefined4 func_0030A434(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)((int)param_1 + 0xdd) == '\0') {
    if ((*DAT_0030a54c != 0) && (iVar3 = func_0058DA24(*DAT_0030a54c), iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0030a4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x30))(param_1);
    }
    *(undefined1 *)((int)param_1 + 0xdd) = 1;
  }
  uVar2 = DAT_0030a550;
  uVar1 = *(ushort *)((int)param_1 + 0xee);
  *(short *)(param_1 + 0x1f) = (short)param_1[0x1f] + 1;
  do {
    if (uVar1 == uVar2) {
                    /* WARNING: Could not recover jumptable at 0x0030a548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*param_1 + 0x2c))(param_1);
    }
    switch(*(undefined1 *)param_1[0x3c]) {
    case 1:
      iVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      if (iVar3 == 0) {
        return 0;
      }
LAB_0030a510:
      return func_0030BCD4(param_1,0);
    case 2:
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      if ((int)uVar4 < 0) {
        return 0;
      }
      func_0030BCD4(param_1,uVar4 & 0xffff);
      break;
    case 3:
      iVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
      if (iVar3 != 0) {
        if (iVar3 != 1) {
          return 0;
        }
        goto LAB_0030a510;
      }
    case 4:
    case 5:
      func_0030BCD4(param_1,0);
    }
    uVar1 = *(ushort *)((int)param_1 + 0xee);
  } while( true );
}

