#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_005902C0(void *param_1);
extern int DAT_005efae0;
extern undefined4 *DAT_005efae4;
extern undefined *DAT_005efae8;
extern int DAT_005efaec;
extern undefined4 DAT_005efaf0;
extern undefined4 DAT_005efaf4;
extern undefined4 *DAT_005efaf8;
extern undefined4 DAT_005efafc;
extern undefined4 *DAT_005efb00;
extern undefined4 DAT_005efb04;

// USA 005EFA84 <- EU 005EFA5C (Ghidra, non-matching)
// GLOBAL DAT_005efae0 int
// GLOBAL DAT_005efae4 undefined4 *
// GLOBAL DAT_005efae8 undefined *
// GLOBAL DAT_005efaec int
// GLOBAL DAT_005efaf0 undefined4
// GLOBAL DAT_005efaf4 undefined4
// GLOBAL DAT_005efaf8 undefined4 *
// GLOBAL DAT_005efafc undefined4
// GLOBAL DAT_005efb00 undefined4 *
// GLOBAL DAT_005efb04 undefined4

undefined4 func_005EFA84(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005efae0;
  *(undefined4 *)(DAT_005efae0 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  puVar2 = DAT_005efae4;
  *DAT_005efae4 = 0;
  puVar2[1] = 0;
  func_00100118(DAT_005efaec,DAT_005efae8,4,3);
  puVar2 = DAT_005efaf8;
  *DAT_005efaf8 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  puVar2 = DAT_005efb00;
  *DAT_005efb00 = 0;
  puVar2[1] = 0;
  return func_005902C0(puVar2);
}

