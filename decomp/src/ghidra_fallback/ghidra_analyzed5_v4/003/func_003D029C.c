#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003CEAF8(int param_1);
extern int func_003CEBE4(void);
extern int func_003CF1FC(int *param_1,int param_2,undefined4 param_3);
extern int func_003CFDB4(int *param_1,int param_2);
extern int func_003D0040(int *param_1);
extern int func_003D077C(int *param_1,uint param_2);
extern int func_003D0874(int *param_1,int param_2,undefined1 *param_3,uint param_4);
extern int func_003D0ACC(int *param_1);
extern int func_003D0B10(int *param_1);
extern int func_003D1048(undefined4 *param_1);
extern int func_003D35F8(undefined4 *param_1);
extern int func_00564398(int *param_1,uint *param_2);
extern undefined1 *DAT_003d06d0;
extern uint DAT_003d06d4;
extern uint DAT_003d06d8;
extern uint DAT_003d06dc;
extern uint DAT_003d06e0;
extern undefined4 DAT_003d06e4;
extern uint DAT_003d06e8;

// USA 003D029C <- EU 003D0278 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined1 *
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 undefined1 *
// PARAM param_8 Stack[0xc]:4 uint
// PARAM param_9 Stack[0x10]:4 int
// PARAM param_10 Stack[0x14]:4 int
// PARAM param_11 Stack[0x18]:4 uint
// PARAM param_12 Stack[0x1c]:4 uint
// PARAM param_13 Stack[0x20]:4 uint
// GLOBAL DAT_003d06d0 undefined1 *
// GLOBAL DAT_003d06d4 uint
// GLOBAL DAT_003d06d8 uint
// GLOBAL DAT_003d06dc uint
// GLOBAL DAT_003d06e0 uint
// GLOBAL DAT_003d06e4 undefined4
// GLOBAL DAT_003d06e8 uint

uint func_003D029C(int *param_1,uint param_2,int param_3,uint *param_4,undefined1 *param_5,
                  uint param_6,undefined1 *param_7,uint param_8,int param_9,int param_10,
                  uint param_11,uint param_12,uint param_13)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined1 * *)(albw_frame + 0x0))
  #define local_5c (*(int *)(albw_frame + 0x4))
  #define iStack_58 (*(int *)(albw_frame + 0x8))
  #define local_50 (*(uint *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define auStack_48 ((undefined1 *)(albw_frame + 0x18))
  #define auStack_44 ((undefined1 *)(albw_frame + 0x1c))
  #define local_40 (*(uint *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define piStack_34 (*(int * *)(albw_frame + 0x2c))
  #define uStack_30 (*(uint *)(albw_frame + 0x30))
  #define local_2c (*(int *)(albw_frame + 0x34))
  #define local_28 (*(uint * *)(albw_frame + 0x38))
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  uVar3 = func_003CEBE4();
  puVar2 = DAT_003d06d0;
  if (param_2 == 0) {
    uVar3 = DAT_003d06d4;
  }
  DAT_003d06d0[1] = 1;
  param_1[1] = param_2;
  uVar5 = DAT_003d06d8;
  if (param_2 == 0) {
    return uVar3;
  }
  uVar3 = param_9 + param_10;
  bVar7 = 0xfffff < uVar3;
  bVar6 = uVar3 == 0x100000;
  if (uVar3 < 0x100001) {
    bVar7 = 0x62 < param_11;
    bVar6 = param_11 == 99;
  }
  if (!bVar7 || bVar6) {
    bVar7 = 0x62 < param_12;
    bVar6 = param_12 == 99;
    if (param_12 < 100) {
      bVar7 = 0x18fff < param_13;
      bVar6 = param_13 == 0x19000;
    }
    if (!bVar7 || bVar6) {
      uVar3 = 0;
      if (param_11 != 0) {
        uVar3 = param_12;
      }
      if ((param_11 != 0 && uVar3 != 0) && ((param_9 != 0 && param_10 != 0) && param_13 != 0)) {
        if (local_28 != (uint *)0x0) {
          uVar3 = func_003D077C(param_1,0);
          uVar5 = 0;
          if (uVar3 != 0) {
            do {
              uVar4 = func_003D1048(param_1 + uVar5 * 4 + 7);
              if (uVar4 >> 8 == param_2 >> 8) {
                if (puVar2[1] != '\0') {
                  func_003CEAF8(0);
                }
                uVar3 = DAT_003d06dc;
                param_1[1] = 0;
                return uVar3;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar3);
          }
          uVar3 = func_003D077C(param_1,1);
          if (uVar3 < 0xc) {
            param_1[0x81] = param_9;
            local_60 = auStack_44;
            param_1[0x83] = param_11;
            param_1[0xed] = param_10;
            param_1[0xef] = param_12;
            param_1[0x86] = param_13;
            param_1[0xf2] = param_13;
            (**(code **)(*param_1 + 8))(param_1,param_1[1],0xb,8);
            local_60 = auStack_48;
            (**(code **)(*param_1 + 8))(param_1,param_1[1],0xc,8);
            func_003CF1FC(param_1,0,param_1 + 0x7f);
            local_60 = auStack_48;
            (**(code **)(*param_1 + 8))(param_1,param_1[1],0xd,8);
            func_003CF1FC(param_1,1,param_1 + 0xeb);
            local_60 = (undefined1 *)0x0;
            uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0);
            if ((uVar3 & 0x80000000) == 0) {
              func_003D0040(param_1);
            }
            func_00110490(param_1 + 0x67,0x60);
            *(short *)(param_1 + 0x67) = (short)DAT_003d06e4;
            param_1[0x68] = param_2;
            *(undefined1 *)((int)param_1 + 0x1a9) = 1;
            param_1[0x69] = local_2c;
            *(undefined1 *)(param_1 + 0x6a) = 1;
            func_001163A0((uint *)(param_1 + 0x6b),local_28,0x20);
            func_003D35F8(&local_40);
            local_50 = local_40;
            uStack_4c = uStack_3c;
            func_00564398((int *)&local_60,&local_50);
            param_1[0x74] = (int)local_60;
            param_1[0x75] = local_5c;
            param_1[0x76] = iStack_58;
            uVar3 = func_003D0ACC(param_1);
            if ((int)uVar3 < 0) {
              local_60 = (undefined1 *)0x0;
              local_5c = 0;
              (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
              func_003D0B10(param_1);
              func_003CFDB4(param_1,0);
              cVar1 = puVar2[1];
            }
            else {
              uVar3 = func_003D0B10(param_1);
              if ((int)uVar3 < 0) {
                local_60 = (undefined1 *)0x0;
                local_5c = 0;
                (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                func_003D0B10(param_1);
                func_003CFDB4(param_1,0);
                cVar1 = puVar2[1];
              }
              else {
                uVar3 = DAT_003d06e8;
                if (param_8 < 0x81) {
                  uVar3 = func_003D0874(param_1,0x6e,param_7,param_8);
                }
                if ((int)uVar3 < 0) {
                  local_60 = (undefined1 *)0x0;
                  local_5c = 0;
                  (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                  func_003D0B10(param_1);
                  func_003CFDB4(param_1,0);
                  cVar1 = puVar2[1];
                }
                else {
                  uVar3 = func_003D0874(param_1,0x65,param_5,param_6);
                  if ((uVar3 & 0x80000000) == 0) {
                    *puVar2 = 1;
                    return 0;
                  }
                  local_60 = (undefined1 *)0x0;
                  local_5c = 0;
                  (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                  func_003D0B10(param_1);
                  func_003CFDB4(param_1,0);
                  cVar1 = puVar2[1];
                }
              }
            }
            if (cVar1 != '\0') {
              func_003CEAF8(0);
            }
            param_1[1] = 0;
            return uVar3;
          }
          if (puVar2[1] != '\0') {
            func_003CEAF8(0);
          }
          param_1[1] = 0;
          return DAT_003d06e0;
        }
        goto LAB_003d036c;
      }
    }
  }
  func_003CEAF8(0);
LAB_003d036c:
  param_1[1] = 0;
  return uVar5;
}

