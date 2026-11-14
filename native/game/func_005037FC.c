/* USA 005037FC (EU 005037D4): the game's Layout::BuildPaneObj override (vt +0x3C): kind
 * DAT_00503870-negated tag 0 / 0x604 -> game pane classes (0026E7D4 / 0012F4D4), anything else
 * -> the base nw::lyt::Layout::BuildPaneObj 0040415C (a tail call on ARM).
 * Native fix of the generated Ghidra text: the tail call's result was dropped (the function
 * returned 0), so every standard pane (pan1/pic1/txt1...) "failed" to build and the layout
 * builder 00404664 later dereferenced a NULL parent at 'pae1'. Confidence: high. */
#include "ghidra_types.h"

extern int func_0012F4D4(undefined4 *param_1,int param_2,int param_3,float *param_4);
extern int func_0026E7D4(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_0040415C(undefined4 param_1,int param_2,int param_3,int param_4,float *param_5);
extern int DAT_00503870;

// USA 005037FC <- EU 005037D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_00503870 int

undefined4 func_005037FC(undefined4 param_1,int param_2,int param_3,int param_4,float *param_5)

{
  undefined4 *puVar1;
  
  if (DAT_00503870 + param_2 == 0) {
    puVar1 = (undefined4 *)func_00404138(0xc4,4);
    if (puVar1 != (undefined4 *)0x0) {
      return func_0026E7D4(puVar1,param_3,param_4,param_5);
    }
  }
  else if (DAT_00503870 + param_2 == 0x604) {
    puVar1 = (undefined4 *)func_00404138(0x14c,4);
    if (puVar1 != (undefined4 *)0x0) {
      return func_0012F4D4(puVar1,param_3,param_4,param_5);
    }
  }
  else {
    return func_0040415C(param_1,param_2,param_3,param_4,param_5);  /* tail call */
  }
  return 0;
}

