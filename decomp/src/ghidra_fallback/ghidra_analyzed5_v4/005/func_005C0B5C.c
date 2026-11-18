#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c0c1c;
extern undefined4 DAT_005c0c20;
extern undefined4 DAT_005c0c24;
extern undefined4 DAT_005c0c28;
extern undefined4 *DAT_005c0c2c;
extern uint DAT_005c0c30;
extern undefined4 *DAT_005c0c34;
extern uint DAT_005c0c38;
extern uint DAT_005c0c3c;
extern undefined4 *DAT_005c0c40;
extern undefined DAT_005c0c44;
extern undefined4 DAT_005c0c58;
extern uint *DAT_005c0c6c;
extern undefined4 DAT_005c0c70;
extern undefined4 *DAT_005c0c74;
extern undefined4 DAT_005c0c78;
extern undefined4 DAT_005c0c7c;
extern char s_ObjMediumFire_005c0c5c[];

// USA 005C0B5C <- EU 005C0B34 (Ghidra, non-matching)
// GLOBAL DAT_005c0c1c undefined4 *
// GLOBAL DAT_005c0c20 undefined4
// GLOBAL DAT_005c0c24 undefined4
// GLOBAL DAT_005c0c28 undefined4
// GLOBAL DAT_005c0c2c undefined4 *
// GLOBAL DAT_005c0c30 uint
// GLOBAL DAT_005c0c34 undefined4 *
// GLOBAL DAT_005c0c38 uint
// GLOBAL DAT_005c0c3c uint
// GLOBAL DAT_005c0c40 undefined4 *
// GLOBAL DAT_005c0c44 undefined
// GLOBAL DAT_005c0c58 undefined4
// GLOBAL DAT_005c0c6c uint *
// GLOBAL DAT_005c0c70 undefined4
// GLOBAL DAT_005c0c74 undefined4 *
// GLOBAL DAT_005c0c78 undefined4
// GLOBAL DAT_005c0c7c undefined4
// GLOBAL s_ObjMediumFire_005c0c5c string

undefined8 func_005C0B5C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c0c1c;
  DAT_005c0c1c[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar3 = DAT_005c0c2c;
  uVar5 = DAT_005c0c28;
  uVar4 = DAT_005c0c24;
  uVar2 = DAT_005c0c20;
  *DAT_005c0c2c = DAT_005c0c20;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  uVar6 = func_00114608(DAT_005c0c30,0xffffffff);
  *puVar1 = (int)uVar6;
  puVar3 = DAT_005c0c34;
  *DAT_005c0c34 = uVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar2;
  puVar3[4] = uVar4;
  puVar3[5] = uVar5;
  uVar6 = func_00114608(DAT_005c0c38,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[1] = (int)uVar6;
  uVar6 = func_00114608(DAT_005c0c3c,(uint)((ulonglong)uVar6 >> 0x20));
  puVar1[2] = (int)uVar6;
  puVar1 = DAT_005c0c40;
  puVar3 = DAT_005c0c40 + 3;
  *DAT_005c0c40 = 0;
  puVar1[1] = 5;
  local_20 = DAT_005c0c58;
  puVar1[2] = puVar3;
  puStack_1c = &DAT_005c0c44;
  local_28 = local_20;
  local_24 = s_ObjMediumFire_005c0c5c;
  uVar2 = func_0019B51C(DAT_005c0c74,DAT_005c0c70,*DAT_005c0c6c,(int)&local_28,DAT_005c0c40,
                        &local_20,0);
  return CONCAT44(DAT_005c0c7c,uVar2);
}

