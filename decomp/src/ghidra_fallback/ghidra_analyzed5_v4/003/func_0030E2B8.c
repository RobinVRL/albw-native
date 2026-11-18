// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_0030A200(int param_1,undefined4 *param_2,int param_3,int *param_4);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004BCAE0(int param_1,int param_2);
extern int func_00556C94(int param_1);
extern int *DAT_0030e4b4;
extern float DAT_0030e4b8;
extern float DAT_0030e4bc;
extern float DAT_0030e4c0;
extern float DAT_0030e4c4;
extern float DAT_0030e4c8;
extern undefined4 DAT_0030e4cc;

// USA 0030E2B8 <- EU 0030E294 (Ghidra, non-matching)
// GLOBAL DAT_0030e4b4 int *
// GLOBAL DAT_0030e4b8 float
// GLOBAL DAT_0030e4bc float
// GLOBAL DAT_0030e4c0 float
// GLOBAL DAT_0030e4c4 float
// GLOBAL DAT_0030e4c8 float
// GLOBAL DAT_0030e4cc undefined4

undefined4 func_0030E2B8(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint in_r3;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 ((uint *)(albw_frame + 0x8))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define fStack_74 (*(float *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define fStack_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  uVar1 = func_00556C94(*DAT_0030e4b4);
  fVar8 = DAT_0030e4bc;
  if (uVar1 < 2000) {
    fVar7 = DAT_0030e4b8;
    if (uVar1 < 1000) {
      if (uVar1 < 500) {
        fVar6 = DAT_0030e4bc;
        if (0xf9 < uVar1) {
          func_003521F0(param_1 + 0x324,0);
          fVar6 = DAT_0030e4c8;
        }
      }
      else {
        func_003521F0(param_1 + 0x324,1);
        fVar6 = DAT_0030e4c4;
      }
    }
    else {
      func_003521F0(param_1 + 0x324,2);
      fVar6 = DAT_0030e4c0;
    }
  }
  else {
    fVar6 = DAT_0030e4b8;
    func_003521F0(param_1 + 0x324,3);
    fVar7 = fVar6;
  }
  if (fVar6 == fVar8) {
    uVar2 = 0;
  }
  else {
    func_004BCAE0(param_1,1);
    *(float *)(param_1 + 0x830) = fVar6;
    iVar3 = *(int *)(param_1 + 0x7a0);
    *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
    *(float *)(iVar3 + 0x74) = fVar6;
    *(float *)(iVar3 + 0x78) = fVar6;
    *(float *)(iVar3 + 0x7c) = fVar6;
    *(undefined1 *)(param_1 + 0x855) = 0;
    local_88[1] = 3;
    local_80 = &local_7c;
    local_34 = 0;
    local_30 = 0;
    local_7c = 0;
    local_88[0] = 1;
    local_68 = in_r3 | 0xff;
    uStack_70 = DAT_0030e4cc;
    local_78 = fVar8;
    fStack_74 = fVar7;
    fStack_6c = fVar7;
    func_0016898C(*(int *)(param_1 + 0x7b4),local_88);
    iVar3 = *(int *)(param_1 + 0x7b4);
    uVar4 = 0;
    if (0 < *(int *)(iVar3 + 0xc)) {
      do {
        iVar5 = *(int *)(iVar3 + 0x14);
        if (uVar4 < *(uint *)(iVar3 + 0xc)) {
          iVar5 = iVar5 + uVar4 * 0x28;
        }
        if (fVar8 <= fVar7) {
          *(float *)(iVar5 + 0xc) = fVar8;
          *(float *)(iVar5 + 8) = fVar8;
        }
        else {
          *(float *)(iVar5 + 0xc) = *(float *)(iVar5 + 0x14);
          *(float *)(iVar5 + 8) = *(float *)(iVar5 + 0x14);
        }
        uVar4 = uVar4 + 1;
        *(float *)(iVar5 + 0x10) = fVar7;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        *(undefined1 *)(iVar5 + 0x26) = 1;
        *(undefined1 *)(iVar5 + 0x25) = 1;
      } while ((int)uVar4 < *(int *)(iVar3 + 0xc));
    }
    func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7a0),(int *)0x0);
    *(float *)(*(int *)(param_1 + 0x7a0) + 0x158) = fVar8;
    *(float *)(param_1 + 0x9b0) = fVar8;
    *(undefined1 *)(param_1 + 0x9be) = 1;
    iVar3 = (**(code **)(*(int *)(param_1 + 0x478) + 0x40))(param_1 + 0x478);
    func_0030A200(iVar3,(undefined4 *)(param_1 + 0x3d0),0,(int *)(iVar3 + 0x30));
    uVar2 = 1;
  }
  return uVar2;
}

