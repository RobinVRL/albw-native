#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_004010C8(int param_1,uint *param_2);
extern int func_00401A98(undefined4 param_1,undefined4 *param_2,int param_3);
extern uint DAT_00401874;
extern float DAT_00401878;
extern float DAT_0040187c;
extern int *DAT_00401880;
extern byte *DAT_00401884;

// USA 004016FC <- EU 004016DC (Ghidra, non-matching)
// GLOBAL DAT_00401874 uint
// GLOBAL DAT_00401878 float
// GLOBAL DAT_0040187c float
// GLOBAL DAT_00401880 int *
// GLOBAL DAT_00401884 byte *

uint * func_004016FC(int param_1,uint *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((int *)(albw_frame + 0x8))
  #define iStack_38 (*(int *)(albw_frame + 0x18))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define iStack_30 (*(int *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  uVar2 = DAT_00401874;
  uVar6 = DAT_00401874 + 0xd;
  bVar1 = false;
  if ((*(uint *)(param_3 + 0x74) & 0x200) == 0) {
    if (*(char *)(param_1 + 0x629) == '\0') {
      puVar3 = func_004010C8(param_1,param_2);
      *(undefined1 *)(param_1 + 0x629) = 1;
      puVar3[1] = uVar6;
      *puVar3 = 1;
      puVar3[2] = 0;
      puVar3[3] = uVar2;
      bVar1 = true;
      param_2 = puVar3 + 4;
    }
  }
  else {
    puVar3 = func_004010C8(param_1,param_2);
    *(undefined1 *)(param_1 + 0x629) = 0;
    *puVar3 = 1;
    puVar3[1] = uVar6;
    uVar4 = *(uint *)(param_3 + 0x74);
    bVar1 = true;
    pbVar5 = (byte *)(*(int *)(param_3 + 0x7c) +
                     (uVar4 >> 1 & 0x18) +
                     ((uVar4 << 0x1e) >> 0x19) + ((uVar4 << 0x1c) >> 0x1e) * 0x14);
    local_48[0] = *DAT_00401880;
    local_48[1] = DAT_00401880[1];
    local_48[2] = DAT_00401880[2];
    local_48[3] = DAT_00401880[3];
    iStack_38 = DAT_00401880[4];
    iStack_34 = DAT_00401880[5];
    iStack_30 = DAT_00401880[6];
    iStack_2c = DAT_00401880[7];
    uVar4 = VectorFloatToUnsigned(DAT_0040187c + *(float *)(pbVar5 + 4) * DAT_00401878,3);
    param_2 = puVar3 + 4;
    puVar3[2] = local_48[*pbVar5] << 4 | (uVar4 & 0xff) << 8 | 1;
    puVar3[3] = uVar2;
  }
  if ((*(uint *)(param_3 + 0x74) & 0xc00) == 0) {
    if (*(char *)(param_1 + 0x628) == '\0') {
      puVar3 = func_004010C8(param_1,param_2);
      *(undefined1 *)(param_1 + 0x628) = 1;
      if (!bVar1) {
        *puVar3 = 1;
        puVar3[1] = uVar6;
        puVar3 = puVar3 + 2;
      }
      func_00110D44(puVar3,DAT_00401884,0x10);
      param_2 = puVar3 + 4;
    }
  }
  else {
    puVar3 = func_004010C8(param_1,param_2);
    *(undefined1 *)(param_1 + 0x628) = 0;
    if (!bVar1) {
      *puVar3 = 1;
      puVar3[1] = uVar6;
      puVar3 = puVar3 + 2;
    }
    param_2 = func_00401A98(param_1,puVar3,param_3);
  }
  return param_2;
}

