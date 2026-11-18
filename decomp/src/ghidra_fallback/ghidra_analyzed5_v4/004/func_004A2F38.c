#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern float DAT_004a2fe8;
extern undefined4 DAT_004a2fec;

// USA 004A2F38 <- EU 004A2F10 (Ghidra, non-matching)
// GLOBAL DAT_004a2fe8 float
// GLOBAL DAT_004a2fec undefined4

void func_004A2F38(int param_1,undefined4 *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define fStack_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define afStack_40 ((float *)(albw_frame + 0x50))
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    local_4c = *(float *)(iVar1 + 0x3c);
    local_48 = local_4c;
    local_44 = local_4c;
    func_00491D78(afStack_40,&local_4c,(float *)(iVar1 + 0x4c),(float *)(iVar1 + 0x40));
    local_88 = DAT_004a2fe8;
    local_84 = DAT_004a2fec;
    local_80 = DAT_004a2fec;
    local_78 = DAT_004a2fec;
    fStack_74 = DAT_004a2fe8;
    local_70 = DAT_004a2fec;
    local_68 = DAT_004a2fec;
    local_64 = DAT_004a2fec;
    fStack_60 = DAT_004a2fe8;
    local_7c = *param_2;
    local_6c = param_2[1];
    local_5c = param_2[2];
    func_001157FC(&local_88,&local_88,afStack_40);
    iVar1 = *(int *)(param_1 + 0x20);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x24) == *(int *)(iVar1 + 0xc))) &&
       (0 < *(int *)(iVar1 + 4))) {
      func_003E6DD4(iVar1,&local_88);
    }
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  return;
}

