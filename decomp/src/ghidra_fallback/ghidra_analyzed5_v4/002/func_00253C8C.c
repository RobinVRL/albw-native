#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern float DAT_00253d74;
extern undefined4 DAT_00253d78;
extern undefined4 DAT_00253d7c;
extern undefined4 DAT_00253d80;
extern undefined DAT_00253d84;
extern int DAT_00253d9c;
extern char s_L_SE_TurtleWall_FALL_00253d86[];
extern char s_cf_00253d86[];
extern undefined4 _DAT_00253d84;

// USA 00253C8C <- EU 00253CB4 (Ghidra, non-matching)
// GLOBAL DAT_00253d74 float
// GLOBAL DAT_00253d78 undefined4
// GLOBAL DAT_00253d7c undefined4
// GLOBAL DAT_00253d80 undefined4
// GLOBAL DAT_00253d84 undefined
// GLOBAL DAT_00253d9c int
// GLOBAL s_cf_00253d86 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00253C8C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define iStack_10 (*(int *)(albw_frame + 0x60))
  #define pcStack_c (*(char * *)(albw_frame + 0x64))
  func_00151148(*(int *)(param_1 + 0x48c),1);
  func_004CF478(*(int *)(param_1 + 0x488),1);
  func_004D8240((float *)(param_1 + 0x3dc),*(int *)(param_1 + 0x458) + 0xc0000000,
                *(uint *)(param_1 + 1000),DAT_00253d74);
  *(undefined4 *)(param_1 + 0x3e0) = DAT_00253d78;
  uVar2 = DAT_00253d80;
  uVar1 = DAT_00253d7c;
  puVar4 = *(undefined4 **)(param_1 + 0x484);
  puVar4[5] = *(undefined4 *)(param_1 + 0x458);
  puVar4[6] = 0x80000000;
  uVar3 = _DAT_00253d84;
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[4] = uVar1;
  puVar4[3] = uVar1;
  puVar5 = (uint *)func_002C11E8(aiStack_70,1,6,0);
  func_0016898C(*(int *)(param_1 + 0x444),puVar5);
  pcStack_c = s_L_SE_TurtleWall_FALL_00253d86 + 2;
  iStack_10 = DAT_00253d9c;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

