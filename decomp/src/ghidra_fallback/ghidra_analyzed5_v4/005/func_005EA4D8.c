#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005ea568;
extern undefined4 *DAT_005ea56c;
extern uint DAT_005ea570;
extern uint DAT_005ea574;
extern undefined4 *DAT_005ea578;
extern undefined DAT_005ea57c;
extern undefined4 DAT_005ea59c;
extern uint *DAT_005ea5b4;
extern undefined4 DAT_005ea5b8;
extern undefined4 *DAT_005ea5bc;
extern undefined4 DAT_005ea5c0;
extern undefined4 DAT_005ea5c4;
extern char s_ObjMoriblinShield_005ea5a0[];

// USA 005EA4D8 <- EU 005EA4B0 (Ghidra, non-matching)
// GLOBAL DAT_005ea568 int
// GLOBAL DAT_005ea56c undefined4 *
// GLOBAL DAT_005ea570 uint
// GLOBAL DAT_005ea574 uint
// GLOBAL DAT_005ea578 undefined4 *
// GLOBAL DAT_005ea57c undefined
// GLOBAL DAT_005ea59c undefined4
// GLOBAL DAT_005ea5b4 uint *
// GLOBAL DAT_005ea5b8 undefined4
// GLOBAL DAT_005ea5bc undefined4 *
// GLOBAL DAT_005ea5c0 undefined4
// GLOBAL DAT_005ea5c4 undefined4
// GLOBAL s_ObjMoriblinShield_005ea5a0 string

undefined8 func_005EA4D8(void)

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
  iVar1 = DAT_005ea568;
  *(undefined4 *)(DAT_005ea568 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ea56c;
  puVar4 = DAT_005ea56c + -4;
  *DAT_005ea56c = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(DAT_005ea570,0);
  *puVar4 = (int)uVar5;
  uVar5 = func_00114608(DAT_005ea574,(uint)((ulonglong)uVar5 >> 0x20));
  puVar2[-3] = (int)uVar5;
  puVar2 = DAT_005ea578;
  puVar4 = DAT_005ea578 + 3;
  *DAT_005ea578 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005ea59c;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005ea57c;
  local_18 = local_10;
  local_14 = s_ObjMoriblinShield_005ea5a0;
  uVar3 = func_0019B51C(DAT_005ea5bc,DAT_005ea5b8,*DAT_005ea5b4,(int)&local_18,DAT_005ea578,
                        &local_10,0);
  return CONCAT44(DAT_005ea5c4,uVar3);
}

