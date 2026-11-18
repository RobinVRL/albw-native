#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a2128;
extern undefined4 *DAT_005a212c;
extern undefined4 *DAT_005a2130;
extern undefined DAT_005a2134;
extern undefined4 DAT_005a213c;
extern undefined DAT_005a2140;
extern undefined4 DAT_005a2144;
extern uint DAT_005a2148;
extern undefined4 DAT_005a214c;
extern undefined4 DAT_005a2150;
extern undefined4 *DAT_005a2154;
extern undefined4 DAT_005a2158;
extern undefined4 DAT_005a215c;
extern undefined4 DAT_005a2160;
extern undefined4 DAT_005a2164;
extern uint DAT_005a2168;
extern uint DAT_005a216c;
extern uint DAT_005a2170;
extern uint DAT_005a2174;
extern uint DAT_005a2178;
extern uint DAT_005a217c;
extern undefined4 *DAT_005a2180;
extern undefined DAT_005a2184;
extern uint *DAT_005a21a0;
extern undefined4 DAT_005a21a4;
extern undefined4 *DAT_005a21a8;
extern undefined4 DAT_005a21ac;
extern char s_MojSeesaw_005a2194[];

// USA 005A1FD0 <- EU 005A1FA8 (Ghidra, non-matching)
// GLOBAL DAT_005a2128 undefined4 *
// GLOBAL DAT_005a212c undefined4 *
// GLOBAL DAT_005a2130 undefined4 *
// GLOBAL DAT_005a2134 undefined
// GLOBAL DAT_005a213c undefined4
// GLOBAL DAT_005a2140 undefined
// GLOBAL DAT_005a2144 undefined4
// GLOBAL DAT_005a2148 uint
// GLOBAL DAT_005a214c undefined4
// GLOBAL DAT_005a2150 undefined4
// GLOBAL DAT_005a2154 undefined4 *
// GLOBAL DAT_005a2158 undefined4
// GLOBAL DAT_005a215c undefined4
// GLOBAL DAT_005a2160 undefined4
// GLOBAL DAT_005a2164 undefined4
// GLOBAL DAT_005a2168 uint
// GLOBAL DAT_005a216c uint
// GLOBAL DAT_005a2170 uint
// GLOBAL DAT_005a2174 uint
// GLOBAL DAT_005a2178 uint
// GLOBAL DAT_005a217c uint
// GLOBAL DAT_005a2180 undefined4 *
// GLOBAL DAT_005a2184 undefined
// GLOBAL DAT_005a21a0 uint *
// GLOBAL DAT_005a21a4 undefined4
// GLOBAL DAT_005a21a8 undefined4 *
// GLOBAL DAT_005a21ac undefined4
// GLOBAL s_MojSeesaw_005a2194 string

undefined8 func_005A1FD0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define puStack_1c (*(undefined * *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = DAT_005a2128;
  DAT_005a2128[8] = 0xffffffff;
  puVar1[9] = 0xffffffff;
  uVar7 = DAT_005a213c;
  puVar1 = DAT_005a212c;
  *DAT_005a212c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a2130;
  DAT_005a2130[1] = &DAT_005a2134;
  *puVar1 = uVar7;
  puVar1[2] = uVar7;
  puVar1[3] = &DAT_005a2140;
  uVar6 = DAT_005a215c;
  uVar5 = DAT_005a2158;
  puVar8 = DAT_005a2154;
  uVar4 = DAT_005a2150;
  uVar3 = DAT_005a214c;
  uVar2 = DAT_005a2148;
  puVar1 = DAT_005a2128;
  *DAT_005a2154 = DAT_005a214c;
  puVar8[1] = uVar4;
  puVar8[2] = uVar3;
  puVar8[5] = uVar4;
  puVar8[3] = uVar5;
  puVar8[4] = uVar6;
  uVar6 = DAT_005a2160;
  puVar8[6] = uVar3;
  puVar8[7] = uVar6;
  puVar8[8] = uVar3;
  uVar3 = DAT_005a2164;
  puVar8[9] = uVar5;
  puVar8[10] = uVar3;
  puVar8[0xb] = uVar4;
  uVar9 = func_00114608(DAT_005a2168,uVar2);
  *puVar1 = (int)uVar9;
  uVar9 = func_00114608(DAT_005a216c,(uint)((ulonglong)uVar9 >> 0x20));
  puVar1[1] = (int)uVar9;
  uVar10 = func_00114608(DAT_005a2170,(uint)((ulonglong)uVar9 >> 0x20));
  puVar1[2] = (int)uVar10;
  uVar10 = func_00114608(DAT_005a2174,(uint)((ulonglong)uVar10 >> 0x20));
  puVar1[3] = (int)uVar10;
  puVar1[4] = (int)uVar9;
  uVar9 = func_00114608(DAT_005a2178,(uint)(puVar1 + 4));
  puVar1[5] = (int)uVar9;
  uVar9 = func_00114608(DAT_005a217c,(uint)((ulonglong)uVar9 >> 0x20));
  puVar1[6] = (int)uVar9;
  puVar1 = DAT_005a2180;
  puVar8 = DAT_005a2180 + 3;
  *DAT_005a2180 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar8;
  local_20 = uVar7;
  puStack_1c = &DAT_005a2184;
  uStack_18 = uVar7;
  local_14 = s_MojSeesaw_005a2194;
  uVar7 = func_0019B51C(DAT_005a21a8,DAT_005a21a4,*DAT_005a21a0,(int)&uStack_18,DAT_005a2180,
                        &local_20,0);
  return CONCAT44(DAT_005a21ac,uVar7);
}

