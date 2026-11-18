#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C2D00(int *param_1);
extern int func_003974A0(int param_1,undefined4 param_2);
extern int func_00397B84(int param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_0066819C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0039737c;
extern undefined4 *DAT_00397380;
extern undefined4 DAT_00397384;
extern int DAT_00397388;
extern uint *DAT_0039738c;
extern undefined4 DAT_00397390;
extern undefined4 DAT_0039739c;
extern char s_Bottle_00397394[];

// USA 00397160 <- EU 0039713C (Ghidra, non-matching)
// GLOBAL DAT_0039737c int *
// GLOBAL DAT_00397380 undefined4 *
// GLOBAL DAT_00397384 undefined4
// GLOBAL DAT_00397388 int
// GLOBAL DAT_0039738c uint *
// GLOBAL DAT_00397390 undefined4
// GLOBAL DAT_0039739c undefined4
// GLOBAL s_Bottle_00397394 string

undefined4 func_00397160(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int unaff_r7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(char * *)(albw_frame + 0x4))
  #define iStack_58 (*(int *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined1 *)(albw_frame + 0x1c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x1d))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined1 *)(albw_frame + 0x38))
  #define local_27 (*(undefined1 *)(albw_frame + 0x39))
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    unaff_r7 = 1;
  }
  iVar6 = *(int *)(*DAT_0039737c + 0x10);
  if (iVar5 != 0) {
    unaff_r7 = func_0010983C(*DAT_00397380,iVar5);
  }
  iVar5 = DAT_00397388;
  uVar1 = DAT_00397384;
  local_50 = *(undefined4 *)(iVar6 + 0x60);
  local_60 = DAT_00397388;
  local_5c = (char *)DAT_00397384;
  uStack_4c = 0;
  iStack_58 = DAT_00397388;
  uStack_54 = DAT_00397384;
  local_28 = 1;
  local_43 = 0;
  local_30 = 0;
  local_2c = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = 0;
  local_38 = 0;
  local_27 = 0xc4;
  local_44 = 1;
  local_48 = 1;
  piVar2 = func_002C2D00(&local_60);
  *(int **)(param_1 + 0x34) = piVar2;
  func_003AB9D8(param_1,(int)piVar2,1);
  local_50 = *(undefined4 *)(iVar6 + 0x80);
  local_60 = iVar5;
  local_5c = (char *)uVar1;
  uStack_4c = 0;
  iStack_58 = iVar5;
  uStack_54 = uVar1;
  local_28 = 1;
  local_43 = 0;
  local_30 = 0;
  local_2c = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = 0;
  local_38 = 0;
  local_27 = 0xc4;
  local_44 = 1;
  local_48 = 1;
  piVar2 = func_002C2D00(&local_60);
  *(int **)(param_1 + 0x38) = piVar2;
  func_003AB9D8(param_1,(int)piVar2,1);
  local_50 = *(undefined4 *)(iVar6 + 0x84);
  local_60 = iVar5;
  local_5c = (char *)uVar1;
  uStack_4c = 0;
  iStack_58 = iVar5;
  uStack_54 = uVar1;
  local_28 = 1;
  local_43 = 0;
  local_30 = 0;
  local_2c = 0;
  local_3c = 0;
  local_34 = 0;
  local_40 = 0;
  local_38 = 0;
  local_27 = 0xc4;
  local_44 = 1;
  local_48 = 1;
  piVar2 = func_002C2D00(&local_60);
  *(int **)(param_1 + 0x3c) = piVar2;
  func_003AB9D8(param_1,(int)piVar2,1);
  iVar6 = func_0019B04C(*DAT_0039738c);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar3,1,DAT_00397390,1);
  }
  *(undefined4 **)(param_1 + 0x40) = puVar4;
  local_5c = s_Bottle_00397394;
  local_60 = iVar5;
  func_00169608(*(uint **)(param_1 + 0x40),0,&local_60,*(int *)(iVar6 + 0x1ec));
  func_0016A02C(*(int *)(param_1 + 0x40),-1,(int *)0xffffffff,0);
  func_003974A0(param_1,0);
  uVar1 = DAT_0039739c;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_0039739c;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x134) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x134) = uVar1;
  func_00397B84(param_1);
  func_0066819C((undefined4 *)(param_1 + 0x10),0);
  if (unaff_r7 != 1) {
    return func_0010983C(*DAT_00397380,unaff_r7);
  }
  return 0;
}

