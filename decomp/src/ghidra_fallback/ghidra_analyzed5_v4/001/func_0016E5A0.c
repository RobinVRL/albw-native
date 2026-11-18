#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001B79FC(int param_1,uint param_2,uint param_3,int param_4);
extern int func_003CC030(undefined4 *param_1,int param_2);
extern int func_004A064C(undefined4 *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3);
extern int func_00504ED0(uint *param_1,uint param_2,uint param_3);
extern int func_00563170(char *param_1,undefined4 *param_2);
extern int func_00563A5C(uint *param_1,uint *param_2);
extern int func_00580AE8(int param_1,float *param_2,int param_3);
extern int func_00580C50(int param_1,float *param_2,int param_3);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_0016e798;
extern uint *DAT_0016e79c;
extern int *DAT_0016e7a0;

// USA 0016E5A0 <- EU 0016E5A0 (Ghidra, non-matching)
// GLOBAL DAT_0016e798 undefined4
// GLOBAL DAT_0016e79c uint *
// GLOBAL DAT_0016e7a0 int *

undefined4 *
func_0016E5A0(undefined4 *param_1,int param_2,int param_3,float fparam_0,float fparam_1,
             float fparam_2,float fparam_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  puVar1 = func_004A064C(param_1,param_2,fparam_0,fparam_1,fparam_2,fparam_3);
  *puVar1 = DAT_0016e798;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0x140;
  puVar1[10] = 0xf0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  puVar1[0xd] = 0;
  puVar1[0xf] = 0xf0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0x140;
  puVar1[0x11] = 0x100;
  puVar1[0x12] = 0x140;
  func_00580AE8((int)puVar1,&local_20,param_2);
  func_00580C50((int)puVar1,&local_28,param_2);
  puVar6 = DAT_0016e79c;
  uVar11 = VectorFloatToUnsigned(local_24,3);
  uVar10 = VectorFloatToUnsigned(local_28,3);
  puVar1[8] = (int)local_20;
  puVar1[9] = (int)local_1c;
  puVar1[10] = uVar10;
  puVar1[0xb] = uVar11;
  puVar1[0xd] = (int)local_20;
  uVar11 = VectorFloatToUnsigned(local_24,3);
  puVar1[0xe] = (int)local_1c;
  puVar1[0xf] = uVar10;
  puVar1[0x10] = uVar11;
  puVar1[0x11] = (int)local_28;
  puVar1[0x12] = (int)local_24;
  puVar2 = func_00563A5C(puVar1 + 8,puVar6);
  puVar3 = func_00563170((char *)(puVar1 + 0xc),puVar2);
  uVar7 = ((int)puVar3 - (int)puVar6 & 0xfffffffcU) + 8;
  if (((uVar7 & 0xf) != 0) && (uVar7 = 4 - (uVar7 * 0x10000000 >> 0x1e), 0 < (int)uVar7)) {
    puVar4 = puVar3 + -1;
    if ((uVar7 & 1) != 0) {
      *puVar3 = 0;
      puVar4 = puVar3;
    }
    for (iVar8 = (int)uVar7 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
    }
    puVar3 = puVar3 + uVar7;
  }
  puVar3 = func_003CC030(puVar3,1);
  iVar8 = (int)puVar3 - (int)puVar6 >> 2;
  uVar7 = iVar8 * 4;
  if (param_3 == 0) {
    puVar6 = (uint *)func_0058FAAC(uVar7,0x10);
    func_0010E3C4(puVar6,DAT_0016e79c,uVar7);
    puVar1[7] = iVar8;
    puVar1[6] = puVar6;
  }
  else {
    uVar5 = func_001B79FC(*DAT_0016e7a0,uVar7,0x10,2);
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5 + 0xf & 0xfffffff0;
    }
    puVar1[6] = uVar9;
    puVar1[7] = iVar8;
    func_00504ED0(DAT_0016e79c,uVar5,uVar7);
  }
  return puVar1;
}

