#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005e358c;
extern undefined4 *DAT_005e3590;
extern undefined4 *DAT_005e3594;
extern undefined DAT_005e3598;
extern undefined4 DAT_005e35b0;
extern uint *DAT_005e35c8;
extern undefined4 DAT_005e35cc;
extern undefined4 *DAT_005e35d0;
extern undefined4 DAT_005e35d4;
extern undefined4 DAT_005e35d8;
extern char s_TagCameraVsGanon_005e35b4[];

// USA 005E3520 <- EU 005E34F8 (Ghidra, non-matching)
// GLOBAL DAT_005e358c undefined4 *
// GLOBAL DAT_005e3590 undefined4 *
// GLOBAL DAT_005e3594 undefined4 *
// GLOBAL DAT_005e3598 undefined
// GLOBAL DAT_005e35b0 undefined4
// GLOBAL DAT_005e35c8 uint *
// GLOBAL DAT_005e35cc undefined4
// GLOBAL DAT_005e35d0 undefined4 *
// GLOBAL DAT_005e35d4 undefined4
// GLOBAL DAT_005e35d8 undefined4
// GLOBAL s_TagCameraVsGanon_005e35b4 string

undefined8 func_005E3520(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005e358c;
  *DAT_005e358c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e3590;
  *DAT_005e3590 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005e3594;
  puVar3 = DAT_005e3594 + 3;
  *DAT_005e3594 = 0;
  puVar1[1] = 5;
  local_10 = DAT_005e35b0;
  puVar1[2] = puVar3;
  puStack_c = &DAT_005e3598;
  local_18 = local_10;
  local_14 = s_TagCameraVsGanon_005e35b4;
  uVar2 = func_0019B51C(DAT_005e35d0,DAT_005e35cc,*DAT_005e35c8,(int)&local_18,DAT_005e3594,
                        &local_10,0);
  return CONCAT44(DAT_005e35d8,uVar2);
}

