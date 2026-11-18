#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_002C2D00(int *param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_00668BBC(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_003a39e0;
extern int *DAT_003a39e4;
extern undefined4 DAT_003a39e8;
extern int DAT_003a39ec;
extern undefined4 DAT_003a39f0;

// USA 003A38C8 <- EU 003A38A4 (Ghidra, non-matching)
// GLOBAL DAT_003a39e0 undefined4 *
// GLOBAL DAT_003a39e4 int *
// GLOBAL DAT_003a39e8 undefined4
// GLOBAL DAT_003a39ec int
// GLOBAL DAT_003a39f0 undefined4

undefined4 func_003A38C8(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_3b (*(undefined1 *)(albw_frame + 0x25))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x40))
  #define local_1f (*(undefined1 *)(albw_frame + 0x41))
  puVar1 = DAT_003a39e0;
  if (*(int *)(param_1 + 8) == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_003a39e0,*(int *)(param_1 + 8));
  }
  local_48 = func_005532B4(*(undefined4 *)(*DAT_003a39e4 + 0x10),6,(uint)*(byte *)(param_1 + 0xc),0)
  ;
  local_58 = DAT_003a39ec;
  uStack_54 = DAT_003a39e8;
  iStack_50 = DAT_003a39ec;
  local_4c = DAT_003a39e8;
  uStack_44 = 0;
  local_20 = 1;
  local_3b = 0;
  local_34 = 0;
  local_28 = 0;
  local_24 = 0;
  local_2c = 0;
  local_1f = 0xc4;
  local_38 = 0;
  local_30 = 0;
  local_3c = 1;
  local_40 = 1;
  piVar2 = func_002C2D00(&local_58);
  *(int **)(param_1 + 0x34) = piVar2;
  func_003AB9D8(param_1,(int)piVar2,1);
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x134) = DAT_003a39f0;
  iVar3 = *(int *)(param_1 + 0x34);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar3 + 0x80),
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
                *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30));
  func_004CEAF0(*(int *)(param_1 + 0x34));
  func_00668BBC((undefined4 *)(param_1 + 0x10),0);
  if (iVar4 == 1) {
    return 0;
  }
  return func_0010983C(*puVar1,iVar4);
}

