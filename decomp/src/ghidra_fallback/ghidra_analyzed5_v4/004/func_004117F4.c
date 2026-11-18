#include "ghidra_types.h"

extern int func_00410704(int *param_1,int *param_2);
extern int func_00410840(int *param_1,int *param_2);
extern int func_00411EB4(int *param_1,uint param_2,int *param_3);
extern int func_004121F8(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_0041297C(int *param_1,int *param_2);
extern int func_00569668(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569710(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569B68(int param_1,uint param_2,uint *param_3);
extern int func_00569BBC(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569C10(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056A6E0(int param_1);
extern int func_0056AA30(int param_1);
extern int func_0056AA40(int param_1,undefined4 *param_2,uint param_3);
extern int func_0056AA80(undefined4 *param_1,undefined4 *param_2,uint param_3);
extern int func_0056C5EC(int param_1,uint *param_2,uint param_3,uint param_4);
extern int func_0056CB18(int param_1,uint param_2);

// USA 004117F4 <- EU 004117D4 (Ghidra, non-matching)

undefined4 func_004117F4(int *param_1,int *param_2,int *param_3,undefined *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar5;
  uint uVar6;
  int *unaff_r8;
  uint *unaff_r9;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(uint *)(albw_frame + 0x8))
  #define local_a4 (*(uint *)(albw_frame + 0xc))
  #define local_a0 (*(int * *)(albw_frame + 0x10))
  #define local_9c (*(int * *)(albw_frame + 0x14))
  #define local_98 (*(int * *)(albw_frame + 0x18))
  #define local_94 (*(int * *)(albw_frame + 0x1c))
  #define local_90 (*(int * *)(albw_frame + 0x20))
  #define local_8c (*(undefined1 *)(albw_frame + 0x24))
  #define local_8b (*(undefined1 *)(albw_frame + 0x25))
  #define local_88 (*(int * *)(albw_frame + 0x28))
  #define local_84 ((int * *)(albw_frame + 0x2c))
  #define local_74 (*(uint *)(albw_frame + 0x3c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x40))
  #define local_6f (*(undefined1 *)(albw_frame + 0x41))
  #define local_6c (*(uint *)(albw_frame + 0x44))
  #define local_68 (*(uint *)(albw_frame + 0x48))
  #define local_64 ((uint * *)(albw_frame + 0x4c))
  #define local_58 (*(uint *)(albw_frame + 0x58))
  #define local_54 (*(uint *)(albw_frame + 0x5c))
  #define local_50 (*(int *)(albw_frame + 0x60))
  #define local_4c (*(int * *)(albw_frame + 0x64))
  #define aiStack_48 ((int *)(albw_frame + 0x68))
  #define aiStack_38 ((int *)(albw_frame + 0x78))
  func_00410840((int *)local_64,param_2);
  uVar5 = 0;
  uVar6 = *local_64[0];
  if (uVar6 != 0) {
    do {
      iVar2 = func_0056AA80(local_64,&local_a8,uVar5);
      if (iVar2 == 0) {
        return 0;
      }
      if (local_a4 == 0) {
        if (uVar5 == 0) {
          uVar5 = func_0056AA30((int)local_64);
          uVar6 = 0;
          if (uVar5 == 0) {
            return 1;
          }
          while ((iVar2 = func_0056AA40((int)local_64,&local_a0,uVar6), iVar2 == 0 ||
                 (iVar2 = func_004121F8(param_1,(uint)local_a0,param_3,local_9c,(int *)param_4),
                 iVar2 != 0))) {
            uVar6 = uVar6 + 1;
            if (uVar5 <= uVar6) {
              return 1;
            }
          }
          return 0;
        }
      }
      else {
        (**(code **)(*param_1 + 8))(param_1,local_a8,local_a4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  local_68 = func_0056AA30((int)local_64);
  if (local_68 != 0) {
    unaff_r9 = &local_a4;
    unaff_r8 = (int *)0xffffffff;
  }
  local_6c = 0;
  if (local_68 != 0) {
    do {
      iVar2 = func_0056AA40((int)local_64,&local_58,local_6c);
      if ((iVar2 != 0) && ((local_54 & 8) != 0)) {
        uVar5 = local_58 >> 0x18;
        if (uVar5 == 1) {
          iVar2 = func_0056CB18(param_1[1],local_58);
          if (iVar2 == 1) {
            local_70 = 0;
            local_88 = (int *)0x0;
            local_6f = 0;
            local_74 = 0;
            local_84[0] = unaff_r8;
            local_84[1] = unaff_r8;
            local_84[2] = unaff_r8;
            local_84[3] = unaff_r8;
            iVar2 = func_00569B68(param_1[1],local_58,(uint *)&local_88);
            if (iVar2 != 0) {
              uVar5 = 0;
              do {
                if (((local_84[uVar5] != (int *)0xffffffff) &&
                    (local_90 = unaff_r8,
                    bVar1 = func_00569668(param_1[1],(uint)local_84[uVar5],&local_90), bVar1)) &&
                   (piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,local_90),
                   piVar3 != (int *)0x0)) {
                  func_00410704(&local_50,piVar3);
                  piVar3 = (int *)func_0056A6E0((int)&local_50);
                  iVar2 = extraout_r1;
                  if (piVar3 != (int *)0x0) {
                    iVar2 = *piVar3;
                  }
                  if ((piVar3 != (int *)0x0 && iVar2 != 0) && ((uint *)(piVar3 + 1) != (uint *)0x0))
                  {
                    func_00411EB4(param_1,piVar3[1],param_3);
                  }
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < 4);
            }
          }
        }
        else if (uVar5 == 2) {
          local_84[1] = (int *)0x0;
          local_88 = unaff_r8;
          local_84[0] = unaff_r8;
          bVar1 = func_00569C10(param_1[1],local_58,&local_88);
          piVar3 = (int *)0x0;
          if (bVar1) {
            piVar3 = local_88;
          }
          if (bVar1 && piVar3 != (int *)0xffffffff) {
            iVar2 = func_0056CB18(param_1[1],(uint)piVar3);
            piVar3 = local_88;
            if (iVar2 == 1) {
              if (local_88 <= local_84[0]) {
                do {
                  local_8c = 0;
                  local_a4 = 0;
                  local_8b = 0;
                  local_90 = (int *)0x0;
                  local_a0 = unaff_r8;
                  local_9c = unaff_r8;
                  local_98 = unaff_r8;
                  local_94 = unaff_r8;
                  iVar2 = func_00569B68(param_1[1],(uint)piVar3,&local_a4);
                  if (iVar2 != 0) {
                    uVar5 = 0;
                    do {
                      if (((unaff_r9[uVar5 + 1] != 0xffffffff) &&
                          (local_4c = unaff_r8,
                          bVar1 = func_00569668(param_1[1],unaff_r9[uVar5 + 1],&local_4c), bVar1))
                         && (piVar4 = (int *)(**(code **)(*param_1 + 0x10))(param_1,local_4c),
                            piVar4 != (int *)0x0)) {
                        func_00410704(aiStack_48,piVar4);
                        piVar4 = (int *)func_0056A6E0((int)aiStack_48);
                        iVar2 = extraout_r1_01;
                        if (piVar4 != (int *)0x0) {
                          iVar2 = *piVar4;
                        }
                        if ((piVar4 != (int *)0x0 && iVar2 != 0) &&
                           ((uint *)(piVar4 + 1) != (uint *)0x0)) {
                          func_00411EB4(param_1,piVar4[1],param_3);
                        }
                      }
                      uVar5 = uVar5 + 1;
                    } while (uVar5 < 4);
                  }
                  piVar3 = (int *)((int)piVar3 + 1);
                } while (piVar3 <= local_84[0]);
              }
            }
            else if (((iVar2 == 3) && (local_88 != (int *)0xffffffff)) &&
                    (bVar1 = func_00569710(param_1[1],(uint)local_88,&local_50), bVar1)) {
              local_84[3] = (int *)0x0;
              local_74 = local_74 & 0xffff0000;
              iVar2 = func_00569BBC(param_1[1],(uint)piVar3,local_84 + 2);
              if ((iVar2 != 0) &&
                 (piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,local_50),
                 piVar3 != (int *)0x0)) {
                func_0041297C(aiStack_38,piVar3);
                local_a0 = (int *)0x0;
                local_9c = (int *)((uint)local_9c & 0xffffff00);
                iVar2 = func_0056C5EC((int)aiStack_38,&local_a8,(uint)local_84[2],0);
                if (iVar2 != 0) {
                  func_00411EB4(param_1,local_a8,param_3);
                }
              }
            }
          }
        }
        else if (((uVar5 == 3) && (local_58 != 0xffffffff)) &&
                ((local_98 = unaff_r8, bVar1 = func_00569668(param_1[1],local_58,&local_98), bVar1
                 && (piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,local_98),
                    piVar3 != (int *)0x0)))) {
          func_00410704((int *)&local_a4,piVar3);
          piVar3 = (int *)func_0056A6E0((int)&local_a4);
          iVar2 = extraout_r1_00;
          if (piVar3 != (int *)0x0) {
            iVar2 = *piVar3;
          }
          if ((piVar3 != (int *)0x0 && iVar2 != 0) && ((uint *)(piVar3 + 1) != (uint *)0x0)) {
            func_00411EB4(param_1,piVar3[1],param_3);
          }
        }
      }
      local_6c = local_6c + 1;
    } while (local_6c < local_68);
  }
  return 1;
}

