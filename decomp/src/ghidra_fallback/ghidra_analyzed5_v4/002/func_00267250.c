#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_0058A7D4(void);
extern uint DAT_00267408;
extern float DAT_0026740c;
extern float DAT_00267410;
extern uint DAT_00267414;
extern float DAT_00267418;
extern int DAT_0026741c;
extern int DAT_00267420;
extern int DAT_00267424;
extern int DAT_00267428;

// USA 00267250 <- EU 00267278 (Ghidra, non-matching)
// GLOBAL DAT_00267408 uint
// GLOBAL DAT_0026740c float
// GLOBAL DAT_00267410 float
// GLOBAL DAT_00267414 uint
// GLOBAL DAT_00267418 float
// GLOBAL DAT_0026741c int
// GLOBAL DAT_00267420 int
// GLOBAL DAT_00267424 int
// GLOBAL DAT_00267428 int

void func_00267250(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 ((float *)(albw_frame + 0x8))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x40))
  #define uStack_2c (*(uint *)(albw_frame + 0x44))
  #define uStack_28 (*(uint *)(albw_frame + 0x48))
  uVar2 = DAT_00267408;
  iVar7 = 0;
  iVar3 = param_1 + 0xb18;
  if (param_3 < 5) {
    iVar3 = param_1 + 0xb18 + param_3 * 0x14;
  }
  uVar8 = (uint)(*(int *)(iVar3 + 0x10) < 1) & ~param_4;
  uVar13 = (ulonglong)DAT_00267414;
  fVar10 = DAT_00267418;
  fVar11 = DAT_0026740c;
  fVar12 = DAT_00267410;
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (uVar8 == 0) {
    iVar3 = 3;
  }
  else {
    iVar3 = 10;
  }
  do {
    iVar6 = 0;
    switch(param_3) {
    case 1:
    case 3:
      iVar6 = 0x40000000;
      break;
    case 2:
    case 4:
      iVar6 = -0x40000000;
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    func_00115154(&local_6c,local_68,
                  iVar6 + (int)((ulonglong)uVar2 * (ulonglong)uVar5 >> 0x20) + DAT_0026741c +
                  *(int *)(param_1 + 1000));
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar9 * fVar12 * fVar11 + ALBW_AS_F32(uVar13);
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    local_60 = fVar9 * local_6c;
    local_58 = fVar9 * local_68[0];
    fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    local_5c = fVar9 * fVar12 * fVar10 + fVar10;
    iVar6 = DAT_00267420;
    if ((uVar8 == 0) || (iVar6 = DAT_00267428, param_3 != 0)) {
      bVar1 = *(byte *)(iVar6 + iVar7);
    }
    else {
      bVar1 = *(byte *)(DAT_00267424 + iVar7);
    }
    func_001D6FD0(local_30,(uint)bVar1,2,(int *)&local_60,-1);
    iVar7 = iVar7 + 1;
  } while (iVar7 < iVar3);
  return;
}

