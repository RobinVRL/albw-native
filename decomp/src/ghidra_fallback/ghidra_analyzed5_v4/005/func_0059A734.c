#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_0059aa2c;
extern int *DAT_0059aa30;
extern undefined DAT_0059aa34;
extern int DAT_0059aa3c;
extern undefined DAT_0059aa40;
extern undefined DAT_0059aa44;
extern undefined DAT_0059aa48;
extern undefined DAT_0059aa4c;
extern undefined DAT_0059aa58;
extern undefined DAT_0059aa64;
extern undefined DAT_0059aa78;
extern undefined DAT_0059aa88;
extern undefined DAT_0059aa98;
extern undefined DAT_0059aaac;
extern undefined DAT_0059aab8;
extern undefined DAT_0059aac8;
extern undefined DAT_0059aad8;
extern undefined DAT_0059aae0;
extern undefined DAT_0059aaec;
extern undefined DAT_0059aafc;
extern undefined DAT_0059ab08;
extern undefined DAT_0059ab14;
extern undefined DAT_0059ab20;
extern undefined DAT_0059ab2c;
extern undefined DAT_0059ab38;
extern undefined DAT_0059ab40;
extern undefined DAT_0059ab48;
extern undefined DAT_0059ab54;
extern undefined DAT_0059ab60;
extern undefined DAT_0059ab68;
extern undefined DAT_0059ab70;
extern undefined DAT_0059ab7c;
extern undefined DAT_0059ab88;
extern undefined DAT_0059ab9c;
extern undefined DAT_0059aba4;
extern undefined4 DAT_0059abb0;
extern undefined4 DAT_0059abb4;
extern int *DAT_0059abb8;
extern undefined4 DAT_0059abd0;
extern undefined DAT_0059abd4;
extern uint DAT_0059abd8;
extern uint DAT_0059abdc;
extern uint DAT_0059abe0;
extern uint DAT_0059abe4;
extern uint DAT_0059abe8;
extern undefined4 *DAT_0059abec;
extern undefined4 DAT_0059abf0;
extern undefined4 *DAT_0059abf4;
extern int DAT_0059ac04;
extern uint *DAT_0059ac08;
extern undefined4 DAT_0059ac0c;
extern undefined4 *DAT_0059ac10;
extern undefined4 DAT_0059ac14;
extern char s_EnemyBee_0059abf8[];
extern char s_damage00_0059abc4[];
extern char s_fly00_0059abbc[];

// USA 0059A734 <- EU 0059A70C (Ghidra, non-matching)
// GLOBAL DAT_0059aa2c int *
// GLOBAL DAT_0059aa30 int *
// GLOBAL DAT_0059aa34 undefined
// GLOBAL DAT_0059aa3c int
// GLOBAL DAT_0059aa40 undefined
// GLOBAL DAT_0059aa44 undefined
// GLOBAL DAT_0059aa48 undefined
// GLOBAL DAT_0059aa4c undefined
// GLOBAL DAT_0059aa58 undefined
// GLOBAL DAT_0059aa64 undefined
// GLOBAL DAT_0059aa78 undefined
// GLOBAL DAT_0059aa88 undefined
// GLOBAL DAT_0059aa98 undefined
// GLOBAL DAT_0059aaac undefined
// GLOBAL DAT_0059aab8 undefined
// GLOBAL DAT_0059aac8 undefined
// GLOBAL DAT_0059aad8 undefined
// GLOBAL DAT_0059aae0 undefined
// GLOBAL DAT_0059aaec undefined
// GLOBAL DAT_0059aafc undefined
// GLOBAL DAT_0059ab08 undefined
// GLOBAL DAT_0059ab14 undefined
// GLOBAL DAT_0059ab20 undefined
// GLOBAL DAT_0059ab2c undefined
// GLOBAL DAT_0059ab38 undefined
// GLOBAL DAT_0059ab40 undefined
// GLOBAL DAT_0059ab48 undefined
// GLOBAL DAT_0059ab54 undefined
// GLOBAL DAT_0059ab60 undefined
// GLOBAL DAT_0059ab68 undefined
// GLOBAL DAT_0059ab70 undefined
// GLOBAL DAT_0059ab7c undefined
// GLOBAL DAT_0059ab88 undefined
// GLOBAL DAT_0059ab9c undefined
// GLOBAL DAT_0059aba4 undefined
// GLOBAL DAT_0059abb0 undefined4
// GLOBAL DAT_0059abb4 undefined4
// GLOBAL DAT_0059abb8 int *
// GLOBAL DAT_0059abd0 undefined4
// GLOBAL DAT_0059abd4 undefined
// GLOBAL DAT_0059abd8 uint
// GLOBAL DAT_0059abdc uint
// GLOBAL DAT_0059abe0 uint
// GLOBAL DAT_0059abe4 uint
// GLOBAL DAT_0059abe8 uint
// GLOBAL DAT_0059abec undefined4 *
// GLOBAL DAT_0059abf0 undefined4
// GLOBAL DAT_0059abf4 undefined4 *
// GLOBAL DAT_0059ac04 int
// GLOBAL DAT_0059ac08 uint *
// GLOBAL DAT_0059ac0c undefined4
// GLOBAL DAT_0059ac10 undefined4 *
// GLOBAL DAT_0059ac14 undefined4
// GLOBAL s_EnemyBee_0059abf8 string
// GLOBAL s_damage00_0059abc4 string
// GLOBAL s_fly00_0059abbc string

undefined8 func_0059A734(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_2c (*(undefined1 *)(albw_frame + 0x14))
  #define local_2b (*(undefined1 *)(albw_frame + 0x15))
  #define local_2a (*(undefined1 *)(albw_frame + 0x16))
  #define local_29 (*(undefined1 *)(albw_frame + 0x17))
  #define local_28 (*(undefined1 *)(albw_frame + 0x18))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  iVar5 = DAT_0059aa3c;
  piVar1 = DAT_0059aa2c;
  DAT_0059aa2c[8] = -1;
  piVar1[9] = -1;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  piVar2 = DAT_0059aa30;
  DAT_0059aa30[1] = (int)&DAT_0059aa34;
  *piVar2 = iVar5;
  piVar2[3] = (int)&DAT_0059aa40;
  piVar2[2] = iVar5;
  piVar2[5] = (int)&DAT_0059aa44;
  piVar2[4] = iVar5;
  piVar2[7] = (int)&DAT_0059aa48;
  piVar2[6] = iVar5;
  piVar2[9] = (int)&DAT_0059aa4c;
  piVar2[8] = iVar5;
  piVar2[0xb] = (int)&DAT_0059aa58;
  piVar2[10] = iVar5;
  piVar2[0xd] = (int)&DAT_0059aa64;
  piVar2[0xc] = iVar5;
  piVar2[0xf] = (int)&DAT_0059aa78;
  piVar2[0xe] = iVar5;
  piVar2[0x11] = (int)&DAT_0059aa88;
  piVar2[0x10] = iVar5;
  piVar2[0x13] = (int)&DAT_0059aa98;
  piVar2[0x12] = iVar5;
  piVar2[0x15] = (int)&DAT_0059aaac;
  piVar2[0x14] = iVar5;
  piVar2[0x17] = (int)&DAT_0059aab8;
  piVar2[0x16] = iVar5;
  piVar2[0x19] = (int)&DAT_0059aac8;
  piVar2[0x18] = iVar5;
  piVar2[0x1b] = (int)&DAT_0059aad8;
  piVar2[0x1a] = iVar5;
  piVar2[0x1d] = (int)&DAT_0059aae0;
  piVar2[0x1c] = iVar5;
  piVar2[0x1f] = (int)&DAT_0059aaec;
  piVar2[0x1e] = iVar5;
  piVar2[0x21] = (int)&DAT_0059aafc;
  piVar2[0x20] = iVar5;
  piVar2[0x23] = (int)&DAT_0059ab08;
  piVar2[0x22] = iVar5;
  piVar2[0x25] = (int)&DAT_0059ab14;
  piVar2[0x24] = iVar5;
  piVar2[0x27] = (int)&DAT_0059ab20;
  piVar2[0x26] = iVar5;
  piVar2[0x29] = (int)&DAT_0059ab2c;
  piVar2[0x28] = iVar5;
  piVar2[0x2b] = (int)&DAT_0059ab38;
  piVar2[0x2a] = iVar5;
  piVar2[0x2d] = (int)&DAT_0059ab40;
  piVar2[0x2c] = iVar5;
  piVar2[0x2f] = (int)&DAT_0059ab48;
  piVar2[0x2e] = iVar5;
  piVar2[0x31] = (int)&DAT_0059ab54;
  piVar2[0x30] = iVar5;
  piVar2[0x33] = (int)&DAT_0059ab60;
  piVar2[0x32] = iVar5;
  piVar2[0x35] = (int)&DAT_0059ab68;
  piVar2[0x34] = iVar5;
  piVar2[0x37] = (int)&DAT_0059ab70;
  piVar2[0x36] = iVar5;
  piVar2[0x39] = (int)&DAT_0059ab7c;
  piVar2[0x38] = iVar5;
  piVar2[0x3b] = (int)&DAT_0059ab88;
  piVar2[0x3a] = iVar5;
  piVar2[0x3d] = (int)&DAT_0059ab9c;
  piVar2[0x3c] = iVar5;
  piVar2[0x3e] = iVar5;
  piVar2[0x3f] = (int)&DAT_0059aba4;
  piVar2 = DAT_0059abb8;
  DAT_0059abb8[1] = (int)s_fly00_0059abbc;
  *piVar2 = iVar5;
  piVar2[2] = iVar5;
  piVar2[3] = (int)s_damage00_0059abc4;
  piVar1[0xd] = (int)&DAT_0059abd4;
  piVar1[0xc] = iVar5;
  uVar7 = func_00114608(DAT_0059abdc,DAT_0059abd8);
  piVar1[1] = (int)uVar7;
  uVar7 = func_00114608(DAT_0059abe0,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[2] = (int)uVar7;
  uVar7 = func_00114608(DAT_0059abe4,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[3] = (int)uVar7;
  uVar8 = func_00114608(DAT_0059abe8,(uint)((ulonglong)uVar7 >> 0x20));
  piVar1[4] = (int)uVar8;
  piVar1[5] = (int)uVar7;
  uVar7 = func_00114608(0x4e000000,(uint)((ulonglong)uVar8 >> 0x20));
  piVar1[6] = (int)uVar7;
  local_2c = 0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0xff;
  local_28 = 0xff;
  func_004FC6FC(DAT_0059abec,0,1,0,0,(undefined4 *)&local_2c,0xb);
  puVar3 = DAT_0059abf4;
  puVar6 = DAT_0059abf4 + 3;
  DAT_0059abf4[1] = 5;
  puVar3[2] = puVar6;
  *puVar3 = 0;
  local_1c = &DAT_0059ab40;
  local_20 = iVar5;
  local_34 = s_EnemyBee_0059abf8;
  local_38 = iVar5;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_0059ac04;
  }
  uVar4 = func_0019B51C(DAT_0059ac10,DAT_0059ac0c,*DAT_0059ac08,(int)&local_38,DAT_0059abf4,
                        &local_20,iVar5);
  return CONCAT44(DAT_0059ac14,uVar4);
}

