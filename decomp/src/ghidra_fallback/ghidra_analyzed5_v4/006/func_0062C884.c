#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0062ca08;
extern undefined4 *DAT_0062ca0c;
extern undefined4 DAT_0062ca10;
extern uint *DAT_0062ca14;
extern undefined4 *DAT_0062ca18;
extern undefined4 DAT_0062ca1c;
extern uint *DAT_0062ca20;
extern undefined4 *DAT_0062ca24;
extern undefined4 DAT_0062ca28;
extern uint *DAT_0062ca2c;
extern undefined4 *DAT_0062ca30;
extern undefined4 DAT_0062ca34;
extern uint *DAT_0062ca38;
extern undefined4 *DAT_0062ca3c;
extern undefined4 DAT_0062ca40;
extern uint *DAT_0062ca44;
extern undefined4 *DAT_0062ca48;
extern undefined4 DAT_0062ca4c;

// USA 0062C884 <- EU 0062C85C (Ghidra, non-matching)
// GLOBAL DAT_0062ca08 uint *
// GLOBAL DAT_0062ca0c undefined4 *
// GLOBAL DAT_0062ca10 undefined4
// GLOBAL DAT_0062ca14 uint *
// GLOBAL DAT_0062ca18 undefined4 *
// GLOBAL DAT_0062ca1c undefined4
// GLOBAL DAT_0062ca20 uint *
// GLOBAL DAT_0062ca24 undefined4 *
// GLOBAL DAT_0062ca28 undefined4
// GLOBAL DAT_0062ca2c uint *
// GLOBAL DAT_0062ca30 undefined4 *
// GLOBAL DAT_0062ca34 undefined4
// GLOBAL DAT_0062ca38 uint *
// GLOBAL DAT_0062ca3c undefined4 *
// GLOBAL DAT_0062ca40 undefined4
// GLOBAL DAT_0062ca44 uint *
// GLOBAL DAT_0062ca48 undefined4 *
// GLOBAL DAT_0062ca4c undefined4

undefined4 func_0062C884(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0062ca08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062ca08), iVar1 != 0)) {
    *DAT_0062ca0c = DAT_0062ca10;
  }
  if (DAT_0062ca0c != param_1) {
    if (((*DAT_0062ca14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062ca14), iVar1 != 0)) {
      *DAT_0062ca18 = DAT_0062ca1c;
    }
    if (DAT_0062ca18 != param_1) {
      if (((*DAT_0062ca20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062ca20), iVar1 != 0)) {
        *DAT_0062ca24 = DAT_0062ca28;
      }
      if (DAT_0062ca24 != param_1) {
        if (((*DAT_0062ca2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062ca2c), iVar1 != 0))
        {
          *DAT_0062ca30 = DAT_0062ca34;
        }
        if (DAT_0062ca30 != param_1) {
          if (((*DAT_0062ca38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0062ca38), iVar1 != 0)
             ) {
            *DAT_0062ca3c = DAT_0062ca40;
          }
          if (DAT_0062ca3c != param_1) {
            if (((*DAT_0062ca44 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0062ca44), iVar1 != 0)) {
              *DAT_0062ca48 = DAT_0062ca4c;
            }
            if (DAT_0062ca48 != param_1) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

