#include "ghidra_types.h"

extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_0028D7A4(int param_1,float fparam_0);
extern int func_002D5350(int param_1,int param_2,int param_3,float fparam_0);
extern int func_002D57FC(int param_1,int param_2,float fparam_0);
extern float DAT_002ddeb0;
extern float DAT_002ddeb4;
extern float DAT_002ddeb8;
extern float DAT_002ddebc;
extern float DAT_002ddec0;

// USA 002DDCE0 <- EU 002DDCBC (Ghidra, non-matching)
// GLOBAL DAT_002ddeb0 float
// GLOBAL DAT_002ddeb4 float
// GLOBAL DAT_002ddeb8 float
// GLOBAL DAT_002ddebc float
// GLOBAL DAT_002ddec0 float

void func_002DDCE0(int param_1,float fparam_0)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (fparam_0 == DAT_002ddeb0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    func_0028D580((uint *)(iVar1 + 0x3c),0,1,1,6);
    func_0028D580((uint *)(iVar1 + 0x5c),0,1,1,6);
  }
  else if (*(char *)(param_1 + 0x98) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x4c);
    fVar2 = DAT_002ddeb4;
    fVar3 = DAT_002ddeb8;
    func_0028D580((uint *)(iVar1 + 0x3c),10,1,1,6);
    func_0028D580((uint *)(iVar1 + 0x5c),10,1,1,6);
    fVar2 = *(float *)(param_1 + 0x94) * fVar2 * DAT_002ddebc;
    if ((int)ALBW_AS_U32(fVar2) < 0x3f800000) {
      fVar2 = fVar3;
    }
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fVar2);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fVar2);
    func_002D57FC(param_1,10,fVar3);
  }
  else if (*(char *)(param_1 + 0x98) == '\0') {
    iVar1 = *(int *)(param_1 + 0x4c);
    fVar2 = DAT_002ddeb4;
    fVar3 = DAT_002ddeb8;
    func_0028D580((uint *)(iVar1 + 0x3c),7,1,1,6);
    func_0028D580((uint *)(iVar1 + 0x5c),7,1,1,6);
    fVar2 = *(float *)(param_1 + 0x94) * fVar2 * DAT_002ddec0;
    if ((int)ALBW_AS_U32(fVar2) < 0x3f800000) {
      fVar2 = fVar3;
    }
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x3c,fVar2);
    func_0028D7A4(*(int *)(param_1 + 0x4c) + 0x5c,fVar2);
    func_002D57FC(param_1,7,fVar3);
  }
  else {
    func_002D5350(param_1,0,7,*(float *)(param_1 + 0x94));
  }
  if (**(int **)(param_1 + 0x44) != 0) {
    func_0028D580((uint *)(*(int *)(param_1 + 0x4c) + 0x3c),0x59,1,1,6);
  }
  return;
}

