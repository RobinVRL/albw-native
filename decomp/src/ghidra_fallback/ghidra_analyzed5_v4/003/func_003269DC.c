#include "ghidra_types.h"

extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_0032651C(int param_1,undefined4 param_2);
extern float DAT_00326b10;
extern int DAT_00326b14;
extern undefined4 DAT_00326b18;
extern float DAT_00326b1c;
extern float DAT_00326b20;

// USA 003269DC <- EU 003269B8 (Ghidra, non-matching)
// GLOBAL DAT_00326b10 float
// GLOBAL DAT_00326b14 int
// GLOBAL DAT_00326b18 undefined4
// GLOBAL DAT_00326b1c float
// GLOBAL DAT_00326b20 float

void func_003269DC(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  uVar3 = DAT_00326b18;
  iVar2 = DAT_00326b14;
  if (*(short *)(param_1 + 0x2e) == 0) {
    return;
  }
  bVar1 = true;
  fVar4 = DAT_00326b10;
  fVar5 = DAT_00326b10;
  fVar6 = DAT_00326b1c;
  fVar7 = DAT_00326b20;
  do {
    local_34 = *(undefined4 *)(param_1 + 0x498);
    local_38 = fVar5;
    local_30 = fVar5;
    func_0014EEC8(param_1,param_1 + 0x3d0,&local_38,uVar3,*(float *)(param_1 + 0x498));
    if ((*(float *)(param_1 + 0x3d0) == *(float *)(param_1 + 8)) &&
       (*(float *)(param_1 + 0x3d8) == *(float *)(param_1 + 0x10))) {
      if (*(int *)(param_1 + 0x4a4) != 0) {
        func_0032651C(param_1,2);
        *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffff6;
LAB_00326af4:
        if ((int)ALBW_AS_U32(fVar4) < iVar2) {
          return;
        }
        *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x4a4) = 0;
    }
    fVar4 = fVar4 + *(float *)(param_1 + 0x498) * fVar6;
    *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x498) * fVar6;
    if (!bVar1) goto LAB_00326ae8;
    if ((int)ALBW_AS_U32(fVar4) < iVar2) goto LAB_00326ae8;
    fVar4 = *(float *)(param_1 + 0xc) + fVar7;
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 8);
    bVar1 = false;
    *(float *)(param_1 + 0x36c) = fVar4;
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
    *(float *)(param_1 + 0x3d4) = fVar4;
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
    fVar4 = fVar5;
    while (*(int *)(param_1 + 0x4a4) != 0) {
LAB_00326ae8:
      if (iVar2 <= (int)ALBW_AS_U32(fVar4)) goto LAB_00326af4;
    }
  } while( true );
}

