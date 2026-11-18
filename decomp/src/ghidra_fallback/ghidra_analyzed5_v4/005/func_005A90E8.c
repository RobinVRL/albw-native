#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005a9128;
extern undefined4 *DAT_005a912c;
extern undefined4 *DAT_005a9130;
extern undefined4 DAT_005a9134;
extern undefined4 DAT_005a9138;
extern undefined4 DAT_005a913c;
extern undefined4 DAT_005a9140;
extern undefined4 DAT_005a9144;

// USA 005A90E8 <- EU 005A90C0 (Ghidra, non-matching)
// GLOBAL DAT_005a9128 int
// GLOBAL DAT_005a912c undefined4 *
// GLOBAL DAT_005a9130 undefined4 *
// GLOBAL DAT_005a9134 undefined4
// GLOBAL DAT_005a9138 undefined4
// GLOBAL DAT_005a913c undefined4
// GLOBAL DAT_005a9140 undefined4
// GLOBAL DAT_005a9144 undefined4

undefined4 func_005A90E8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a9128;
  *(undefined4 *)(DAT_005a9128 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005a912c;
  *DAT_005a912c = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005a9130;
  DAT_005a9130[1] = DAT_005a9130 + 3;
  puVar2[2] = 0x200;
  *(undefined1 *)(puVar2[1] + 0x1ff) = 0;
  *(undefined1 *)puVar2[1] = 0;
  *puVar2 = DAT_005a913c;
  return func_005902C0(puVar2);
}

