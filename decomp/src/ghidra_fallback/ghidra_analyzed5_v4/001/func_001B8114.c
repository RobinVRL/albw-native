#include "ghidra_types.h"

extern int func_0016A508(uint *param_1,int *param_2);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_003C7A20(int *param_1,short *param_2);
extern int func_004A107C(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int *DAT_001b8270;
extern undefined4 DAT_001b8274;
extern int DAT_001b8278;
extern undefined4 DAT_001b827c;
extern undefined4 DAT_001b8280;
extern undefined4 DAT_001b8284;
extern int DAT_001b8288;
extern int DAT_001b828c;

// USA 001B8114 <- EU 001B8114 (Ghidra, non-matching)
// GLOBAL DAT_001b8270 int *
// GLOBAL DAT_001b8274 undefined4
// GLOBAL DAT_001b8278 int
// GLOBAL DAT_001b827c undefined4
// GLOBAL DAT_001b8280 undefined4
// GLOBAL DAT_001b8284 undefined4
// GLOBAL DAT_001b8288 int
// GLOBAL DAT_001b828c int

void func_001B8114(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define local_fc (*(int *)(albw_frame + 0x4))
  #define local_f8 (*(undefined1 * *)(albw_frame + 0x8))
  #define uStack_f4 (*(undefined4 *)(albw_frame + 0xc))
  #define auStack_f0 ((undefined1 *)(albw_frame + 0x10))
  #define uStack_71 (*(undefined1 *)(albw_frame + 0x8f))
  #define local_70 (*(int *)(albw_frame + 0x90))
  #define local_6c (*(undefined1 * *)(albw_frame + 0x94))
  #define local_68 (*(int * *)(albw_frame + 0x98))
  #define local_64 (*(int * *)(albw_frame + 0x9c))
  #define local_60 (*(undefined4 *)(albw_frame + 0xa0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0xa4))
  #define local_58 (*(undefined4 *)(albw_frame + 0xa8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xac))
  #define local_50 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_4c (*(undefined4 *)(albw_frame + 0xb4))
  #define local_48 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_44 (*(int *)(albw_frame + 0xbc))
  #define local_40 (*(undefined4 *)(albw_frame + 0xc0))
  #define local_3c (*(undefined1 *)(albw_frame + 0xc4))
  #define local_3b (*(undefined1 *)(albw_frame + 0xc5))
  #define local_3a (*(undefined1 *)(albw_frame + 0xc6))
  #define local_39 (*(undefined1 *)(albw_frame + 0xc7))
  #define local_38 (*(undefined1 *)(albw_frame + 0xc8))
  #define local_30 (*(int *)(albw_frame + 0xd0))
  #define local_2c (*(undefined4 *)(albw_frame + 0xd4))
  #define aiStack_28 ((int *)(albw_frame + 0xd8))
  #define local_20 (*(int *)(albw_frame + 0xe0))
  #define local_1c (*(undefined4 *)(albw_frame + 0xe4))
  iVar2 = DAT_001b8278;
  piVar1 = DAT_001b8270;
  if (**(char **)(param_1 + 0x2b4) != '\0') {
    local_20 = DAT_001b8278;
    local_1c = DAT_001b8274;
    piVar3 = func_004A107C(0x2800,(int)&local_20,*(int **)(*DAT_001b8270 + 0x1fa8),-1,0);
    local_70 = iVar2;
    local_6c = (undefined1 *)DAT_001b827c;
    local_60 = 0x20;
    uStack_5c = 0;
    local_54 = 0;
    local_50 = 0;
    local_40 = DAT_001b8280;
    local_3c = 7;
    local_58 = 0;
    local_44 = iVar2;
    local_3b = 4;
    local_2c = DAT_001b8284;
    local_f8 = auStack_f0;
    local_30 = iVar2;
    uStack_f4 = 0x80;
    local_39 = 1;
    local_4c = 0;
    local_48 = 0;
    local_38 = 1;
    local_3a = 0xf;
    uStack_71 = 0;
    local_fc = DAT_001b8288;
    local_68 = piVar3;
    local_64 = piVar3;
    func_00689894((int)&local_fc,&local_30,0xffffffff);
    local_fc = DAT_001b828c;
    func_00689928(&local_fc,(int *)(param_1 + 0x2b0),0xffffffff);
    local_6c = local_f8;
    puVar4 = func_001E1EDC(*piVar1,&local_70);
    if (puVar4 != (undefined4 *)0x0) {
      func_003C7A20(aiStack_28,(short *)puVar4[5]);
      func_0016A508((uint *)(param_1 + 0x380),aiStack_28);
    }
    (**(code **)(*piVar3 + 0x10))(piVar3);
  }
  return;
}

