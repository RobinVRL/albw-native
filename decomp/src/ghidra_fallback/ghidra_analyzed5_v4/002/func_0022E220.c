#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00111A64(uint *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00198834(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern int func_0065E9FC(undefined4 *param_1,undefined1 param_2);
extern float DAT_0022e384;
extern uint DAT_0022e388;
extern int *DAT_0022e38c;
extern int DAT_0022e390;
extern char s_SE_Ku_V_SHOT_0022e394[];
extern char s_SE_Zora_V_SHOT_0022e3a4[];

// USA 0022E220 <- EU 0022E220 (Ghidra, non-matching)
// GLOBAL DAT_0022e384 float
// GLOBAL DAT_0022e388 uint
// GLOBAL DAT_0022e38c int *
// GLOBAL DAT_0022e390 int
// GLOBAL s_SE_Ku_V_SHOT_0022e394 string
// GLOBAL s_SE_Zora_V_SHOT_0022e3a4 string

void func_0022E220(int *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define auStack_50 ((undefined4 *)(albw_frame + 0x10))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(int *)(albw_frame + 0x40))
  #define local_1c (*(char * *)(albw_frame + 0x44))
  if (param_1[0x29f] == 9) {
    func_001119F4(auStack_50,
                  (undefined4 *)
                  (*(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14) + param_1[0x293] * 0x30));
    if (*(char *)((int)param_1 + 0xa6d) == '\0') {
      piVar2 = param_1 + 0x29c;
    }
    else {
      piVar2 = (int *)func_00520FC0();
    }
    fparam_0 = ALBW_AS_F32(piVar2[1]);
    local_60 = local_44;
    local_5c = local_34;
    local_58 = local_24;
    func_004D8054(&local_60,param_1[0xfa],DAT_0022e384);
    if (*(char *)((int)param_1 + 0xa6d) == '\0') {
      puVar3 = (uint *)func_0058A7D4();
      uVar1 = DAT_0022e388;
      uVar4 = func_00111A64(puVar3);
      param_1[0xfa] =
           ((int)((ulonglong)uVar1 * (ulonglong)uVar4 >> 0x20) - ((int)uVar1 >> 1)) + param_1[0xfa];
    }
    uVar5 = func_00588BE4((int)param_1);
    func_00198834(&local_60,param_1[0xfa],uVar5,fparam_0);
    iVar6 = func_00588BE4((int)param_1);
    local_20 = DAT_0022e390;
    if (iVar6 == *DAT_0022e38c) {
      local_1c = s_SE_Ku_V_SHOT_0022e394;
      func_00150A84(param_1,&local_20,0);
    }
    else {
      local_1c = s_SE_Zora_V_SHOT_0022e3a4;
      func_00150A84(param_1,&local_20,0);
    }
  }
  iVar6 = func_0058A8F0((int)param_1);
  if (iVar6 != 0) {
    func_0065E9FC(param_1 + 0x29f,6);
  }
  return;
}

