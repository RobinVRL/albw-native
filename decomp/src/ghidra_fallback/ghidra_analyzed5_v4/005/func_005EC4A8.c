#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int DAT_005ec530;
extern undefined4 *DAT_005ec534;
extern undefined4 *DAT_005ec538;
extern undefined DAT_005ec53c;
extern undefined4 DAT_005ec548;
extern int DAT_005ec560;
extern uint *DAT_005ec564;
extern undefined4 DAT_005ec568;
extern undefined4 DAT_005ec56c;
extern undefined4 DAT_005ec570;
extern char s_ObjMediumGanonBall_005ec54c[];

// USA 005EC4A8 <- EU 005EC480 (Ghidra, non-matching)
// GLOBAL DAT_005ec530 int
// GLOBAL DAT_005ec534 undefined4 *
// GLOBAL DAT_005ec538 undefined4 *
// GLOBAL DAT_005ec53c undefined
// GLOBAL DAT_005ec548 undefined4
// GLOBAL DAT_005ec560 int
// GLOBAL DAT_005ec564 uint *
// GLOBAL DAT_005ec568 undefined4
// GLOBAL DAT_005ec56c undefined4
// GLOBAL DAT_005ec570 undefined4
// GLOBAL s_ObjMediumGanonBall_005ec54c string

undefined8 func_005EC4A8(void)

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
  iVar1 = DAT_005ec530;
  *(undefined4 *)(DAT_005ec530 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005ec534;
  puVar4 = DAT_005ec534 + -4;
  *DAT_005ec534 = 0;
  puVar2[1] = 0;
  uVar5 = func_00114608(0,0);
  *puVar4 = (int)uVar5;
  puVar2 = DAT_005ec538;
  puVar4 = DAT_005ec538 + 3;
  *DAT_005ec538 = 0;
  puVar2[1] = 5;
  local_10 = DAT_005ec548;
  puVar2[2] = puVar4;
  puStack_c = &DAT_005ec53c;
  local_18 = local_10;
  local_14 = s_ObjMediumGanonBall_005ec54c;
  uVar3 = func_0019B51C(DAT_005ec538 + 8,DAT_005ec568,*DAT_005ec564,(int)&local_18,DAT_005ec538,
                        &local_10,DAT_005ec560);
  return CONCAT44(DAT_005ec570,uVar3);
}

