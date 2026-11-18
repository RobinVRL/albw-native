#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0014F0B0(int param_1);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004CFF28(int param_1,float *param_2,float *param_3);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern float *DAT_001503dc;
extern float DAT_001503e0;
extern float DAT_001503e4;
extern float DAT_001503e8;
extern float DAT_001503ec;
extern int *DAT_001503f0;

// USA 001501C8 <- EU 001501C8 (Ghidra, non-matching)
// GLOBAL DAT_001503dc float *
// GLOBAL DAT_001503e0 float
// GLOBAL DAT_001503e4 float
// GLOBAL DAT_001503e8 float
// GLOBAL DAT_001503ec float
// GLOBAL DAT_001503f0 int *

void func_001501C8(int param_1,int param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(float *)(albw_frame + 0x0))
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define fStack_b8 (*(float *)(albw_frame + 0x8))
  #define fStack_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(uint *)(albw_frame + 0x10))
  #define local_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_a0 (*(undefined2 *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_94 (*(float * *)(albw_frame + 0x2c))
  #define local_90 (*(float * *)(albw_frame + 0x30))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define fStack_6c (*(float *)(albw_frame + 0x54))
  #define auStack_68 ((undefined4 *)(albw_frame + 0x58))
  #define auStack_3c ((undefined4 *)(albw_frame + 0x84))
  if (param_2 == 0) {
    return;
  }
  if ((*(uint *)(param_2 + 0x164) & 0x4000000) != 0) {
    local_bc = *DAT_001503dc;
    fStack_b8 = DAT_001503dc[1];
    fStack_b4 = DAT_001503dc[2];
    local_c0 = DAT_001503e0;
    fVar5 = DAT_001503e0;
    func_004CFF28(param_2,&local_bc,&local_c0);
    puVar1 = func_004331A0(auStack_3c);
    pbVar2 = (byte *)func_00436384(auStack_68,puVar1);
    func_00110D44(&local_b0,pbVar2,0x2a);
    local_74 = local_bc;
    fStack_6c = fStack_b4;
    puVar3 = &local_b0;
    local_70 = fStack_b8 + DAT_001503e4;
    local_ac = *(undefined4 *)(param_1 + 0x3ec);
    local_b0 = 0;
    local_90 = &local_74;
    local_94 = &local_bc;
    local_84 = local_c0;
    local_a4 = 0;
    local_9c = 7;
    local_a0 = *(undefined2 *)(param_1 + 0x54);
    local_80 = fVar5;
    local_7c = fVar5;
    local_78 = fVar5;
    func_0014F0B0(param_1);
    func_004A9F98(*DAT_001503f0,puVar3,0xf,DAT_001503ec,DAT_001503e8);
    if (((*(byte *)(param_1 + 0x397) & 1) != 0) && ((*(uint *)(param_1 + 0x398) & 0x80) != 0)) {
      if (*(char *)(param_1 + 0x38d) == '\0') {
        if (*(char *)(param_1 + 0x38e) != '\0') {
          (**(code **)(*(int *)(param_1 + 800) + 0x3c))(param_1 + 800);
        }
      }
      else {
        (**(code **)(*(int *)(param_1 + 800) + 0x38))(param_1 + 800);
      }
      *(byte *)(param_1 + 0x397) = *(byte *)(param_1 + 0x397) & 0xfe;
    }
    if ((*(byte *)(param_1 + 0x397) & 2) == 0) {
      if ((*(byte *)(param_1 + 0x397) & 4) == 0) {
        func_0035227C(param_1 + 0x324,(uint)*(byte *)(param_1 + 0x392));
      }
      else {
        func_0035227C(param_1 + 0x324,(uint)*(byte *)(param_1 + 0x393));
      }
    }
    if (((*(int *)(param_1 + 0x2d0) != 0) && (*(char *)(*(int *)(param_1 + 0x2d0) + 0x23) == '\0'))
       && (iVar4 = *(int *)(param_1 + 0x34c), iVar4 != 0)) {
      func_004D0194(iVar4,(uint)*(byte *)(param_1 + 0x392));
      func_004D0268(iVar4,(uint)*(byte *)(param_1 + 0x394));
    }
    func_004D0194(param_2,(uint)*(byte *)(param_1 + 0x392));
    func_004D0268(param_2,(uint)*(byte *)(param_1 + 0x394));
  }
  return;
}

