#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b8094;
extern undefined4 *DAT_005b8098;
extern undefined4 *DAT_005b809c;
extern undefined DAT_005b80a0;
extern undefined4 DAT_005b80b0;
extern uint *DAT_005b80c4;
extern undefined4 DAT_005b80c8;
extern undefined4 *DAT_005b80cc;
extern undefined4 DAT_005b80d0;
extern undefined4 DAT_005b80d4;
extern char s_ObjDemonBlue_005b80b4[];

// USA 005B8028 <- EU 005B8000 (Ghidra, non-matching)
// GLOBAL DAT_005b8094 undefined4 *
// GLOBAL DAT_005b8098 undefined4 *
// GLOBAL DAT_005b809c undefined4 *
// GLOBAL DAT_005b80a0 undefined
// GLOBAL DAT_005b80b0 undefined4
// GLOBAL DAT_005b80c4 uint *
// GLOBAL DAT_005b80c8 undefined4
// GLOBAL DAT_005b80cc undefined4 *
// GLOBAL DAT_005b80d0 undefined4
// GLOBAL DAT_005b80d4 undefined4
// GLOBAL s_ObjDemonBlue_005b80b4 string

undefined8 func_005B8028(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b8094;
  *DAT_005b8094 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005b8098;
  *DAT_005b8098 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b809c;
  puVar3 = DAT_005b809c + 3;
  *DAT_005b809c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005b80b0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005b80a0;
  local_18 = local_10;
  local_14 = s_ObjDemonBlue_005b80b4;
  uVar2 = func_0019B51C(DAT_005b80cc,DAT_005b80c8,*DAT_005b80c4,(int)&local_18,DAT_005b809c,
                        &local_10,0);
  return CONCAT44(DAT_005b80d4,uVar2);
}

