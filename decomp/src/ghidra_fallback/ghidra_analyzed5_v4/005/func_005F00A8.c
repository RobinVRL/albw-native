#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004188A4(undefined1 *param_1);
extern int DAT_005f0130;
extern undefined *DAT_005f0134;
extern undefined4 *DAT_005f0138;
extern undefined4 DAT_005f013c;
extern undefined4 DAT_005f0140;
extern undefined4 DAT_005f0144;
extern undefined4 *DAT_005f0148;
extern undefined4 DAT_005f014c;
extern undefined4 DAT_005f0150;
extern undefined4 *DAT_005f0154;
extern undefined4 DAT_005f0158;
extern undefined4 DAT_005f015c;
extern undefined4 *DAT_005f0160;
extern undefined4 DAT_005f0164;
extern undefined4 DAT_005f0168;
extern undefined4 *DAT_005f016c;
extern undefined4 DAT_005f0170;
extern undefined4 DAT_005f0174;
extern undefined1 *DAT_005f0178;

// USA 005F00A8 <- EU 005F0080 (Ghidra, non-matching)
// GLOBAL DAT_005f0130 int
// GLOBAL DAT_005f0134 undefined *
// GLOBAL DAT_005f0138 undefined4 *
// GLOBAL DAT_005f013c undefined4
// GLOBAL DAT_005f0140 undefined4
// GLOBAL DAT_005f0144 undefined4
// GLOBAL DAT_005f0148 undefined4 *
// GLOBAL DAT_005f014c undefined4
// GLOBAL DAT_005f0150 undefined4
// GLOBAL DAT_005f0154 undefined4 *
// GLOBAL DAT_005f0158 undefined4
// GLOBAL DAT_005f015c undefined4
// GLOBAL DAT_005f0160 undefined4 *
// GLOBAL DAT_005f0164 undefined4
// GLOBAL DAT_005f0168 undefined4
// GLOBAL DAT_005f016c undefined4 *
// GLOBAL DAT_005f0170 undefined4
// GLOBAL DAT_005f0174 undefined4
// GLOBAL DAT_005f0178 undefined1 *

undefined4 func_005F00A8(void)

{
  int iVar1;
  
  iVar1 = func_00100118(DAT_005f0130,DAT_005f0134,8,7);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *DAT_005f0138 = DAT_005f013c;
  *DAT_005f0148 = DAT_005f014c;
  *DAT_005f0154 = DAT_005f0158;
  *DAT_005f0160 = DAT_005f0164;
  *DAT_005f016c = DAT_005f0170;
  return func_004188A4(DAT_005f0178);
}

