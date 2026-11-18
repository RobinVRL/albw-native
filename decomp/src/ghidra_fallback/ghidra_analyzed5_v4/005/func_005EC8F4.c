#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ec9d4;
extern undefined4 *DAT_005ec9d8;
extern undefined4 *DAT_005ec9dc;
extern undefined DAT_005ec9e0;
extern undefined4 DAT_005ec9f0;
extern uint *DAT_005eca08;
extern undefined4 DAT_005eca0c;
extern undefined4 *DAT_005eca10;
extern undefined4 DAT_005eca14;
extern undefined4 DAT_005eca18;
extern undefined4 *DAT_005eca1c;
extern undefined DAT_005eca20;
extern uint *DAT_005eca54;
extern undefined4 DAT_005eca58;
extern undefined4 *DAT_005eca5c;
extern char s_TagActivateChecker_005ec9f4[];
extern char s_TagActivateOnEventChecker_005eca38[];

// USA 005EC8F4 <- EU 005EC8CC (Ghidra, non-matching)
// GLOBAL DAT_005ec9d4 undefined4 *
// GLOBAL DAT_005ec9d8 undefined4 *
// GLOBAL DAT_005ec9dc undefined4 *
// GLOBAL DAT_005ec9e0 undefined
// GLOBAL DAT_005ec9f0 undefined4
// GLOBAL DAT_005eca08 uint *
// GLOBAL DAT_005eca0c undefined4
// GLOBAL DAT_005eca10 undefined4 *
// GLOBAL DAT_005eca14 undefined4
// GLOBAL DAT_005eca18 undefined4
// GLOBAL DAT_005eca1c undefined4 *
// GLOBAL DAT_005eca20 undefined
// GLOBAL DAT_005eca54 uint *
// GLOBAL DAT_005eca58 undefined4
// GLOBAL DAT_005eca5c undefined4 *
// GLOBAL s_TagActivateChecker_005ec9f4 string
// GLOBAL s_TagActivateOnEventChecker_005eca38 string

undefined8 func_005EC8F4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined * *)(albw_frame + 0x1c))
  puVar1 = DAT_005ec9d4;
  *DAT_005ec9d4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005ec9d8;
  *DAT_005ec9d8 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005ec9f0;
  puVar1 = DAT_005ec9dc;
  puVar3 = DAT_005ec9dc + 3;
  DAT_005ec9dc[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_24 = &DAT_005ec9e0;
  local_2c = s_TagActivateChecker_005ec9f4;
  local_28 = uVar2;
  local_30 = uVar2;
  func_0019B51C(DAT_005eca10,DAT_005eca0c,*DAT_005eca08,(int)&local_30,DAT_005ec9dc,&local_28,0);
  puVar1 = DAT_005eca1c;
  puVar3 = DAT_005eca1c + 3;
  DAT_005eca1c[1] = 5;
  puVar1[2] = puVar3;
  *puVar1 = 0;
  local_14 = &DAT_005eca20;
  local_1c = s_TagActivateOnEventChecker_005eca38;
  local_18 = uVar2;
  local_20 = uVar2;
  uVar2 = func_0019B51C(DAT_005eca5c,DAT_005eca58,*DAT_005eca54,(int)&local_20,DAT_005eca1c,
                        &local_18,0);
  return CONCAT44(DAT_005eca18,uVar2);
}

