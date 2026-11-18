#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b64cc;
extern undefined4 *DAT_005b64d0;
extern undefined4 DAT_005b64e0;
extern undefined4 DAT_005b64e4;
extern undefined4 DAT_005b64e8;
extern undefined4 *DAT_005b64ec;
extern undefined DAT_005b64f0;
extern uint *DAT_005b650c;
extern undefined4 DAT_005b6510;
extern undefined4 *DAT_005b6514;
extern undefined4 DAT_005b6518;
extern char s_MojWaterExit_005b64fc[];
extern char s_WaterExit_005b64d4[];

// USA 005B6438 <- EU 005B6410 (Ghidra, non-matching)
// GLOBAL DAT_005b64cc undefined4 *
// GLOBAL DAT_005b64d0 undefined4 *
// GLOBAL DAT_005b64e0 undefined4
// GLOBAL DAT_005b64e4 undefined4
// GLOBAL DAT_005b64e8 undefined4
// GLOBAL DAT_005b64ec undefined4 *
// GLOBAL DAT_005b64f0 undefined
// GLOBAL DAT_005b650c uint *
// GLOBAL DAT_005b6510 undefined4
// GLOBAL DAT_005b6514 undefined4 *
// GLOBAL DAT_005b6518 undefined4
// GLOBAL s_MojWaterExit_005b64fc string
// GLOBAL s_WaterExit_005b64d4 string

undefined8 func_005B6438(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define puStack_14 (*(undefined * *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(char * *)(albw_frame + 0x14))
  puVar1 = DAT_005b64cc;
  *DAT_005b64cc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_18 = DAT_005b64e0;
  puVar1 = DAT_005b64d0;
  *DAT_005b64d0 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_WaterExit_005b64d4;
  puVar1[2] = local_18;
  puVar1 = DAT_005b64ec;
  puVar3 = DAT_005b64ec + 3;
  *DAT_005b64ec = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar3;
  puStack_14 = &DAT_005b64f0;
  uStack_10 = local_18;
  local_c = s_MojWaterExit_005b64fc;
  uVar2 = func_0019B51C(DAT_005b6514,DAT_005b6510,*DAT_005b650c,(int)&uStack_10,DAT_005b64ec,
                        &local_18,0);
  return CONCAT44(DAT_005b6518,uVar2);
}

