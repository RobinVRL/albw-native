#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ae610;
extern undefined4 *DAT_005ae614;
extern undefined4 DAT_005ae620;
extern undefined4 DAT_005ae624;
extern undefined4 DAT_005ae628;
extern undefined4 *DAT_005ae62c;
extern undefined DAT_005ae630;
extern uint *DAT_005ae64c;
extern undefined4 DAT_005ae650;
extern undefined4 *DAT_005ae654;
extern undefined4 DAT_005ae658;
extern char s_ObjTriForce_005ae640[];
extern char s_float_005ae618[];

// USA 005AE57C <- EU 005AE554 (Ghidra, non-matching)
// GLOBAL DAT_005ae610 undefined4 *
// GLOBAL DAT_005ae614 undefined4 *
// GLOBAL DAT_005ae620 undefined4
// GLOBAL DAT_005ae624 undefined4
// GLOBAL DAT_005ae628 undefined4
// GLOBAL DAT_005ae62c undefined4 *
// GLOBAL DAT_005ae630 undefined
// GLOBAL DAT_005ae64c uint *
// GLOBAL DAT_005ae650 undefined4
// GLOBAL DAT_005ae654 undefined4 *
// GLOBAL DAT_005ae658 undefined4
// GLOBAL s_ObjTriForce_005ae640 string
// GLOBAL s_float_005ae618 string

undefined8 func_005AE57C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005ae610;
  *DAT_005ae610 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005ae620;
  puVar1 = DAT_005ae614;
  *DAT_005ae614 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_float_005ae618;
  puVar1[2] = local_18;
  puVar1 = DAT_005ae62c;
  puVar3 = DAT_005ae62c + 3;
  *DAT_005ae62c = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005ae630;
  uStack_10 = local_18;
  local_c = s_ObjTriForce_005ae640;
  uVar2 = func_0019B51C(DAT_005ae654,DAT_005ae650,*DAT_005ae64c,(int)&uStack_10,DAT_005ae62c,
                        &local_18,0);
  return CONCAT44(DAT_005ae658,uVar2);
}

