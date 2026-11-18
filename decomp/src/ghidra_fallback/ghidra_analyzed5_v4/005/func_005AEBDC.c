#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010B830(undefined4 *param_1);
extern int func_0049BA90(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern int DAT_005aec58;
extern undefined4 *DAT_005aec5c;
extern undefined4 DAT_005aec60;
extern undefined4 DAT_005aec64;
extern undefined4 DAT_005aec68;
extern undefined4 *DAT_005aec6c;
extern undefined4 DAT_005aec70;
extern undefined4 *DAT_005aec74;
extern undefined4 *DAT_005aec78;
extern undefined4 *DAT_005aec7c;
extern undefined4 DAT_005aec80;

// USA 005AEBDC <- EU 005AEBB4 (Ghidra, non-matching)
// GLOBAL DAT_005aec58 int
// GLOBAL DAT_005aec5c undefined4 *
// GLOBAL DAT_005aec60 undefined4
// GLOBAL DAT_005aec64 undefined4
// GLOBAL DAT_005aec68 undefined4
// GLOBAL DAT_005aec6c undefined4 *
// GLOBAL DAT_005aec70 undefined4
// GLOBAL DAT_005aec74 undefined4 *
// GLOBAL DAT_005aec78 undefined4 *
// GLOBAL DAT_005aec7c undefined4 *
// GLOBAL DAT_005aec80 undefined4

undefined4 func_005AEBDC(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_005aec58;
  *(undefined4 *)(DAT_005aec58 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005aec5c;
  *DAT_005aec5c = 0;
  puVar2[1] = 0;
  puVar2[-4] = DAT_005aec60;
  puVar2[-3] = 0;
  func_0049BA90(DAT_005aec6c);
  puVar2 = DAT_005aec74;
  puVar3 = DAT_005aec74 + 3;
  *DAT_005aec74 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  func_0010B3EC(puVar2,4,(int)puVar3);
  puVar2 = DAT_005aec78;
  puVar3 = DAT_005aec78 + 3;
  *DAT_005aec78 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  func_0010B3EC(puVar2,4,(int)puVar3);
  puVar2 = func_0010B830(DAT_005aec7c);
  return func_005902C0(puVar2);
}

