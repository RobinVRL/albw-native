#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004EDAD0(int param_1,uint *param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float *DAT_004bdeb8;
extern float DAT_004bdebc;

// USA 004BDDB0 <- EU 004BDD88 (Ghidra, non-matching)
// GLOBAL DAT_004bdeb8 float *
// GLOBAL DAT_004bdebc float

void func_004BDDB0(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float in_s0;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x14))
  #define afStack_5c ((float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x48))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x50))
  #define local_24 (*(uint *)(albw_frame + 0x5c))
  iVar3 = *(int *)(param_1 + 0x788);
  if (iVar3 != 0) {
    if (*(short *)(iVar3 + 0x54) == 6) {
      *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(iVar3 + 0x58);
    }
    else if (*(short *)(iVar3 + 0x54) == 7) {
      func_004D7E0C(afStack_5c,0,*(uint *)(param_1 + 1000));
      pfVar1 = DAT_004bdeb8;
      fVar4 = func_0054DE3C(param_1,0,1);
      func_00115D70(&local_38,pfVar1,fVar4);
      local_74 = local_38;
      uStack_70 = uStack_34;
      uStack_6c = uStack_30;
      func_00115CE4((float *)(iVar3 + 4),afStack_5c,&local_74);
      *(undefined4 *)(param_1 + 0x808) = *(undefined4 *)(iVar3 + 8);
      func_00115C54((float *)(iVar3 + 4),(float *)(iVar3 + 4),(float *)(param_1 + 0x3d0));
    }
    iVar3 = *(int *)(param_1 + 0x788);
    in_s0 = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x808);
    uVar2 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(float *)(iVar3 + 8) = in_s0;
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
    local_74 = DAT_004bdebc;
    fVar4 = local_74;
    (*(undefined2 *)((char *)&local_74 + 0)) = SUB42(DAT_004bdebc,0);
    *(undefined2 *)(*(int *)(param_1 + 0x788) + 0x28) = (*(undefined2 *)((char *)&local_74 + 0));
    local_74 = fVar4;
    func_004356B4(*(int **)(param_1 + 0x788));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x86c) + 0x18) = *(undefined4 *)(param_1 + 0x788);
  local_24 = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x86c),&local_24);
  *(undefined2 *)(*(int *)(param_1 + 0x86c) + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return;
}

