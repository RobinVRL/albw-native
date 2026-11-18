#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002BDDA4(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00532554(int param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float fRam002bcbfc;
extern undefined4 uRam002bcc04;
extern undefined4 DAT_002bcbf8;
extern int DAT_002bcc00;

// USA 002BC9F4 <- EU 002BC9D0 (Ghidra, non-matching)
// GLOBAL DAT_002bcbf8 undefined4
// GLOBAL DAT_002bcc00 int
// GLOBAL UNK_002bcbfc float
// GLOBAL UNK_002bcc04 undefined4

void func_002BC9F4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  puVar1 = func_002BDDA4(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)func_00532554((int)puVar1,(int)*(short *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x920) = *puVar1;
    *(undefined4 *)(param_1 + 0x924) = puVar1[1];
    *(undefined4 *)(param_1 + 0x928) = puVar1[2];
  }
  if (*(uint *)(param_1 + 0x93c) < *(uint *)(param_1 + 0x940)) {
    *(uint *)(param_1 + 0x93c) = *(uint *)(param_1 + 0x93c) + 1;
    puVar1 = func_002BDDA4(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      func_00115C70(&local_24,(float *)(param_1 + 0x920),(float *)(param_1 + 0x3d0));
      local_30 = local_24;
      uStack_2c = uStack_20;
      uStack_28 = uStack_1c;
      iVar2 = func_0068C690(&local_30);
      func_0051D39C((int *)(param_1 + 1000),iVar2,
                    *(int *)(param_1 + 0x940) - *(int *)(param_1 + 0x93c));
    }
  }
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    uVar8 = func_0058AB74(param_1);
    if ((int)uVar8 == 5) {
      uVar7 = DAT_002bcbf8;
      func_004FABDC(param_1,6,0,0);
      uVar6 = uRam002bcc04;
      *(undefined4 *)(param_1 + 0x3dc) = uVar7;
      *(undefined4 *)(param_1 + 0x3e0) = uVar7;
      *(undefined4 *)(param_1 + 0x3e4) = uVar6;
      func_00115C70(&local_24,(float *)(param_1 + 0x920),(float *)(param_1 + 0x3d0));
      local_30 = local_24;
      uStack_2c = uStack_20;
      uStack_28 = uStack_1c;
      uVar3 = func_0068C690(&local_30);
      func_004D7F70((float *)(param_1 + 0x3dc),uVar3);
    }
    else {
      uVar6 = DAT_002bcbf8;
      uVar8 = func_0058AB74(param_1);
      if ((int)uVar8 == 6) {
        func_004FABDC(param_1,7,0,0);
        *(undefined4 *)(param_1 + 0x3dc) = uVar6;
        *(undefined4 *)(param_1 + 0x3e0) = uVar6;
        *(undefined4 *)(param_1 + 0x3e4) = uVar6;
      }
      else {
        func_004FABDC(param_1,5,0,0);
        fVar4 = func_0058AC38(param_1);
        iVar2 = (int)fVar4;
        *(int *)(param_1 + 0x940) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x944) = uVar6;
        }
        else {
          fVar4 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x944) = fRam002bcbfc / fVar4;
        }
        *(undefined4 *)(param_1 + 0x93c) = 0;
      }
    }
  }
  puVar1 = func_002BDDA4(param_1);
  if ((puVar1 != (undefined4 *)0x0) &&
     (puVar1 = func_002BDDA4(param_1), fVar4 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar1[0xf4]),
     fVar5 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar1[0xf6]),
     (int)ALBW_AS_U32(SQRT(fVar4 * fVar4 + fVar5 * fVar5)) < DAT_002bcc00)) {
    func_00662A14((undefined4 *)(param_1 + 0x8bc),9);
  }
  return;
}

