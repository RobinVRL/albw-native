#include "ghidra_types.h"

extern int func_002C2D00(int *param_1);
extern int func_00330F70(int param_1,float fparam_0);
extern int func_003310B8(undefined4 *param_1,uint *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00527934(int param_1,int *param_2);
extern int func_00533400(int param_1,int *param_2);
extern int DAT_0027cabc;
extern int DAT_0027cac0;
extern undefined4 DAT_0027cac4;
extern undefined4 DAT_0027cac8;
extern int DAT_0027cacc;
extern float DAT_0027cad0;
extern undefined4 DAT_0027cae0;
extern undefined4 DAT_0027cae4;
extern char s_CandleFloor_0027cad4[];

// USA 0027C948 <- EU 0027C970 (Ghidra, non-matching)
// GLOBAL DAT_0027cabc int
// GLOBAL DAT_0027cac0 int
// GLOBAL DAT_0027cac4 undefined4
// GLOBAL DAT_0027cac8 undefined4
// GLOBAL DAT_0027cacc int
// GLOBAL DAT_0027cad0 float
// GLOBAL DAT_0027cae0 undefined4
// GLOBAL DAT_0027cae4 undefined4
// GLOBAL s_CandleFloor_0027cad4 string

int * func_0027C948(undefined4 *param_1,uint *param_2)

{
  float fparam_0;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_r3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_60 (*(int *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(undefined1 *)(albw_frame + 0x24))
  #define local_4b (*(undefined1 *)(albw_frame + 0x25))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x40))
  #define local_2f (*(undefined1 *)(albw_frame + 0x41))
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 (*(char * *)(albw_frame + 0x4c))
  piVar1 = func_003310B8(param_1,param_2);
  piVar3 = piVar1 + 0x106;
  iVar4 = DAT_0027cabc + 0x54;
  *piVar1 = DAT_0027cabc;
  piVar1[200] = iVar4;
  piVar1[0x107] = (int)(piVar1 + 0x109);
  piVar1[0x108] = 0x14;
  iVar4 = DAT_0027cac0;
  *(undefined1 *)(piVar1[0x107] + 0x13) = 0;
  fparam_0 = DAT_0027cad0;
  iVar2 = DAT_0027cacc;
  *(undefined1 *)piVar1[0x107] = 0;
  *piVar3 = iVar2;
  func_00330F70((int)piVar1,fparam_0);
  pcVar5 = s_CandleFloor_0027cad4;
  local_24 = s_CandleFloor_0027cad4;
  local_28 = iVar4;
  iVar2 = func_00527934(piVar1[0xb4],&local_28);
  if ((*(ushort *)(piVar1 + 0xb) & 0xff) == 0) {
    func_004994B0((int)piVar3,DAT_0027cae0,(uint)pcVar5,in_r3);
  }
  local_58 = func_00533400(iVar2,piVar3);
  local_68 = iVar4;
  uStack_64 = DAT_0027cae4;
  iStack_60 = iVar4;
  local_5c = DAT_0027cae4;
  uStack_54 = 0;
  local_30 = 1;
  local_4c = 0;
  local_3c = 0;
  local_4b = 0;
  local_34 = 0;
  local_44 = 0;
  local_50 = 1;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_2f = 0xc4;
  piVar3 = func_002C2D00(&local_68);
  piVar1[0x103] = (int)piVar3;
  piVar1[0xd3] = (int)piVar3;
  piVar3[0x59] = piVar3[0x59] | 0x40000000;
  func_004D8AEC((float *)(piVar3 + 0x20),piVar1[0xfa],(float *)(piVar1 + 0xf4));
  func_004CEAF0(piVar1[0x103]);
  return piVar1;
}

