#include "ghidra_types.h"

extern int func_00115F28(undefined4 param_1);
extern int func_003E336C(undefined4 param_1);
extern int DAT_00601860;

// USA 006017F0 <- EU 006017C8 (Ghidra, non-matching)
// GLOBAL DAT_00601860 int

undefined4 func_006017F0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar1 = DAT_00601860;
  uVar9 = 0;
  iVar10 = 0;
  uVar2 = *(uint *)(DAT_00601860 + 0x17c) | *(uint *)(DAT_00601860 + 0x178);
  if (uVar2 != 0) {
    uVar9 = func_00115F28(uVar2);
    iVar10 = extraout_r1;
  }
  do {
    if (*(char *)(iVar1 + 0x11) == '\0') {
      return 0;
    }
    uVar2 = *(uint *)(iVar1 + 0x178) | *(uint *)(iVar1 + 0x17c);
    iVar4 = 0;
    if (uVar2 != 0) {
      uVar2 = func_00115F28(uVar2);
      uVar7 = *(uint *)(iVar1 + 0x178);
      iVar3 = *(int *)(iVar1 + 0x17c);
      uVar8 = uVar2 - uVar9;
      iVar6 = extraout_r1_00 - (iVar10 + (uint)(uVar2 < uVar9));
      iVar4 = iVar3 - (iVar6 + (uint)(uVar7 < uVar8));
      if (iVar4 < 0 != (SBORROW4(iVar3,iVar6) != SBORROW4(iVar3 - iVar6,(uint)(uVar7 < uVar8)))) {
        UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x170);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          return 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00601844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,iVar6,uVar7 - uVar8);
        return uVar5;
      }
    }
    func_003E336C(iVar4);
  } while( true );
}

