#include "ghidra_types.h"

extern int func_00114D80(uint param_1,uint param_2,uint param_3);
extern undefined4 DAT_00692084;

// USA 00691F88 <- EU 00691F60 (Ghidra, non-matching)
// GLOBAL DAT_00692084 undefined4

uint func_00691F88(uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar8;
  bool bVar9;
  undefined4 in_cr13;
  undefined4 in_cr15;
  
  uVar6 = 0xff000000;
  bVar1 = (byte)(param_2 >> 0x18);
  bVar9 = (~(param_2 << 1) & 0xff000000) == 0;
  if (!bVar9) {
    bVar1 = (byte)(param_1 >> 0x18);
    param_3 = ~(param_1 << 1) & 0xff000000;
    bVar9 = param_3 == 0;
  }
  bVar8 = (bool)(bVar1 >> 7);
  if (bVar9) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x692064;
    param_1 = func_00114D80(param_1,param_2,param_3);
    param_2 = extraout_r1;
    if (!bVar8) {
      coprocessor_function(0xf,0xf,7,in_cr15,in_cr15,in_cr13);
    }
LAB_00692068:
    if ((uVar6 & param_2 >> 7) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00692080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(DAT_00692084);
      return uVar6;
    }
    if ((param_1 & 0x7fffffff) != 0) {
      param_1 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00692078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_1);
    return uVar6;
  }
  uVar6 = 0xff0000;
  uVar5 = param_2 >> 7 & 0xff0000;
  if ((param_1 & 0x80000000) != 0) {
    uVar5 = uVar5 | 5;
  }
  uVar4 = param_1 >> 7 & 0xff0000;
  if (uVar4 == 0 || (uVar5 & 0xff0000) == 0) goto LAB_00692068;
  uVar6 = param_1 << 8 | 0x80000000;
  uVar3 = param_2 << 8 | 0x80000000;
  uVar5 = uVar5 - 0x10000;
  for (; (int)uVar5 < (int)uVar4; uVar4 = uVar4 - 0x10000) {
    uVar5 = uVar5 & 0xfffffffd;
    uVar2 = uVar6;
    if (0x7fffffff < uVar6) {
      uVar2 = uVar6 - uVar3;
      uVar5 = uVar5 | 2;
      if ((int)uVar6 < (int)uVar3) {
        uVar2 = -uVar2;
        uVar5 = uVar5 ^ 1;
      }
    }
    uVar6 = uVar2 << 1;
  }
  if ((((int)uVar5 >> 0x10 <= (int)uVar4 >> 0x10) && (uVar3 <= uVar6)) &&
     ((uVar6 != uVar3 || ((uVar5 & 2) != 0)))) {
    uVar6 = -(uVar6 + param_2 * -0x200);
    uVar5 = uVar5 ^ 1;
  }
  uVar3 = uVar6 << 1;
  uVar2 = uVar4;
  if (SUB41(uVar6 >> 0x1f,0)) {
LAB_00692044:
    if (0 < (int)uVar2) goto LAB_0069204c;
  }
  else if ((int)uVar3 < 0) {
    uVar2 = uVar4 - 0x10000;
    uVar3 = uVar6 << 2;
    if (uVar2 != 0 && 0xffff < (int)uVar4) goto LAB_00692044;
  }
  else {
    if (uVar3 == 0) {
      return (uVar5 & 4) << 0x1d;
    }
    iVar7 = LZCOUNT(uVar3);
    uVar3 = uVar3 << iVar7 + 1;
    uVar2 = uVar4 + (iVar7 + 1) * -0x10000;
  }
  if ((int)uVar2 < 1) {
    return 0;
  }
LAB_0069204c:
  return uVar2 << 7 | uVar3 >> 9 | uVar5 << 0x1f;
}

