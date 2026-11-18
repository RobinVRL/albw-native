#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FB024(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern int DAT_001a3018;
extern float DAT_001a301c;
extern int DAT_001a3020;
extern float DAT_001a3024;
extern int DAT_001a3028;

// USA 001A2EC4 <- EU 001A2EC4 (Ghidra, non-matching)
// GLOBAL DAT_001a3018 int
// GLOBAL DAT_001a301c float
// GLOBAL DAT_001a3020 int
// GLOBAL DAT_001a3024 float
// GLOBAL DAT_001a3028 int

void func_001A2EC4(int *param_1)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = DAT_001a3018;
  param_1[0x262] = 3;
  param_1[0x263] = iVar8;
  param_1[0x261] = 0;
  fVar9 = DAT_001a301c;
  *(undefined1 *)(param_1[0x25a] + 0x44) = 1;
  param_1[0x167] = param_1[0x167] & 0xfffffffb;
  func_004FB024((int)param_1);
  func_004F9554(param_1[0x259],5,4,1);
  func_004F9554(param_1[0x10c],5,4,1);
  func_004F9554(param_1[0x10d],5,4,1);
  func_004F88A0(param_1,(undefined2 *)param_1[0x238]);
  func_004FC07C((int)param_1,0,0xffffffff,0);
  iVar8 = DAT_001a3020;
  param_1[0xf7] = DAT_001a3020;
  param_1[0xf9] = iVar8;
  iVar6 = DAT_001a3028;
  uVar1 = (ushort)*(byte *)((int)param_1 + 0x9ca);
  bVar4 = uVar1 == 1;
  if (bVar4) {
    uVar1 = *(ushort *)(param_1 + 0xc);
  }
  if (bVar4 && uVar1 == 1) {
    fVar7 = DAT_001a3024;
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    fVar5 = (float)VectorUnsignedToFloat
                             ((int)((ulonglong)uVar3 * 0x3c >> 0x20),(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = VectorFloatToUnsigned(fVar5 + fVar7,3);
    param_1[0x25f] = iVar6;
    if (iVar6 == 0) {
      param_1[0x260] = iVar8;
    }
    else {
      fVar7 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x260] = (int)ALBW_AS_U32((fVar9 / fVar7));
    }
    param_1[0x25e] = 0;
    return;
  }
  param_1[0x25f] = 0x3c;
  param_1[0x260] = iVar6;
  param_1[0x25e] = 0;
  return;
}

