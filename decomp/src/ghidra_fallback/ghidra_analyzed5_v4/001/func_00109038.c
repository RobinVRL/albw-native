#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_00108B98(void);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010AF4C(void);
extern int func_0010B074(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5,undefined4 param_6);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern uint *DAT_001091f4;
extern uint DAT_001091f8;
extern uint *DAT_001091fc;
extern uint DAT_00109200;
extern uint DAT_00109204;

// GLOBAL DAT_001091f4 uint *
// GLOBAL DAT_001091f8 uint
// GLOBAL DAT_001091fc uint *
// GLOBAL DAT_00109200 uint
// GLOBAL DAT_00109204 uint
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 uint
// PARAM param_8 Stack[0xc]:4 uint
// USA 00109038 <- EU 00109014 (Ghidra, function missing from the decomp table)

uint func_00109038(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                  undefined4 param_6,uint param_7,uint param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  uint local_54;
  uint local_50;
  
  uVar5 = 0;
  if (*DAT_001091f4 != param_7 || DAT_001091f4[1] != param_8) {
    uVar5 = DAT_001091f4[-2];
    local_54 = param_7 ^ uVar5;
    local_50 = param_8 ^ DAT_001091f4[-1] | local_54;
    if (local_50 != 0) {
      software_interrupt(0x28);
      goto LAB_00109084;
    }
  }
  local_54 = 0;
  local_50 = 0;
LAB_00109084:
  uVar8 = CONCAT44(local_54,param_2) & 0xffffffff00010000;
  while( true ) {
                    /* WARNING: Subroutine does not return */
    if (0x1000 < param_4) {
      func_0010C1B8((int)uVar8,(int)(uVar8 >> 0x20),uVar5);
    }
    uVar6 = param_4;
    uVar5 = param_3;
    if (param_3 == 0 || param_4 == 0) {
      uVar6 = 0;
      uVar5 = uVar6;
    }
    func_00108DF8();
    uVar2 = func_00108B98();
    uVar5 = func_0010B074(uVar2,param_1,param_2,uVar5,uVar6,param_5);
    if ((-1 < (int)uVar5) && ((param_2 & 0x10000) != 0)) {
      func_0010AF4C();
    }
    func_00108F4C();
    if (((-1 < (int)uVar5) || (uVar5 != DAT_001091f8)) ||
       (*DAT_001091f4 == param_7 && DAT_001091f4[1] == param_8)) break;
    uVar6 = param_8 ^ DAT_001091fc[1] | param_7 ^ *DAT_001091fc;
    if (uVar6 != 0) {
      software_interrupt(0x28);
      uVar3 = DAT_001091fc[1] - (local_54 + (uVar6 < local_50));
      lVar1 = (ulonglong)(uVar6 - local_50) * 3 +
              ((ulonglong)
               (((int)uVar3 >> 0x1f) * DAT_00109200 +
               (int)((ulonglong)DAT_00109200 * (ulonglong)uVar3 >> 0x20)) << 0x20 |
              (ulonglong)DAT_00109200 * (ulonglong)uVar3 & 0xffffffff) +
              CONCAT44(uVar3 * 3,
                       (int)((ulonglong)DAT_00109200 * (ulonglong)(uVar6 - local_50) >> 0x20));
      iVar4 = (int)((ulonglong)lVar1 >> 0x20);
      bVar7 = param_7 < (uint)lVar1;
      if ((int)(param_8 - (iVar4 + (uint)bVar7)) < 0 !=
          (SBORROW4(param_8,iVar4) != SBORROW4(param_8 - iVar4,(uint)bVar7))) {
        return uVar5;
      }
    }
    uVar5 = (uint)((ulonglong)DAT_00109204 * 10 >> 0x20);
    uVar8 = func_00104338((uint)((ulonglong)DAT_00109204 * 10),uVar5);
  }
  return uVar5;
}

