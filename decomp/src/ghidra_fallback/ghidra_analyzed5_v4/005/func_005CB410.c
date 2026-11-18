#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern int DAT_005cb448;
extern undefined4 *DAT_005cb44c;
extern int DAT_005cb450;
extern undefined *DAT_005cb454;
extern undefined4 *DAT_005cb458;
extern undefined4 DAT_005cb45c;
extern undefined4 DAT_005cb460;

// USA 005CB410 <- EU 005CB3E8 (Ghidra, non-matching)
// GLOBAL DAT_005cb448 int
// GLOBAL DAT_005cb44c undefined4 *
// GLOBAL DAT_005cb450 int
// GLOBAL DAT_005cb454 undefined *
// GLOBAL DAT_005cb458 undefined4 *
// GLOBAL DAT_005cb45c undefined4
// GLOBAL DAT_005cb460 undefined4

undefined4 func_005CB410(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cb448;
  *(undefined4 *)(DAT_005cb448 + 0x90) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x94) = 0xffffffff;
  puVar2 = DAT_005cb44c;
  *DAT_005cb44c = 0;
  puVar2[1] = 0;
  func_00100118(DAT_005cb450,DAT_005cb454,0xc,2);
  puVar2 = DAT_005cb458;
  *DAT_005cb458 = 0;
  func_0010DEB0(puVar2);
  return func_005902C0(puVar2);
}

