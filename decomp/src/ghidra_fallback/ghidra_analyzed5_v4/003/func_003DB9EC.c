#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_003D290C(undefined4 param_1,undefined4 param_2);
extern int func_003DC2E4(void);
extern int func_003DD9A8(int param_1,int param_2,ushort *param_3);
extern float DAT_003dbb1c;
extern uint DAT_003dbb20;
extern float DAT_003dbb24;
extern int DAT_003dbb28;
extern float DAT_003dbb2c;
extern float DAT_003dbb30;

// USA 003DB9EC <- EU 003DB9CC (Ghidra, non-matching)
// GLOBAL DAT_003dbb1c float
// GLOBAL DAT_003dbb20 uint
// GLOBAL DAT_003dbb24 float
// GLOBAL DAT_003dbb28 int
// GLOBAL DAT_003dbb2c float
// GLOBAL DAT_003dbb30 float

undefined4 func_003DB9EC(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((ushort *)(albw_frame + 0x0))
  #define local_1a (*(undefined2 *)(albw_frame + 0x6))
  #define local_14 (*(undefined2 *)(albw_frame + 0xc))
  #define local_12 (*(undefined2 *)(albw_frame + 0xe))
  #define local_10 (*(undefined2 *)(albw_frame + 0x10))
  #define local_e (*(undefined2 *)(albw_frame + 0x12))
  if (*(byte *)((int)param_1 + 0xd) < 2) {
    if (*param_1 != 0) {
      param_4 = param_1[2];
    }
    if ((((*param_1 != 0 && param_4 != 0) && (DAT_003dbb1c <= ALBW_AS_F32(param_2[2]))) &&
        (param_2[2] < 0x3f800001)) &&
       ((DAT_003dbb1c <= ALBW_AS_F32(param_2[1]) && (param_2[1] < 0x3f800001)))) {
      uVar2 = (uint)((ulonglong)(uint)(*param_2 * 1000) * (ulonglong)DAT_003dbb20 >> 0x2c);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      if ((char)param_2[3] == '\0') {
        iVar3 = 2;
      }
      else {
        iVar3 = 4;
      }
      if (iVar3 * uVar2 * 0x280 <= param_4) {
        local_14 = (undefined2)uVar2;
        local_1a = (undefined2)iVar3;
        uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(param_2[1]) * DAT_003dbb24,3);
        local_12 = (undefined2)uVar4;
        local_20[0] = 4;
        fVar5 = ALBW_AS_F32(param_2[2]);
        if (DAT_003dbb28 < param_2[2]) {
          fVar5 = DAT_003dbb2c;
        }
        local_10 = (undefined2)(int)((DAT_003dbb30 - fVar5) * DAT_003dbb24);
        local_e = (undefined2)(int)(fVar5 * DAT_003dbb24);
        func_001164F4((undefined4 *)*param_1,param_1[2]);
        func_003D290C(*param_1,param_1[2]);
        cVar1 = *(char *)((int)param_1 + 0xd);
        iVar3 = func_003DC2E4();
        uVar4 = func_003DD9A8(iVar3,(int)cVar1,local_20);
        return uVar4;
      }
    }
  }
  return 0;
}

