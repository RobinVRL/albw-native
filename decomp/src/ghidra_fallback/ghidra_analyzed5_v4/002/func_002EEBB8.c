#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_00548CC8(int param_1,undefined4 *param_2,undefined4 *param_3,float *param_4);
extern int func_0068C690(float *param_1);
extern undefined DAT_002eed5c;
extern int DAT_002eed80;
extern int DAT_002eed84;
extern uint DAT_002eed88;
extern uint DAT_002eed8c;
extern float DAT_002eed90;
extern undefined4 DAT_002eed94;
extern char s_SE_MediumGanonFlat_RUSH_FX_002eed64[];

// USA 002EEBB8 <- EU 002EEB94 (Ghidra, non-matching)
// GLOBAL DAT_002eed5c undefined
// GLOBAL DAT_002eed80 int
// GLOBAL DAT_002eed84 int
// GLOBAL DAT_002eed88 uint
// GLOBAL DAT_002eed8c uint
// GLOBAL DAT_002eed90 float
// GLOBAL DAT_002eed94 undefined4
// GLOBAL s_SE_MediumGanonFlat_RUSH_FX_002eed64 string

void func_002EEBB8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0xb0]; /* entry_sp - 0xb0 .. entry_sp + 0x0 */
#define stack0xffffff50 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  #define in_stack_ffffff50 (*(int *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x4))
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x20))
  #define local_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_80 (*(float *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(undefined4 *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x40))
  #define local_68 (*(int *)(albw_frame + 0x48))
  #define local_64 (*(char * *)(albw_frame + 0x4c))
  #define afStack_60 ((float *)(albw_frame + 0x50))
  #define afStack_30 ((float *)(albw_frame + 0x80))
  #define auStack_24 ((undefined4 *)(albw_frame + 0x8c))
  iVar2 = *(int *)(param_1 + 0xcb0);
  if ((**(int **)(*(int *)(param_1 + 0xdb4) + 0x14) != 1) || (*(char *)(param_1 + 0x8cc) != '\x19'))
  {
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xcb4))) {
      iVar4 = *(int *)(iVar2 + 0x20);
      if (((iVar4 != 0) && (*(int *)(iVar2 + 0x24) == *(int *)(iVar4 + 0xc))) &&
         (0 < *(int *)(iVar4 + 4))) {
        *(undefined1 *)(iVar4 + 0x280) = 1;
      }
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
    }
    *(undefined4 *)(param_1 + 0xcb0) = 0;
    *(undefined4 *)(param_1 + 0xcb4) = 0;
    return;
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *(undefined4 *)(param_1 + 0xcb4) = 0;
      return;
    }
    func_004A1B9C((int *)&stack0xffffff50,*(int *)(param_1 + 0x344),(uint *)&DAT_002eed5c);
    *(int *)(param_1 + 0xcb0) = in_stack_ffffff50;
    *(undefined4 *)(param_1 + 0xcb4) = uStack_ac;
    if (*(int *)(param_1 + 0xcb0) == 0) {
      return;
    }
  }
  local_64 = s_SE_MediumGanonFlat_RUSH_FX_002eed64;
  local_68 = DAT_002eed80;
  func_00150CD0(param_1,&local_68,param_1 + 0xddc,0,0);
  func_00548CC8(param_1,&local_78,auStack_24,afStack_30);
  cVar1 = *(char *)(DAT_002eed84 + param_1);
  uVar3 = func_0068C690(afStack_30);
  uVar5 = DAT_002eed88;
  if (cVar1 == '\0') {
    uVar5 = DAT_002eed8c;
  }
  func_00491938(afStack_60,0,uVar3,uVar5);
  local_a8 = DAT_002eed90;
  local_a4 = DAT_002eed94;
  local_a0 = DAT_002eed94;
  local_98 = DAT_002eed94;
  fStack_94 = DAT_002eed90;
  local_90 = DAT_002eed94;
  local_88 = DAT_002eed94;
  local_84 = DAT_002eed94;
  fStack_80 = DAT_002eed90;
  local_9c = local_78;
  local_8c = local_74;
  local_7c = local_70;
  func_001157FC(&local_a8,&local_a8,afStack_60);
  iVar2 = *(int *)(param_1 + 0xcb0);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xcb4)) {
    func_004A2D1C(iVar2,&local_a8);
  }
  return;
}

