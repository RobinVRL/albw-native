#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004A2D1C(int param_1,float *param_2);
extern undefined4 DAT_00386904;
extern undefined4 DAT_00386908;

// USA 003867E4 <- EU 003867C0 (Ghidra, non-matching)
// GLOBAL DAT_00386904 undefined4
// GLOBAL DAT_00386908 undefined4

void func_003867E4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_10 (*(float *)(albw_frame + 0x30))
  #define local_c (*(float *)(albw_frame + 0x34))
  iVar2 = *(int *)(param_1 + 0x1bc);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x1c0))) &&
     (((*(uint *)(iVar2 + 0x3c) & 4) != 0 || (*(uint *)(iVar2 + 0x3c) & 0x40) != 0 ||
      (((iVar3 = *(int *)(iVar2 + 0x20), iVar3 != 0 &&
        (*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0xc))) && (0 < *(int *)(iVar3 + 4))))))) {
    func_00115154(&local_10,&local_c,*(uint *)(*(int *)(param_1 + 4) + 1000));
    local_2c = DAT_00386908;
    local_1c = DAT_00386904;
    local_20 = -local_10;
    local_30 = DAT_00386904;
    local_28 = DAT_00386904;
    local_3c = DAT_00386904;
    local_40 = local_c;
    local_38 = local_10;
    local_18 = local_c;
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
            *(int *)(*(int *)(param_1 + 4) + 0x8fc) * 0x30;
    local_34 = *(undefined4 *)(iVar2 + 0xc);
    local_24 = *(undefined4 *)(iVar2 + 0x1c);
    local_14 = *(undefined4 *)(iVar2 + 0x2c);
    iVar2 = *(int *)(param_1 + 0x1bc);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x1c0))) {
      func_004A2D1C(iVar2,&local_40);
    }
    cVar1 = *(char *)(param_1 + 0x3b);
    if (cVar1 == '\x04') {
      uVar4 = 1;
    }
    else if (cVar1 == '\x05') {
      uVar4 = 2;
    }
    else if (cVar1 == '\x06') {
      uVar4 = 3;
    }
    else {
      uVar4 = 0;
    }
    func_003521F0(*(int *)(param_1 + 4) + 0x324,uVar4);
  }
  return;
}

