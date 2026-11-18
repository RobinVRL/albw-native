#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c0e80;
extern undefined4 *DAT_005c0e84;
extern undefined4 *DAT_005c0e88;
extern undefined DAT_005c0e8c;
extern undefined4 DAT_005c0e94;
extern uint *DAT_005c0ea8;
extern undefined4 DAT_005c0eac;
extern undefined4 *DAT_005c0eb0;
extern undefined4 DAT_005c0eb4;
extern undefined4 DAT_005c0eb8;
extern char s_ObjSandNeedle_005c0e98[];

// USA 005C0E14 <- EU 005C0DEC (Ghidra, non-matching)
// GLOBAL DAT_005c0e80 undefined4 *
// GLOBAL DAT_005c0e84 undefined4 *
// GLOBAL DAT_005c0e88 undefined4 *
// GLOBAL DAT_005c0e8c undefined
// GLOBAL DAT_005c0e94 undefined4
// GLOBAL DAT_005c0ea8 uint *
// GLOBAL DAT_005c0eac undefined4
// GLOBAL DAT_005c0eb0 undefined4 *
// GLOBAL DAT_005c0eb4 undefined4
// GLOBAL DAT_005c0eb8 undefined4
// GLOBAL s_ObjSandNeedle_005c0e98 string

undefined8 func_005C0E14(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c0e80;
  *DAT_005c0e80 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c0e84;
  *DAT_005c0e84 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c0e88;
  puVar3 = DAT_005c0e88 + 3;
  *DAT_005c0e88 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005c0e94;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005c0e8c;
  local_18 = local_10;
  local_14 = s_ObjSandNeedle_005c0e98;
  uVar2 = func_0019B51C(DAT_005c0eb0,DAT_005c0eac,*DAT_005c0ea8,(int)&local_18,DAT_005c0e88,
                        &local_10,0);
  return CONCAT44(DAT_005c0eb8,uVar2);
}

