#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_00301778(int param_1,int param_2);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int *DAT_00301720;
extern uint DAT_00301724;
extern undefined4 DAT_00301728;
extern undefined4 DAT_0030172c;
extern undefined4 DAT_00301730;
extern float DAT_00301734;
extern float DAT_00301738;
extern int *DAT_0030173c;
extern int DAT_00301750;
extern char s_SE_YukaByun_FLY_00301740[];

// USA 0030153C <- EU 00301518 (Ghidra, non-matching)
// GLOBAL DAT_00301720 int *
// GLOBAL DAT_00301724 uint
// GLOBAL DAT_00301728 undefined4
// GLOBAL DAT_0030172c undefined4
// GLOBAL DAT_00301730 undefined4
// GLOBAL DAT_00301734 float
// GLOBAL DAT_00301738 float
// GLOBAL DAT_0030173c int *
// GLOBAL DAT_00301750 int
// GLOBAL s_SE_YukaByun_FLY_00301740 string

undefined4 func_0030153C(int param_1,int param_2)

{
  int iVar1;
  uint unaff_r6;
  bool bVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((byte *)(albw_frame + 0x0))
  #define local_80 (*(uint *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(undefined1 *)(albw_frame + 0x28))
  #define local_67 (*(undefined1 *)(albw_frame + 0x29))
  #define auStack_64 ((uint *)(albw_frame + 0x2c))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_48 (*(int *)(albw_frame + 0x48))
  #define iStack_44 (*(int *)(albw_frame + 0x4c))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x60))
  #define local_2c (*(undefined4 *)(albw_frame + 0x64))
  #define local_20 (*(int *)(albw_frame + 0x70))
  #define local_1c (*(char * *)(albw_frame + 0x74))
  *(int *)(param_2 + 4) = *DAT_00301720 + *(int *)(param_2 + 4);
  iVar1 = *(int *)(param_1 + 0x62c);
  fVar4 = *(float *)(param_2 + 0x24);
  bVar3 = *(float *)(iVar1 + 4) == fVar4;
  bVar2 = fVar4 <= *(float *)(iVar1 + 4);
  if (!bVar2 || bVar3) {
    bVar3 = fVar4 == *(float *)(iVar1 + 0x10);
    bVar2 = *(float *)(iVar1 + 0x10) <= fVar4;
  }
  if (!bVar2 || bVar3) {
    fVar4 = *(float *)(param_2 + 0x28);
    bVar3 = *(float *)(iVar1 + 8) == fVar4;
    bVar2 = fVar4 <= *(float *)(iVar1 + 8);
    if (!bVar2 || bVar3) {
      bVar3 = fVar4 == *(float *)(iVar1 + 0x14);
      bVar2 = *(float *)(iVar1 + 0x14) <= fVar4;
    }
    if (!bVar2 || bVar3) {
      fVar4 = *(float *)(param_2 + 0x2c);
      bVar3 = *(float *)(iVar1 + 0xc) == fVar4;
      bVar2 = fVar4 <= *(float *)(iVar1 + 0xc);
      if (!bVar2 || bVar3) {
        bVar3 = fVar4 == *(float *)(iVar1 + 0x18);
        bVar2 = *(float *)(iVar1 + 0x18) <= fVar4;
      }
      if (!bVar2 || bVar3) {
        bVar3 = *(char *)(param_2 + 0xb) == '\0';
      }
      if (bVar3) {
        func_0034CA24(*(undefined4 **)(param_2 + 0x1c));
        func_0014E2A0(param_1,*(undefined4 *)(param_2 + 0x18),param_2 + 0xac,0x200,0,0);
        if (**(int **)(param_2 + 0x1c) == 0) {
          local_80 = unaff_r6 & 0xffff0000 | DAT_00301724;
          local_90[0] = 0;
          local_90[1] = 0;
          local_90[2] = 0;
          local_90[3] = 0;
          local_90[4] = 0;
          local_90[5] = 0;
          local_90[6] = 0;
          local_90[7] = 0;
          local_90[8] = 0;
          local_90[9] = 0;
          local_90[10] = 0;
          local_90[0xb] = 0;
          local_90[0xc] = 0;
          local_90[0xd] = 0;
          local_90[0xe] = 0;
          local_90[0xf] = 0;
          local_7c = 0xff;
          uStack_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_6c = DAT_00301728;
          local_68 = 0;
          local_67 = 1;
          uVar5 = DAT_00301728;
          func_00110D44(auStack_64,local_90,0x2a);
          iStack_44 = param_2 + 0x30;
          local_48 = param_2 + 0x24;
          local_38 = *(float *)(param_1 + 0x624) * *(float *)(param_2 + 0xc);
          local_58 = *(undefined4 *)(param_1 + 0x2cc);
          local_50 = DAT_00301730;
          local_30 = *(undefined4 *)(param_1 + 0x624);
          local_34 = uVar5;
          local_2c = uVar5;
          iVar1 = func_004A9F98(*DAT_0030173c,auStack_64,0xf,DAT_00301738,DAT_00301734);
          if (iVar1 != 0) {
            func_00301778(param_1,param_2);
          }
          local_1c = s_SE_YukaByun_FLY_00301740;
          local_20 = DAT_00301750;
          return func_00150CD0(param_1,&local_20,param_2 + 0x24,(uint)*(byte *)(param_2 + 10),0);
        }
      }
    }
  }
  return func_00301778(param_1,param_2);
}

