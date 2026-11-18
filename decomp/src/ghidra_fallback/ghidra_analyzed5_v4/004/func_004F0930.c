#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002C2D00(int *param_1);
extern int func_00533400(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern undefined1 DAT_004f0a88;
extern int DAT_004f0a8c;
extern int DAT_004f0a90;
extern int DAT_004f0a94;
extern undefined4 DAT_004f0a98;
extern char s_Trans_Rotate_004f0a9c[];

// USA 004F0930 <- EU 004F0908 (Ghidra, non-matching)
// GLOBAL DAT_004f0a88 undefined1
// GLOBAL DAT_004f0a8c int
// GLOBAL DAT_004f0a90 int
// GLOBAL DAT_004f0a94 int
// GLOBAL DAT_004f0a98 undefined4
// GLOBAL s_Trans_Rotate_004f0a9c string

undefined4 func_004F0930(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(uint * *)(albw_frame + 0xc))
  #define local_70 (*(int *)(albw_frame + 0x10))
  #define local_6c (*(uint * *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x24))
  #define iStack_58 (*(int *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(undefined4 *)(albw_frame + 0x48))
  #define local_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined1 *)(albw_frame + 0x58))
  #define local_27 (*(undefined1 *)(albw_frame + 0x59))
  iVar1 = DAT_004f0a8c;
  local_74 = (uint *)&DAT_004f0a88;
  local_78 = DAT_004f0a8c;
  local_68 = 3;
  (*(undefined1 *)((char *)&local_64 + 2)) = 0;
  local_70 = DAT_004f0a90;
  local_6c = &local_64;
  (**(code **)(DAT_004f0a8c + 8))(&local_78);
  uVar3 = 0;
  do {
    if (*(char *)((int)local_74 + uVar3) == '\0') {
      if ((int)uVar3 < 0x40001) goto LAB_004f0990;
      break;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x40001);
  uVar3 = 0;
LAB_004f0990:
  if (local_68 <= (int)uVar3) {
    uVar3 = local_68 - 1;
  }
  (**(code **)(local_78 + 8))(&local_78);
  func_0010E3C4(&local_64,local_74,uVar3);
  local_70 = DAT_004f0a94;
  *(undefined1 *)((int)&local_64 + uVar3) = 0;
  local_50 = func_00533400(param_2,&local_70);
  if (local_50 != 0) {
    local_60 = iVar1;
    uStack_5c = DAT_004f0a98;
    iStack_58 = iVar1;
    local_54 = DAT_004f0a98;
    uStack_4c = 0;
    local_28 = 1;
    local_44 = 0;
    local_3c = 0;
    local_48 = 0;
    local_43 = 0;
    local_2c = 0;
    local_27 = 0xc4;
    local_30 = 0;
    local_40 = 0;
    local_34 = 0;
    local_38 = 0;
    piVar2 = func_002C2D00(&local_60);
    *(int **)(param_1 + 0x40) = piVar2;
    if (piVar2 != (int *)0x0) {
      local_7c = s_Trans_Rotate_004f0a9c;
      local_80 = iVar1;
      uVar3 = func_00564A78(*(int *)(param_1 + 0x40),&local_80);
      if (uVar3 != 0xffff) {
        *(uint *)(param_1 + 0x114) = uVar3;
        return 1;
      }
      *(undefined1 *)(param_1 + 0x11d) = 0;
    }
    return 0;
  }
  *(undefined1 *)(param_1 + 0x11d) = 0;
  return 1;
}

