#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052a8e4;
extern undefined4 *DAT_0052a8e8;
extern undefined4 DAT_0052a8ec;
extern uint *DAT_0052a8f0;
extern undefined4 *DAT_0052a8f4;
extern undefined4 DAT_0052a8f8;
extern uint *DAT_0052a8fc;
extern undefined4 *DAT_0052a900;
extern undefined4 DAT_0052a904;
extern uint *DAT_0052a908;
extern undefined4 *DAT_0052a90c;
extern undefined4 DAT_0052a910;
extern uint *DAT_0052a914;
extern undefined4 *DAT_0052a918;
extern undefined4 DAT_0052a91c;

// USA 0052A7A4 <- EU 0052A77C (Ghidra, non-matching)
// GLOBAL DAT_0052a8e4 uint *
// GLOBAL DAT_0052a8e8 undefined4 *
// GLOBAL DAT_0052a8ec undefined4
// GLOBAL DAT_0052a8f0 uint *
// GLOBAL DAT_0052a8f4 undefined4 *
// GLOBAL DAT_0052a8f8 undefined4
// GLOBAL DAT_0052a8fc uint *
// GLOBAL DAT_0052a900 undefined4 *
// GLOBAL DAT_0052a904 undefined4
// GLOBAL DAT_0052a908 uint *
// GLOBAL DAT_0052a90c undefined4 *
// GLOBAL DAT_0052a910 undefined4
// GLOBAL DAT_0052a914 uint *
// GLOBAL DAT_0052a918 undefined4 *
// GLOBAL DAT_0052a91c undefined4

undefined4 func_0052A7A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052a8e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a8e4), iVar1 != 0)) {
    *DAT_0052a8e8 = DAT_0052a8ec;
  }
  if (DAT_0052a8e8 != param_2) {
    if (((*DAT_0052a8f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a8f0), iVar1 != 0)) {
      *DAT_0052a8f4 = DAT_0052a8f8;
    }
    if (DAT_0052a8f4 != param_2) {
      if (((*DAT_0052a8fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a8fc), iVar1 != 0)) {
        *DAT_0052a900 = DAT_0052a904;
      }
      if (DAT_0052a900 != param_2) {
        if (((*DAT_0052a908 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a908), iVar1 != 0))
        {
          *DAT_0052a90c = DAT_0052a910;
        }
        if (DAT_0052a90c != param_2) {
          if (((*DAT_0052a914 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a914), iVar1 != 0)
             ) {
            *DAT_0052a918 = DAT_0052a91c;
          }
          if (DAT_0052a918 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

