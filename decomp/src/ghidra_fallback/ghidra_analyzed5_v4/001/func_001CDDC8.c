#include "ghidra_types.h"

extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00392ACC(int *param_1);
extern int func_00393164(int *param_1);
extern int func_004EAF08(int param_1,int param_2);
extern int func_004EB418(int param_1,int *param_2,int param_3);
extern float fRam001cdf3c;
extern undefined4 uRam001cdf38;
extern undefined4 uRam001cdf40;
extern int *piRam001cdf34;
extern float DAT_001cdf2c;
extern int *DAT_001cdf30;

// USA 001CDDC8 <- EU 001CDDC8 (Ghidra, non-matching)
// GLOBAL DAT_001cdf2c float
// GLOBAL DAT_001cdf30 int *
// GLOBAL UNK_001cdf34 int *
// GLOBAL UNK_001cdf38 undefined4
// GLOBAL UNK_001cdf3c float
// GLOBAL UNK_001cdf40 undefined4

undefined4 func_001CDDC8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_1c (*(uint *)(albw_frame + 0x4))
  piVar1 = DAT_001cdf30;
  fVar4 = DAT_001cdf2c;
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x578) = DAT_001cdf2c;
    func_00151148(*(int *)(param_1 + 0x56c),0);
    break;
  case 1:
    func_00151148(*(int *)(param_1 + 0x56c),0);
    func_004EAF08(*piVar1,1);
    break;
  case 2:
    func_00151148(*(int *)(param_1 + 0x56c),1);
    uVar2 = uRam001cdf38;
    iVar3 = *(int *)(*piRam001cdf34 + 0x1c);
    *(undefined4 *)(param_1 + 0x590) = 0x13;
    *(undefined4 *)(param_1 + 0x594) = uVar2;
    *(undefined4 *)(param_1 + 0x58c) = 0;
    uVar2 = uRam001cdf40;
    fVar4 = fRam001cdf3c;
    *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(iVar3 + 4);
    *(float *)(param_1 + 0x580) = fVar4;
    uStack_1c = *(uint *)(param_1 + 0x2cc);
    func_0014EB8C(param_1 + 0x508,*(undefined4 *)(param_1 + 0x504),*(undefined2 **)(param_1 + 0x3a0)
                  ,&uStack_1c,*(undefined2 *)(param_1 + 0x54),param_1 + 0x5c8,(short)uVar2);
    func_004EB418(*piVar1,(int *)param_1,1);
    break;
  case 3:
    func_00151148(*(int *)(param_1 + 0x56c),0);
    func_00393164((int *)(param_1 + 0x5a4));
    break;
  case 4:
    func_00151148(*(int *)(param_1 + 0x56c),0);
    func_00392ACC((int *)(param_1 + 0x5a4));
  }
  *(char *)(param_1 + 0x500) = (char)param_2;
  return ALBW_AS_U32(fVar4);
}

