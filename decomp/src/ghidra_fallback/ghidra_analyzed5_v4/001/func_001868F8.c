#include "ghidra_types.h"

extern int func_003367F0(int param_1);
extern int func_003368D4(int param_1);
extern int func_004BD6EC(int param_1);
extern int func_004BDC4C(int param_1);
extern int func_004BDF3C(undefined4 param_1);
extern int func_004BEB08(int param_1,int param_2);
extern int func_004C012C(void);
extern int func_004C0BD0(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00186a68;

// USA 001868F8 <- EU 001868F8 (Ghidra, non-matching)
// GLOBAL DAT_00186a68 int *

undefined4 func_001868F8(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*DAT_00186a68 != 0) {
    if (3 < param_2 - 4U) {
      uVar2 = func_004BEB08(param_1,param_2);
      return uVar2;
    }
    if (param_2 == 4) {
      func_004C0BD0(param_1,0);
    }
    else if (param_2 == 5) {
      if (*(short *)(param_1 + 0x95a) == 0) {
        *(undefined1 *)(param_1 + 0x9c7) = 1;
        func_004BDC4C(param_1);
        func_004BD6EC(param_1);
      }
    }
    else if (param_2 == 6) {
      if (*(short *)(param_1 + 0x95a) == 0) {
        func_004BDF3C(2);
        *(short *)(param_1 + 0x95a) = *(short *)(param_1 + 0x95a) + 1;
        return 0;
      }
      if ((ushort)*(byte *)(param_1 + 0x852) != *(ushort *)(param_1 + 0x90a)) {
        return 0;
      }
    }
    else if (param_2 == 7) {
      if (*(short *)(param_1 + 0x95a) == 0) {
        iVar3 = func_0052FBA0(*DAT_00186a68 + 0x3dbbc,*(uint *)(param_1 + 0x814));
        if (iVar3 == 0) {
          return 0;
        }
        func_003367F0(iVar3);
        *(short *)(param_1 + 0x95a) = *(short *)(param_1 + 0x95a) + 1;
        return 0;
      }
      if (*(short *)(param_1 + 0x95a) != 1) {
        return 0;
      }
      iVar3 = func_0052FBA0(*DAT_00186a68 + 0x3dbbc,*(uint *)(param_1 + 0x814));
      if (iVar3 == 0) {
        return 0;
      }
      bVar1 = func_003368D4(iVar3);
      if (!bVar1) {
        return 0;
      }
      func_004C012C();
    }
    *(undefined2 *)(param_1 + 0x95a) = 0;
  }
  return 1;
}

