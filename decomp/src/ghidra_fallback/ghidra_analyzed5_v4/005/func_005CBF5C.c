#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern int *DAT_005cc02c;
extern undefined4 *DAT_005cc030;
extern undefined DAT_005cc034;
extern undefined4 DAT_005cc044;
extern int DAT_005cc058;
extern uint *DAT_005cc05c;
extern undefined4 DAT_005cc060;
extern undefined4 *DAT_005cc064;
extern undefined4 DAT_005cc068;
extern undefined4 DAT_005cc06c;
extern undefined4 *DAT_005cc070;
extern undefined4 DAT_005cc074;
extern char s_EnemyFallMaster_005cc048[];

// USA 005CBF5C <- EU 005CBF34 (Ghidra, non-matching)
// GLOBAL DAT_005cc02c int *
// GLOBAL DAT_005cc030 undefined4 *
// GLOBAL DAT_005cc034 undefined
// GLOBAL DAT_005cc044 undefined4
// GLOBAL DAT_005cc058 int
// GLOBAL DAT_005cc05c uint *
// GLOBAL DAT_005cc060 undefined4
// GLOBAL DAT_005cc064 undefined4 *
// GLOBAL DAT_005cc068 undefined4
// GLOBAL DAT_005cc06c undefined4
// GLOBAL DAT_005cc070 undefined4 *
// GLOBAL DAT_005cc074 undefined4
// GLOBAL s_EnemyFallMaster_005cc048 string

undefined8 func_005CBF5C(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
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
  piVar1 = DAT_005cc02c;
  DAT_005cc02c[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  puVar2 = DAT_005cc030;
  DAT_005cc030[2] = DAT_005cc030 + 3;
  local_10 = DAT_005cc044;
  puVar2[1] = 5;
  *puVar2 = 0;
  puStack_c = &DAT_005cc034;
  local_18 = local_10;
  local_14 = s_EnemyFallMaster_005cc048;
  iVar3 = *piVar1;
  if (*piVar1 == 0) {
    iVar3 = DAT_005cc058;
  }
  func_0019B51C(DAT_005cc064,DAT_005cc060,*DAT_005cc05c,(int)&local_18,DAT_005cc030,&local_10,iVar3)
  ;
  local_20 = 1;
  local_1f = 0;
  local_1e = 0;
  local_1c = 0xff;
  local_1d = 0xff;
  puVar2 = func_004FC6FC(DAT_005cc070,4,0,0,0,(undefined4 *)&local_20,0xb);
  return CONCAT44(DAT_005cc074,puVar2);
}

