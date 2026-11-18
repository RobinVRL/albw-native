#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c6e08;
extern undefined4 *DAT_005c6e0c;
extern undefined4 *DAT_005c6e10;
extern undefined DAT_005c6e14;
extern undefined4 DAT_005c6e1c;
extern undefined4 DAT_005c6e38;
extern undefined4 DAT_005c6e3c;
extern undefined4 *DAT_005c6e40;
extern undefined DAT_005c6e44;
extern uint *DAT_005c6e64;
extern undefined4 DAT_005c6e68;
extern undefined4 *DAT_005c6e6c;
extern undefined4 DAT_005c6e70;
extern char s_ObjOmugaiShell_005c6e54[];
extern char s_fall_ed_005c6e30[];
extern char s_fall_md_005c6e28[];
extern char s_fall_st_005c6e20[];

// USA 005C6D50 <- EU 005C6D28 (Ghidra, non-matching)
// GLOBAL DAT_005c6e08 undefined4 *
// GLOBAL DAT_005c6e0c undefined4 *
// GLOBAL DAT_005c6e10 undefined4 *
// GLOBAL DAT_005c6e14 undefined
// GLOBAL DAT_005c6e1c undefined4
// GLOBAL DAT_005c6e38 undefined4
// GLOBAL DAT_005c6e3c undefined4
// GLOBAL DAT_005c6e40 undefined4 *
// GLOBAL DAT_005c6e44 undefined
// GLOBAL DAT_005c6e64 uint *
// GLOBAL DAT_005c6e68 undefined4
// GLOBAL DAT_005c6e6c undefined4 *
// GLOBAL DAT_005c6e70 undefined4
// GLOBAL s_ObjOmugaiShell_005c6e54 string
// GLOBAL s_fall_ed_005c6e30 string
// GLOBAL s_fall_md_005c6e28 string
// GLOBAL s_fall_st_005c6e20 string

undefined8 func_005C6D50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005c6e08;
  *DAT_005c6e08 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005c6e1c;
  puVar1 = DAT_005c6e0c;
  *DAT_005c6e0c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c6e10;
  DAT_005c6e10[1] = &DAT_005c6e14;
  *puVar1 = local_18;
  puVar1[3] = s_fall_st_005c6e20;
  puVar1[2] = local_18;
  puVar1[5] = s_fall_md_005c6e28;
  puVar1[4] = local_18;
  puVar1[6] = local_18;
  puVar1[7] = s_fall_ed_005c6e30;
  puVar1 = DAT_005c6e40;
  puVar3 = DAT_005c6e40 + 3;
  *DAT_005c6e40 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005c6e44;
  uStack_10 = local_18;
  local_c = s_ObjOmugaiShell_005c6e54;
  uVar2 = func_0019B51C(DAT_005c6e6c,DAT_005c6e68,*DAT_005c6e64,(int)&uStack_10,DAT_005c6e40,
                        &local_18,0);
  return CONCAT44(DAT_005c6e70,uVar2);
}

