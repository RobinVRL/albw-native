#include "ghidra_types.h"

extern int func_003CF1AC(int *param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5, undefined4 param_6);
extern int func_003D231C(undefined4 *param_1);
extern int func_00563BFC(int param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_00563D10(int param_1,int param_2,uint param_3);
extern int func_00676AFC(uint param_1);
extern int func_00676B30(uint param_1);
extern uint DAT_004c5f0c;
extern uint DAT_004c5f10;
extern uint DAT_004c5f14;
extern uint DAT_004c5f18;
extern uint DAT_004c5f1c;
extern uint DAT_004c5f20;
extern uint DAT_004c5f24;
extern uint DAT_004c5f28;
extern uint DAT_004c5f2c;
extern uint DAT_004c5f30;
extern uint DAT_004c5f34;
extern uint DAT_004c5f38;
extern uint DAT_004c5f3c;
extern uint DAT_004c5f40;
extern uint DAT_004c5f44;
extern uint DAT_004c5f48;
extern uint DAT_004c5f4c;
extern uint DAT_004c5f50;
extern uint DAT_004c5f54;
extern uint DAT_004c5f58;

// USA 004C5DA8 <- EU 004C5D80 (Ghidra, non-matching)
// GLOBAL DAT_004c5f0c uint
// GLOBAL DAT_004c5f10 uint
// GLOBAL DAT_004c5f14 uint
// GLOBAL DAT_004c5f18 uint
// GLOBAL DAT_004c5f1c uint
// GLOBAL DAT_004c5f20 uint
// GLOBAL DAT_004c5f24 uint
// GLOBAL DAT_004c5f28 uint
// GLOBAL DAT_004c5f2c uint
// GLOBAL DAT_004c5f30 uint
// GLOBAL DAT_004c5f34 uint
// GLOBAL DAT_004c5f38 uint
// GLOBAL DAT_004c5f3c uint
// GLOBAL DAT_004c5f40 uint
// GLOBAL DAT_004c5f44 uint
// GLOBAL DAT_004c5f48 uint
// GLOBAL DAT_004c5f4c uint
// GLOBAL DAT_004c5f50 uint
// GLOBAL DAT_004c5f54 uint
// GLOBAL DAT_004c5f58 uint

undefined4 func_004C5DA8(int *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x2850];
  #define abStack_2850 ((byte *)(albw_frame + 0x0))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x2800))
  if (param_2 == 0) {
    uVar1 = param_1[0x84];
  }
  else {
    uVar1 = param_1[0xf0];
  }
  if (param_3 < uVar1) {
    func_00563D10((int)param_1,param_2,param_3);
    func_003D231C(auStack_50);
    func_00563BFC((int)param_1,auStack_50,param_2,param_3);
    uVar1 = func_003CF1AC(param_1,param_4,abStack_2850,0x2800,param_2,auStack_50);
    if ((uVar1 & 0x80000000) == 0) {
      return 0;
    }
    if (uVar1 == DAT_004c5f0c) {
      return 1;
    }
    uVar2 = DAT_004c5f10;
    if (uVar1 != DAT_004c5f10) {
      uVar2 = DAT_004c5f14;
    }
    if (uVar1 != DAT_004c5f10 && uVar1 != uVar2) {
      uVar2 = DAT_004c5f18;
      if (uVar1 != DAT_004c5f18) {
        uVar2 = DAT_004c5f1c;
      }
      if (uVar1 != DAT_004c5f18 && uVar1 != uVar2) {
        uVar2 = DAT_004c5f20;
        if (uVar1 != DAT_004c5f20) {
          uVar2 = DAT_004c5f24;
        }
        if (uVar1 != DAT_004c5f20 && uVar1 != uVar2) {
          uVar2 = DAT_004c5f28;
          if (uVar1 != DAT_004c5f28) {
            uVar2 = DAT_004c5f2c;
          }
          if (uVar1 != DAT_004c5f28 && uVar1 != uVar2) {
            uVar2 = DAT_004c5f30;
            if (uVar1 != DAT_004c5f30) {
              uVar2 = DAT_004c5f34;
            }
            if (uVar1 != DAT_004c5f30 && uVar1 != uVar2) {
              uVar2 = DAT_004c5f38;
              if (uVar1 != DAT_004c5f38) {
                uVar2 = DAT_004c5f3c;
              }
              if (uVar1 != DAT_004c5f38 && uVar1 != uVar2) {
                uVar2 = DAT_004c5f40;
                if (uVar1 != DAT_004c5f40) {
                  uVar2 = DAT_004c5f40 + 1;
                }
                if (uVar1 != DAT_004c5f40 && uVar1 != uVar2) {
                  uVar2 = DAT_004c5f44;
                  if (uVar1 != DAT_004c5f44) {
                    uVar2 = DAT_004c5f44 + 1;
                  }
                  if (uVar1 != DAT_004c5f44 && uVar1 != uVar2) {
                    uVar2 = DAT_004c5f48;
                    if (uVar1 != DAT_004c5f48) {
                      uVar2 = DAT_004c5f48 | DAT_004c5f48 >> 0x1e;
                    }
                    if (uVar1 != DAT_004c5f48 && uVar1 != uVar2) {
                      uVar2 = DAT_004c5f4c;
                      if (uVar1 != DAT_004c5f4c) {
                        uVar2 = DAT_004c5f50;
                      }
                      if (uVar1 != DAT_004c5f4c && uVar1 != uVar2) {
                        uVar2 = DAT_004c5f54;
                        if (uVar1 != DAT_004c5f54) {
                          uVar2 = DAT_004c5f58;
                        }
                        if ((uVar1 != DAT_004c5f54 && uVar1 != uVar2) &&
                           (iVar3 = func_00676AFC(uVar1), iVar3 == 0)) {
                          func_00676B30(uVar1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 8;
}

