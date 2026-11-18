#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0019B04C(uint param_1);
extern int func_002C2D00(int *param_1);
extern int func_003A2C34(uint param_1,undefined4 param_2);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_003B01AC(int param_1);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_005532D8(undefined4 param_1,int param_2,int param_3);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00669498(undefined4 *param_1,undefined1 param_2);
extern int *DAT_003afc68;
extern undefined4 *DAT_003afc6c;
extern undefined4 DAT_003afc70;
extern int DAT_003afc74;
extern uint *DAT_003afc78;
extern undefined4 DAT_003afc7c;
extern undefined4 DAT_003afc9c;
extern char s_Kandelaar_Attack_003afc80[];
extern char s_Rot_jnt_003afc94[];

// USA 003AFA60 <- EU 003AFA3C (Ghidra, non-matching)
// GLOBAL DAT_003afc68 int *
// GLOBAL DAT_003afc6c undefined4 *
// GLOBAL DAT_003afc70 undefined4
// GLOBAL DAT_003afc74 int
// GLOBAL DAT_003afc78 uint *
// GLOBAL DAT_003afc7c undefined4
// GLOBAL DAT_003afc9c undefined4
// GLOBAL s_Kandelaar_Attack_003afc80 string
// GLOBAL s_Rot_jnt_003afc94 string

undefined4 func_003AFA60(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int unaff_r6;
  undefined4 uVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined1 *)(albw_frame + 0x24))
  #define local_4b (*(undefined1 *)(albw_frame + 0x25))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x40))
  #define local_2f (*(undefined1 *)(albw_frame + 0x41))
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 (*(char * *)(albw_frame + 0x4c))
  puVar1 = DAT_003afc6c;
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 == 0) {
    unaff_r6 = 1;
  }
  uVar10 = *(undefined4 *)(*DAT_003afc68 + 0x10);
  if (iVar9 != 0) {
    unaff_r6 = func_0010983C(*DAT_003afc6c,iVar9);
  }
  local_58 = func_005532B4(uVar10,9,(uint)*(byte *)(param_1 + 0xc),0);
  iVar9 = DAT_003afc74;
  local_68 = DAT_003afc74;
  uStack_64 = DAT_003afc70;
  iStack_60 = DAT_003afc74;
  local_5c = DAT_003afc70;
  uStack_54 = 0;
  local_30 = 1;
  local_4b = 0;
  local_44 = 0;
  local_38 = 0;
  local_34 = 0;
  local_3c = 0;
  local_2f = 0xc4;
  local_48 = 0;
  local_40 = 0;
  local_4c = 1;
  local_50 = 1;
  piVar3 = func_002C2D00(&local_68);
  *(int **)(param_1 + 0x40) = piVar3;
  func_0019B04C(*DAT_003afc78);
  puVar4 = (undefined4 *)func_0010BAB4(0xa8);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0016A2FC(puVar4,1,DAT_003afc7c,1);
  }
  *(undefined4 **)(param_1 + 0x44) = puVar5;
  iVar6 = func_005532D8(uVar10,9,(uint)*(byte *)(param_1 + 0xc));
  local_24 = s_Kandelaar_Attack_003afc80;
  local_28 = iVar9;
  func_00169688(*(uint **)(param_1 + 0x44),0,&local_28,iVar6);
  func_0016A02C(*(int *)(param_1 + 0x44),-1,(int *)0xffffffff,0);
  func_003AB9D8(param_1,*(int *)(param_1 + 0x40),1);
  iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x24);
  local_24 = s_Rot_jnt_003afc94;
  local_28 = iVar9;
  uVar7 = func_00564A78(*(int *)(param_1 + 0x40),&local_28);
  puVar8 = (uint *)(*(int *)(iVar6 + 0xc) + uVar7 * 0x40);
  *puVar8 = *puVar8 | 0x10;
  *(int *)(*(int *)(param_1 + 0x40) + 0x16c) = param_1 + 0x10;
  local_24 = s_Rot_jnt_003afc94;
  local_28 = iVar9;
  uVar7 = func_00564A78(*(int *)(param_1 + 0x40),&local_28);
  *(uint *)(param_1 + 0x4c) = uVar7;
  *(uint *)(param_1 + 0x18) = uVar7;
  *(undefined1 *)(param_1 + 0xf9) = 0xd;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  uVar10 = DAT_003afc9c;
  if (*(char *)(param_1 + 0xc) < '\x02') {
    *(undefined2 *)(param_1 + 0x108) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x108) = 8;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x134) = uVar10;
  func_003B01AC(param_1);
  func_00669498((undefined4 *)(param_1 + 0x1c),0);
  cVar2 = func_003A2C34(*(int *)(param_1 + 4) + 0xbc8,0xe);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  if (unaff_r6 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,unaff_r6);
}

