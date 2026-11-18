#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0065400c;
extern undefined4 *DAT_00654010;
extern undefined4 DAT_00654014;
extern uint *DAT_00654018;
extern undefined4 *DAT_0065401c;
extern undefined4 DAT_00654020;
extern uint *DAT_00654024;
extern undefined4 *DAT_00654028;
extern undefined4 DAT_0065402c;
extern uint *DAT_00654030;
extern undefined4 *DAT_00654034;
extern undefined4 DAT_00654038;
extern uint *DAT_0065403c;
extern undefined4 *DAT_00654040;
extern undefined4 DAT_00654044;
extern uint *DAT_00654048;
extern undefined4 *DAT_0065404c;
extern undefined4 DAT_00654050;
extern uint *DAT_00654054;
extern undefined4 *DAT_00654058;
extern undefined4 DAT_0065405c;

// USA 00653E44 <- EU 00653E1C (Ghidra, non-matching)
// GLOBAL DAT_0065400c uint *
// GLOBAL DAT_00654010 undefined4 *
// GLOBAL DAT_00654014 undefined4
// GLOBAL DAT_00654018 uint *
// GLOBAL DAT_0065401c undefined4 *
// GLOBAL DAT_00654020 undefined4
// GLOBAL DAT_00654024 uint *
// GLOBAL DAT_00654028 undefined4 *
// GLOBAL DAT_0065402c undefined4
// GLOBAL DAT_00654030 uint *
// GLOBAL DAT_00654034 undefined4 *
// GLOBAL DAT_00654038 undefined4
// GLOBAL DAT_0065403c uint *
// GLOBAL DAT_00654040 undefined4 *
// GLOBAL DAT_00654044 undefined4
// GLOBAL DAT_00654048 uint *
// GLOBAL DAT_0065404c undefined4 *
// GLOBAL DAT_00654050 undefined4
// GLOBAL DAT_00654054 uint *
// GLOBAL DAT_00654058 undefined4 *
// GLOBAL DAT_0065405c undefined4

undefined4 func_00653E44(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0065400c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0065400c), iVar1 != 0)) {
    *DAT_00654010 = DAT_00654014;
  }
  if (DAT_00654010 != param_1) {
    if (((*DAT_00654018 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00654018), iVar1 != 0)) {
      *DAT_0065401c = DAT_00654020;
    }
    if (DAT_0065401c != param_1) {
      if (((*DAT_00654024 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00654024), iVar1 != 0)) {
        *DAT_00654028 = DAT_0065402c;
      }
      if (DAT_00654028 != param_1) {
        if (((*DAT_00654030 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00654030), iVar1 != 0))
        {
          *DAT_00654034 = DAT_00654038;
        }
        if (DAT_00654034 != param_1) {
          if (((*DAT_0065403c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0065403c), iVar1 != 0)
             ) {
            *DAT_00654040 = DAT_00654044;
          }
          if (DAT_00654040 != param_1) {
            if (((*DAT_00654048 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00654048), iVar1 != 0)) {
              *DAT_0065404c = DAT_00654050;
            }
            if (DAT_0065404c != param_1) {
              if (((*DAT_00654054 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00654054), iVar1 != 0)) {
                *DAT_00654058 = DAT_0065405c;
              }
              if (DAT_00654058 != param_1) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

