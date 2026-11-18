#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059f1c0;
extern undefined4 *DAT_0059f1c4;
extern undefined4 *DAT_0059f1c8;
extern undefined DAT_0059f1cc;
extern undefined4 DAT_0059f1d4;
extern uint *DAT_0059f1e4;
extern undefined4 DAT_0059f1e8;
extern undefined4 *DAT_0059f1ec;
extern undefined4 DAT_0059f1f0;
extern undefined4 DAT_0059f1f4;
extern char s_ObjRupee_0059f1d8[];

// USA 0059F154 <- EU 0059F12C (Ghidra, non-matching)
// GLOBAL DAT_0059f1c0 undefined4 *
// GLOBAL DAT_0059f1c4 undefined4 *
// GLOBAL DAT_0059f1c8 undefined4 *
// GLOBAL DAT_0059f1cc undefined
// GLOBAL DAT_0059f1d4 undefined4
// GLOBAL DAT_0059f1e4 uint *
// GLOBAL DAT_0059f1e8 undefined4
// GLOBAL DAT_0059f1ec undefined4 *
// GLOBAL DAT_0059f1f0 undefined4
// GLOBAL DAT_0059f1f4 undefined4
// GLOBAL s_ObjRupee_0059f1d8 string

undefined8 func_0059F154(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059f1c0;
  *DAT_0059f1c0 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f1c4;
  *DAT_0059f1c4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059f1c8;
  puVar3 = DAT_0059f1c8 + 3;
  *DAT_0059f1c8 = 0;
  puVar1[1] = 5;
  local_10 = DAT_0059f1d4;
  puVar1[2] = puVar3;
  puStack_c = &DAT_0059f1cc;
  local_18 = local_10;
  local_14 = s_ObjRupee_0059f1d8;
  uVar2 = func_0019B51C(DAT_0059f1ec,DAT_0059f1e8,*DAT_0059f1e4,(int)&local_18,DAT_0059f1c8,
                        &local_10,0);
  return CONCAT44(DAT_0059f1f4,uVar2);
}

