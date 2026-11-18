#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ad214;
extern undefined4 *DAT_005ad218;
extern undefined4 *DAT_005ad21c;
extern undefined DAT_005ad220;
extern undefined4 DAT_005ad228;
extern uint *DAT_005ad238;
extern undefined4 DAT_005ad23c;
extern undefined4 *DAT_005ad240;
extern undefined4 DAT_005ad244;
extern undefined4 DAT_005ad248;
extern char s_ObjFireBall_005ad22c[];

// USA 005AD1A8 <- EU 005AD180 (Ghidra, non-matching)
// GLOBAL DAT_005ad214 undefined4 *
// GLOBAL DAT_005ad218 undefined4 *
// GLOBAL DAT_005ad21c undefined4 *
// GLOBAL DAT_005ad220 undefined
// GLOBAL DAT_005ad228 undefined4
// GLOBAL DAT_005ad238 uint *
// GLOBAL DAT_005ad23c undefined4
// GLOBAL DAT_005ad240 undefined4 *
// GLOBAL DAT_005ad244 undefined4
// GLOBAL DAT_005ad248 undefined4
// GLOBAL s_ObjFireBall_005ad22c string

undefined8 func_005AD1A8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ad214;
  *DAT_005ad214 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ad218;
  *DAT_005ad218 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ad21c;
  puVar3 = DAT_005ad21c + 3;
  *DAT_005ad21c = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ad228;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ad220;
  local_18 = local_10;
  local_14 = s_ObjFireBall_005ad22c;
  uVar2 = func_0019B51C(DAT_005ad240,DAT_005ad23c,*DAT_005ad238,(int)&local_18,DAT_005ad21c,
                        &local_10,0);
  return CONCAT44(DAT_005ad248,uVar2);
}

