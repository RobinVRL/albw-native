#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C2D00(int *param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_005532D8(undefined4 param_1,int param_2,int param_3);
extern int func_00669864(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_003baffc;
extern int *DAT_003bb000;
extern undefined4 DAT_003bb004;
extern int DAT_003bb008;
extern uint *DAT_003bb00c;
extern undefined4 DAT_003bb010;
extern undefined4 DAT_003bb024;
extern char s_Tornado_Attack_003bb014[];

// USA 003BAE58 <- EU 003BAE34 (Ghidra, non-matching)
// GLOBAL DAT_003baffc undefined4 *
// GLOBAL DAT_003bb000 int *
// GLOBAL DAT_003bb004 undefined4
// GLOBAL DAT_003bb008 int
// GLOBAL DAT_003bb00c uint *
// GLOBAL DAT_003bb010 undefined4
// GLOBAL DAT_003bb024 undefined4
// GLOBAL s_Tornado_Attack_003bb014 string

undefined4 func_003BAE58(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(char * *)(albw_frame + 0x4))
  #define iStack_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
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
  puVar1 = DAT_003baffc;
  if (*(int *)(param_1 + 8) == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = func_0010983C(*DAT_003baffc,*(int *)(param_1 + 8));
  }
  uVar8 = *(undefined4 *)(*DAT_003bb000 + 0x10);
  local_50 = func_005532B4(uVar8,8,(uint)*(byte *)(param_1 + 0xc),0);
  iVar6 = DAT_003bb008;
  local_60 = DAT_003bb008;
  local_5c = (char *)DAT_003bb004;
  iStack_58 = DAT_003bb008;
  local_54 = DAT_003bb004;
  uStack_4c = 0;
  local_28 = 1;
  local_43 = 0;
  local_3c = 0;
  local_30 = 0;
  local_2c = 0;
  local_34 = 0;
  local_27 = 0xc4;
  local_40 = 0;
  local_38 = 0;
  local_44 = 1;
  local_48 = 1;
  piVar2 = func_002C2D00(&local_60);
  *(int **)(param_1 + 0x34) = piVar2;
  func_003AB9D8(param_1,(int)piVar2,1);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    func_0019B04C(*DAT_003bb00c);
    puVar4 = func_0016A2FC(puVar3,1,DAT_003bb010,1);
  }
  *(undefined4 **)(param_1 + 0x38) = puVar4;
  iVar5 = func_005532D8(uVar8,8,(uint)*(byte *)(param_1 + 0xc));
  local_5c = s_Tornado_Attack_003bb014;
  local_60 = iVar6;
  func_00169688(*(uint **)(param_1 + 0x38),0,&local_60,iVar5);
  func_0016A02C(*(int *)(param_1 + 0x38),-1,(int *)0xffffffff,*(int *)(param_1 + 0x34));
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_003bb024;
  iVar6 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar6 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  func_00669864((undefined4 *)(param_1 + 0x10),0);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  if (iVar7 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar7);
}

