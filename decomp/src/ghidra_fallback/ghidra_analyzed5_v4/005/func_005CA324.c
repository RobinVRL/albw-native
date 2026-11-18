#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ca390;
extern undefined4 *DAT_005ca394;
extern undefined4 *DAT_005ca398;
extern undefined DAT_005ca39c;
extern undefined4 DAT_005ca3ac;
extern uint *DAT_005ca3c0;
extern undefined4 DAT_005ca3c4;
extern undefined4 *DAT_005ca3c8;
extern undefined4 DAT_005ca3cc;
extern undefined4 DAT_005ca3d0;
extern char s_TagCameraFocus_005ca3b0[];

// USA 005CA324 <- EU 005CA2FC (Ghidra, non-matching)
// GLOBAL DAT_005ca390 undefined4 *
// GLOBAL DAT_005ca394 undefined4 *
// GLOBAL DAT_005ca398 undefined4 *
// GLOBAL DAT_005ca39c undefined
// GLOBAL DAT_005ca3ac undefined4
// GLOBAL DAT_005ca3c0 uint *
// GLOBAL DAT_005ca3c4 undefined4
// GLOBAL DAT_005ca3c8 undefined4 *
// GLOBAL DAT_005ca3cc undefined4
// GLOBAL DAT_005ca3d0 undefined4
// GLOBAL s_TagCameraFocus_005ca3b0 string

undefined8 func_005CA324(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ca390;
  *DAT_005ca390 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ca394;
  *DAT_005ca394 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ca398;
  puVar3 = DAT_005ca398 + 3;
  *DAT_005ca398 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005ca3ac;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005ca39c;
  local_18 = local_10;
  local_14 = s_TagCameraFocus_005ca3b0;
  uVar2 = func_0019B51C(DAT_005ca3c8,DAT_005ca3c4,*DAT_005ca3c0,(int)&local_18,DAT_005ca398,
                        &local_10,0);
  return CONCAT44(DAT_005ca3d0,uVar2);
}

