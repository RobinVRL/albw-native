#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005beba8;
extern undefined4 *DAT_005bebac;
extern undefined4 *DAT_005bebb0;
extern undefined DAT_005bebb4;
extern undefined4 DAT_005bebcc;
extern uint *DAT_005bebe0;
extern undefined4 DAT_005bebe4;
extern undefined4 *DAT_005bebe8;
extern undefined4 DAT_005bebec;
extern undefined4 DAT_005bebf0;
extern char s_MojStatueHint_005bebd0[];

// USA 005BEB3C <- EU 005BEB14 (Ghidra, non-matching)
// GLOBAL DAT_005beba8 undefined4 *
// GLOBAL DAT_005bebac undefined4 *
// GLOBAL DAT_005bebb0 undefined4 *
// GLOBAL DAT_005bebb4 undefined
// GLOBAL DAT_005bebcc undefined4
// GLOBAL DAT_005bebe0 uint *
// GLOBAL DAT_005bebe4 undefined4
// GLOBAL DAT_005bebe8 undefined4 *
// GLOBAL DAT_005bebec undefined4
// GLOBAL DAT_005bebf0 undefined4
// GLOBAL s_MojStatueHint_005bebd0 string

undefined8 func_005BEB3C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005beba8;
  *DAT_005beba8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005bebac;
  *DAT_005bebac = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005bebb0;
  puVar3 = DAT_005bebb0 + 3;
  *DAT_005bebb0 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005bebcc;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005bebb4;
  local_18 = local_10;
  local_14 = s_MojStatueHint_005bebd0;
  uVar2 = func_0019B51C(DAT_005bebe8,DAT_005bebe4,*DAT_005bebe0,(int)&local_18,DAT_005bebb0,
                        &local_10,0);
  return CONCAT44(DAT_005bebf0,uVar2);
}

