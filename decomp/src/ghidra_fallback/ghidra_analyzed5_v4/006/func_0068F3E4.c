#include "ghidra_types.h"

extern int func_001008E8(ushort *param_1,ushort *param_2,int param_3);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern undefined8 func_003C8184(int *param_1,undefined4 param_2,int param_3,uint *param_4,uint param_5);
extern int DAT_0068f530;

// USA 0068F3E4 <- EU 0068F3BC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 ushort *
// PARAM param_7 Stack[0x8]:4 uint
// GLOBAL DAT_0068f530 int

int func_0068F3E4(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4,uint param_5,
                 ushort *param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x190];
  #define auStack_190 ((uint *)(albw_frame + 0x0))
  #define local_90 (*(uint *)(albw_frame + 0x100))
  #define local_8c (*(undefined4 *)(albw_frame + 0x104))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x108))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x10c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x110))
  #define local_7c (*(undefined4 *)(albw_frame + 0x114))
  #define local_78 (*(uint *)(albw_frame + 0x118))
  #define local_74 (*(uint *)(albw_frame + 0x11c))
  #define local_68 (*(ushort * *)(albw_frame + 0x128))
  #define local_64 (*(uint *)(albw_frame + 0x12c))
  #define local_4c (*(uint *)(albw_frame + 0x144))
  #define local_48 (*(uint * *)(albw_frame + 0x148))
  #define local_44 ((uint *)(albw_frame + 0x14c))
  #define puStack_34 (*(uint * *)(albw_frame + 0x15c))
  #define local_30 (*(uint * *)(albw_frame + 0x160))
  #define local_2c (*(undefined4 * *)(albw_frame + 0x164))
  #define puStack_28 (*(uint * *)(albw_frame + 0x168))
  local_4c = 0;
  local_68 = param_6;
  local_48 = param_4;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  uVar5 = func_00110710(param_5,param_1[2]);
  uVar5 = func_003C8184((int *)param_1[3],4,*param_1 + (int)((ulonglong)uVar5 >> 0x20) * 4,local_44,
                        4);
  iVar1 = (int)uVar5;
  if ((-1 < (int)uVar5) && (iVar1 = DAT_0068f530, local_44[0] != 0xffffffff)) {
    local_64 = param_7 >> 1;
    uVar3 = local_44[0];
    do {
      iVar2 = param_1[4] + uVar3;
      uVar5 = func_003C8184((int *)param_1[7],param_1[4],iVar2,&local_90,0x20);
      iVar1 = (int)uVar5;
      uVar4 = 0;
      if (-1 < iVar1) {
        uVar4 = local_74;
        if (local_74 != 0) {
          uVar5 = func_003C8184((int *)param_1[7],0,iVar2 + 0x20,auStack_190,local_74);
          iVar1 = (int)uVar5;
          if (iVar1 < 0) goto LAB_0068f4a0;
        }
        iVar1 = 0;
      }
LAB_0068f4a0:
      if (iVar1 < 0) break;
      if ((*local_48 == local_90 && param_7 == uVar4) &&
         (iVar1 = func_001008E8(local_68,(ushort *)auStack_190,local_64), iVar1 == 0)) {
        iVar1 = 0;
        local_4c = uVar3;
        break;
      }
      iVar1 = DAT_0068f530;
      uVar3 = local_78;
    } while (local_78 != 0xffffffff);
  }
  if (-1 < iVar1) {
    *local_30 = local_4c;
    local_2c[4] = local_7c;
    *local_2c = local_8c;
    local_2c[1] = uStack_88;
    local_2c[2] = uStack_84;
    local_2c[3] = uStack_80;
    iVar1 = 0;
  }
  return iVar1;
}

