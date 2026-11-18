#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern int *DAT_005a6e40;
extern undefined4 *DAT_005a6e44;
extern undefined DAT_005a6e48;
extern undefined4 DAT_005a6e50;
extern uint *DAT_005a6e60;
extern undefined4 DAT_005a6e64;
extern undefined4 *DAT_005a6e68;
extern undefined4 DAT_005a6e6c;
extern undefined4 DAT_005a6e70;
extern undefined4 *DAT_005a6e74;
extern undefined DAT_005a6e78;
extern int DAT_005a6e90;
extern uint *DAT_005a6e94;
extern undefined4 *DAT_005a6e98;
extern undefined4 *DAT_005a6e9c;
extern undefined DAT_005a6ea0;
extern int DAT_005a6ec0;
extern uint *DAT_005a6ec4;
extern undefined4 *DAT_005a6ec8;
extern undefined4 DAT_005a6ecc;
extern undefined4 *DAT_005a6ed0;
extern char s_ObjGoroIron_005a6e84[];
extern char s_ObjGoroIwa_005a6e54[];
extern char s_ObjGoroNeedle_005a6eb0[];

// USA 005A6CC4 <- EU 005A6C9C (Ghidra, non-matching)
// GLOBAL DAT_005a6e40 int *
// GLOBAL DAT_005a6e44 undefined4 *
// GLOBAL DAT_005a6e48 undefined
// GLOBAL DAT_005a6e50 undefined4
// GLOBAL DAT_005a6e60 uint *
// GLOBAL DAT_005a6e64 undefined4
// GLOBAL DAT_005a6e68 undefined4 *
// GLOBAL DAT_005a6e6c undefined4
// GLOBAL DAT_005a6e70 undefined4
// GLOBAL DAT_005a6e74 undefined4 *
// GLOBAL DAT_005a6e78 undefined
// GLOBAL DAT_005a6e90 int
// GLOBAL DAT_005a6e94 uint *
// GLOBAL DAT_005a6e98 undefined4 *
// GLOBAL DAT_005a6e9c undefined4 *
// GLOBAL DAT_005a6ea0 undefined
// GLOBAL DAT_005a6ec0 int
// GLOBAL DAT_005a6ec4 uint *
// GLOBAL DAT_005a6ec8 undefined4 *
// GLOBAL DAT_005a6ecc undefined4
// GLOBAL DAT_005a6ed0 undefined4 *
// GLOBAL s_ObjGoroIron_005a6e84 string
// GLOBAL s_ObjGoroIwa_005a6e54 string
// GLOBAL s_ObjGoroNeedle_005a6eb0 string

void func_005A6CC4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined * *)(albw_frame + 0x2c))
  piVar1 = DAT_005a6e40;
  DAT_005a6e40[2] = -1;
  piVar1[3] = -1;
  piVar1[4] = 0;
  piVar1[5] = 0;
  uVar3 = DAT_005a6e50;
  puVar2 = DAT_005a6e44;
  puVar5 = DAT_005a6e44 + 3;
  DAT_005a6e44[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_34 = &DAT_005a6e48;
  local_3c = s_ObjGoroIwa_005a6e54;
  local_38 = uVar3;
  local_40 = uVar3;
  func_0019B51C(DAT_005a6e68,DAT_005a6e64,*DAT_005a6e60,(int)&local_40,DAT_005a6e44,&local_38,0);
  puVar2 = DAT_005a6e74;
  puVar5 = DAT_005a6e74 + 3;
  DAT_005a6e74[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_24 = &DAT_005a6e78;
  local_28 = uVar3;
  local_2c = s_ObjGoroIron_005a6e84;
  local_30 = uVar3;
  iVar4 = *piVar1;
  if (*piVar1 == 0) {
    iVar4 = DAT_005a6e90;
  }
  func_0019B51C(DAT_005a6e98,DAT_005a6e64,*DAT_005a6e94,(int)&local_30,DAT_005a6e74,&local_28,iVar4)
  ;
  puVar2 = DAT_005a6e9c;
  puVar5 = DAT_005a6e9c + 3;
  DAT_005a6e9c[1] = 5;
  puVar2[2] = puVar5;
  *puVar2 = 0;
  local_14 = &DAT_005a6ea0;
  local_18 = uVar3;
  local_1c = s_ObjGoroNeedle_005a6eb0;
  local_20 = uVar3;
  iVar4 = piVar1[1];
  if (piVar1[1] == 0) {
    iVar4 = DAT_005a6ec0;
  }
  func_0019B51C(DAT_005a6ec8,DAT_005a6e64,*DAT_005a6ec4,(int)&local_20,DAT_005a6e9c,&local_18,iVar4)
  ;
  puVar2 = DAT_005a6ed0;
  uVar3 = DAT_005a6ecc;
  *DAT_005a6ed0 = DAT_005a6ecc;
  puVar2[3] = uVar3;
  puVar2[1] = uVar3;
  puVar2[4] = uVar3;
  puVar2[2] = uVar3;
  puVar2[5] = uVar3;
  return;
}

