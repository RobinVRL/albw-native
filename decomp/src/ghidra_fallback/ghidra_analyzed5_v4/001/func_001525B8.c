#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010EEE0(int param_1);
extern int func_003CF8CC(int *param_1,int param_2,uint *param_3,int param_4);
extern int func_003D213C(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_003D2210(undefined4 *param_1);
extern int func_003D2288(undefined4 *param_1,int param_2,undefined4 *param_3);
extern int func_003D231C(undefined4 *param_1);
extern int func_004C5D80(int param_1,undefined4 param_2);
extern int func_004C5DA8(int *param_1,int param_2,uint param_3,undefined4 *param_4);
extern int func_004C63C4(int *param_1,uint param_2,int param_3,int param_4);
extern int func_004C6454(int *param_1);
extern int func_004C6478(int param_1);
extern int func_00560A68(uint *param_1,int param_2);
extern int *DAT_0015278c;
extern uint DAT_00152790;
extern int DAT_00152794;

// USA 001525B8 <- EU 001525B8 (Ghidra, non-matching)
// GLOBAL DAT_0015278c int *
// GLOBAL DAT_00152790 uint
// GLOBAL DAT_00152794 int

undefined4 func_001525B8(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x1f0];
  #define local_1e4 ((uint * *)(albw_frame + 0xc))
  #define local_1d8 ((uint *)(albw_frame + 0x18))
  #define local_1cc (*(uint *)(albw_frame + 0x24))
  #define local_1c8 (*(uint *)(albw_frame + 0x28))
  #define local_1c4 (*(uint *)(albw_frame + 0x2c))
  #define local_1c0 (*(uint *)(albw_frame + 0x30))
  #define local_1bc (*(uint *)(albw_frame + 0x34))
  #define local_1b8 (*(uint *)(albw_frame + 0x38))
  #define local_1b4 (*(uint *)(albw_frame + 0x3c))
  #define local_1b0 (*(uint *)(albw_frame + 0x40))
  #define local_1ac (*(uint *)(albw_frame + 0x44))
  #define local_1a8 (*(uint *)(albw_frame + 0x48))
  #define local_1a4 (*(uint *)(albw_frame + 0x4c))
  #define local_1a0 (*(uint *)(albw_frame + 0x50))
  #define local_19c (*(uint *)(albw_frame + 0x54))
  #define local_198 (*(uint *)(albw_frame + 0x58))
  #define local_194 (*(uint *)(albw_frame + 0x5c))
  #define auStack_190 ((undefined4 *)(albw_frame + 0x60))
  #define auStack_28 ((undefined4 *)(albw_frame + 0x1c8))
  local_1cc = 0;
  local_1c8 = 0;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  local_194 = 0;
  func_004C5D80(param_1 + 0x20,param_1 + 0x18);
  iVar1 = *DAT_0015278c;
  func_0010C0B8(iVar1 + 0x1fb4);
  iVar2 = func_004C63C4((int *)(param_1 + 0x20),DAT_00152790,DAT_00152794,0);
  *(char *)(param_1 + 0xdec) = (char)iVar2;
  if (iVar2 == 0) {
    func_003D2210(auStack_190);
    uVar5 = 0;
    uVar6 = *(uint *)(param_1 + 0xde8);
    if (*(uint *)(param_1 + 0x230) < *(uint *)(param_1 + 0xde8)) {
      uVar6 = *(uint *)(param_1 + 0x230);
    }
    if (0 < (int)uVar6) {
      do {
        iVar2 = func_004C5DA8((int *)(param_1 + 0x20),0,uVar5,auStack_190);
        *(char *)(param_1 + 0xdec) = (char)iVar2;
        if (iVar2 != 0) break;
        func_003D213C((int)auStack_190,local_1e4,local_1d8);
        if ((local_1e4[0] != (uint *)0x0) && (local_1d8[0] == 0x3c)) {
          func_0010E3C4(&local_1cc,local_1e4[0],0x3c);
        }
        iVar2 = func_00560A68(&local_1cc,1);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x92c);
          iVar4 = *(int *)(param_1 + 0x924);
          if (iVar2 < iVar4) {
            *(int *)(param_1 + 0x92c) = iVar2 + 1;
            iVar2 = iVar2 + *(int *)(param_1 + 0x928);
            if (iVar4 <= iVar2) {
              iVar2 = iVar2 - iVar4;
            }
            puVar3 = (uint *)(*(int *)(param_1 + 0x920) + iVar2 * 0x3c);
            *puVar3 = local_1cc;
            puVar3[1] = local_1c8;
            puVar3[2] = local_1c4;
            puVar3[3] = local_1c0;
            puVar3[4] = local_1bc;
            puVar3[5] = local_1b8;
            puVar3[6] = local_1b4;
            puVar3[7] = local_1b0;
            puVar3[8] = local_1ac;
            puVar3[9] = local_1a8;
            puVar3[10] = local_1a4;
            puVar3[0xb] = local_1a0;
            puVar3[0xc] = local_19c;
            puVar3[0xd] = local_198;
            puVar3[0xe] = local_194;
          }
        }
        func_003D231C(local_1d8);
        func_003D2288(auStack_28,(int)auStack_190,local_1d8);
        func_003CF8CC((int *)(param_1 + 0x20),0,local_1d8,0);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar6);
    }
  }
  func_004C6454((int *)(param_1 + 0x20));
  func_0010EEE0(iVar1 + 0x1fb4);
  return func_004C6478(param_1 + 0x20);
}

