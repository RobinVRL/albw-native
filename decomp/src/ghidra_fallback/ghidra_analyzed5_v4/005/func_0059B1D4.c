#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059b240;
extern undefined4 *DAT_0059b244;
extern undefined4 *DAT_0059b248;
extern undefined DAT_0059b24c;
extern undefined4 DAT_0059b25c;
extern uint *DAT_0059b26c;
extern undefined4 DAT_0059b270;
extern undefined4 *DAT_0059b274;
extern undefined4 DAT_0059b278;
extern undefined4 DAT_0059b27c;
extern char s_MapBlock_0059b260[];

// USA 0059B1D4 <- EU 0059B1AC (Ghidra, non-matching)
// GLOBAL DAT_0059b240 undefined4 *
// GLOBAL DAT_0059b244 undefined4 *
// GLOBAL DAT_0059b248 undefined4 *
// GLOBAL DAT_0059b24c undefined
// GLOBAL DAT_0059b25c undefined4
// GLOBAL DAT_0059b26c uint *
// GLOBAL DAT_0059b270 undefined4
// GLOBAL DAT_0059b274 undefined4 *
// GLOBAL DAT_0059b278 undefined4
// GLOBAL DAT_0059b27c undefined4
// GLOBAL s_MapBlock_0059b260 string

undefined8 func_0059B1D4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059b240;
  *DAT_0059b240 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059b244;
  *DAT_0059b244 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059b248;
  puVar3 = DAT_0059b248 + 3;
  *DAT_0059b248 = 0;
  puVar1[1] = 5;
  local_10 = DAT_0059b25c;
  puVar1[2] = puVar3;
  puStack_c = &DAT_0059b24c;
  local_18 = local_10;
  local_14 = s_MapBlock_0059b260;
  uVar2 = func_0019B51C(DAT_0059b274,DAT_0059b270,*DAT_0059b26c,(int)&local_18,DAT_0059b248,
                        &local_10,0);
  return CONCAT44(DAT_0059b27c,uVar2);
}

