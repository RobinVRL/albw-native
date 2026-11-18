#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern undefined8 func_002A405C(int param_1);
extern int func_002A40E8(int param_1);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_0058E2B8(int *param_1);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002a4974;
extern float DAT_002a4978;
extern int *DAT_002a497c;
extern float *DAT_002a4980;
extern uint *DAT_002a4984;
extern float DAT_002a4988;
extern float DAT_002a498c;
extern float DAT_002a4990;
extern undefined4 DAT_002a4994;

// USA 002A4678 <- EU 002A4654 (Ghidra, non-matching)
// GLOBAL DAT_002a4974 float
// GLOBAL DAT_002a4978 float
// GLOBAL DAT_002a497c int *
// GLOBAL DAT_002a4980 float *
// GLOBAL DAT_002a4984 uint *
// GLOBAL DAT_002a4988 float
// GLOBAL DAT_002a498c float
// GLOBAL DAT_002a4990 float
// GLOBAL DAT_002a4994 undefined4

float func_002A4678(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((int *)(albw_frame + 0x14))
  *(undefined1 *)(param_1 + 0xb90) = 0;
  piVar1 = DAT_002a497c;
  fVar7 = DAT_002a4974;
  if ((0 < *(short *)(param_1 + 0x508)) &&
     (((*(char *)(param_1 + 0x9e4) == '\r' || (2 < *(byte *)(param_1 + 0xb92))) ||
      (*(uint *)(param_1 + 0xb54) < *(uint *)(param_1 + 0xb58))))) {
    if (*(int *)(param_1 + 0xb28) == 0x3f800000) {
      fVar7 = DAT_002a4978;
      fVar6 = DAT_002a4974;
      uVar8 = func_002A405C(param_1);
      if ((int)uVar8 != 0) {
        if (*(char *)(param_2 + 0x21) == '\x0e') {
          func_00291FE0(*piVar1,param_1 + 0x3d0,fVar7);
        }
        if (*(char *)(param_2 + 0x21) == '\b') {
          func_00291A38(*piVar1,param_1 + 0x3d0,fVar7);
        }
        if (*(char *)(param_2 + 0x21) == '\x05') {
          func_002917A4(*piVar1,param_1 + 0x3d0,0,fVar7);
        }
        func_004FBA3C(param_1,(int)*(char *)(param_2 + 0x21),(int)*(char *)(param_2 + 0x23));
        *(undefined1 *)(param_1 + 0xb98) = 1;
        *(undefined1 *)(param_1 + 0xb91) = 0;
        func_00662128((undefined4 *)(param_1 + 0x9e0),4);
        return fVar6;
      }
      local_38 = *DAT_002a4980;
      fStack_34 = DAT_002a4980[1];
      fStack_30 = DAT_002a4980[2];
      func_00115C70(&local_38,(float *)(param_1 + 0x3d0),(float *)(param_2 + 0x14));
      local_2c[0] = func_0068C690(&local_38);
      local_2c[0] = *(int *)(param_1 + 1000) - local_2c[0];
      uVar2 = func_0058E2B8(local_2c);
      fVar7 = DAT_002a4988;
      if (uVar2 < *DAT_002a4984) {
        *(undefined1 *)(param_1 + 0xb90) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xb90) = 2;
      }
      if ((*(char *)(param_1 + 0x9e4) == '\r') || (2 < *(byte *)(param_1 + 0xb92))) {
        if (*(uint *)(param_1 + 0xb54) < *(uint *)(param_1 + 0xb58)) {
          *(uint *)(param_1 + 0xb54) = *(uint *)(param_1 + 0xb54) + 1;
        }
        uVar2 = func_002A40E8(param_1);
        if (*(byte *)(param_1 + 0xb92) < uVar2) {
          if (*(char *)(param_1 + 0x9e4) == '\r') {
            if (*(byte *)(param_1 + 0xb92) == 1) {
              fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb48),
                                                 (byte)(in_fpscr >> 0x15) & 3);
              func_004FC78C(param_1,(short)(int)(fVar7 + fVar5 * DAT_002a4990));
            }
            else {
              fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb48),
                                                 (byte)(in_fpscr >> 0x15) & 3);
              func_004FC78C(param_1,(short)(int)(fVar7 + fVar5 * DAT_002a498c));
            }
            uVar3 = func_002A40E8(param_1);
            *(char *)(param_1 + 0xb92) = (char)uVar3;
            func_00662128((undefined4 *)(param_1 + 0x9e0),1);
            return fVar6;
          }
          uVar3 = func_002A40E8(param_1);
          *(char *)(param_1 + 0xb92) = (char)uVar3;
          func_00662128((undefined4 *)(param_1 + 0x9e0),5);
        }
        else {
          bVar4 = *(uint *)(param_1 + 0xb58) == *(uint *)(param_1 + 0xb54);
          if (*(uint *)(param_1 + 0xb58) <= *(uint *)(param_1 + 0xb54)) {
            bVar4 = *(char *)(param_1 + 0x9e4) == '\r';
          }
          if (bVar4) {
            func_00662128((undefined4 *)(param_1 + 0x9e0),1);
            return fVar6;
          }
        }
      }
      uVar3 = DAT_002a4994;
      if (*(char *)(param_2 + 0x21) == '\x05') {
        *(undefined4 *)(param_1 + 0x6b0) = 0x32;
        *(undefined4 *)(param_1 + 0x6b4) = uVar3;
        *(undefined4 *)(param_1 + 0x6ac) = 0;
      }
      return fVar7;
    }
    if (*(char *)(param_2 + 0x21) == '\b' || *(char *)(param_2 + 0x21) == '\x05') {
      func_002917A4(*DAT_002a497c,param_1 + 0x3d0,0,DAT_002a4978);
    }
    func_004FBA3C(param_1,(int)*(char *)(param_2 + 0x21),(int)*(char *)(param_2 + 0x23));
  }
  return fVar7;
}

