#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001E2444(int param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_00504D48(int param_1,int param_2);
extern undefined4 DAT_0019d268;
extern undefined4 DAT_0019d26c;
extern int *DAT_0019d278;
extern int *DAT_0019d27c;
extern char s_World_0019d270[];

// USA 0019D01C <- EU 0019D01C (Ghidra, non-matching)
// GLOBAL DAT_0019d268 undefined4
// GLOBAL DAT_0019d26c undefined4
// GLOBAL DAT_0019d278 int *
// GLOBAL DAT_0019d27c int *
// GLOBAL s_World_0019d270 string

uint func_0019D01C(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(undefined4 *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x34))
  #define pcStack_48 (*(char * *)(albw_frame + 0x38))
  #define local_44 (*(undefined1 *)(albw_frame + 0x3c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x3d))
  #define local_42 (*(undefined1 *)(albw_frame + 0x3e))
  #define local_41 (*(undefined1 *)(albw_frame + 0x3f))
  #define local_40 (*(undefined1 *)(albw_frame + 0x40))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x44))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_30 (*(int * *)(albw_frame + 0x50))
  #define local_2c (*(undefined1 *)(albw_frame + 0x54))
  if (((param_3 != (int *)0x0) && (param_1[0x161] == 0)) && (*(char *)param_3[1] != '\0')) {
    uStack_78 = DAT_0019d268;
    uStack_74 = DAT_0019d26c;
    local_70 = 0;
    local_6c = 0;
    uStack_68 = 0x20;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    uStack_4c = DAT_0019d268;
    pcStack_48 = s_World_0019d270;
    local_44 = 7;
    local_42 = 0;
    local_41 = 0;
    local_40 = 0;
    uStack_3c = DAT_0019d268;
    uStack_34 = 0;
    local_30 = (int *)0x0;
    local_2c = 1;
    local_43 = 0xff;
    local_38 = param_3[1];
    local_30 = func_001E2444(*DAT_0019d278,param_3,-1,1);
    if (local_30 == (int *)0x0) {
      return 0xffffffff;
    }
    puVar1 = func_00504D48(*DAT_0019d27c,(int)&uStack_78);
    param_1[0x161] = (int)puVar1;
  }
  uVar4 = 0;
  if (0 < param_1[0x160]) {
    do {
      piVar3 = param_1 + uVar4 * 0xb;
      do {
        (**(code **)(*param_2 + 8))(param_2);
        (**(code **)(*param_2 + 8))(param_2);
        iVar6 = param_2[1];
        (**(code **)(*piVar3 + 8))(piVar3);
        if (iVar6 == piVar3[1]) {
LAB_0019d204:
          if (-1 < (int)uVar4) {
            return uVar4;
          }
          goto LAB_0019d1b0;
        }
        iVar6 = 0;
        do {
          if (*(char *)(param_2[1] + iVar6) != *(char *)(piVar3[1] + iVar6)) break;
          if (*(char *)(param_2[1] + iVar6) == '\0') goto LAB_0019d204;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40001);
        uVar4 = uVar4 + 1;
        if (param_1[0x160] <= (int)uVar4) goto LAB_0019d1b0;
        piVar3 = param_1;
      } while (0x1f < uVar4);
    } while( true );
  }
LAB_0019d1b0:
  uVar4 = param_1[0x160];
  piVar3 = param_1;
  if (uVar4 < 0x20) {
    piVar3 = param_1 + uVar4 * 0xb;
  }
  puVar5 = (uint *)piVar3[1];
  (**(code **)(*param_2 + 8))(param_2);
  uVar2 = 0;
  do {
    if (*(char *)(param_2[1] + uVar2) == '\0') {
      if ((int)uVar2 < 0x40001) goto LAB_0019d21c;
      break;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x40001);
  uVar2 = 0;
LAB_0019d21c:
  if (piVar3[2] <= (int)uVar2) {
    uVar2 = piVar3[2] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar5,(uint *)param_2[1],uVar2);
  *(undefined1 *)((int)puVar5 + uVar2) = 0;
  param_1[0x160] = param_1[0x160] + 1;
  return uVar4;
}

