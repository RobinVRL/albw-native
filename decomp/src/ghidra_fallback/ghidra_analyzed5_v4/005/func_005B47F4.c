#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b48f0;
extern uint DAT_005b48f4;
extern uint DAT_005b48f8;
extern undefined4 DAT_005b48fc;
extern undefined4 *DAT_005b4900;
extern undefined4 DAT_005b4904;
extern uint DAT_005b4908;
extern undefined4 *DAT_005b490c;
extern undefined4 DAT_005b4910;
extern undefined4 DAT_005b4914;
extern undefined4 DAT_005b4918;
extern undefined4 DAT_005b491c;
extern undefined4 DAT_005b4920;
extern undefined DAT_005b4924;
extern undefined4 DAT_005b492c;
extern undefined4 DAT_005b4940;
extern uint *DAT_005b4944;
extern undefined4 DAT_005b4948;
extern undefined4 *DAT_005b494c;
extern undefined4 DAT_005b4950;
extern undefined4 DAT_005b4954;
extern char s_MojIcePillar_005b4930[];

// USA 005B47F4 <- EU 005B47CC (Ghidra, non-matching)
// GLOBAL DAT_005b48f0 undefined4 *
// GLOBAL DAT_005b48f4 uint
// GLOBAL DAT_005b48f8 uint
// GLOBAL DAT_005b48fc undefined4
// GLOBAL DAT_005b4900 undefined4 *
// GLOBAL DAT_005b4904 undefined4
// GLOBAL DAT_005b4908 uint
// GLOBAL DAT_005b490c undefined4 *
// GLOBAL DAT_005b4910 undefined4
// GLOBAL DAT_005b4914 undefined4
// GLOBAL DAT_005b4918 undefined4
// GLOBAL DAT_005b491c undefined4
// GLOBAL DAT_005b4920 undefined4
// GLOBAL DAT_005b4924 undefined
// GLOBAL DAT_005b492c undefined4
// GLOBAL DAT_005b4940 undefined4
// GLOBAL DAT_005b4944 uint *
// GLOBAL DAT_005b4948 undefined4
// GLOBAL DAT_005b494c undefined4 *
// GLOBAL DAT_005b4950 undefined4
// GLOBAL DAT_005b4954 undefined4
// GLOBAL s_MojIcePillar_005b4930 string

undefined8 func_005B47F4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b48f0;
  DAT_005b48f0[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  uVar7 = func_00114608(DAT_005b48f4,0xffffffff);
  *puVar1 = (int)uVar7;
  uVar7 = func_00114608(DAT_005b48f8,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[1] = (int)uVar7;
  uVar3 = DAT_005b4904;
  puVar2 = DAT_005b4900;
  uVar6 = DAT_005b48fc;
  *DAT_005b4900 = DAT_005b48fc;
  puVar2[1] = uVar6;
  puVar2[2] = uVar6;
  puVar2[3] = uVar3;
  puVar2[4] = uVar3;
  puVar2[5] = uVar3;
  uVar7 = func_00114608(0x4f000000,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[2] = (int)uVar7;
  uVar7 = func_00114608(DAT_005b4908,(uint)((ulonglong)uVar7 >> 0x20));
  puVar1[3] = (int)uVar7;
  uVar5 = DAT_005b4920;
  uVar4 = DAT_005b4914;
  uVar3 = DAT_005b4910;
  puVar1 = DAT_005b490c;
  DAT_005b490c[2] = uVar6;
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  uVar6 = DAT_005b491c;
  puVar1[3] = DAT_005b4918;
  puVar1[4] = uVar6;
  puVar1[5] = uVar5;
  puVar1[-0xa0] = 0;
  puVar1[-0x9f] = 5;
  puVar1[-0x9e] = puVar1 + -0x9d;
  local_20 = DAT_005b492c;
  puStack_1c = &DAT_005b4924;
  local_28 = DAT_005b492c;
  local_24 = s_MojIcePillar_005b4930;
  uVar6 = func_0019B51C(DAT_005b494c,DAT_005b4948,*DAT_005b4944,(int)&local_28,DAT_005b4940,
                        &local_20,0);
  return CONCAT44(DAT_005b4954,uVar6);
}

