#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010E294(int *param_1);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_002C2D00(int *param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_00667B48(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00109864;
extern int *DAT_003833bc;
extern undefined4 *DAT_003833c0;
extern undefined4 DAT_003833c4;
extern int DAT_003833c8;
extern undefined4 DAT_003833cc;

// USA 003831E4 <- EU 003831C0 (Ghidra, non-matching)
// GLOBAL DAT_00109864 int *
// GLOBAL DAT_003833bc int *
// GLOBAL DAT_003833c0 undefined4 *
// GLOBAL DAT_003833c4 undefined4
// GLOBAL DAT_003833c8 int
// GLOBAL DAT_003833cc undefined4

undefined4 func_003831E4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define iStack_60 (*(int *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
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
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    unaff_r7 = 1;
  }
  iVar4 = *(int *)(*DAT_003833bc + 0x10);
  if (iVar3 != 0) {
    unaff_r7 = func_0010983C(*DAT_003833c0,iVar3);
  }
  iVar3 = DAT_003833c8;
  uVar2 = DAT_003833c4;
  local_50 = *(undefined4 *)(iVar4 + 0x70);
  iStack_60 = DAT_003833c8;
  uStack_5c = DAT_003833c4;
  uStack_4c = 0;
  iStack_58 = DAT_003833c8;
  uStack_54 = DAT_003833c4;
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
  piVar1 = func_002C2D00(&iStack_60);
  *(int **)(param_1 + 0x34) = piVar1;
  func_003AB9D8(param_1,(int)piVar1,1);
  local_50 = *(undefined4 *)(iVar4 + 0x6c);
  iStack_60 = iVar3;
  uStack_5c = uVar2;
  uStack_4c = 0;
  iStack_58 = iVar3;
  uStack_54 = uVar2;
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
  piVar1 = func_002C2D00(&iStack_60);
  *(int **)(param_1 + 0x38) = piVar1;
  func_003AB9D8(param_1,(int)piVar1,1);
  uVar2 = DAT_003833cc;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_003833cc;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x134) = uVar2;
  iVar3 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar3 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(iVar3);
  iVar3 = *(int *)(param_1 + 0x38);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar3 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(iVar3);
  func_004CF478(*(int *)(param_1 + 0x34),0);
  func_004CF478(*(int *)(param_1 + 0x38),0);
  uVar2 = func_00667B48((undefined4 *)(param_1 + 0x10),0);
  if (unaff_r7 != 1) {
    iVar3 = func_0010E294((int *)(*DAT_00109864 + 0x24));
    uVar2 = *(undefined4 *)(iVar3 + 0x68);
    *(int *)(iVar3 + 0x68) = unaff_r7;
    return uVar2;
  }
  return uVar2;
}

