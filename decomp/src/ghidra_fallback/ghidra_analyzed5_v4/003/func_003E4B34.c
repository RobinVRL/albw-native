// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_001058A8(undefined4 param_1,undefined1 *param_2);
extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern uint *DAT_003e4c88;
extern uint *DAT_003e4c8c;
extern uint DAT_003e4c90;
extern uint DAT_003e4c94;

// USA 003E4B34 <- EU 003E4B14 (Ghidra, non-matching)
// GLOBAL DAT_003e4c88 uint *
// GLOBAL DAT_003e4c8c uint *
// GLOBAL DAT_003e4c90 uint
// GLOBAL DAT_003e4c94 uint

undefined4 func_003E4B34(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  uVar2 = DAT_003e4c90;
  if (DAT_003e4c88[1] != param_4 || *DAT_003e4c88 != param_3) {
    uVar6 = *DAT_003e4c8c ^ param_3;
    uVar3 = DAT_003e4c8c[1] ^ param_4 | uVar6;
    if (uVar3 != 0) {
      software_interrupt(0x28);
      goto code_r0x003e4b80;
    }
  }
  uVar3 = 0;
  uVar6 = 0;
code_r0x003e4b80:
  while( true ) {
    func_00108DF8();
    uVar4 = func_001058A8(param_1,(undefined1 *)&local_30);
    if ((int)uVar4 < 0) {
      func_0010873C(uVar4,0x3e4b98);
    }
    func_00108F4C();
    if ((char)local_30 != '\0') break;
    if (param_3 == *DAT_003e4c88 && DAT_003e4c88[1] == param_4) {
      return 0;
    }
    uVar4 = param_3 ^ *DAT_003e4c8c | param_4 ^ DAT_003e4c8c[1];
    if (uVar4 != 0) {
      software_interrupt(0x28);
      uVar5 = (param_4 ^ DAT_003e4c8c[1]) - (uVar6 + (uVar4 < uVar3));
      local_30 = 0;
      local_2c = 0;
      lVar1 = (ulonglong)(uVar4 - uVar3) * 3 +
              ((ulonglong)
               (((int)uVar5 >> 0x1f) * uVar2 + (int)((ulonglong)uVar2 * (ulonglong)uVar5 >> 0x20))
               << 0x20 | (ulonglong)uVar2 * (ulonglong)uVar5 & 0xffffffff) +
              CONCAT44(uVar5 * 3,(int)((ulonglong)uVar2 * (ulonglong)(uVar4 - uVar3) >> 0x20));
      iVar7 = (int)((ulonglong)lVar1 >> 0x20);
      bVar8 = param_3 < (uint)lVar1;
      if ((int)(param_4 - (iVar7 + (uint)bVar8)) < 0 !=
          (SBORROW4(param_4,iVar7) != SBORROW4(param_4 - iVar7,(uint)bVar8))) {
        return 0;
      }
    }
    func_00104338(DAT_003e4c94,0);
  }
  return 1;
}

