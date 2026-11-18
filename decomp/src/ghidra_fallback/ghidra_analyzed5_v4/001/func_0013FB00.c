#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0013F1D0(int param_1,int param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_0068C690(float *param_1);
extern float DAT_0013fc40;
extern undefined4 DAT_0013fc44;

// USA 0013FB00 <- EU 0013FB00 (Ghidra, non-matching)
// GLOBAL DAT_0013fc40 float
// GLOBAL DAT_0013fc44 undefined4

void func_0013FB00(int param_1)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  uVar3 = *(uint *)(param_1 + 0x40c);
  iVar4 = *(int *)(uVar3 + 0x28);
  if (iVar4 != 0) {
    uVar3 = *(uint *)(uVar3 + 0x20);
  }
  if ((iVar4 != 0 && *(uint *)(param_1 + 0x4f8) < uVar3) &&
     (iVar4 = *(int *)(iVar4 + *(uint *)(param_1 + 0x4f8) * 4), iVar4 != 0)) {
    *(undefined1 *)(param_1 + 0x51d) = 1;
    func_004CF478(*(int *)(param_1 + 0x410),1);
    *(undefined1 *)(*(int *)(param_1 + 0x418) + 0x61) = 1;
    func_00151148(*(int *)(param_1 + 0x414),1);
    bVar6 = *(char *)(param_1 + 0x51e) != '\0';
    cVar1 = '\0';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x51d);
    }
    if (bVar6 && cVar1 != '\0') {
      func_004CF478(*(int *)(param_1 + 0x410),0);
      func_00151148(*(int *)(param_1 + 0x414),0);
      func_0013F1D0(param_1,1);
    }
    fVar2 = DAT_0013fc40;
    fStack_20 = *(float *)(iVar4 + 0x18);
    uStack_1c = *(undefined4 *)(iVar4 + 0x1c);
    uStack_18 = *(undefined4 *)(iVar4 + 0x20);
    pfVar5 = (float *)(param_1 + 0x4b4);
    *(float *)(param_1 + 0x4cc) = fStack_20;
    *(undefined4 *)(param_1 + 0x4d0) = uStack_1c;
    *(undefined4 *)(param_1 + 0x4d4) = uStack_18;
    *(bool *)(param_1 + 0x51c) = *(float *)(param_1 + 0x4d0) < *(float *)(param_1 + 0x4c4) - fVar2;
    *(undefined4 *)(param_1 + 0x504) = 0;
    func_00115C70(pfVar5,&fStack_20,(float *)(param_1 + 0x4c0));
    *(undefined4 *)(param_1 + 0x4b8) = DAT_0013fc44;
    func_00115DC8(pfVar5);
    iVar4 = func_0068C690(pfVar5);
    *(int *)(param_1 + 0x4e8) = iVar4;
    return;
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}

