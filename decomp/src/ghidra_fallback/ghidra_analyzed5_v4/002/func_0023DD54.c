#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001E68F0(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00530290(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065F050(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0023de2c;
extern uint DAT_0023de30;
extern uint DAT_0023de34;

// USA 0023DD54 <- EU 0023DD54 (Ghidra, non-matching)
// GLOBAL DAT_0023de2c int *
// GLOBAL DAT_0023de30 uint
// GLOBAL DAT_0023de34 uint

undefined4 func_0023DD54(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  piVar1 = DAT_0023de2c;
  if (*(char *)(param_1 + 0x78c) == '\x02') {
    local_14 = *(int *)(param_1 + 1000) - (**(int **)(*DAT_0023de2c + 0x24) + -0x80000000);
    uVar3 = func_0058E2B8(&local_14);
    if (uVar3 <= DAT_0023de30) {
      func_00115C70(afStack_20,*(float **)(*piVar1 + 0x1c),(float *)(param_1 + 0x3d0));
      func_004D7F70(afStack_20,-*(int *)(param_1 + 1000));
      if (((local_18 <= DAT_0023de34) && (cVar2 = func_00530290(param_1), cVar2 == '\f')) &&
         (cVar2 = func_001E68F0(param_1), cVar2 == '\f')) {
        func_0065F050((undefined4 *)(param_1 + 0x788),3);
        return 0xc;
      }
    }
  }
  return 0;
}

