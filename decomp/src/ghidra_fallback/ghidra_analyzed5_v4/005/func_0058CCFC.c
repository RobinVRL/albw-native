#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058cec4;
extern undefined4 *DAT_0058cec8;
extern undefined4 DAT_0058cecc;
extern uint *DAT_0058ced0;
extern undefined4 *DAT_0058ced4;
extern undefined4 DAT_0058ced8;
extern uint *DAT_0058cedc;
extern undefined4 *DAT_0058cee0;
extern undefined4 DAT_0058cee4;
extern uint *DAT_0058cee8;
extern undefined4 *DAT_0058ceec;
extern undefined4 DAT_0058cef0;
extern uint *DAT_0058cef4;
extern undefined4 *DAT_0058cef8;
extern undefined4 DAT_0058cefc;
extern uint *DAT_0058cf00;
extern undefined4 *DAT_0058cf04;
extern undefined4 DAT_0058cf08;
extern uint *DAT_0058cf0c;
extern undefined4 *DAT_0058cf10;
extern undefined4 DAT_0058cf14;

// USA 0058CCFC <- EU 0058CCD4 (Ghidra, non-matching)
// GLOBAL DAT_0058cec4 uint *
// GLOBAL DAT_0058cec8 undefined4 *
// GLOBAL DAT_0058cecc undefined4
// GLOBAL DAT_0058ced0 uint *
// GLOBAL DAT_0058ced4 undefined4 *
// GLOBAL DAT_0058ced8 undefined4
// GLOBAL DAT_0058cedc uint *
// GLOBAL DAT_0058cee0 undefined4 *
// GLOBAL DAT_0058cee4 undefined4
// GLOBAL DAT_0058cee8 uint *
// GLOBAL DAT_0058ceec undefined4 *
// GLOBAL DAT_0058cef0 undefined4
// GLOBAL DAT_0058cef4 uint *
// GLOBAL DAT_0058cef8 undefined4 *
// GLOBAL DAT_0058cefc undefined4
// GLOBAL DAT_0058cf00 uint *
// GLOBAL DAT_0058cf04 undefined4 *
// GLOBAL DAT_0058cf08 undefined4
// GLOBAL DAT_0058cf0c uint *
// GLOBAL DAT_0058cf10 undefined4 *
// GLOBAL DAT_0058cf14 undefined4

undefined4 func_0058CCFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058cec4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cec4), iVar1 != 0)) {
    *DAT_0058cec8 = DAT_0058cecc;
  }
  if (DAT_0058cec8 != param_2) {
    if (((*DAT_0058ced0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058ced0), iVar1 != 0)) {
      *DAT_0058ced4 = DAT_0058ced8;
    }
    if (DAT_0058ced4 != param_2) {
      if (((*DAT_0058cedc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cedc), iVar1 != 0)) {
        *DAT_0058cee0 = DAT_0058cee4;
      }
      if (DAT_0058cee0 != param_2) {
        if (((*DAT_0058cee8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cee8), iVar1 != 0))
        {
          *DAT_0058ceec = DAT_0058cef0;
        }
        if (DAT_0058ceec != param_2) {
          if (((*DAT_0058cef4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058cef4), iVar1 != 0)
             ) {
            *DAT_0058cef8 = DAT_0058cefc;
          }
          if (DAT_0058cef8 != param_2) {
            if (((*DAT_0058cf00 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0058cf00), iVar1 != 0)) {
              *DAT_0058cf04 = DAT_0058cf08;
            }
            if (DAT_0058cf04 != param_2) {
              if (((*DAT_0058cf0c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0058cf0c), iVar1 != 0)) {
                *DAT_0058cf10 = DAT_0058cf14;
              }
              if (DAT_0058cf10 != param_2) {
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

