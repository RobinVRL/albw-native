#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00530290(int param_1);
extern int func_0058E2B8(int *param_1);
extern int *DAT_00534654;
extern uint DAT_00534658;
extern uint DAT_0053465c;

// USA 005345D4 <- EU 005345AC (Ghidra, non-matching)
// GLOBAL DAT_00534654 int *
// GLOBAL DAT_00534658 uint
// GLOBAL DAT_0053465c uint

undefined1 func_005345D4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  piVar1 = DAT_00534654;
  if (*(char *)(param_1 + 0x78c) == '\x02') {
    local_14 = *(int *)(param_1 + 1000) - (**(int **)(*DAT_00534654 + 0x24) + -0x80000000);
    uVar3 = func_0058E2B8(&local_14);
    if (uVar3 <= DAT_00534658) {
      func_00115C70(afStack_20,*(float **)(*piVar1 + 0x1c),(float *)(param_1 + 0x3d0));
      func_004D7F70(afStack_20,-*(int *)(param_1 + 1000));
      if (local_18 <= DAT_0053465c) {
        uVar2 = func_00530290(param_1);
        return uVar2;
      }
    }
  }
  return 0;
}

