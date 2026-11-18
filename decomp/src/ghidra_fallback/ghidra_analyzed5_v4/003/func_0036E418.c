#include "ghidra_types.h"

extern int func_0032C7F8(undefined4 *param_1);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int *DAT_0036e538;

// USA 0036E418 <- EU 0036E3F4 (Ghidra, non-matching)
// GLOBAL DAT_0036e538 int *

/* WARNING: Removing unreachable block (ram,0x0036e484) */

undefined4 func_0036E418(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  if (param_2 == 9) {
    return 0;
  }
  if (param_2 == 6) {
    *(undefined1 *)(param_1 + 0xc93) = 1;
    *(undefined4 *)(param_1 + 0xc3c) = 0;
    *(undefined1 *)(param_1 + 0xc92) = 0;
    func_0036E490((byte *)(param_1 + 0x8f8),0,*(undefined4 *)(param_1 + 0x8c4));
    piVar2 = DAT_0036e538;
    uVar4 = *(undefined4 *)(param_1 + 0x99c);
    pbVar3 = (byte *)(param_1 + 0x9d0);
    bVar1 = *pbVar3;
    UNRECOVERED_JUMPTABLE = (code *)DAT_0036e538[(uint)bVar1 * 6 + 4];
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       (((DAT_0036e538[(uint)bVar1 * 6 + 5] & 1U) != 0 && (DAT_0036e538[(uint)bVar1 * 6 + 5] != 0)))
       ) {
      if ((DAT_0036e538[(uint)bVar1 * 6 + 5] & 1U) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(pbVar3 + (DAT_0036e538[(uint)bVar1 * 6 + 5] >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)
                (pbVar3 + (DAT_0036e538[(uint)bVar1 * 6 + 5] >> 1),0,uVar4,UNRECOVERED_JUMPTABLE,
                 unaff_r4,unaff_r5,unaff_r6);
    }
    *pbVar3 = 0;
    UNRECOVERED_JUMPTABLE = (code *)*piVar2;
    if ((UNRECOVERED_JUMPTABLE == (code *)0x0) && (((piVar2[1] & 1U) == 0 || (piVar2[1] == 0)))) {
      return 0;
    }
    if ((piVar2[1] & 1U) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(pbVar3 + (piVar2[1] >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x0036e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pbVar3 + (piVar2[1] >> 1),uVar4);
    return 0;
  }
  func_0032C7F8((undefined4 *)(param_1 + 0x8c4));
  return func_0032C7F8((undefined4 *)(param_1 + 0x99c));
}

