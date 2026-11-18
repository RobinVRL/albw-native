#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512E8(int *param_1);
extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern float fRam00512780;
extern undefined4 uRam00512774;
extern undefined4 uRam0051277c;
extern int *piRam00512778;

// USA 005126F8 <- EU 005126D0 (Ghidra, non-matching)
// GLOBAL UNK_00512774 undefined4
// GLOBAL UNK_00512778 int *
// GLOBAL UNK_0051277c undefined4
// GLOBAL UNK_00512780 float

undefined4 func_005126F8(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  func_00151148(*(int *)(param_1 + 0x4b8),1);
  if (param_2 != 0) {
    *(int *)(param_1 + 0x4a8) = param_2;
    *(undefined1 *)(param_1 + 0x4be) = 1;
    piVar2 = *(int **)(param_1 + 0x4b8);
    iVar3 = piVar2[7];
    func_00115C54(&fStack_18,(float *)(*piVar2 + 0x3d0),(float *)(piVar2 + 1));
    *(float *)(iVar3 + 0x88) = fStack_18;
    *(undefined4 *)(iVar3 + 0x8c) = uStack_14;
    *(undefined4 *)(iVar3 + 0x90) = uStack_10;
    *(undefined1 *)(iVar3 + 0xa0) = 1;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x4bd) = 1;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  uVar1 = uRam00512774;
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  func_001512E8(*(int **)(param_1 + 0x4b8));
  func_004A8BFC(*piRam00512778,param_1 + 0x414,(uint)*(byte *)(param_1 + 0x4bc));
  uStack_14 = uRam0051277c;
  fStack_18 = fRam00512780;
  return func_00150A84((int *)param_1,(int *)&fStack_18,0);
}

