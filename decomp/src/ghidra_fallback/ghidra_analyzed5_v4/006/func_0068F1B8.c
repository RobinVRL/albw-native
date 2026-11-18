#include "ghidra_types.h"

extern int func_001008E8(ushort *param_1,ushort *param_2,int param_3);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern undefined8 func_003C8184(int *param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5);
extern uint DAT_0068f2f8;

// USA 0068F1B8 <- EU 0068F190 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 ushort *
// PARAM param_7 Stack[0x8]:4 uint
// GLOBAL DAT_0068f2f8 uint

uint func_0068F1B8(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint param_5,
                  ushort *param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *extraout_r1;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x160];
  #define auStack_160 ((uint *)(albw_frame + 0x0))
  #define local_60 (*(uint *)(albw_frame + 0x100))
  #define local_5c (*(undefined4 *)(albw_frame + 0x104))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x108))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x10c))
  #define local_50 (*(uint *)(albw_frame + 0x110))
  #define local_4c (*(uint *)(albw_frame + 0x114))
  #define local_48 (*(ushort * *)(albw_frame + 0x118))
  #define local_44 (*(uint * *)(albw_frame + 0x11c))
  #define local_40 (*(uint *)(albw_frame + 0x120))
  #define local_3c (*(uint *)(albw_frame + 0x124))
  #define local_38 (*(uint *)(albw_frame + 0x128))
  #define puStack_34 (*(uint * *)(albw_frame + 0x12c))
  #define local_30 (*(uint * *)(albw_frame + 0x130))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x134))
  #define puStack_28 (*(uint * *)(albw_frame + 0x138))
  local_48 = param_6;
  local_40 = 0;
  local_44 = param_4;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  uVar7 = func_00110710(param_5,param_1[2]);
  uVar7 = func_003C8184((int *)param_1[3],4,*param_1 + (int)((ulonglong)uVar7 >> 0x20) * 4,&local_3c
                        ,4);
  puVar4 = (uint *)((uint)uVar7 & 0x80000000);
  uVar2 = (uint)uVar7;
  if ((-1 < (int)puVar4) && (uVar2 = DAT_0068f2f8, local_3c != 0xffffffff)) {
    local_38 = param_7 >> 1;
    uVar5 = local_3c;
    do {
      uVar1 = param_1[4];
      uVar7 = func_003C8184((int *)param_1[7],puVar4,uVar1 + uVar5,&local_60,0x18);
      uVar2 = (uint)uVar7;
      uVar6 = 0;
      if (-1 < (int)uVar2) {
        uVar6 = local_4c;
        if (local_4c != 0) {
          uVar7 = func_003C8184((int *)param_1[7],0,uVar1 + uVar5 + 0x18,auStack_160,local_4c);
          uVar2 = (uint)uVar7;
          if ((int)uVar2 < 0) goto LAB_0068f270;
        }
        uVar2 = 0;
      }
LAB_0068f270:
      if ((int)uVar2 < 0) break;
      puVar4 = auStack_160;
      if ((*local_44 == local_60 && param_7 == uVar6) &&
         (iVar3 = func_001008E8(local_48,(ushort *)puVar4,local_38), puVar4 = extraout_r1,
         iVar3 == 0)) {
        uVar2 = 0;
        local_40 = uVar5;
        break;
      }
      uVar2 = DAT_0068f2f8;
      uVar5 = local_50;
    } while (local_50 != 0xffffffff);
  }
  if (-1 < (int)uVar2) {
    *local_30 = local_40;
    *local_2c = local_5c;
    local_2c[1] = uStack_58;
    local_2c[2] = uStack_54;
    uVar2 = 0;
  }
  return uVar2;
}

