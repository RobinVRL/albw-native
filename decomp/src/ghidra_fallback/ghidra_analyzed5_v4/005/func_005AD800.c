#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ad86c;
extern undefined4 *DAT_005ad870;
extern undefined4 *DAT_005ad874;
extern undefined DAT_005ad878;
extern undefined4 DAT_005ad880;
extern uint *DAT_005ad890;
extern undefined4 DAT_005ad894;
extern undefined4 *DAT_005ad898;
extern undefined4 DAT_005ad89c;
extern undefined4 DAT_005ad8a0;
extern char s_ObjKeySmall_005ad884[];

// USA 005AD800 <- EU 005AD7D8 (Ghidra, non-matching)
// GLOBAL DAT_005ad86c undefined4 *
// GLOBAL DAT_005ad870 undefined4 *
// GLOBAL DAT_005ad874 undefined4 *
// GLOBAL DAT_005ad878 undefined
// GLOBAL DAT_005ad880 undefined4
// GLOBAL DAT_005ad890 uint *
// GLOBAL DAT_005ad894 undefined4
// GLOBAL DAT_005ad898 undefined4 *
// GLOBAL DAT_005ad89c undefined4
// GLOBAL DAT_005ad8a0 undefined4
// GLOBAL s_ObjKeySmall_005ad884 string

undefined8 func_005AD800(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ad86c;
  *DAT_005ad86c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ad870;
  *DAT_005ad870 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ad874;
  puVar3 = DAT_005ad874 + 3;
  *DAT_005ad874 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ad880;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ad878;
  local_18 = local_10;
  local_14 = s_ObjKeySmall_005ad884;
  uVar2 = func_0019B51C(DAT_005ad898,DAT_005ad894,*DAT_005ad890,(int)&local_18,DAT_005ad874,
                        &local_10,0);
  return CONCAT44(DAT_005ad8a0,uVar2);
}

