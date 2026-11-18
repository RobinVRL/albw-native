#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005becb0;
extern undefined4 *DAT_005becb4;
extern undefined4 DAT_005becc4;
extern undefined4 DAT_005becc8;
extern undefined4 DAT_005beccc;
extern undefined4 *DAT_005becd0;
extern undefined DAT_005becd4;
extern uint *DAT_005becf4;
extern undefined4 DAT_005becf8;
extern undefined4 *DAT_005becfc;
extern undefined4 DAT_005bed00;
extern char s_MojSwitchPull_005bece4[];
extern char s_SwitchPull_005becb8[];

// USA 005BEC1C <- EU 005BEBF4 (Ghidra, non-matching)
// GLOBAL DAT_005becb0 undefined4 *
// GLOBAL DAT_005becb4 undefined4 *
// GLOBAL DAT_005becc4 undefined4
// GLOBAL DAT_005becc8 undefined4
// GLOBAL DAT_005beccc undefined4
// GLOBAL DAT_005becd0 undefined4 *
// GLOBAL DAT_005becd4 undefined
// GLOBAL DAT_005becf4 uint *
// GLOBAL DAT_005becf8 undefined4
// GLOBAL DAT_005becfc undefined4 *
// GLOBAL DAT_005bed00 undefined4
// GLOBAL s_MojSwitchPull_005bece4 string
// GLOBAL s_SwitchPull_005becb8 string

undefined8 func_005BEC1C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005becb0;
  *DAT_005becb0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005becc4;
  puVar1 = DAT_005becb4;
  *DAT_005becb4 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_SwitchPull_005becb8;
  puVar1[2] = local_18;
  puVar1 = DAT_005becd0;
  puVar3 = DAT_005becd0 + 3;
  *DAT_005becd0 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005becd4;
  uStack_10 = local_18;
  local_c = s_MojSwitchPull_005bece4;
  uVar2 = func_0019B51C(DAT_005becfc,DAT_005becf8,*DAT_005becf4,(int)&uStack_10,DAT_005becd0,
                        &local_18,0);
  return CONCAT44(DAT_005bed00,uVar2);
}

