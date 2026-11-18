#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005ebe78;
extern undefined4 *DAT_005ebe7c;
extern undefined DAT_005ebe80;
extern undefined4 DAT_005ebe94;
extern int DAT_005ebeac;
extern uint *DAT_005ebeb0;
extern undefined4 DAT_005ebeb4;
extern undefined4 *DAT_005ebeb8;
extern undefined4 DAT_005ebebc;
extern undefined4 DAT_005ebec0;
extern undefined4 *DAT_005ebec4;
extern undefined4 DAT_005ebec8;
extern undefined4 DAT_005ebecc;
extern undefined4 DAT_005ebed0;
extern undefined4 *DAT_005ebed4;
extern undefined4 DAT_005ebed8;
extern char s_EnemyKnuckleMaster_005ebe98[];

// USA 005EBD9C <- EU 005EBD74 (Ghidra, non-matching)
// GLOBAL DAT_005ebe78 int *
// GLOBAL DAT_005ebe7c undefined4 *
// GLOBAL DAT_005ebe80 undefined
// GLOBAL DAT_005ebe94 undefined4
// GLOBAL DAT_005ebeac int
// GLOBAL DAT_005ebeb0 uint *
// GLOBAL DAT_005ebeb4 undefined4
// GLOBAL DAT_005ebeb8 undefined4 *
// GLOBAL DAT_005ebebc undefined4
// GLOBAL DAT_005ebec0 undefined4
// GLOBAL DAT_005ebec4 undefined4 *
// GLOBAL DAT_005ebec8 undefined4
// GLOBAL DAT_005ebecc undefined4
// GLOBAL DAT_005ebed0 undefined4
// GLOBAL DAT_005ebed4 undefined4 *
// GLOBAL DAT_005ebed8 undefined4
// GLOBAL s_EnemyKnuckleMaster_005ebe98 string

undefined8 func_005EBD9C(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined1 *)(albw_frame + 0x0))
  #define local_1f (*(undefined1 *)(albw_frame + 0x1))
  #define local_1e (*(undefined1 *)(albw_frame + 0x2))
  #define local_1d (*(undefined1 *)(albw_frame + 0x3))
  #define local_1c (*(undefined1 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define puStack_c (*(undefined * *)(albw_frame + 0x14))
  piVar1 = DAT_005ebe78;
  DAT_005ebe78[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar4 = DAT_005ebe7c;
  puVar6 = DAT_005ebe7c + 3;
  DAT_005ebe7c[1] = 5;
  puVar4[2] = puVar6;
  local_10 = DAT_005ebe94;
  *puVar4 = 0;
  puStack_c = &DAT_005ebe80;
  local_18 = local_10;
  local_14 = s_EnemyKnuckleMaster_005ebe98;
  iVar5 = *piVar1;
  if (*piVar1 == 0) {
    iVar5 = DAT_005ebeac;
  }
  func_0019B51C(DAT_005ebeb8,DAT_005ebeb4,*DAT_005ebeb0,(int)&local_18,DAT_005ebe7c,&local_10,iVar5)
  ;
  uVar3 = DAT_005ebed0;
  uVar2 = DAT_005ebecc;
  puVar4 = DAT_005ebec4;
  *DAT_005ebec4 = DAT_005ebec8;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  local_20 = 0;
  local_1f = 1;
  local_1e = 0;
  local_1c = 0xff;
  local_1d = 0xff;
  puVar4 = func_004FC6FC(DAT_005ebed4,4,1,0,0,(undefined4 *)&local_20,0xb);
  return CONCAT44(DAT_005ebed8,puVar4);
}

