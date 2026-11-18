#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e6700;
extern undefined4 *DAT_005e6704;
extern undefined4 *DAT_005e6708;
extern undefined DAT_005e670c;
extern undefined4 DAT_005e671c;
extern uint *DAT_005e6734;
extern undefined4 DAT_005e6738;
extern undefined4 *DAT_005e673c;
extern undefined4 DAT_005e6740;
extern undefined4 DAT_005e6744;
extern char s_MojCaveZoraPillar_005e6720[];

// USA 005E6694 <- EU 005E666C (Ghidra, non-matching)
// GLOBAL DAT_005e6700 undefined4 *
// GLOBAL DAT_005e6704 undefined4 *
// GLOBAL DAT_005e6708 undefined4 *
// GLOBAL DAT_005e670c undefined
// GLOBAL DAT_005e671c undefined4
// GLOBAL DAT_005e6734 uint *
// GLOBAL DAT_005e6738 undefined4
// GLOBAL DAT_005e673c undefined4 *
// GLOBAL DAT_005e6740 undefined4
// GLOBAL DAT_005e6744 undefined4
// GLOBAL s_MojCaveZoraPillar_005e6720 string

undefined8 func_005E6694(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005e6700;
  *DAT_005e6700 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e6704;
  *DAT_005e6704 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e6708;
  puVar3 = DAT_005e6708 + 3;
  *DAT_005e6708 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005e671c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005e670c;
  local_18 = local_10;
  local_14 = s_MojCaveZoraPillar_005e6720;
  uVar2 = func_0019B51C(DAT_005e673c,DAT_005e6738,*DAT_005e6734,(int)&local_18,DAT_005e6708,
                        &local_10,0);
  return CONCAT44(DAT_005e6744,uVar2);
}

