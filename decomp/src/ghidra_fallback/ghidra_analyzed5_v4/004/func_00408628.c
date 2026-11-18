#include "ghidra_types.h"

extern int func_00407970(uint param_1,int *param_2,uint *param_3,uint *param_4,int *param_5,char *param_6);
extern int func_004088D0(int param_1);
extern int func_0040D5F4(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_005697E0(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569884(int param_1,uint param_2);
extern int DAT_00408768;

// USA 00408628 <- EU 00408608 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 char *
// GLOBAL DAT_00408768 int

uint func_00408628(uint param_1,int *param_2,uint *param_3,uint *param_4,char *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined1 *)(albw_frame + 0x28))
  #define local_47 (*(undefined1 *)(albw_frame + 0x29))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(char *)(albw_frame + 0x34))
  #define local_3b (*(undefined1 *)(albw_frame + 0x35))
  #define local_38 (*(int *)(albw_frame + 0x38))
  #define local_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x44))
  #define local_28 (*(undefined4 *)(albw_frame + 0x48))
  if (*(char *)(param_1 + 0x81) == '\0') {
    uVar1 = 0x10;
  }
  else {
    func_004088D0((int)&local_70);
    local_70 = *(undefined4 *)(param_1 + 0x68);
    uStack_6c = *(undefined4 *)(param_1 + 0x6c);
    uStack_68 = *(undefined4 *)(param_1 + 0x70);
    local_64 = *(undefined4 *)(param_1 + 0x74);
    uStack_60 = *(undefined4 *)(param_1 + 0x78);
    uStack_5c = *(undefined4 *)(param_1 + 0x7c);
    local_54 = *(undefined4 *)(param_1 + 100);
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 4);
      iVar3 = func_005697E0(iVar2,(uint)param_3,&local_44);
      if (iVar3 != 0) {
        local_48 = 1;
        local_58 = local_44;
        local_4c = local_40;
        local_47 = local_3b;
        if ((local_3c != '\x01') && (local_3c == '\x02')) {
          local_48 = 2;
        }
      }
      local_50 = func_00569884(iVar2,(uint)param_3);
    }
    local_34 = param_1 + 0x58;
    local_28 = *(undefined4 *)(DAT_00408768 + 0x10);
    local_38 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x5c) == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(int *)(param_1 + 0x5c) + 4;
    }
    local_2c = &local_70;
    uVar1 = func_00407970(param_1,param_2,param_3,param_4,&local_38,param_5);
    if ((int *)*param_2 != (int *)0x0) {
      func_0040D5F4((int *)*param_2,3,param_3,(int *)param_4);
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}

