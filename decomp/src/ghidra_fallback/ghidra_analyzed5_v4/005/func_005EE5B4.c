#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005ee644;
extern undefined4 *DAT_005ee648;
extern uint DAT_005ee64c;
extern uint DAT_005ee650;
extern undefined4 *DAT_005ee654;
extern undefined DAT_005ee658;
extern undefined4 DAT_005ee664;
extern uint *DAT_005ee67c;
extern undefined4 DAT_005ee680;
extern undefined4 *DAT_005ee684;
extern undefined4 DAT_005ee688;
extern undefined4 DAT_005ee68c;
extern char s_ObjBlackShueyesBall_005ee668[];

// USA 005EE5B4 <- EU 005EE58C (Ghidra, non-matching)
// GLOBAL DAT_005ee644 int
// GLOBAL DAT_005ee648 undefined4 *
// GLOBAL DAT_005ee64c uint
// GLOBAL DAT_005ee650 uint
// GLOBAL DAT_005ee654 undefined4 *
// GLOBAL DAT_005ee658 undefined
// GLOBAL DAT_005ee664 undefined4
// GLOBAL DAT_005ee67c uint *
// GLOBAL DAT_005ee680 undefined4
// GLOBAL DAT_005ee684 undefined4 *
// GLOBAL DAT_005ee688 undefined4
// GLOBAL DAT_005ee68c undefined4
// GLOBAL s_ObjBlackShueyesBall_005ee668 string

undefined8 func_005EE5B4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  iVar1 = DAT_005ee644;
  *(undefined4 *)(DAT_005ee644 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ee648;
  puVar4 = DAT_005ee648 + -4;
  *DAT_005ee648 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005ee64c,0);
  *puVar4 = (int)uVar5;
  uVar5 = func_00114608(DAT_005ee650,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-3] = (int)uVar5;
  puVar2 = DAT_005ee654;
  puVar4 = DAT_005ee654 + 3;
  *DAT_005ee654 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005ee664;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005ee658;
  local_18 = local_10;
  local_14 = s_ObjBlackShueyesBall_005ee668;
  uVar3 = func_0019B51C(DAT_005ee684,DAT_005ee680,*DAT_005ee67c,(int)&local_18,DAT_005ee654,
                        &local_10,0);
  return CONCAT44(DAT_005ee68c,uVar3);
}

