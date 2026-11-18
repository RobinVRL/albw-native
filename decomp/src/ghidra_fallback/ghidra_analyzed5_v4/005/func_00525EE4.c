#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00526024;
extern undefined4 *DAT_00526028;
extern undefined4 DAT_0052602c;
extern uint *DAT_00526030;
extern undefined4 *DAT_00526034;
extern undefined4 DAT_00526038;
extern uint *DAT_0052603c;
extern undefined4 *DAT_00526040;
extern undefined4 DAT_00526044;
extern uint *DAT_00526048;
extern undefined4 *DAT_0052604c;
extern undefined4 DAT_00526050;
extern uint *DAT_00526054;
extern undefined4 *DAT_00526058;
extern undefined4 DAT_0052605c;

// USA 00525EE4 <- EU 00525EBC (Ghidra, non-matching)
// GLOBAL DAT_00526024 uint *
// GLOBAL DAT_00526028 undefined4 *
// GLOBAL DAT_0052602c undefined4
// GLOBAL DAT_00526030 uint *
// GLOBAL DAT_00526034 undefined4 *
// GLOBAL DAT_00526038 undefined4
// GLOBAL DAT_0052603c uint *
// GLOBAL DAT_00526040 undefined4 *
// GLOBAL DAT_00526044 undefined4
// GLOBAL DAT_00526048 uint *
// GLOBAL DAT_0052604c undefined4 *
// GLOBAL DAT_00526050 undefined4
// GLOBAL DAT_00526054 uint *
// GLOBAL DAT_00526058 undefined4 *
// GLOBAL DAT_0052605c undefined4

undefined4 func_00525EE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00526024 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526024), iVar1 != 0)) {
    *DAT_00526028 = DAT_0052602c;
  }
  if (DAT_00526028 != param_2) {
    if (((*DAT_00526030 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526030), iVar1 != 0)) {
      *DAT_00526034 = DAT_00526038;
    }
    if (DAT_00526034 != param_2) {
      if (((*DAT_0052603c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052603c), iVar1 != 0)) {
        *DAT_00526040 = DAT_00526044;
      }
      if (DAT_00526040 != param_2) {
        if (((*DAT_00526048 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526048), iVar1 != 0))
        {
          *DAT_0052604c = DAT_00526050;
        }
        if (DAT_0052604c != param_2) {
          if (((*DAT_00526054 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526054), iVar1 != 0)
             ) {
            *DAT_00526058 = DAT_0052605c;
          }
          if (DAT_00526058 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

