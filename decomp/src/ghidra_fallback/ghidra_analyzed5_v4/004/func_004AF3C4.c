#include "ghidra_types.h"

extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00393164(int *param_1);
extern int func_004EAF08(int param_1,int param_2);
extern int func_004EB418(int param_1,int *param_2,int param_3);
extern float fRam004af4e8;
extern undefined4 uRam004af4e0;
extern undefined4 uRam004af4e4;
extern int *piRam004af4dc;
extern float DAT_004af4d4;
extern int *DAT_004af4d8;

// USA 004AF3C4 <- EU 004AF39C (Ghidra, non-matching)
// GLOBAL DAT_004af4d4 float
// GLOBAL DAT_004af4d8 int *
// GLOBAL UNK_004af4dc int *
// GLOBAL UNK_004af4e0 undefined4
// GLOBAL UNK_004af4e4 undefined4
// GLOBAL UNK_004af4e8 float

undefined4 func_004AF3C4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_1c ((uint *)(albw_frame + 0x4))
  piVar1 = DAT_004af4d8;
  if (param_2 == 0) {
    *(float *)(param_1 + 0x578) = DAT_004af4d4;
    func_00151148(*(int *)(param_1 + 0x568),0);
  }
  else if (param_2 == 1) {
    func_00151148(*(int *)(param_1 + 0x568),0);
    func_004EAF08(*piVar1,1);
  }
  else if (param_2 == 2) {
    func_00151148(*(int *)(param_1 + 0x568),1);
    uVar2 = uRam004af4e0;
    iVar3 = *(int *)(*piRam004af4dc + 0x1c);
    *(undefined4 *)(param_1 + 0x590) = 0x13;
    *(undefined4 *)(param_1 + 0x594) = uVar2;
    *(undefined4 *)(param_1 + 0x58c) = 0;
    uVar2 = uRam004af4e4;
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(iVar3 + 4);
    auStack_1c[0] = *(uint *)(param_1 + 0x2cc);
    func_0014EB8C(param_1 + 0x504,*(undefined4 *)(param_1 + 0x500),*(undefined2 **)(param_1 + 0x3a0)
                  ,auStack_1c,*(undefined2 *)(param_1 + 0x54),param_1 + 0x5c8,(short)uVar2);
    fVar4 = fRam004af4e8;
    *(float *)(param_1 + 0x580) = fRam004af4e8;
    func_004EB418(*piVar1,(int *)param_1,1);
  }
  else {
    fVar4 = DAT_004af4d4;
    if (param_2 == 3) {
      func_00151148(*(int *)(param_1 + 0x568),0);
      func_00393164((int *)(param_1 + 0x5a4));
    }
  }
  *(char *)(param_1 + 0x4fc) = (char)param_2;
  return ALBW_AS_U32(fVar4);
}

