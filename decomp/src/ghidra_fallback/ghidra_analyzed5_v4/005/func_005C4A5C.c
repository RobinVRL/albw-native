#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005c4ac8;
extern undefined4 *DAT_005c4acc;
extern undefined4 *DAT_005c4ad0;
extern undefined DAT_005c4ad4;
extern undefined4 DAT_005c4ae0;
extern uint *DAT_005c4af4;
extern undefined4 DAT_005c4af8;
extern undefined4 *DAT_005c4afc;
extern undefined4 DAT_005c4b00;
extern undefined4 DAT_005c4b04;
extern char s_MojRentalHouse_005c4ae4[];

// USA 005C4A5C <- EU 005C4A34 (Ghidra, non-matching)
// GLOBAL DAT_005c4ac8 int
// GLOBAL DAT_005c4acc undefined4 *
// GLOBAL DAT_005c4ad0 undefined4 *
// GLOBAL DAT_005c4ad4 undefined
// GLOBAL DAT_005c4ae0 undefined4
// GLOBAL DAT_005c4af4 uint *
// GLOBAL DAT_005c4af8 undefined4
// GLOBAL DAT_005c4afc undefined4 *
// GLOBAL DAT_005c4b00 undefined4
// GLOBAL DAT_005c4b04 undefined4
// GLOBAL s_MojRentalHouse_005c4ae4 string

undefined8 func_005C4A5C(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005c4ac8;
  *(undefined4 *)(DAT_005c4ac8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c4acc;
  *DAT_005c4acc = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005c4ad0;
  puVar4 = DAT_005c4ad0 + 3;
  *DAT_005c4ad0 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005c4ae0;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005c4ad4;
  local_18 = local_10;
  local_14 = s_MojRentalHouse_005c4ae4;
  uVar3 = func_0019B51C(DAT_005c4afc,DAT_005c4af8,*DAT_005c4af4,(int)&local_18,DAT_005c4ad0,
                        &local_10,0);
  return CONCAT44(DAT_005c4b04,uVar3);
}

