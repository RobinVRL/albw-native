#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int DAT_002c56f0;
extern undefined4 DAT_002c56f4;
extern int DAT_002c5708;
extern undefined4 DAT_002c570c;
extern undefined4 DAT_002c5710;
extern undefined4 DAT_002c5714;
extern char s_BarrierIbara_002c56f8[];

// USA 002C5590 <- EU 002C556C (Ghidra, non-matching)
// GLOBAL DAT_002c56f0 int
// GLOBAL DAT_002c56f4 undefined4
// GLOBAL DAT_002c5708 int
// GLOBAL DAT_002c570c undefined4
// GLOBAL DAT_002c5710 undefined4
// GLOBAL DAT_002c5714 undefined4
// GLOBAL s_BarrierIbara_002c56f8 string

int * func_002C5590(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_7c ((uint *)(albw_frame + 0x4))
  #define local_74 (*(undefined4 * *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(uint *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x58))
  #define local_24 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define local_1c (*(char * *)(albw_frame + 0x64))
  piVar1 = func_00150E40(param_1,param_2);
  iVar2 = DAT_002c56f0;
  piVar1[200] = DAT_002c56f0 + 0x54;
  *piVar1 = iVar2;
  iVar2 = func_0014E428((int)piVar1,1,0,0,1,0,0);
  piVar1[0x103] = iVar2;
  piVar1[0x104] = 0;
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0016A2FC(puVar3,1,DAT_002c56f4,1);
  }
  piVar1[0x104] = (int)puVar4;
  if (piVar1[0x103] == 0 || puVar4 == (undefined4 *)0x0) {
    *(undefined1 *)((int)piVar1 + 0x2d7) = 1;
  }
  else {
    local_20 = DAT_002c5708;
    local_1c = s_BarrierIbara_002c56f8;
    func_00169608((uint *)piVar1[0x104],0,&local_20,*(int *)(piVar1[0xb4] + 0x1c8));
    func_00133870(piVar1[0x104],0,piVar1[0x103]);
    uVar6 = 0;
    func_0016A02C(piVar1[0x104],-1,(int *)0xffffffff,0);
    local_74 = &local_70;
    local_7c[1] = 3;
    local_28 = 0;
    local_24 = 0;
    local_70 = 0;
    local_7c[0] = 1;
    local_6c = DAT_002c5710;
    local_68 = DAT_002c570c;
    local_64 = DAT_002c5714;
    local_5c = uVar6 | 0xff;
    local_60 = DAT_002c570c;
    func_0016898C(piVar1[0x104],local_7c);
    iVar2 = piVar1[0x103];
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar2 + 0x80),piVar1[0xfa],(float *)(piVar1 + 0xf4));
    piVar5 = (int *)piVar1[0x103];
    (**(code **)(*piVar5 + 0x10))(piVar5,0x24);
    piVar1[0xb8] = piVar1[0xb8] | 2;
  }
  return piVar1;
}

